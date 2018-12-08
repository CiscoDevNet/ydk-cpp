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

#include "args_parser.h"

#include <ydk_cisco_ios_xr/Cisco_IOS_XR_ifmgr_oper.hpp>

using namespace std;
using namespace ydk;
using namespace cisco_ios_xr;

void config_prop(Cisco_IOS_XR_ifmgr_oper::InterfaceProperties & ifc_prop)
{
    auto dn = make_shared<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode>();
    dn->data_node_name = "\"0/RP0/CPU0\"";
    ifc_prop.data_nodes->data_node.append(dn);

    auto lview = make_shared<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview>();
    lview->locationview_name = "\"0/RP0/CPU0\"";
    dn->locationviews->locationview.append(lview);
    
    auto ifc = make_shared<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface>();
    ifc->interface_name = "\"Loopback10\"";
    ifc->state.yfilter = YFilter::read;
    lview->interfaces->interface.append(ifc);
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

    ydk::path::Repository repo{"/home/ygorelik/ydk-gen/scripts/samples/repository/192.168.122.107"};
    int port = stoi(sport);
    gNMIServiceProvider provider{repo, host, port, username, password};
    gNMIService gs;

    // Set Create Request
    auto ifc_prop = Cisco_IOS_XR_ifmgr_oper::InterfaceProperties();
    config_prop(ifc_prop);

    gNMISubscription ifc_subscription;
    ifc_subscription.entity = &ifc_prop;
    ifc_subscription.subscription_mode = "SAMPLE";
    ifc_subscription.sample_interval = 20 * 1000000000L;
    ifc_subscription.suppress_redundant = false;
    ifc_subscription.heartbeat_interval = 100 * 1000000000L;

    gs.subscribe(provider, ifc_subscription, 10, mode, "PROTO", gnmi_service_subscribe_callback);

    return 0;
}
