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

using namespace ydk;
using namespace std;
using namespace ydktest;

int main(int argc, char* argv[])
{
	vector<string> args = parse_args(argc, argv);
	if(args.empty()) return 1;

	string host, username, password, sport, address;
    username = args[0]; password = args[1]; host = args[2]; sport = args[3];

	bool verbose=(args[4]=="--verbose");
	if(verbose)
	{
	    auto logger = spdlog::stdout_color_mt("ydk");
	    logger->set_level(spdlog::level::debug);
	}

    ydk::path::Repository repo{"/home/osboxes/ydk-gen/sdk/cpp/core/tests/models/"};
    int port = stoi(sport);
    gNMIServiceProvider provider{repo, host, port, username, password};
	CrudService crud{};

	auto bgp = openconfig_bgp::Bgp();
	try {
        bool reply = crud.delete_(provider, bgp);
        if (reply)
            cout << "BGP Delete operation success" << endl;
        else
            cout << "BGP Delete Operation failed" << endl;
	}
    catch (YError & e)
    {
    	cerr << "BGP Delete operation failed. Error details: " << e.what() << endl;
    }
}
