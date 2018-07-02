
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_telnet_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_telnet_cfg {

Ipv6Telnet::Ipv6Telnet()
    :
    client(std::make_shared<Ipv6Telnet::Client>())
{
    client->parent = this;

    yang_name = "ipv6-telnet"; yang_parent_name = "Cisco-IOS-XR-ipv4-telnet-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv6Telnet::~Ipv6Telnet()
{
}

bool Ipv6Telnet::has_data() const
{
    if (is_presence_container) return true;
    return (client !=  nullptr && client->has_data());
}

bool Ipv6Telnet::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Ipv6Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv6-telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Ipv6Telnet::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Ipv6Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv6Telnet::clone_ptr() const
{
    return std::make_shared<Ipv6Telnet>();
}

std::string Ipv6Telnet::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Telnet::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Telnet::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6Telnet::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Ipv6Telnet::Client::Client()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "client"; yang_parent_name = "ipv6-telnet"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6Telnet::Client::~Client()
{
}

bool Ipv6Telnet::Client::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set;
}

bool Ipv6Telnet::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Ipv6Telnet::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv6-telnet/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Telnet::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Telnet::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Telnet::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Telnet::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Telnet::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Telnet::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Ipv6Telnet::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Ipv4Telnet::Ipv4Telnet()
    :
    client(std::make_shared<Ipv4Telnet::Client>())
{
    client->parent = this;

    yang_name = "ipv4-telnet"; yang_parent_name = "Cisco-IOS-XR-ipv4-telnet-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv4Telnet::~Ipv4Telnet()
{
}

bool Ipv4Telnet::has_data() const
{
    if (is_presence_container) return true;
    return (client !=  nullptr && client->has_data());
}

bool Ipv4Telnet::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Ipv4Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv4-telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Ipv4Telnet::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Ipv4Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv4Telnet::clone_ptr() const
{
    return std::make_shared<Ipv4Telnet>();
}

std::string Ipv4Telnet::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Telnet::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Telnet::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4Telnet::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Ipv4Telnet::Client::Client()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "client"; yang_parent_name = "ipv4-telnet"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4Telnet::Client::~Client()
{
}

bool Ipv4Telnet::Client::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set;
}

bool Ipv4Telnet::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Ipv4Telnet::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv4-telnet/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Telnet::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Telnet::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Telnet::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Telnet::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv4Telnet::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Telnet::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Ipv4Telnet::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}


}
}

