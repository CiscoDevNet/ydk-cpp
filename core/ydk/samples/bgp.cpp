//
//  bgp.cpp
//  ydk
//
//  Created by Manu Radhakrishna on 7/25/16.
//  Copyright © 2016 cisco. All rights reserved.
//

#include <iostream>
#include <memory>

#include <spdlog/spdlog.h>

#include "../src/path_api.hpp"

void print_paths(ydk::path::SchemaNode & sn)
{
    std::cout << sn.get_path() << std::endl;
    for(auto const& p : sn.get_children())
        print_paths(*p);
}

bool test_bgp_create()
{
    ydk::path::Repository repo{};
    ydk::path::NetconfSession session{repo, "127.0.0.1", "admin", "admin",  12022};
    ydk::path::RootSchemaNode& schema = session.get_root_schema();
    //print_paths(schema);

    auto & bgp = schema.create_datanode("openconfig-bgp:bgp", "");

    bgp.create_datanode("global/config/as", "65172");


    auto & l3vpn_ipv4_unicast = bgp.create_datanode("global/afi-safis/afi-safi[afi-safi-name='openconfig-bgp-types:L3VPN_IPV4_UNICAST']", "");
    l3vpn_ipv4_unicast.create_datanode("config/afi-safi-name", "openconfig-bgp-types:L3VPN_IPV4_UNICAST");


    // set the enable flag
    l3vpn_ipv4_unicast.create_datanode("config/enabled","true");

    // bgp/neighbors/neighbor
    auto & neighbor = bgp.create_datanode("neighbors/neighbor[neighbor-address='172.16.255.2']", "");
    neighbor.create_datanode("config/neighbor-address", "172.16.255.2");
    neighbor.create_datanode("config/peer-as","65172");

    // bgp/neighbors/neighbor/afi-safis/afi-safi
    auto & neighbor_af = neighbor.create_datanode("afi-safis/afi-safi[afi-safi-name='openconfig-bgp-types:L3VPN_IPV4_UNICAST']", "");
    neighbor_af.create_datanode("config/afi-safi-name" , "openconfig-bgp-types:L3VPN_IPV4_UNICAST");
    neighbor_af.create_datanode("config/enabled","true");

    ydk::path::Codec s {};
    auto xml = s.encode(bgp, ydk::EncodingFormat::XML, true);

    // auto json = s.encode(bgp, ydk::path::Codec::Format::JSON, true);

    auto new_bgp = s.decode(schema, xml, ydk::EncodingFormat::XML);
    if (!new_bgp) {
        std::cout << "Failed to decode" << std::endl;
        return false;
    }

    auto new_xml = s.encode(*new_bgp, ydk::EncodingFormat::XML, true);
    if (xml != new_xml) {
        std::cout << "Results of serializations are different." << std::endl;
        std::cout << "Before decoding:" << std::endl;
        std::cout << "*********************************************************" << std::endl;
        std::cout <<  xml << std::endl;
        std::cout << "*********************************************************" << std::endl;
        std::cout << "After decoding and encoding:" << std::endl;
        std::cout << "*********************************************************" << std::endl;
        std::cout <<  new_xml << std::endl;
        std::cout << "*********************************************************" << std::endl;
        return false;
    }

    std::shared_ptr<ydk::path::Rpc> create_rpc { schema.create_rpc("ydk:create") };
    create_rpc->get_input_node().create_datanode("entity", xml);

    auto res = (*create_rpc)(session);
    return true;
}

bool test_bgp_read()
{
    ydk::path::Repository repo{};
    ydk::path::NetconfSession session{repo, "127.0.0.1", "admin", "admin",  12022};
    ydk::path::RootSchemaNode& schema = session.get_root_schema();

    auto & bgp = schema.create_datanode("openconfig-bgp:bgp", "");
    ydk::path::Codec s {};
    auto xml = s.encode(bgp, ydk::EncodingFormat::XML, true);

    std::shared_ptr<ydk::path::Rpc> read_rpc { schema.create_rpc("ydk:read") };
    read_rpc->get_input_node().create_datanode("filter", xml);
    read_rpc->get_input_node().create_datanode("only-config", "");

    auto dn = (*read_rpc)(session);
    if (!dn) return false;
    //auto read_xml = s.encode(*(dn->get_children()[0]), ydk::EncodingFormat::XML, true);
    //std::cout << read_xml << std::endl;
    return true;
}

bool test_bgp_delete()
{
    ydk::path::Repository repo{};
    ydk::path::NetconfSession session{repo, "127.0.0.1", "admin", "admin",  12022};
    ydk::path::RootSchemaNode& schema = session.get_root_schema();

    auto & bgp = schema.create_datanode("openconfig-bgp:bgp", "");
    ydk::path::Codec s {};
    auto xml = s.encode(bgp, ydk::EncodingFormat::XML, true);

    std::shared_ptr<ydk::path::Rpc> delete_rpc { schema.create_rpc("ydk:delete") };
    delete_rpc->get_input_node().create_datanode("entity", xml);

    (*delete_rpc)(session);
    return true;
}

int main() {

    auto logger = spdlog::stdout_color_mt("ydk");
    logger->set_level(spdlog::level::err);

    if (!test_bgp_create() ||
        !test_bgp_read()   ||
        !test_bgp_delete())
        return 1;

    return 0;
}
