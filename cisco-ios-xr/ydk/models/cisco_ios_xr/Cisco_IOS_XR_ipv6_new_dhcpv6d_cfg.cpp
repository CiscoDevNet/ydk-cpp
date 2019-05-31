
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg {

Dhcpv6::Dhcpv6()
    :
    inner_cos{YType::uint32, "inner-cos"},
    enable{YType::empty, "enable"},
    allow_duid_change{YType::empty, "allow-duid-change"},
    outer_cos{YType::uint32, "outer-cos"}
        ,
    database(std::make_shared<Dhcpv6::Database>())
    , profiles(std::make_shared<Dhcpv6::Profiles>())
    , interfaces(std::make_shared<Dhcpv6::Interfaces>())
{
    database->parent = this;
    profiles->parent = this;
    interfaces->parent = this;

    yang_name = "dhcpv6"; yang_parent_name = "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

Dhcpv6::~Dhcpv6()
{
}

bool Dhcpv6::has_data() const
{
    if (is_presence_container) return true;
    return inner_cos.is_set
	|| enable.is_set
	|| allow_duid_change.is_set
	|| outer_cos.is_set
	|| (database !=  nullptr && database->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Dhcpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(allow_duid_change.yfilter)
	|| ydk::is_set(outer_cos.yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (allow_duid_change.is_set || is_set(allow_duid_change.yfilter)) leaf_name_data.push_back(allow_duid_change.get_name_leafdata());
    if (outer_cos.is_set || is_set(outer_cos.yfilter)) leaf_name_data.push_back(outer_cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Dhcpv6::Database>();
        }
        return database;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Dhcpv6::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Dhcpv6::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    if(profiles != nullptr)
    {
        _children["profiles"] = profiles;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Dhcpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-duid-change")
    {
        allow_duid_change = value;
        allow_duid_change.value_namespace = name_space;
        allow_duid_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-cos")
    {
        outer_cos = value;
        outer_cos.value_namespace = name_space;
        outer_cos.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "allow-duid-change")
    {
        allow_duid_change.yfilter = yfilter;
    }
    if(value_path == "outer-cos")
    {
        outer_cos.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Dhcpv6::clone_ptr() const
{
    return std::make_shared<Dhcpv6>();
}

std::string Dhcpv6::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dhcpv6::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dhcpv6::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dhcpv6::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Dhcpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "profiles" || name == "interfaces" || name == "inner-cos" || name == "enable" || name == "allow-duid-change" || name == "outer-cos")
        return true;
    return false;
}

Dhcpv6::Database::Database()
    :
    proxy{YType::empty, "proxy"},
    server{YType::empty, "server"},
    relay{YType::empty, "relay"},
    full_write_interval{YType::uint32, "full-write-interval"},
    incremental_write_interval{YType::uint32, "incremental-write-interval"}
{

    yang_name = "database"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Dhcpv6::Database::~Database()
{
}

bool Dhcpv6::Database::has_data() const
{
    if (is_presence_container) return true;
    return proxy.is_set
	|| server.is_set
	|| relay.is_set
	|| full_write_interval.is_set
	|| incremental_write_interval.is_set;
}

bool Dhcpv6::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(relay.yfilter)
	|| ydk::is_set(full_write_interval.yfilter)
	|| ydk::is_set(incremental_write_interval.yfilter);
}

std::string Dhcpv6::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Dhcpv6::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (relay.is_set || is_set(relay.yfilter)) leaf_name_data.push_back(relay.get_name_leafdata());
    if (full_write_interval.is_set || is_set(full_write_interval.yfilter)) leaf_name_data.push_back(full_write_interval.get_name_leafdata());
    if (incremental_write_interval.is_set || is_set(incremental_write_interval.yfilter)) leaf_name_data.push_back(incremental_write_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay")
    {
        relay = value;
        relay.value_namespace = name_space;
        relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-write-interval")
    {
        full_write_interval = value;
        full_write_interval.value_namespace = name_space;
        full_write_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incremental-write-interval")
    {
        incremental_write_interval = value;
        incremental_write_interval.value_namespace = name_space;
        incremental_write_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "relay")
    {
        relay.yfilter = yfilter;
    }
    if(value_path == "full-write-interval")
    {
        full_write_interval.yfilter = yfilter;
    }
    if(value_path == "incremental-write-interval")
    {
        incremental_write_interval.yfilter = yfilter;
    }
}

bool Dhcpv6::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy" || name == "server" || name == "relay" || name == "full-write-interval" || name == "incremental-write-interval")
        return true;
    return false;
}

Dhcpv6::Profiles::Profiles()
    :
    profile(this, {"profile_name"})
{

    yang_name = "profiles"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Dhcpv6::Profiles::~Profiles()
{
}

bool Dhcpv6::Profiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Dhcpv6::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"}
        ,
    relay(nullptr) // presence node
    , base(nullptr) // presence node
    , proxy(nullptr) // presence node
    , server(nullptr) // presence node
{

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = false; 
}

Dhcpv6::Profiles::Profile::~Profile()
{
}

bool Dhcpv6::Profiles::Profile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| (relay !=  nullptr && relay->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Dhcpv6::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (relay !=  nullptr && relay->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Dhcpv6::Profiles::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/profiles/" << get_segment_path();
    return path_buffer.str();
}

std::string Dhcpv6::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Dhcpv6::Profiles::Profile::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Dhcpv6::Profiles::Profile::Base>();
        }
        return base;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Dhcpv6::Profiles::Profile::Proxy>();
        }
        return proxy;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Dhcpv6::Profiles::Profile::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(proxy != nullptr)
    {
        _children["proxy"] = proxy;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay" || name == "base" || name == "proxy" || name == "server" || name == "profile-name")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Relay::Relay()
    :
    link_address{YType::str, "link-address"},
    src_intf_name{YType::str, "src-intf-name"},
    enable{YType::empty, "enable"},
    iana_route_add{YType::empty, "iana-route-add"},
    relay_route_add_disable{YType::empty, "relay-route-add-disable"}
        ,
    helper_addresses(std::make_shared<Dhcpv6::Profiles::Profile::Relay::HelperAddresses>())
    , option(std::make_shared<Dhcpv6::Profiles::Profile::Relay::Option>())
{
    helper_addresses->parent = this;
    option->parent = this;

    yang_name = "relay"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Dhcpv6::Profiles::Profile::Relay::~Relay()
{
}

bool Dhcpv6::Profiles::Profile::Relay::has_data() const
{
    if (is_presence_container) return true;
    return link_address.is_set
	|| src_intf_name.is_set
	|| enable.is_set
	|| iana_route_add.is_set
	|| relay_route_add_disable.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data())
	|| (option !=  nullptr && option->has_data());
}

bool Dhcpv6::Profiles::Profile::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(src_intf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(iana_route_add.yfilter)
	|| ydk::is_set(relay_route_add_disable.yfilter)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation())
	|| (option !=  nullptr && option->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (src_intf_name.is_set || is_set(src_intf_name.yfilter)) leaf_name_data.push_back(src_intf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (iana_route_add.is_set || is_set(iana_route_add.yfilter)) leaf_name_data.push_back(iana_route_add.get_name_leafdata());
    if (relay_route_add_disable.is_set || is_set(relay_route_add_disable.yfilter)) leaf_name_data.push_back(relay_route_add_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<Dhcpv6::Profiles::Profile::Relay::HelperAddresses>();
        }
        return helper_addresses;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Dhcpv6::Profiles::Profile::Relay::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(helper_addresses != nullptr)
    {
        _children["helper-addresses"] = helper_addresses;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name = value;
        src_intf_name.value_namespace = name_space;
        src_intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iana-route-add")
    {
        iana_route_add = value;
        iana_route_add.value_namespace = name_space;
        iana_route_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay-route-add-disable")
    {
        relay_route_add_disable = value;
        relay_route_add_disable.value_namespace = name_space;
        relay_route_add_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "iana-route-add")
    {
        iana_route_add.yfilter = yfilter;
    }
    if(value_path == "relay-route-add-disable")
    {
        relay_route_add_disable.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-addresses" || name == "option" || name == "link-address" || name == "src-intf-name" || name == "enable" || name == "iana-route-add" || name == "relay-route-add-disable")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddresses()
    :
    helper_address(this, {"vrf_name", "helper_address"})
{

    yang_name = "helper-addresses"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::~HelperAddresses()
{
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Relay::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Relay::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::HelperAddress()
    :
    vrf_name{YType::str, "vrf-name"},
    helper_address{YType::str, "helper-address"},
    enable{YType::empty, "enable"},
    src_intf_name{YType::str, "src-intf-name"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| helper_address.is_set
	|| enable.is_set
	|| src_intf_name.is_set;
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(helper_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(src_intf_name.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    ADD_KEY_TOKEN(helper_address, "helper-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (helper_address.is_set || is_set(helper_address.yfilter)) leaf_name_data.push_back(helper_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (src_intf_name.is_set || is_set(src_intf_name.yfilter)) leaf_name_data.push_back(src_intf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-address")
    {
        helper_address = value;
        helper_address.value_namespace = name_space;
        helper_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name = value;
        src_intf_name.value_namespace = name_space;
        src_intf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "helper-address")
    {
        helper_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "helper-address" || name == "enable" || name == "src-intf-name")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Relay::Option::Option()
    :
    remote_id{YType::str, "remote-id"}
{

    yang_name = "option"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Relay::Option::~Option()
{
}

bool Dhcpv6::Profiles::Profile::Relay::Option::has_data() const
{
    if (is_presence_container) return true;
    return remote_id.is_set;
}

bool Dhcpv6::Profiles::Profile::Relay::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_id.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Relay::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Relay::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Relay::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Relay::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Relay::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Relay::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Relay::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Base()
    :
    enable{YType::empty, "enable"}
        ,
    dhcpv6_to_aaa(std::make_shared<Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa>())
    , match_default(std::make_shared<Dhcpv6::Profiles::Profile::Base::MatchDefault>())
    , match(std::make_shared<Dhcpv6::Profiles::Profile::Base::Match>())
{
    dhcpv6_to_aaa->parent = this;
    match_default->parent = this;
    match->parent = this;

    yang_name = "base"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Dhcpv6::Profiles::Profile::Base::~Base()
{
}

bool Dhcpv6::Profiles::Profile::Base::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (dhcpv6_to_aaa !=  nullptr && dhcpv6_to_aaa->has_data())
	|| (match_default !=  nullptr && match_default->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Dhcpv6::Profiles::Profile::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (dhcpv6_to_aaa !=  nullptr && dhcpv6_to_aaa->has_operation())
	|| (match_default !=  nullptr && match_default->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcpv6-to-aaa")
    {
        if(dhcpv6_to_aaa == nullptr)
        {
            dhcpv6_to_aaa = std::make_shared<Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa>();
        }
        return dhcpv6_to_aaa;
    }

    if(child_yang_name == "match-default")
    {
        if(match_default == nullptr)
        {
            match_default = std::make_shared<Dhcpv6::Profiles::Profile::Base::MatchDefault>();
        }
        return match_default;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Dhcpv6::Profiles::Profile::Base::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcpv6_to_aaa != nullptr)
    {
        _children["dhcpv6-to-aaa"] = dhcpv6_to_aaa;
    }

    if(match_default != nullptr)
    {
        _children["match-default"] = match_default;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcpv6-to-aaa" || name == "match-default" || name == "match" || name == "enable")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::Dhcpv6ToAaa()
    :
    base_option(std::make_shared<Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption>())
{
    base_option->parent = this;

    yang_name = "dhcpv6-to-aaa"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::~Dhcpv6ToAaa()
{
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::has_data() const
{
    if (is_presence_container) return true;
    return (base_option !=  nullptr && base_option->has_data());
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::has_operation() const
{
    return is_set(yfilter)
	|| (base_option !=  nullptr && base_option->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv6-to-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-option")
    {
        if(base_option == nullptr)
        {
            base_option = std::make_shared<Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption>();
        }
        return base_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base_option != nullptr)
    {
        _children["base-option"] = base_option;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-option")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::BaseOption()
    :
    list(std::make_shared<Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List>())
{
    list->parent = this;

    yang_name = "base-option"; yang_parent_name = "dhcpv6-to-aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::~BaseOption()
{
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::List()
    :
    option_all{YType::uint32, "option-all"},
    option_number{YType::uint32, "option-number"}
{

    yang_name = "list"; yang_parent_name = "base-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::~List()
{
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : option_number.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_all.is_set;
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::has_operation() const
{
    for (auto const & leaf : option_number.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_all.yfilter)
	|| ydk::is_set(option_number.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_all.is_set || is_set(option_all.yfilter)) leaf_name_data.push_back(option_all.get_name_leafdata());

    auto option_number_name_datas = option_number.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), option_number_name_datas.begin(), option_number_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-all")
    {
        option_all = value;
        option_all.value_namespace = name_space;
        option_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-number")
    {
        option_number.append(value);
    }
}

void Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-all")
    {
        option_all.yfilter = yfilter;
    }
    if(value_path == "option-number")
    {
        option_number.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Base::Dhcpv6ToAaa::BaseOption::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-all" || name == "option-number")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::MatchDefault::MatchDefault()
    :
    profile(std::make_shared<Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_>())
{
    profile->parent = this;

    yang_name = "match-default"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::MatchDefault::~MatchDefault()
{
}

bool Dhcpv6::Profiles::Profile::Base::MatchDefault::has_data() const
{
    if (is_presence_container) return true;
    return (profile !=  nullptr && profile->has_data());
}

bool Dhcpv6::Profiles::Profile::Base::MatchDefault::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Base::MatchDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::MatchDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::MatchDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::MatchDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::MatchDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Base::MatchDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Base::MatchDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::Profile_()
    :
    profile_name{YType::str, "profile-name"},
    default_mode{YType::enumeration, "default-mode"}
{

    yang_name = "profile"; yang_parent_name = "match-default"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::~Profile_()
{
}

bool Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| default_mode.is_set;
}

bool Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(default_mode.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (default_mode.is_set || is_set(default_mode.yfilter)) leaf_name_data.push_back(default_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-mode")
    {
        default_mode = value;
        default_mode.value_namespace = name_space;
        default_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "default-mode")
    {
        default_mode.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Base::MatchDefault::Profile_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name" || name == "default-mode")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Match::Match()
    :
    mode_classes(std::make_shared<Dhcpv6::Profiles::Profile::Base::Match::ModeClasses>())
{
    mode_classes->parent = this;

    yang_name = "match"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Match::~Match()
{
}

bool Dhcpv6::Profiles::Profile::Base::Match::has_data() const
{
    if (is_presence_container) return true;
    return (mode_classes !=  nullptr && mode_classes->has_data());
}

bool Dhcpv6::Profiles::Profile::Base::Match::has_operation() const
{
    return is_set(yfilter)
	|| (mode_classes !=  nullptr && mode_classes->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Base::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-classes")
    {
        if(mode_classes == nullptr)
        {
            mode_classes = std::make_shared<Dhcpv6::Profiles::Profile::Base::Match::ModeClasses>();
        }
        return mode_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode_classes != nullptr)
    {
        _children["mode-classes"] = mode_classes;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Base::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Base::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-classes")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClasses()
    :
    mode_class(this, {"class_name"})
{

    yang_name = "mode-classes"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::~ModeClasses()
{
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mode_class.len(); index++)
    {
        if(mode_class[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::has_operation() const
{
    for (std::size_t index=0; index<mode_class.len(); index++)
    {
        if(mode_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-class")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass>();
        ent_->parent = this;
        mode_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mode_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-class")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::ModeClass()
    :
    class_name{YType::str, "class-name"}
        ,
    profile(std::make_shared<Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_>())
{
    profile->parent = this;

    yang_name = "mode-class"; yang_parent_name = "mode-classes"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::~ModeClass()
{
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::has_data() const
{
    if (is_presence_container) return true;
    return class_name.is_set
	|| (profile !=  nullptr && profile->has_data());
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-class";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "class-name")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::Profile_()
    :
    profile_name{YType::str, "profile-name"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "profile"; yang_parent_name = "mode-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::~Profile_()
{
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| mode.is_set;
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Base::Match::ModeClasses::ModeClass::Profile_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name" || name == "mode")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Proxy()
    :
    linkaddress_from_ra_enable{YType::empty, "linkaddress-from-ra-enable"},
    route_add_disable{YType::empty, "route-add-disable"},
    link_address{YType::str, "link-address"},
    src_intf_name{YType::str, "src-intf-name"},
    enable{YType::empty, "enable"}
        ,
    interfaces(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Interfaces>())
    , relay(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Relay>())
    , vrfs(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Vrfs>())
    , authentication(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Authentication>())
    , classes(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Classes>())
    , sessions(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Sessions>())
{
    interfaces->parent = this;
    relay->parent = this;
    vrfs->parent = this;
    authentication->parent = this;
    classes->parent = this;
    sessions->parent = this;

    yang_name = "proxy"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Dhcpv6::Profiles::Profile::Proxy::~Proxy()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::has_data() const
{
    if (is_presence_container) return true;
    return linkaddress_from_ra_enable.is_set
	|| route_add_disable.is_set
	|| link_address.is_set
	|| src_intf_name.is_set
	|| enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(linkaddress_from_ra_enable.yfilter)
	|| ydk::is_set(route_add_disable.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(src_intf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (linkaddress_from_ra_enable.is_set || is_set(linkaddress_from_ra_enable.yfilter)) leaf_name_data.push_back(linkaddress_from_ra_enable.get_name_leafdata());
    if (route_add_disable.is_set || is_set(route_add_disable.yfilter)) leaf_name_data.push_back(route_add_disable.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (src_intf_name.is_set || is_set(src_intf_name.yfilter)) leaf_name_data.push_back(src_intf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Classes>();
        }
        return classes;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(classes != nullptr)
    {
        _children["classes"] = classes;
    }

    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "linkaddress-from-ra-enable")
    {
        linkaddress_from_ra_enable = value;
        linkaddress_from_ra_enable.value_namespace = name_space;
        linkaddress_from_ra_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-add-disable")
    {
        route_add_disable = value;
        route_add_disable.value_namespace = name_space;
        route_add_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name = value;
        src_intf_name.value_namespace = name_space;
        src_intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "linkaddress-from-ra-enable")
    {
        linkaddress_from_ra_enable.yfilter = yfilter;
    }
    if(value_path == "route-add-disable")
    {
        route_add_disable.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "relay" || name == "vrfs" || name == "authentication" || name == "classes" || name == "sessions" || name == "linkaddress-from-ra-enable" || name == "route-add-disable" || name == "link-address" || name == "src-intf-name" || name == "enable")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::~Interfaces()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_id{YType::str, "interface-id"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::~Interface()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_id.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-id")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Relay()
    :
    option(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Relay::Option>())
{
    option->parent = this;

    yang_name = "relay"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Relay::~Relay()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Relay::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::Option()
    :
    subscriber_id{YType::enumeration, "subscriber-id"},
    link_layer_addr{YType::enumeration, "link-layer-addr"},
    remote_i_dreceived{YType::uint32, "remote-i-dreceived"},
    remote_id{YType::str, "remote-id"}
        ,
    interface_id(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId>())
{
    interface_id->parent = this;

    yang_name = "option"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::~Option()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set
	|| link_layer_addr.is_set
	|| remote_i_dreceived.is_set
	|| remote_id.is_set
	|| (interface_id !=  nullptr && interface_id->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(link_layer_addr.yfilter)
	|| ydk::is_set(remote_i_dreceived.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| (interface_id !=  nullptr && interface_id->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (link_layer_addr.is_set || is_set(link_layer_addr.yfilter)) leaf_name_data.push_back(link_layer_addr.get_name_leafdata());
    if (remote_i_dreceived.is_set || is_set(remote_i_dreceived.yfilter)) leaf_name_data.push_back(remote_i_dreceived.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId>();
        }
        return interface_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_id != nullptr)
    {
        _children["interface-id"] = interface_id;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-layer-addr")
    {
        link_layer_addr = value;
        link_layer_addr.value_namespace = name_space;
        link_layer_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-i-dreceived")
    {
        remote_i_dreceived = value;
        remote_i_dreceived.value_namespace = name_space;
        remote_i_dreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "link-layer-addr")
    {
        link_layer_addr.yfilter = yfilter;
    }
    if(value_path == "remote-i-dreceived")
    {
        remote_i_dreceived.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "subscriber-id" || name == "link-layer-addr" || name == "remote-i-dreceived" || name == "remote-id")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::InterfaceId()
    :
    insert{YType::enumeration, "insert"}
{

    yang_name = "interface-id"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::~InterfaceId()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::has_data() const
{
    if (is_presence_container) return true;
    return insert.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insert.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insert.is_set || is_set(insert.yfilter)) leaf_name_data.push_back(insert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insert")
    {
        insert = value;
        insert.value_namespace = name_space;
        insert.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insert")
    {
        insert.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insert")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::~Vrfs()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    helper_addresses(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::~Vrf()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(helper_addresses != nullptr)
    {
        _children["helper-addresses"] = helper_addresses;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-addresses" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddresses()
    :
    helper_address(this, {"helper_address"})
{

    yang_name = "helper-addresses"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    helper_address{YType::str, "helper-address"},
    out_interface{YType::str, "out-interface"},
    any_out_interface{YType::empty, "any-out-interface"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return helper_address.is_set
	|| out_interface.is_set
	|| any_out_interface.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helper_address.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(any_out_interface.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(helper_address, "helper-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helper_address.is_set || is_set(helper_address.yfilter)) leaf_name_data.push_back(helper_address.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (any_out_interface.is_set || is_set(any_out_interface.yfilter)) leaf_name_data.push_back(any_out_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helper-address")
    {
        helper_address = value;
        helper_address.value_namespace = name_space;
        helper_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-out-interface")
    {
        any_out_interface = value;
        any_out_interface.value_namespace = name_space;
        any_out_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helper-address")
    {
        helper_address.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "any-out-interface")
    {
        any_out_interface.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address" || name == "out-interface" || name == "any-out-interface")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Authentication::Authentication()
    :
    username{YType::empty, "username"}
{

    yang_name = "authentication"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Authentication::~Authentication()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Classes()
    :
    class_(this, {"class_name"})
{

    yang_name = "classes"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Classes::~Classes()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Classes::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class::Class()
    :
    class_name{YType::str, "class-name"},
    link_address{YType::str, "link-address"}
        ,
    helper_addresses(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses>())
{
    helper_addresses->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class::~Class()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::has_data() const
{
    if (is_presence_container) return true;
    return class_name.is_set
	|| link_address.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(helper_addresses != nullptr)
    {
        _children["helper-addresses"] = helper_addresses;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-addresses" || name == "class-name" || name == "link-address")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddresses()
    :
    helper_address(this, {"vrf_name", "helper_address"})
{

    yang_name = "helper-addresses"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::~HelperAddresses()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::HelperAddress()
    :
    vrf_name{YType::str, "vrf-name"},
    helper_address{YType::str, "helper-address"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| helper_address.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(helper_address.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    ADD_KEY_TOKEN(helper_address, "helper-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (helper_address.is_set || is_set(helper_address.yfilter)) leaf_name_data.push_back(helper_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-address")
    {
        helper_address = value;
        helper_address.value_namespace = name_space;
        helper_address.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "helper-address")
    {
        helper_address.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "helper-address")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Sessions()
    :
    mac(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac>())
{
    mac->parent = this;

    yang_name = "sessions"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::~Sessions()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Mac()
    :
    throttle(std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle>())
{
    throttle->parent = this;

    yang_name = "mac"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::~Mac()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (throttle !=  nullptr && throttle->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(throttle != nullptr)
    {
        _children["throttle"] = throttle;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::Throttle()
    :
    limit{YType::uint32, "limit"},
    request{YType::uint32, "request"},
    block{YType::uint32, "block"}
{

    yang_name = "throttle"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::~Throttle()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request.is_set
	|| block.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request" || name == "block")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Server()
    :
    address_pool{YType::str, "address-pool"},
    aftr_name{YType::str, "aftr-name"},
    domain_name{YType::str, "domain-name"},
    preference{YType::uint32, "preference"},
    rapid_commit{YType::empty, "rapid-commit"},
    enable{YType::empty, "enable"},
    prefix_pool{YType::str, "prefix-pool"}
        ,
    sessions(std::make_shared<Dhcpv6::Profiles::Profile::Server::Sessions>())
    , dns_servers(std::make_shared<Dhcpv6::Profiles::Profile::Server::DnsServers>())
    , classes(std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes>())
    , lease(std::make_shared<Dhcpv6::Profiles::Profile::Server::Lease>())
    , dhcpv6duid(std::make_shared<Dhcpv6::Profiles::Profile::Server::Dhcpv6duid>())
    , aaa_server(std::make_shared<Dhcpv6::Profiles::Profile::Server::AaaServer>())
    , options(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options>())
    , dhcpv6_options(std::make_shared<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options>())
{
    sessions->parent = this;
    dns_servers->parent = this;
    classes->parent = this;
    lease->parent = this;
    dhcpv6duid->parent = this;
    aaa_server->parent = this;
    options->parent = this;
    dhcpv6_options->parent = this;

    yang_name = "server"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Dhcpv6::Profiles::Profile::Server::~Server()
{
}

bool Dhcpv6::Profiles::Profile::Server::has_data() const
{
    if (is_presence_container) return true;
    return address_pool.is_set
	|| aftr_name.is_set
	|| domain_name.is_set
	|| preference.is_set
	|| rapid_commit.is_set
	|| enable.is_set
	|| prefix_pool.is_set
	|| (sessions !=  nullptr && sessions->has_data())
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (dhcpv6duid !=  nullptr && dhcpv6duid->has_data())
	|| (aaa_server !=  nullptr && aaa_server->has_data())
	|| (options !=  nullptr && options->has_data())
	|| (dhcpv6_options !=  nullptr && dhcpv6_options->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_pool.yfilter)
	|| ydk::is_set(aftr_name.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(rapid_commit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(prefix_pool.yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (dhcpv6duid !=  nullptr && dhcpv6duid->has_operation())
	|| (aaa_server !=  nullptr && aaa_server->has_operation())
	|| (options !=  nullptr && options->has_operation())
	|| (dhcpv6_options !=  nullptr && dhcpv6_options->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_pool.is_set || is_set(address_pool.yfilter)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (aftr_name.is_set || is_set(aftr_name.yfilter)) leaf_name_data.push_back(aftr_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (prefix_pool.is_set || is_set(prefix_pool.yfilter)) leaf_name_data.push_back(prefix_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Dhcpv6::Profiles::Profile::Server::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers == nullptr)
        {
            dns_servers = std::make_shared<Dhcpv6::Profiles::Profile::Server::DnsServers>();
        }
        return dns_servers;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes>();
        }
        return classes;
    }

    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Dhcpv6::Profiles::Profile::Server::Lease>();
        }
        return lease;
    }

    if(child_yang_name == "dhcpv6duid")
    {
        if(dhcpv6duid == nullptr)
        {
            dhcpv6duid = std::make_shared<Dhcpv6::Profiles::Profile::Server::Dhcpv6duid>();
        }
        return dhcpv6duid;
    }

    if(child_yang_name == "aaa-server")
    {
        if(aaa_server == nullptr)
        {
            aaa_server = std::make_shared<Dhcpv6::Profiles::Profile::Server::AaaServer>();
        }
        return aaa_server;
    }

    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options>();
        }
        return options;
    }

    if(child_yang_name == "dhcpv6-options")
    {
        if(dhcpv6_options == nullptr)
        {
            dhcpv6_options = std::make_shared<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options>();
        }
        return dhcpv6_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(dns_servers != nullptr)
    {
        _children["dns-servers"] = dns_servers;
    }

    if(classes != nullptr)
    {
        _children["classes"] = classes;
    }

    if(lease != nullptr)
    {
        _children["lease"] = lease;
    }

    if(dhcpv6duid != nullptr)
    {
        _children["dhcpv6duid"] = dhcpv6duid;
    }

    if(aaa_server != nullptr)
    {
        _children["aaa-server"] = aaa_server;
    }

    if(options != nullptr)
    {
        _children["options"] = options;
    }

    if(dhcpv6_options != nullptr)
    {
        _children["dhcpv6-options"] = dhcpv6_options;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-pool")
    {
        address_pool = value;
        address_pool.value_namespace = name_space;
        address_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aftr-name")
    {
        aftr_name = value;
        aftr_name.value_namespace = name_space;
        aftr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-pool")
    {
        prefix_pool = value;
        prefix_pool.value_namespace = name_space;
        prefix_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-pool")
    {
        address_pool.yfilter = yfilter;
    }
    if(value_path == "aftr-name")
    {
        aftr_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "prefix-pool")
    {
        prefix_pool.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "dns-servers" || name == "classes" || name == "lease" || name == "dhcpv6duid" || name == "aaa-server" || name == "options" || name == "dhcpv6-options" || name == "address-pool" || name == "aftr-name" || name == "domain-name" || name == "preference" || name == "rapid-commit" || name == "enable" || name == "prefix-pool")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Sessions::Sessions()
    :
    mac(std::make_shared<Dhcpv6::Profiles::Profile::Server::Sessions::Mac>())
{
    mac->parent = this;

    yang_name = "sessions"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Sessions::~Sessions()
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Dhcpv6::Profiles::Profile::Server::Sessions::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Mac()
    :
    throttle(std::make_shared<Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle>())
{
    throttle->parent = this;

    yang_name = "mac"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::~Mac()
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (throttle !=  nullptr && throttle->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(throttle != nullptr)
    {
        _children["throttle"] = throttle;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Sessions::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Sessions::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::Throttle()
    :
    limit{YType::uint32, "limit"},
    request{YType::uint32, "request"},
    block{YType::uint32, "block"}
{

    yang_name = "throttle"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::~Throttle()
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request.is_set
	|| block.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request" || name == "block")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::DnsServers::DnsServers()
    :
    dns_server{YType::str, "dns-server"}
{

    yang_name = "dns-servers"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::DnsServers::~DnsServers()
{
}

bool Dhcpv6::Profiles::Profile::Server::DnsServers::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::DnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::DnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::DnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

void Dhcpv6::Profiles::Profile::Server::DnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::DnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Classes::Classes()
    :
    class_(this, {"class_name"})
{

    yang_name = "classes"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Classes::~Classes()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Classes::Class::Class()
    :
    class_name{YType::str, "class-name"},
    address_pool{YType::str, "address-pool"},
    domain_name{YType::str, "domain-name"},
    preference{YType::uint32, "preference"},
    prefix_pool{YType::str, "prefix-pool"}
        ,
    dns_servers(std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers>())
    , lease(std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease>())
{
    dns_servers->parent = this;
    lease->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Classes::Class::~Class()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::has_data() const
{
    if (is_presence_container) return true;
    return class_name.is_set
	|| address_pool.is_set
	|| domain_name.is_set
	|| preference.is_set
	|| prefix_pool.is_set
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (lease !=  nullptr && lease->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(address_pool.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(prefix_pool.yfilter)
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (lease !=  nullptr && lease->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (address_pool.is_set || is_set(address_pool.yfilter)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (prefix_pool.is_set || is_set(prefix_pool.yfilter)) leaf_name_data.push_back(prefix_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-servers")
    {
        if(dns_servers == nullptr)
        {
            dns_servers = std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers>();
        }
        return dns_servers;
    }

    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease>();
        }
        return lease;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns_servers != nullptr)
    {
        _children["dns-servers"] = dns_servers;
    }

    if(lease != nullptr)
    {
        _children["lease"] = lease;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-pool")
    {
        address_pool = value;
        address_pool.value_namespace = name_space;
        address_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-pool")
    {
        prefix_pool = value;
        prefix_pool.value_namespace = name_space;
        prefix_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "address-pool")
    {
        address_pool.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "prefix-pool")
    {
        prefix_pool.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-servers" || name == "lease" || name == "class-name" || name == "address-pool" || name == "domain-name" || name == "preference" || name == "prefix-pool")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::DnsServers()
    :
    dns_server{YType::str, "dns-server"}
{

    yang_name = "dns-servers"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::~DnsServers()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::DnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::Lease()
    :
    infinite{YType::str, "infinite"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "lease"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::~Lease()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::has_data() const
{
    if (is_presence_container) return true;
    return infinite.is_set
	|| days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(infinite.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "infinite" || name == "days" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Lease::Lease()
    :
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    minutes{YType::uint32, "minutes"},
    infinite{YType::str, "infinite"}
{

    yang_name = "lease"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Lease::~Lease()
{
}

bool Dhcpv6::Profiles::Profile::Server::Lease::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| infinite.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "infinite")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::Dhcpv6duid()
    :
    allowed_type{YType::uint32, "allowed-type"}
{

    yang_name = "dhcpv6duid"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::~Dhcpv6duid()
{
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::has_data() const
{
    if (is_presence_container) return true;
    return allowed_type.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_type.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv6duid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_type.is_set || is_set(allowed_type.yfilter)) leaf_name_data.push_back(allowed_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-type")
    {
        allowed_type = value;
        allowed_type.value_namespace = name_space;
        allowed_type.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-type")
    {
        allowed_type.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6duid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-type")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::AaaServer::AaaServer()
    :
    dhcpv6_option(std::make_shared<Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option>())
{
    dhcpv6_option->parent = this;

    yang_name = "aaa-server"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::AaaServer::~AaaServer()
{
}

bool Dhcpv6::Profiles::Profile::Server::AaaServer::has_data() const
{
    if (is_presence_container) return true;
    return (dhcpv6_option !=  nullptr && dhcpv6_option->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::AaaServer::has_operation() const
{
    return is_set(yfilter)
	|| (dhcpv6_option !=  nullptr && dhcpv6_option->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::AaaServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::AaaServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::AaaServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcpv6-option")
    {
        if(dhcpv6_option == nullptr)
        {
            dhcpv6_option = std::make_shared<Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option>();
        }
        return dhcpv6_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::AaaServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcpv6_option != nullptr)
    {
        _children["dhcpv6-option"] = dhcpv6_option;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::AaaServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::AaaServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::AaaServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcpv6-option")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::Dhcpv6Option()
    :
    force_insert{YType::empty, "force-insert"}
{

    yang_name = "dhcpv6-option"; yang_parent_name = "aaa-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::~Dhcpv6Option()
{
}

bool Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::has_data() const
{
    if (is_presence_container) return true;
    return force_insert.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_insert.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv6-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_insert.is_set || is_set(force_insert.yfilter)) leaf_name_data.push_back(force_insert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-insert")
    {
        force_insert = value;
        force_insert.value_namespace = name_space;
        force_insert.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-insert")
    {
        force_insert.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::AaaServer::Dhcpv6Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-insert")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Options()
    :
    option(this, {"type", "format", "value_"})
{

    yang_name = "options"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::~Options()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<option.len(); index++)
    {
        if(option[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::Options::has_operation() const
{
    for (std::size_t index=0; index<option.len(); index++)
    {
        if(option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        auto ent_ = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option>();
        ent_->parent = this;
        option.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : option.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Options::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::Option()
    :
    type{YType::str, "type"},
    format{YType::uint32, "format"},
    value_{YType::str, "value"}
        ,
    enterprise_id(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId>())
    , vendor_class(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass>())
{
    enterprise_id->parent = this;
    vendor_class->parent = this;

    yang_name = "option"; yang_parent_name = "options"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::~Option()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| format.is_set
	|| value_.is_set
	|| (enterprise_id !=  nullptr && enterprise_id->has_data())
	|| (vendor_class !=  nullptr && vendor_class->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (enterprise_id !=  nullptr && enterprise_id->has_operation())
	|| (vendor_class !=  nullptr && vendor_class->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enterprise-id")
    {
        if(enterprise_id == nullptr)
        {
            enterprise_id = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId>();
        }
        return enterprise_id;
    }

    if(child_yang_name == "vendor-class")
    {
        if(vendor_class == nullptr)
        {
            vendor_class = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass>();
        }
        return vendor_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enterprise_id != nullptr)
    {
        _children["enterprise-id"] = enterprise_id;
    }

    if(vendor_class != nullptr)
    {
        _children["vendor-class"] = vendor_class;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-id" || name == "vendor-class" || name == "type" || name == "format" || name == "value")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::EnterpriseId()
    :
    hex_enterprise_id(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId>())
    , default_enterprise_id(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId>())
{
    hex_enterprise_id->parent = this;
    default_enterprise_id->parent = this;

    yang_name = "enterprise-id"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::~EnterpriseId()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::has_data() const
{
    if (is_presence_container) return true;
    return (hex_enterprise_id !=  nullptr && hex_enterprise_id->has_data())
	|| (default_enterprise_id !=  nullptr && default_enterprise_id->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::has_operation() const
{
    return is_set(yfilter)
	|| (hex_enterprise_id !=  nullptr && hex_enterprise_id->has_operation())
	|| (default_enterprise_id !=  nullptr && default_enterprise_id->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex-enterprise-id")
    {
        if(hex_enterprise_id == nullptr)
        {
            hex_enterprise_id = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId>();
        }
        return hex_enterprise_id;
    }

    if(child_yang_name == "default-enterprise-id")
    {
        if(default_enterprise_id == nullptr)
        {
            default_enterprise_id = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId>();
        }
        return default_enterprise_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hex_enterprise_id != nullptr)
    {
        _children["hex-enterprise-id"] = hex_enterprise_id;
    }

    if(default_enterprise_id != nullptr)
    {
        _children["default-enterprise-id"] = default_enterprise_id;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-enterprise-id" || name == "default-enterprise-id")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::HexEnterpriseId()
    :
    action{YType::enumeration, "action"}
{

    yang_name = "hex-enterprise-id"; yang_parent_name = "enterprise-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::~HexEnterpriseId()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex-enterprise-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::HexEnterpriseId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::DefaultEnterpriseId()
    :
    action{YType::enumeration, "action"}
{

    yang_name = "default-enterprise-id"; yang_parent_name = "enterprise-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::~DefaultEnterpriseId()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-enterprise-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::EnterpriseId::DefaultEnterpriseId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::VendorClass()
    :
    str_vendor_class(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass>())
    , default_vendor_class(std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass>())
{
    str_vendor_class->parent = this;
    default_vendor_class->parent = this;

    yang_name = "vendor-class"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::~VendorClass()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::has_data() const
{
    if (is_presence_container) return true;
    return (str_vendor_class !=  nullptr && str_vendor_class->has_data())
	|| (default_vendor_class !=  nullptr && default_vendor_class->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::has_operation() const
{
    return is_set(yfilter)
	|| (str_vendor_class !=  nullptr && str_vendor_class->has_operation())
	|| (default_vendor_class !=  nullptr && default_vendor_class->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "str-vendor-class")
    {
        if(str_vendor_class == nullptr)
        {
            str_vendor_class = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass>();
        }
        return str_vendor_class;
    }

    if(child_yang_name == "default-vendor-class")
    {
        if(default_vendor_class == nullptr)
        {
            default_vendor_class = std::make_shared<Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass>();
        }
        return default_vendor_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(str_vendor_class != nullptr)
    {
        _children["str-vendor-class"] = str_vendor_class;
    }

    if(default_vendor_class != nullptr)
    {
        _children["default-vendor-class"] = default_vendor_class;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "str-vendor-class" || name == "default-vendor-class")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::StrVendorClass()
    :
    action{YType::enumeration, "action"}
{

    yang_name = "str-vendor-class"; yang_parent_name = "vendor-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::~StrVendorClass()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "str-vendor-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::StrVendorClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::DefaultVendorClass()
    :
    action{YType::enumeration, "action"}
{

    yang_name = "default-vendor-class"; yang_parent_name = "vendor-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::~DefaultVendorClass()
{
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vendor-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Options::Option::VendorClass::DefaultVendorClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::Dhcpv6Options()
    :
    vendor_options(std::make_shared<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions>())
{
    vendor_options->parent = this;

    yang_name = "dhcpv6-options"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::~Dhcpv6Options()
{
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::has_data() const
{
    if (is_presence_container) return true;
    return (vendor_options !=  nullptr && vendor_options->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::has_operation() const
{
    return is_set(yfilter)
	|| (vendor_options !=  nullptr && vendor_options->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv6-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-options")
    {
        if(vendor_options == nullptr)
        {
            vendor_options = std::make_shared<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions>();
        }
        return vendor_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vendor_options != nullptr)
    {
        _children["vendor-options"] = vendor_options;
    }

    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-options")
        return true;
    return false;
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::VendorOptions()
    :
    type{YType::str, "type"},
    vendor_options{YType::str, "vendor-options"}
{

    yang_name = "vendor-options"; yang_parent_name = "dhcpv6-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::~VendorOptions()
{
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| vendor_options.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vendor_options.yfilter);
}

std::string Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vendor_options.is_set || is_set(vendor_options.yfilter)) leaf_name_data.push_back(vendor_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-options")
    {
        vendor_options = value;
        vendor_options.value_namespace = name_space;
        vendor_options.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vendor-options")
    {
        vendor_options.yfilter = yfilter;
    }
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "vendor-options")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Dhcpv6::Interfaces::~Interfaces()
{
}

bool Dhcpv6::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Dhcpv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Dhcpv6::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dhcpv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    pppoe(std::make_shared<Dhcpv6::Interfaces::Interface::Pppoe>())
    , proxy(std::make_shared<Dhcpv6::Interfaces::Interface::Proxy>())
    , base(std::make_shared<Dhcpv6::Interfaces::Interface::Base>())
    , server(std::make_shared<Dhcpv6::Interfaces::Interface::Server>())
    , relay(std::make_shared<Dhcpv6::Interfaces::Interface::Relay>())
{
    pppoe->parent = this;
    proxy->parent = this;
    base->parent = this;
    server->parent = this;
    relay->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Dhcpv6::Interfaces::Interface::~Interface()
{
}

bool Dhcpv6::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (relay !=  nullptr && relay->has_data());
}

bool Dhcpv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Dhcpv6::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Dhcpv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Dhcpv6::Interfaces::Interface::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Dhcpv6::Interfaces::Interface::Proxy>();
        }
        return proxy;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Dhcpv6::Interfaces::Interface::Base>();
        }
        return base;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Dhcpv6::Interfaces::Interface::Server>();
        }
        return server;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Dhcpv6::Interfaces::Interface::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(proxy != nullptr)
    {
        _children["proxy"] = proxy;
    }

    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    return _children;
}

void Dhcpv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "proxy" || name == "base" || name == "server" || name == "relay" || name == "interface-name")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interface::Pppoe::Pppoe()
    :
    profile{YType::str, "profile"}
{

    yang_name = "pppoe"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Interfaces::Interface::Pppoe::~Pppoe()
{
}

bool Dhcpv6::Interfaces::Interface::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Dhcpv6::Interfaces::Interface::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::Interface::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::Interface::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::Interface::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Interfaces::Interface::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Interfaces::Interface::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Dhcpv6::Interfaces::Interface::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interface::Proxy::Proxy()
    :
    profile{YType::str, "profile"}
{

    yang_name = "proxy"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Interfaces::Interface::Proxy::~Proxy()
{
}

bool Dhcpv6::Interfaces::Interface::Proxy::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Dhcpv6::Interfaces::Interface::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::Interface::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::Interface::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::Interface::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Interfaces::Interface::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Interfaces::Interface::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Dhcpv6::Interfaces::Interface::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interface::Base::Base()
    :
    profile{YType::str, "profile"}
{

    yang_name = "base"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Interfaces::Interface::Base::~Base()
{
}

bool Dhcpv6::Interfaces::Interface::Base::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Dhcpv6::Interfaces::Interface::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::Interface::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::Interface::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::Interface::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Interfaces::Interface::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Interfaces::Interface::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Dhcpv6::Interfaces::Interface::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interface::Server::Server()
    :
    profile{YType::str, "profile"}
{

    yang_name = "server"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Interfaces::Interface::Server::~Server()
{
}

bool Dhcpv6::Interfaces::Interface::Server::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Dhcpv6::Interfaces::Interface::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::Interface::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::Interface::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::Interface::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Interfaces::Interface::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Interfaces::Interface::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Dhcpv6::Interfaces::Interface::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Interfaces::Interface::Relay::Relay()
    :
    profile{YType::str, "profile"}
{

    yang_name = "relay"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Dhcpv6::Interfaces::Interface::Relay::~Relay()
{
}

bool Dhcpv6::Interfaces::Interface::Relay::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Dhcpv6::Interfaces::Interface::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dhcpv6::Interfaces::Interface::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dhcpv6::Interfaces::Interface::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dhcpv6::Interfaces::Interface::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dhcpv6::Interfaces::Interface::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Interfaces::Interface::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Dhcpv6::Interfaces::Interface::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

const Enum::YLeaf Ipv6dhcpMode::server {1, "server"};
const Enum::YLeaf Ipv6dhcpMode::proxy {2, "proxy"};

const Enum::YLeaf Insert::local {0, "local"};
const Enum::YLeaf Insert::received {1, "received"};
const Enum::YLeaf Insert::pppoe {2, "pppoe"};
const Enum::YLeaf Insert::received_nodefault {3, "received-nodefault"};

const Enum::YLeaf Ipv6dhcpDefaultMode::server {1, "server"};

const Enum::YLeaf SubscriberId::pppoe {3, "pppoe"};

const Enum::YLeaf Action::allow {0, "allow"};
const Enum::YLeaf Action::drop {1, "drop"};

const Enum::YLeaf LinkLayerAddr::set {4, "set"};


}
}

