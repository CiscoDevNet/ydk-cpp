/// YANG Development Kit
// Copyright 2018 Cisco Systems. All rights reserved
//
////////////////////////////////////////////////////////////////
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
//////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <memory>
#include <spdlog/spdlog.h>

#include <ydk/gnmi_provider.hpp>
#include <ydk/gnmi_service.hpp>
#include <ydk/crud_service.hpp>

#include <ydk_ydktest/openconfig_bgp.hpp>
#include <ydk_ydktest/openconfig_bgp_types.hpp>

#include "args_parser.h"

using namespace std;
using namespace ydk;
using namespace ydktest;

void config_bgp(openconfig_bgp::Bgp & bgp)
{
    bgp.global->config->as = 65172;

    auto neighbor = make_shared<openconfig_bgp::Bgp::Neighbors::Neighbor>();
    neighbor->neighbor_address = "172.16.255.2";
    neighbor->config->neighbor_address = "172.16.255.2";
    neighbor->config->peer_as = 65172;

    bgp.neighbors->neighbor.append(neighbor);
}

void gnmi_service_subscribe_callback(const char * subscribe_response)
{
    string response = subscribe_response;
    cout << "====> Received SubscribeResponse <====" << endl;
    cout << response << endl;
}

int main(int argc, char* argv[]) 
{
    vector<string> args = parse_args(argc, argv);
    if(args.empty()) return 1;
    
    string host, username, password, sport, address, mode;
    username = args[0]; password = args[1]; host = args[2]; sport = args[3]; mode = args[5];

    bool verbose = (args[4]=="--verbose");
    if (verbose) {
        auto logger = spdlog::stdout_color_mt("ydk");
        logger->set_level(spdlog::level::debug);
    }
    if (mode == "")
        mode = "ONCE";

    ydk::path::Repository repo{"/home/osboxes/ydk-gen/sdk/cpp/core/tests/models/"};
    int port = stoi(sport);
    gNMIServiceProvider provider{repo, host, port, username, password};

    gNMIService gs;

    // Set Create Request
    openconfig_bgp::Bgp bgp;
    config_bgp(bgp);
    bgp.yfilter = YFilter::replace;
    gs.set(provider, bgp);

    // Subscribe Request
    bgp = openconfig_bgp::Bgp();
    bgp.global->yfilter = YFilter::read;

    gNMISubscription bgp_subscription;
    bgp_subscription.entity = &bgp;
    bgp_subscription.subscription_mode = "SAMPLE";
    bgp_subscription.sample_interval = 20 * 1000000000L;
    bgp_subscription.suppress_redundant = false;
    bgp_subscription.heartbeat_interval = 100 * 1000000000L;

    gs.subscribe(provider, bgp_subscription, 10, mode, "JSON_IETF", gnmi_service_subscribe_callback);

    // Set Delete Request
    bgp = openconfig_bgp::Bgp();
    bgp.yfilter = YFilter::delete_;
    gs.set(provider, bgp);

    return 0;
}
