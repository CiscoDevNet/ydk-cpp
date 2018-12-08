/*  ----------------------------------------------------------------
 Copyright 2018 Cisco Systems

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
#include <spdlog/spdlog.h>

#include <ydk/crud_service.hpp>
#include <ydk/codec_provider.hpp>
#include <ydk/codec_service.hpp>
#include <ydk/gnmi_provider.hpp>
#include <ydk/gnmi_service.hpp>
#include <ydk/netconf_provider.hpp>

#include "args_parser.h"

#include <ydk_cisco_ios_xr/Cisco_IOS_XR_ifmgr_cfg.hpp>

using namespace ydk;
using namespace std;

using namespace cisco_ios_xr;

int main(int argc, char* argv[])
{
    vector<string> args = parse_args(argc, argv);
    if(args.empty()) return 1;
    string host, username, password;
    int port;
    username = args[0]; password = args[1]; host = args[2]; port = stoi(args[3]);
    bool verbose=(args[4]=="--verbose");
    if (verbose) {
        auto logger = spdlog::stdout_color_mt("ydk");
        logger->set_level(spdlog::level::debug);
    }

    auto repo = path::Repository("/home/ygorelik/ydk-gen/scripts/samples/repository/192.168.122.107");
    gNMIServiceProvider provider{repo, host, port, username, password};
    gNMIService gs{};

    auto ifc = make_shared<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration>();
    ifc->active = "\"act\"";
    ifc->interface_name = "\"Loopback10\"";
    ifc->description.yfilter = YFilter::read;

    auto ifc_filter = make_unique<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations>();
    ifc_filter->interface_configuration.append(ifc);

    //auto ifc_read = crud.read(provider, *ifc_filter);
    auto ifc_read = gs.get(provider, *ifc_filter, "CONFIG");
    if (ifc_read != nullptr) {
        print_entity(ifc_read, provider.get_session().get_root_schema());
    }
}
