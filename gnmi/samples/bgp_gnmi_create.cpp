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
    
    string host, username, password, sport;
    username = args[0]; password = args[1]; host = args[2]; sport = args[3];

    bool verbose=(args[4]=="--verbose");
    if (verbose) {
        auto logger = spdlog::stdout_color_mt("ydk");
        logger->set_level(spdlog::level::debug);
    }

    try {
        ydk::path::Repository repo{TEST_HOME};
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
