/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/
#include <iostream>
#include <memory>
#include <spdlog/spdlog.h>

#include <ydk/gnmi_provider.hpp>
#include <ydk/crud_service.hpp>

//#include <ydk_openconfig/openconfig_bgp.hpp>
#include <ydk_ydktest/openconfig_bgp.hpp>
#include <ydk_ydktest/openconfig_bgp_types.hpp>

#include "args_parser.h"

using namespace std;
using namespace ydk;
using namespace ydktest;

void print_paths(ydk::path::SchemaNode & sn)
{
    std::cout << sn.get_path() << std::endl;
    for(auto const& p : sn.get_children())
        print_paths(*p);
}

void config_bgp(openconfig_bgp::Bgp & bgp)
{
    // Set the Global AS
    bgp.global->config->as = 65172;
    bgp.global->config->router_id = "1.2.3.4";
    
    // Commented because of XR 611 issue with OC identity
    auto afi_safi = make_shared<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi>();
    afi_safi->afi_safi_name = openconfig_bgp_types::L3VPNIPV4UNICAST();
    afi_safi->config->afi_safi_name = openconfig_bgp_types::L3VPNIPV4UNICAST();
    afi_safi->config->enabled = false;
    bgp.global->afi_safis->afi_safi.append(afi_safi);

    auto neighbor = make_shared<openconfig_bgp::Bgp::Neighbors::Neighbor>();
    neighbor->neighbor_address = "6.7.8.9";
    neighbor->config->neighbor_address = "6.7.8.9";
    neighbor->config->peer_as = 65001;
    neighbor->config->local_as = 65001;
    neighbor->config->peer_group = "IBGP";
    bgp.neighbors->neighbor.append(neighbor);

    auto peer_group = make_shared<openconfig_bgp::Bgp::PeerGroups::PeerGroup>();
    peer_group->peer_group_name = "IBGP";
    peer_group->config->peer_group_name = "IBGP";
    peer_group->config->description = "test description";
    peer_group->config->peer_as = 65001;
    peer_group->config->local_as = 65001;
    bgp.peer_groups->peer_group.append(peer_group);
}

int main(int argc, char* argv[])
{
    vector<string> args = parse_args(argc, argv);
    if(args.empty()) return 1;
    
    string host, username, password, sport;
    username = args[0]; password = args[1]; host = args[2]; sport = args[3];

    bool verbose=(args[4]=="--verbose");
    if (verbose) {
        auto logger = spdlog::stdout_color_mt("ydk");
        logger->set_level(spdlog::level::debug);
    }

    try {
        ydk::path::Repository repo{"/home/osboxes/ydk-gen/sdk/cpp/core/tests/models/"};
        int port = stoi(sport);
        gNMIServiceProvider provider{repo, host, port, username, password};

        CrudService crud{};

        auto bgp = openconfig_bgp::Bgp{};
        config_bgp(bgp);
        bool reply = crud.create(provider, bgp);
        if (reply) {
            cout << "BGP Create operation success" << endl << endl;
        }
        else {
            cout << "BGP Create operation failed" << endl;
        }
    }
    catch(YError & e) {
        cerr << "BGP Create operation failed. Error details: " << e.what() << endl;
    }
    return 0;
}
