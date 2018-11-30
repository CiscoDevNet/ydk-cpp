/// YANG Development Kit
// Copyright 2016 Cisco Systems. All rights reserved
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

//#include <ydk_openconfig/openconfig_bgp.hpp>
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

int main(int argc, char* argv[]) 
{
    vector<string> args = parse_args(argc, argv);
    if(args.empty()) return 1;
    
    string host, username, password, sport, address;
    username = args[0]; password = args[1]; host = args[2]; sport = args[3];

    bool verbose = (args[4]=="--verbose");
    if(verbose)
    {
        auto logger = spdlog::stdout_color_mt("ydk");
        logger->set_level(spdlog::level::debug);
    }

    ydk::path::Repository repo{"/home/osboxes/ydk-gen/sdk/cpp/core/tests/models/"};
    int port = stoi(sport);

    gNMIService gs;

    bool is_secure = false;
    if(is_secure)
    {
        gNMIServiceProvider provider{repo, host, port, username, password};

        // Set Create Request
	    openconfig_bgp::Bgp bgp = {};
	    config_bgp(bgp);
	    bgp.yfilter = YFilter::replace;
	    gs.set(provider, bgp);

	    // Get Request
	    openconfig_bgp::Bgp filter;
	    gs.get(provider, filter, "CONFIG");

	    // Set Delete Request
	    bgp = openconfig_bgp::Bgp();
	    bgp.yfilter = YFilter::delete_;
	    gs.set(provider, bgp);

	    // Get Request
	    filter = openconfig_bgp::Bgp();
	    gs.get(provider, filter, "CONFIG");
    }
    else {
        gNMIServiceProvider provider{repo, host, port, username, password};

	    // Set Create Request
	    openconfig_bgp::Bgp bgp = {};
	    config_bgp(bgp);
	    bgp.yfilter = YFilter::replace;
	    gs.set(provider, bgp);

	    // Get Request
	    openconfig_bgp::Bgp filter;
	    gs.get(provider, filter, "CONFIG");

	    // Set Delete Request
	    bgp = openconfig_bgp::Bgp();
	    bgp.yfilter = YFilter::delete_;
	    gs.set(provider, bgp);

	    // Get Request
	    filter = openconfig_bgp::Bgp();
	    gs.get(provider, filter, "CONFIG");
    }

    return 0;
}
