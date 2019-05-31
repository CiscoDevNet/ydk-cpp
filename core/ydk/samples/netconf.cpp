// =====================================================
//  netconf.cpp
//  Test Netconf connectivity interruption in YDK app
// =====================================================
//  Created by Yan Gorelik
//  Copyright © 2019 Cisco Systems. All rights reserved.
// =====================================================

#include <iostream>
#include <memory>
#include <thread>
#include <chrono>

#include <spdlog/spdlog.h>

#include "../src/path_api.hpp"

void test_bgp_delete(ydk::path::NetconfSession & session)
{
    ydk::path::RootSchemaNode& schema = session.get_root_schema();

    auto & bgp = schema.create_datanode("openconfig-bgp:bgp", "");
    ydk::path::Codec s {};
    auto xml = s.encode(bgp, ydk::EncodingFormat::XML, true);

    std::shared_ptr<ydk::path::Rpc> delete_rpc { schema.create_rpc("ydk:delete") };
    delete_rpc->get_input_node().create_datanode("entity", xml);

    (*delete_rpc)(session);
}

int test_connectivity(ydk::path::NetconfSession & session)
{
    try {
    	test_bgp_delete(session);
    	session.check_session_state();
    }
    catch (ydk::YClientError ex) {
        std::cout << "Caught exception: " << ex.what() << std::endl;
    }
    catch (std::exception ex) {
        std::cout << "Caught other exception: " << ex.what() << std::endl;
    }
	return 0;
}

int main() {

    auto logger = spdlog::stdout_color_mt("ydk");
    logger->set_level(spdlog::level::debug);

    ydk::path::NetconfSession session{"10.30.110.84", "admin", "admin",  830};

    //system("pkill confd");
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    //std::cout << "Confd killed" << std::endl;

    char c;
    std::cout << "Please enter one char to continue: ";
    std::cin >> c;

    test_connectivity(session);

    std::cout << "Application ended" << std::endl;
}
