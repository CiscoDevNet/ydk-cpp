
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_dhcpd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_dhcpd_cfg {

Ipv4Dhcpd::Ipv4Dhcpd()
    :
    allow_client_id_change{YType::empty, "allow-client-id-change"},
    enable{YType::empty, "enable"},
    inner_cos{YType::uint32, "inner-cos"},
    outer_cos{YType::uint32, "outer-cos"}
    	,
    database(std::make_shared<Ipv4Dhcpd::Database>())
	,duplicate_mac_allowed(nullptr) // presence node
	,interfaces(std::make_shared<Ipv4Dhcpd::Interfaces>())
	,profiles(std::make_shared<Ipv4Dhcpd::Profiles>())
	,rate_limit(std::make_shared<Ipv4Dhcpd::RateLimit>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Vrfs>())
{
    database->parent = this;
    interfaces->parent = this;
    profiles->parent = this;
    rate_limit->parent = this;
    vrfs->parent = this;

    yang_name = "ipv4-dhcpd"; yang_parent_name = "Cisco-IOS-XR-ipv4-dhcpd-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv4Dhcpd::~Ipv4Dhcpd()
{
}

bool Ipv4Dhcpd::has_data() const
{
    return allow_client_id_change.is_set
	|| enable.is_set
	|| inner_cos.is_set
	|| outer_cos.is_set
	|| (database !=  nullptr && database->has_data())
	|| (duplicate_mac_allowed !=  nullptr && duplicate_mac_allowed->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_client_id_change.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(outer_cos.yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (duplicate_mac_allowed !=  nullptr && duplicate_mac_allowed->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_client_id_change.is_set || is_set(allow_client_id_change.yfilter)) leaf_name_data.push_back(allow_client_id_change.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (outer_cos.is_set || is_set(outer_cos.yfilter)) leaf_name_data.push_back(outer_cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Ipv4Dhcpd::Database>();
        }
        return database;
    }

    if(child_yang_name == "duplicate-mac-allowed")
    {
        if(duplicate_mac_allowed == nullptr)
        {
            duplicate_mac_allowed = std::make_shared<Ipv4Dhcpd::DuplicateMacAllowed>();
        }
        return duplicate_mac_allowed;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ipv4Dhcpd::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ipv4Dhcpd::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Ipv4Dhcpd::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(duplicate_mac_allowed != nullptr)
    {
        children["duplicate-mac-allowed"] = duplicate_mac_allowed;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-client-id-change")
    {
        allow_client_id_change = value;
        allow_client_id_change.value_namespace = name_space;
        allow_client_id_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-cos")
    {
        outer_cos = value;
        outer_cos.value_namespace = name_space;
        outer_cos.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-client-id-change")
    {
        allow_client_id_change.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "outer-cos")
    {
        outer_cos.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ipv4Dhcpd::clone_ptr() const
{
    return std::make_shared<Ipv4Dhcpd>();
}

std::string Ipv4Dhcpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Dhcpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Dhcpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4Dhcpd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4Dhcpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "duplicate-mac-allowed" || name == "interfaces" || name == "profiles" || name == "rate-limit" || name == "vrfs" || name == "allow-client-id-change" || name == "enable" || name == "inner-cos" || name == "outer-cos")
        return true;
    return false;
}

Ipv4Dhcpd::Database::Database()
    :
    full_write_interval{YType::uint32, "full-write-interval"},
    incremental_write_interval{YType::uint32, "incremental-write-interval"},
    proxy{YType::empty, "proxy"},
    server{YType::empty, "server"},
    snoop{YType::empty, "snoop"}
{

    yang_name = "database"; yang_parent_name = "ipv4-dhcpd"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Database::~Database()
{
}

bool Ipv4Dhcpd::Database::has_data() const
{
    return full_write_interval.is_set
	|| incremental_write_interval.is_set
	|| proxy.is_set
	|| server.is_set
	|| snoop.is_set;
}

bool Ipv4Dhcpd::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_write_interval.yfilter)
	|| ydk::is_set(incremental_write_interval.yfilter)
	|| ydk::is_set(proxy.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(snoop.yfilter);
}

std::string Ipv4Dhcpd::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_write_interval.is_set || is_set(full_write_interval.yfilter)) leaf_name_data.push_back(full_write_interval.get_name_leafdata());
    if (incremental_write_interval.is_set || is_set(incremental_write_interval.yfilter)) leaf_name_data.push_back(incremental_write_interval.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (snoop.is_set || is_set(snoop.yfilter)) leaf_name_data.push_back(snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "snoop")
    {
        snoop = value;
        snoop.value_namespace = name_space;
        snoop.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-write-interval")
    {
        full_write_interval.yfilter = yfilter;
    }
    if(value_path == "incremental-write-interval")
    {
        incremental_write_interval.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "snoop")
    {
        snoop.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-write-interval" || name == "incremental-write-interval" || name == "proxy" || name == "server" || name == "snoop")
        return true;
    return false;
}

Ipv4Dhcpd::DuplicateMacAllowed::DuplicateMacAllowed()
    :
    duplicate_mac{YType::empty, "duplicate-mac"},
    exclude_vlan{YType::empty, "exclude-vlan"},
    include_giaddr{YType::empty, "include-giaddr"}
{

    yang_name = "duplicate-mac-allowed"; yang_parent_name = "ipv4-dhcpd"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::DuplicateMacAllowed::~DuplicateMacAllowed()
{
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_data() const
{
    return duplicate_mac.is_set
	|| exclude_vlan.is_set
	|| include_giaddr.is_set;
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicate_mac.yfilter)
	|| ydk::is_set(exclude_vlan.yfilter)
	|| ydk::is_set(include_giaddr.yfilter);
}

std::string Ipv4Dhcpd::DuplicateMacAllowed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::DuplicateMacAllowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-mac-allowed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::DuplicateMacAllowed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicate_mac.is_set || is_set(duplicate_mac.yfilter)) leaf_name_data.push_back(duplicate_mac.get_name_leafdata());
    if (exclude_vlan.is_set || is_set(exclude_vlan.yfilter)) leaf_name_data.push_back(exclude_vlan.get_name_leafdata());
    if (include_giaddr.is_set || is_set(include_giaddr.yfilter)) leaf_name_data.push_back(include_giaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::DuplicateMacAllowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::DuplicateMacAllowed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::DuplicateMacAllowed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicate-mac")
    {
        duplicate_mac = value;
        duplicate_mac.value_namespace = name_space;
        duplicate_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-vlan")
    {
        exclude_vlan = value;
        exclude_vlan.value_namespace = name_space;
        exclude_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-giaddr")
    {
        include_giaddr = value;
        include_giaddr.value_namespace = name_space;
        include_giaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::DuplicateMacAllowed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicate-mac")
    {
        duplicate_mac.yfilter = yfilter;
    }
    if(value_path == "exclude-vlan")
    {
        exclude_vlan.yfilter = yfilter;
    }
    if(value_path == "include-giaddr")
    {
        include_giaddr.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicate-mac" || name == "exclude-vlan" || name == "include-giaddr")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv4-dhcpd"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Interfaces::~Interfaces()
{
}

bool Ipv4Dhcpd::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    base_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::BaseInterface>())
	,profile(nullptr) // presence node
	,proxy_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface>())
	,relay_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::RelayInterface>())
	,server_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ServerInterface>())
	,snoop_interface(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface>())
	,static_mode(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode>())
{
    base_interface->parent = this;
    proxy_interface->parent = this;
    relay_interface->parent = this;
    server_interface->parent = this;
    snoop_interface->parent = this;
    static_mode->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Interfaces::Interface::~Interface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (base_interface !=  nullptr && base_interface->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (proxy_interface !=  nullptr && proxy_interface->has_data())
	|| (relay_interface !=  nullptr && relay_interface->has_data())
	|| (server_interface !=  nullptr && server_interface->has_data())
	|| (snoop_interface !=  nullptr && snoop_interface->has_data())
	|| (static_mode !=  nullptr && static_mode->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (base_interface !=  nullptr && base_interface->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (proxy_interface !=  nullptr && proxy_interface->has_operation())
	|| (relay_interface !=  nullptr && relay_interface->has_operation())
	|| (server_interface !=  nullptr && server_interface->has_operation())
	|| (snoop_interface !=  nullptr && snoop_interface->has_operation())
	|| (static_mode !=  nullptr && static_mode->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-interface")
    {
        if(base_interface == nullptr)
        {
            base_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::BaseInterface>();
        }
        return base_interface;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "proxy-interface")
    {
        if(proxy_interface == nullptr)
        {
            proxy_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface>();
        }
        return proxy_interface;
    }

    if(child_yang_name == "relay-interface")
    {
        if(relay_interface == nullptr)
        {
            relay_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::RelayInterface>();
        }
        return relay_interface;
    }

    if(child_yang_name == "server-interface")
    {
        if(server_interface == nullptr)
        {
            server_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ServerInterface>();
        }
        return server_interface;
    }

    if(child_yang_name == "snoop-interface")
    {
        if(snoop_interface == nullptr)
        {
            snoop_interface = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface>();
        }
        return snoop_interface;
    }

    if(child_yang_name == "static-mode")
    {
        if(static_mode == nullptr)
        {
            static_mode = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode>();
        }
        return static_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_interface != nullptr)
    {
        children["base-interface"] = base_interface;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    if(proxy_interface != nullptr)
    {
        children["proxy-interface"] = proxy_interface;
    }

    if(relay_interface != nullptr)
    {
        children["relay-interface"] = relay_interface;
    }

    if(server_interface != nullptr)
    {
        children["server-interface"] = server_interface;
    }

    if(snoop_interface != nullptr)
    {
        children["snoop-interface"] = snoop_interface;
    }

    if(static_mode != nullptr)
    {
        children["static-mode"] = static_mode;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-interface" || name == "profile" || name == "proxy-interface" || name == "relay-interface" || name == "server-interface" || name == "snoop-interface" || name == "static-mode" || name == "interface-name")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseInterface()
    :
    profile{YType::str, "profile"}
    	,
    base_dhcp_circuit_id(nullptr) // presence node
{

    yang_name = "base-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::~BaseInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_data() const
{
    return profile.is_set
	|| (base_dhcp_circuit_id !=  nullptr && base_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (base_dhcp_circuit_id !=  nullptr && base_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-dhcp-circuit-id")
    {
        if(base_dhcp_circuit_id == nullptr)
        {
            base_dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId>();
        }
        return base_dhcp_circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_dhcp_circuit_id != nullptr)
    {
        children["base-dhcp-circuit-id"] = base_dhcp_circuit_id;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-dhcp-circuit-id" || name == "profile")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::BaseDhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{

    yang_name = "base-dhcp-circuit-id"; yang_parent_name = "base-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::~BaseDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(argument1.yfilter)
	|| ydk::is_set(argument10.yfilter)
	|| ydk::is_set(argument11.yfilter)
	|| ydk::is_set(argument12.yfilter)
	|| ydk::is_set(argument13.yfilter)
	|| ydk::is_set(argument14.yfilter)
	|| ydk::is_set(argument15.yfilter)
	|| ydk::is_set(argument16.yfilter)
	|| ydk::is_set(argument2.yfilter)
	|| ydk::is_set(argument3.yfilter)
	|| ydk::is_set(argument4.yfilter)
	|| ydk::is_set(argument5.yfilter)
	|| ydk::is_set(argument6.yfilter)
	|| ydk::is_set(argument7.yfilter)
	|| ydk::is_set(argument8.yfilter)
	|| ydk::is_set(argument9.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-dhcp-circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.yfilter)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.yfilter)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.yfilter)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.yfilter)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.yfilter)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.yfilter)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.yfilter)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.yfilter)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.yfilter)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.yfilter)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.yfilter)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.yfilter)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.yfilter)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.yfilter)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.yfilter)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.yfilter)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "argument1")
    {
        argument1 = value;
        argument1.value_namespace = name_space;
        argument1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
        argument10.value_namespace = name_space;
        argument10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
        argument11.value_namespace = name_space;
        argument11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
        argument12.value_namespace = name_space;
        argument12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
        argument13.value_namespace = name_space;
        argument13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
        argument14.value_namespace = name_space;
        argument14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
        argument15.value_namespace = name_space;
        argument15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
        argument16.value_namespace = name_space;
        argument16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
        argument2.value_namespace = name_space;
        argument2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
        argument3.value_namespace = name_space;
        argument3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
        argument4.value_namespace = name_space;
        argument4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
        argument5.value_namespace = name_space;
        argument5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
        argument6.value_namespace = name_space;
        argument6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
        argument7.value_namespace = name_space;
        argument7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
        argument8.value_namespace = name_space;
        argument8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
        argument9.value_namespace = name_space;
        argument9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "argument1")
    {
        argument1.yfilter = yfilter;
    }
    if(value_path == "argument10")
    {
        argument10.yfilter = yfilter;
    }
    if(value_path == "argument11")
    {
        argument11.yfilter = yfilter;
    }
    if(value_path == "argument12")
    {
        argument12.yfilter = yfilter;
    }
    if(value_path == "argument13")
    {
        argument13.yfilter = yfilter;
    }
    if(value_path == "argument14")
    {
        argument14.yfilter = yfilter;
    }
    if(value_path == "argument15")
    {
        argument15.yfilter = yfilter;
    }
    if(value_path == "argument16")
    {
        argument16.yfilter = yfilter;
    }
    if(value_path == "argument2")
    {
        argument2.yfilter = yfilter;
    }
    if(value_path == "argument3")
    {
        argument3.yfilter = yfilter;
    }
    if(value_path == "argument4")
    {
        argument4.yfilter = yfilter;
    }
    if(value_path == "argument5")
    {
        argument5.yfilter = yfilter;
    }
    if(value_path == "argument6")
    {
        argument6.yfilter = yfilter;
    }
    if(value_path == "argument7")
    {
        argument7.yfilter = yfilter;
    }
    if(value_path == "argument8")
    {
        argument8.yfilter = yfilter;
    }
    if(value_path == "argument9")
    {
        argument9.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "argument1" || name == "argument10" || name == "argument11" || name == "argument12" || name == "argument13" || name == "argument14" || name == "argument15" || name == "argument16" || name == "argument2" || name == "argument3" || name == "argument4" || name == "argument5" || name == "argument6" || name == "argument7" || name == "argument8" || name == "argument9" || name == "circuit-id" || name == "format")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::Profile::Profile()
    :
    mode{YType::enumeration, "mode"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "profile"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_data() const
{
    return mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "profile-name")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::ProxyInterface()
    :
    profile{YType::str, "profile"}
    	,
    dhcp_circuit_id(nullptr) // presence node
{

    yang_name = "proxy-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::~ProxyInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_data() const
{
    return profile.is_set
	|| (dhcp_circuit_id !=  nullptr && dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (dhcp_circuit_id !=  nullptr && dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-circuit-id")
    {
        if(dhcp_circuit_id == nullptr)
        {
            dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId>();
        }
        return dhcp_circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_circuit_id != nullptr)
    {
        children["dhcp-circuit-id"] = dhcp_circuit_id;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-circuit-id" || name == "profile")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::DhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{

    yang_name = "dhcp-circuit-id"; yang_parent_name = "proxy-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::~DhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(argument1.yfilter)
	|| ydk::is_set(argument10.yfilter)
	|| ydk::is_set(argument11.yfilter)
	|| ydk::is_set(argument12.yfilter)
	|| ydk::is_set(argument13.yfilter)
	|| ydk::is_set(argument14.yfilter)
	|| ydk::is_set(argument15.yfilter)
	|| ydk::is_set(argument16.yfilter)
	|| ydk::is_set(argument2.yfilter)
	|| ydk::is_set(argument3.yfilter)
	|| ydk::is_set(argument4.yfilter)
	|| ydk::is_set(argument5.yfilter)
	|| ydk::is_set(argument6.yfilter)
	|| ydk::is_set(argument7.yfilter)
	|| ydk::is_set(argument8.yfilter)
	|| ydk::is_set(argument9.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.yfilter)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.yfilter)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.yfilter)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.yfilter)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.yfilter)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.yfilter)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.yfilter)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.yfilter)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.yfilter)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.yfilter)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.yfilter)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.yfilter)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.yfilter)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.yfilter)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.yfilter)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.yfilter)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "argument1")
    {
        argument1 = value;
        argument1.value_namespace = name_space;
        argument1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
        argument10.value_namespace = name_space;
        argument10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
        argument11.value_namespace = name_space;
        argument11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
        argument12.value_namespace = name_space;
        argument12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
        argument13.value_namespace = name_space;
        argument13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
        argument14.value_namespace = name_space;
        argument14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
        argument15.value_namespace = name_space;
        argument15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
        argument16.value_namespace = name_space;
        argument16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
        argument2.value_namespace = name_space;
        argument2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
        argument3.value_namespace = name_space;
        argument3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
        argument4.value_namespace = name_space;
        argument4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
        argument5.value_namespace = name_space;
        argument5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
        argument6.value_namespace = name_space;
        argument6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
        argument7.value_namespace = name_space;
        argument7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
        argument8.value_namespace = name_space;
        argument8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
        argument9.value_namespace = name_space;
        argument9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "argument1")
    {
        argument1.yfilter = yfilter;
    }
    if(value_path == "argument10")
    {
        argument10.yfilter = yfilter;
    }
    if(value_path == "argument11")
    {
        argument11.yfilter = yfilter;
    }
    if(value_path == "argument12")
    {
        argument12.yfilter = yfilter;
    }
    if(value_path == "argument13")
    {
        argument13.yfilter = yfilter;
    }
    if(value_path == "argument14")
    {
        argument14.yfilter = yfilter;
    }
    if(value_path == "argument15")
    {
        argument15.yfilter = yfilter;
    }
    if(value_path == "argument16")
    {
        argument16.yfilter = yfilter;
    }
    if(value_path == "argument2")
    {
        argument2.yfilter = yfilter;
    }
    if(value_path == "argument3")
    {
        argument3.yfilter = yfilter;
    }
    if(value_path == "argument4")
    {
        argument4.yfilter = yfilter;
    }
    if(value_path == "argument5")
    {
        argument5.yfilter = yfilter;
    }
    if(value_path == "argument6")
    {
        argument6.yfilter = yfilter;
    }
    if(value_path == "argument7")
    {
        argument7.yfilter = yfilter;
    }
    if(value_path == "argument8")
    {
        argument8.yfilter = yfilter;
    }
    if(value_path == "argument9")
    {
        argument9.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "argument1" || name == "argument10" || name == "argument11" || name == "argument12" || name == "argument13" || name == "argument14" || name == "argument15" || name == "argument16" || name == "argument2" || name == "argument3" || name == "argument4" || name == "argument5" || name == "argument6" || name == "argument7" || name == "argument8" || name == "argument9" || name == "circuit-id" || name == "format")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayInterface()
    :
    relay_dhcp_circuit_id(nullptr) // presence node
{

    yang_name = "relay-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::~RelayInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_data() const
{
    return (relay_dhcp_circuit_id !=  nullptr && relay_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_operation() const
{
    return is_set(yfilter)
	|| (relay_dhcp_circuit_id !=  nullptr && relay_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay-dhcp-circuit-id")
    {
        if(relay_dhcp_circuit_id == nullptr)
        {
            relay_dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId>();
        }
        return relay_dhcp_circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay_dhcp_circuit_id != nullptr)
    {
        children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay-dhcp-circuit-id")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::RelayDhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{

    yang_name = "relay-dhcp-circuit-id"; yang_parent_name = "relay-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::~RelayDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(argument1.yfilter)
	|| ydk::is_set(argument10.yfilter)
	|| ydk::is_set(argument11.yfilter)
	|| ydk::is_set(argument12.yfilter)
	|| ydk::is_set(argument13.yfilter)
	|| ydk::is_set(argument14.yfilter)
	|| ydk::is_set(argument15.yfilter)
	|| ydk::is_set(argument16.yfilter)
	|| ydk::is_set(argument2.yfilter)
	|| ydk::is_set(argument3.yfilter)
	|| ydk::is_set(argument4.yfilter)
	|| ydk::is_set(argument5.yfilter)
	|| ydk::is_set(argument6.yfilter)
	|| ydk::is_set(argument7.yfilter)
	|| ydk::is_set(argument8.yfilter)
	|| ydk::is_set(argument9.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-dhcp-circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.yfilter)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.yfilter)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.yfilter)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.yfilter)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.yfilter)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.yfilter)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.yfilter)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.yfilter)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.yfilter)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.yfilter)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.yfilter)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.yfilter)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.yfilter)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.yfilter)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.yfilter)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.yfilter)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "argument1")
    {
        argument1 = value;
        argument1.value_namespace = name_space;
        argument1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
        argument10.value_namespace = name_space;
        argument10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
        argument11.value_namespace = name_space;
        argument11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
        argument12.value_namespace = name_space;
        argument12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
        argument13.value_namespace = name_space;
        argument13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
        argument14.value_namespace = name_space;
        argument14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
        argument15.value_namespace = name_space;
        argument15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
        argument16.value_namespace = name_space;
        argument16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
        argument2.value_namespace = name_space;
        argument2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
        argument3.value_namespace = name_space;
        argument3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
        argument4.value_namespace = name_space;
        argument4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
        argument5.value_namespace = name_space;
        argument5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
        argument6.value_namespace = name_space;
        argument6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
        argument7.value_namespace = name_space;
        argument7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
        argument8.value_namespace = name_space;
        argument8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
        argument9.value_namespace = name_space;
        argument9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "argument1")
    {
        argument1.yfilter = yfilter;
    }
    if(value_path == "argument10")
    {
        argument10.yfilter = yfilter;
    }
    if(value_path == "argument11")
    {
        argument11.yfilter = yfilter;
    }
    if(value_path == "argument12")
    {
        argument12.yfilter = yfilter;
    }
    if(value_path == "argument13")
    {
        argument13.yfilter = yfilter;
    }
    if(value_path == "argument14")
    {
        argument14.yfilter = yfilter;
    }
    if(value_path == "argument15")
    {
        argument15.yfilter = yfilter;
    }
    if(value_path == "argument16")
    {
        argument16.yfilter = yfilter;
    }
    if(value_path == "argument2")
    {
        argument2.yfilter = yfilter;
    }
    if(value_path == "argument3")
    {
        argument3.yfilter = yfilter;
    }
    if(value_path == "argument4")
    {
        argument4.yfilter = yfilter;
    }
    if(value_path == "argument5")
    {
        argument5.yfilter = yfilter;
    }
    if(value_path == "argument6")
    {
        argument6.yfilter = yfilter;
    }
    if(value_path == "argument7")
    {
        argument7.yfilter = yfilter;
    }
    if(value_path == "argument8")
    {
        argument8.yfilter = yfilter;
    }
    if(value_path == "argument9")
    {
        argument9.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "argument1" || name == "argument10" || name == "argument11" || name == "argument12" || name == "argument13" || name == "argument14" || name == "argument15" || name == "argument16" || name == "argument2" || name == "argument3" || name == "argument4" || name == "argument5" || name == "argument6" || name == "argument7" || name == "argument8" || name == "argument9" || name == "circuit-id" || name == "format")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerInterface()
    :
    profile{YType::str, "profile"}
    	,
    server_dhcp_circuit_id(nullptr) // presence node
{

    yang_name = "server-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::~ServerInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_data() const
{
    return profile.is_set
	|| (server_dhcp_circuit_id !=  nullptr && server_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (server_dhcp_circuit_id !=  nullptr && server_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-dhcp-circuit-id")
    {
        if(server_dhcp_circuit_id == nullptr)
        {
            server_dhcp_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId>();
        }
        return server_dhcp_circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server_dhcp_circuit_id != nullptr)
    {
        children["server-dhcp-circuit-id"] = server_dhcp_circuit_id;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-dhcp-circuit-id" || name == "profile")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::ServerDhcpCircuitId()
    :
    argument1{YType::enumeration, "argument1"},
    argument10{YType::enumeration, "argument10"},
    argument11{YType::enumeration, "argument11"},
    argument12{YType::enumeration, "argument12"},
    argument13{YType::enumeration, "argument13"},
    argument14{YType::enumeration, "argument14"},
    argument15{YType::enumeration, "argument15"},
    argument16{YType::enumeration, "argument16"},
    argument2{YType::enumeration, "argument2"},
    argument3{YType::enumeration, "argument3"},
    argument4{YType::enumeration, "argument4"},
    argument5{YType::enumeration, "argument5"},
    argument6{YType::enumeration, "argument6"},
    argument7{YType::enumeration, "argument7"},
    argument8{YType::enumeration, "argument8"},
    argument9{YType::enumeration, "argument9"},
    circuit_id{YType::str, "circuit-id"},
    format{YType::enumeration, "format"}
{

    yang_name = "server-dhcp-circuit-id"; yang_parent_name = "server-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::~ServerDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(argument1.yfilter)
	|| ydk::is_set(argument10.yfilter)
	|| ydk::is_set(argument11.yfilter)
	|| ydk::is_set(argument12.yfilter)
	|| ydk::is_set(argument13.yfilter)
	|| ydk::is_set(argument14.yfilter)
	|| ydk::is_set(argument15.yfilter)
	|| ydk::is_set(argument16.yfilter)
	|| ydk::is_set(argument2.yfilter)
	|| ydk::is_set(argument3.yfilter)
	|| ydk::is_set(argument4.yfilter)
	|| ydk::is_set(argument5.yfilter)
	|| ydk::is_set(argument6.yfilter)
	|| ydk::is_set(argument7.yfilter)
	|| ydk::is_set(argument8.yfilter)
	|| ydk::is_set(argument9.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-dhcp-circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.yfilter)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.yfilter)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.yfilter)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.yfilter)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.yfilter)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.yfilter)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.yfilter)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.yfilter)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.yfilter)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.yfilter)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.yfilter)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.yfilter)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.yfilter)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.yfilter)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.yfilter)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.yfilter)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "argument1")
    {
        argument1 = value;
        argument1.value_namespace = name_space;
        argument1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
        argument10.value_namespace = name_space;
        argument10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
        argument11.value_namespace = name_space;
        argument11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
        argument12.value_namespace = name_space;
        argument12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
        argument13.value_namespace = name_space;
        argument13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
        argument14.value_namespace = name_space;
        argument14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
        argument15.value_namespace = name_space;
        argument15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
        argument16.value_namespace = name_space;
        argument16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
        argument2.value_namespace = name_space;
        argument2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
        argument3.value_namespace = name_space;
        argument3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
        argument4.value_namespace = name_space;
        argument4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
        argument5.value_namespace = name_space;
        argument5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
        argument6.value_namespace = name_space;
        argument6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
        argument7.value_namespace = name_space;
        argument7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
        argument8.value_namespace = name_space;
        argument8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
        argument9.value_namespace = name_space;
        argument9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "argument1")
    {
        argument1.yfilter = yfilter;
    }
    if(value_path == "argument10")
    {
        argument10.yfilter = yfilter;
    }
    if(value_path == "argument11")
    {
        argument11.yfilter = yfilter;
    }
    if(value_path == "argument12")
    {
        argument12.yfilter = yfilter;
    }
    if(value_path == "argument13")
    {
        argument13.yfilter = yfilter;
    }
    if(value_path == "argument14")
    {
        argument14.yfilter = yfilter;
    }
    if(value_path == "argument15")
    {
        argument15.yfilter = yfilter;
    }
    if(value_path == "argument16")
    {
        argument16.yfilter = yfilter;
    }
    if(value_path == "argument2")
    {
        argument2.yfilter = yfilter;
    }
    if(value_path == "argument3")
    {
        argument3.yfilter = yfilter;
    }
    if(value_path == "argument4")
    {
        argument4.yfilter = yfilter;
    }
    if(value_path == "argument5")
    {
        argument5.yfilter = yfilter;
    }
    if(value_path == "argument6")
    {
        argument6.yfilter = yfilter;
    }
    if(value_path == "argument7")
    {
        argument7.yfilter = yfilter;
    }
    if(value_path == "argument8")
    {
        argument8.yfilter = yfilter;
    }
    if(value_path == "argument9")
    {
        argument9.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "argument1" || name == "argument10" || name == "argument11" || name == "argument12" || name == "argument13" || name == "argument14" || name == "argument15" || name == "argument16" || name == "argument2" || name == "argument3" || name == "argument4" || name == "argument5" || name == "argument6" || name == "argument7" || name == "argument8" || name == "argument9" || name == "circuit-id" || name == "format")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopInterface()
    :
    snoop_circuit_id(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId>())
{
    snoop_circuit_id->parent = this;

    yang_name = "snoop-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::~SnoopInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_data() const
{
    return (snoop_circuit_id !=  nullptr && snoop_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_operation() const
{
    return is_set(yfilter)
	|| (snoop_circuit_id !=  nullptr && snoop_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snoop-circuit-id")
    {
        if(snoop_circuit_id == nullptr)
        {
            snoop_circuit_id = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId>();
        }
        return snoop_circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snoop_circuit_id != nullptr)
    {
        children["snoop-circuit-id"] = snoop_circuit_id;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snoop-circuit-id")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::SnoopCircuitId()
    :
    circuit_id_value{YType::str, "circuit-id-value"},
    format_type{YType::uint32, "format-type"}
{

    yang_name = "snoop-circuit-id"; yang_parent_name = "snoop-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::~SnoopCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_data() const
{
    return circuit_id_value.is_set
	|| format_type.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(circuit_id_value.yfilter)
	|| ydk::is_set(format_type.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop-circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id_value.is_set || is_set(circuit_id_value.yfilter)) leaf_name_data.push_back(circuit_id_value.get_name_leafdata());
    if (format_type.is_set || is_set(format_type.yfilter)) leaf_name_data.push_back(format_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "circuit-id-value")
    {
        circuit_id_value = value;
        circuit_id_value.value_namespace = name_space;
        circuit_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-type")
    {
        format_type = value;
        format_type.value_namespace = name_space;
        format_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "circuit-id-value")
    {
        circuit_id_value.yfilter = yfilter;
    }
    if(value_path == "format-type")
    {
        format_type.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id-value" || name == "format-type")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::StaticMode()
    :
    statics(std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics>())
{
    statics->parent = this;

    yang_name = "static-mode"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::~StaticMode()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::has_data() const
{
    return (statics !=  nullptr && statics->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::has_operation() const
{
    return is_set(yfilter)
	|| (statics !=  nullptr && statics->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statics")
    {
        if(statics == nullptr)
        {
            statics = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics>();
        }
        return statics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::StaticMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statics != nullptr)
    {
        children["statics"] = statics;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statics")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Statics()
{

    yang_name = "statics"; yang_parent_name = "static-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::~Statics()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        for(auto const & c : static_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::Static_()
    :
    mac_address{YType::str, "mac-address"},
    client_id{YType::uint32, "client-id"},
    layer{YType::enumeration, "layer"},
    static_address{YType::str, "static-address"}
{

    yang_name = "static"; yang_parent_name = "statics"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::~Static_()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::has_data() const
{
    return mac_address.is_set
	|| client_id.is_set
	|| layer.is_set
	|| static_address.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(layer.yfilter)
	|| ydk::is_set(static_address.yfilter);
}

std::string Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[mac-address='" <<mac_address <<"']" <<"[client-id='" <<client_id <<"']" <<"[layer='" <<layer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (layer.is_set || is_set(layer.yfilter)) leaf_name_data.push_back(layer.get_name_leafdata());
    if (static_address.is_set || is_set(static_address.yfilter)) leaf_name_data.push_back(static_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer")
    {
        layer = value;
        layer.value_namespace = name_space;
        layer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-address")
    {
        static_address = value;
        static_address.value_namespace = name_space;
        static_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "layer")
    {
        layer.yfilter = yfilter;
    }
    if(value_path == "static-address")
    {
        static_address.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "client-id" || name == "layer" || name == "static-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profiles()
{

    yang_name = "profiles"; yang_parent_name = "ipv4-dhcpd"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"}
    	,
    modes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes>())
{
    modes->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| (modes !=  nullptr && modes->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (modes !=  nullptr && modes->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/profiles/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modes")
    {
        if(modes == nullptr)
        {
            modes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes>();
        }
        return modes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modes != nullptr)
    {
        children["modes"] = modes;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modes" || name == "profile-name")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Modes()
{

    yang_name = "modes"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::~Modes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_data() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_operation() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        for(auto const & c : mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode>();
        c->parent = this;
        mode.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mode)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Mode()
    :
    mode{YType::enumeration, "mode"},
    enable{YType::empty, "enable"}
    	,
    base(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base>())
	,proxy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy>())
	,relay(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay>())
	,server(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server>())
	,snoop(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop>())
{
    base->parent = this;
    proxy->parent = this;
    relay->parent = this;
    server->parent = this;
    snoop->parent = this;

    yang_name = "mode"; yang_parent_name = "modes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::~Mode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_data() const
{
    return mode.is_set
	|| enable.is_set
	|| (base !=  nullptr && base->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (snoop !=  nullptr && snoop->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (snoop !=  nullptr && snoop->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode" <<"[mode='" <<mode <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base>();
        }
        return base;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy>();
        }
        return proxy;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server>();
        }
        return server;
    }

    if(child_yang_name == "snoop")
    {
        if(snoop == nullptr)
        {
            snoop = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop>();
        }
        return snoop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(snoop != nullptr)
    {
        children["snoop"] = snoop;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "proxy" || name == "relay" || name == "server" || name == "snoop" || name == "mode" || name == "enable")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Base()
    :
    enable{YType::empty, "enable"}
    	,
    base_match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch>())
	,base_relay_opt(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt>())
	,default_profile(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile>())
	,match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match>())
{
    base_match->parent = this;
    base_relay_opt->parent = this;
    default_profile->parent = this;
    match->parent = this;

    yang_name = "base"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::~Base()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::has_data() const
{
    return enable.is_set
	|| (base_match !=  nullptr && base_match->has_data())
	|| (base_relay_opt !=  nullptr && base_relay_opt->has_data())
	|| (default_profile !=  nullptr && default_profile->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (base_match !=  nullptr && base_match->has_operation())
	|| (base_relay_opt !=  nullptr && base_relay_opt->has_operation())
	|| (default_profile !=  nullptr && default_profile->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-match")
    {
        if(base_match == nullptr)
        {
            base_match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch>();
        }
        return base_match;
    }

    if(child_yang_name == "base-relay-opt")
    {
        if(base_relay_opt == nullptr)
        {
            base_relay_opt = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt>();
        }
        return base_relay_opt;
    }

    if(child_yang_name == "default-profile")
    {
        if(default_profile == nullptr)
        {
            default_profile = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile>();
        }
        return default_profile;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_match != nullptr)
    {
        children["base-match"] = base_match;
    }

    if(base_relay_opt != nullptr)
    {
        children["base-relay-opt"] = base_relay_opt;
    }

    if(default_profile != nullptr)
    {
        children["default-profile"] = default_profile;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-match" || name == "base-relay-opt" || name == "default-profile" || name == "match" || name == "enable")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::BaseMatch()
    :
    options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options>())
{
    options->parent = this;

    yang_name = "base-match"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::~BaseMatch()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::has_data() const
{
    return (options !=  nullptr && options->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::has_operation() const
{
    return is_set(yfilter)
	|| (options !=  nullptr && options->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(options != nullptr)
    {
        children["options"] = options;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Options()
{

    yang_name = "options"; yang_parent_name = "base-match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::~Options()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::has_data() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::has_operation() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        for(auto const & c : option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option>();
        c->parent = this;
        option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::Option()
    :
    opt60{YType::int32, "opt60"},
    opt60_hex_str{YType::str, "opt60-hex-str"},
    format{YType::int32, "format"}
    	,
    option_profile(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile>())
{
    option_profile->parent = this;

    yang_name = "option"; yang_parent_name = "options"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::~Option()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::has_data() const
{
    return opt60.is_set
	|| opt60_hex_str.is_set
	|| format.is_set
	|| (option_profile !=  nullptr && option_profile->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opt60.yfilter)
	|| ydk::is_set(opt60_hex_str.yfilter)
	|| ydk::is_set(format.yfilter)
	|| (option_profile !=  nullptr && option_profile->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option" <<"[opt60='" <<opt60 <<"']" <<"[opt60-hex-str='" <<opt60_hex_str <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opt60.is_set || is_set(opt60.yfilter)) leaf_name_data.push_back(opt60.get_name_leafdata());
    if (opt60_hex_str.is_set || is_set(opt60_hex_str.yfilter)) leaf_name_data.push_back(opt60_hex_str.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-profile")
    {
        if(option_profile == nullptr)
        {
            option_profile = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile>();
        }
        return option_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option_profile != nullptr)
    {
        children["option-profile"] = option_profile;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opt60")
    {
        opt60 = value;
        opt60.value_namespace = name_space;
        opt60.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opt60-hex-str")
    {
        opt60_hex_str = value;
        opt60_hex_str.value_namespace = name_space;
        opt60_hex_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opt60")
    {
        opt60.yfilter = yfilter;
    }
    if(value_path == "opt60-hex-str")
    {
        opt60_hex_str.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-profile" || name == "opt60" || name == "opt60-hex-str" || name == "format")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::OptionProfile()
    :
    profile_mode{YType::int32, "profile-mode"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "option-profile"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::~OptionProfile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::has_data() const
{
    return profile_mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_mode.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_mode.is_set || is_set(profile_mode.yfilter)) leaf_name_data.push_back(profile_mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-mode")
    {
        profile_mode = value;
        profile_mode.value_namespace = name_space;
        profile_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-mode")
    {
        profile_mode.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-mode" || name == "profile-name")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::BaseRelayOpt()
    :
    authenticate{YType::int32, "authenticate"},
    remote_id{YType::str, "remote-id"}
{

    yang_name = "base-relay-opt"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::~BaseRelayOpt()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::has_data() const
{
    return authenticate.is_set
	|| remote_id.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(remote_id.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-relay-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticate" || name == "remote-id")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::DefaultProfile()
    :
    profile_mode{YType::int32, "profile-mode"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "default-profile"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::~DefaultProfile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::has_data() const
{
    return profile_mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_mode.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_mode.is_set || is_set(profile_mode.yfilter)) leaf_name_data.push_back(profile_mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-mode")
    {
        profile_mode = value;
        profile_mode.value_namespace = name_space;
        profile_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-mode")
    {
        profile_mode.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-mode" || name == "profile-name")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::Match()
    :
    def_options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions>())
	,option_filters(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters>())
{
    def_options->parent = this;
    option_filters->parent = this;

    yang_name = "match"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::has_data() const
{
    return (def_options !=  nullptr && def_options->has_data())
	|| (option_filters !=  nullptr && option_filters->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::has_operation() const
{
    return is_set(yfilter)
	|| (def_options !=  nullptr && def_options->has_operation())
	|| (option_filters !=  nullptr && option_filters->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "def-options")
    {
        if(def_options == nullptr)
        {
            def_options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions>();
        }
        return def_options;
    }

    if(child_yang_name == "option-filters")
    {
        if(option_filters == nullptr)
        {
            option_filters = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters>();
        }
        return option_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(def_options != nullptr)
    {
        children["def-options"] = def_options;
    }

    if(option_filters != nullptr)
    {
        children["option-filters"] = option_filters;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "def-options" || name == "option-filters")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOptions()
{

    yang_name = "def-options"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::~DefOptions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::has_data() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::has_operation() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "def-option")
    {
        for(auto const & c : def_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption>();
        c->parent = this;
        def_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : def_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "def-option")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::DefOption()
    :
    def_matchoption{YType::int32, "def-matchoption"},
    def_matchaction{YType::enumeration, "def-matchaction"}
{

    yang_name = "def-option"; yang_parent_name = "def-options"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::~DefOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::has_data() const
{
    return def_matchoption.is_set
	|| def_matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(def_matchoption.yfilter)
	|| ydk::is_set(def_matchaction.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-option" <<"[def-matchoption='" <<def_matchoption <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (def_matchoption.is_set || is_set(def_matchoption.yfilter)) leaf_name_data.push_back(def_matchoption.get_name_leafdata());
    if (def_matchaction.is_set || is_set(def_matchaction.yfilter)) leaf_name_data.push_back(def_matchaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "def-matchoption")
    {
        def_matchoption = value;
        def_matchoption.value_namespace = name_space;
        def_matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "def-matchaction")
    {
        def_matchaction = value;
        def_matchaction.value_namespace = name_space;
        def_matchaction.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "def-matchoption")
    {
        def_matchoption.yfilter = yfilter;
    }
    if(value_path == "def-matchaction")
    {
        def_matchaction.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "def-matchoption" || name == "def-matchaction")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilters()
{

    yang_name = "option-filters"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::~OptionFilters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::has_data() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::has_operation() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-filter")
    {
        for(auto const & c : option_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter>();
        c->parent = this;
        option_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-filter")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::OptionFilter()
    :
    matchoption{YType::int32, "matchoption"},
    pattern{YType::str, "pattern"},
    format{YType::int32, "format"},
    option_action{YType::enumeration, "option-action"}
{

    yang_name = "option-filter"; yang_parent_name = "option-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::~OptionFilter()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::has_data() const
{
    return matchoption.is_set
	|| pattern.is_set
	|| format.is_set
	|| option_action.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matchoption.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(option_action.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filter" <<"[matchoption='" <<matchoption <<"']" <<"[pattern='" <<pattern <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.yfilter)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (option_action.is_set || is_set(option_action.yfilter)) leaf_name_data.push_back(option_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
        matchoption.value_namespace = name_space;
        matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-action")
    {
        option_action = value;
        option_action.value_namespace = name_space;
        option_action.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matchoption")
    {
        matchoption.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "option-action")
    {
        option_action.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matchoption" || name == "pattern" || name == "format" || name == "option-action")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Proxy()
    :
    delayed_authen_proxy{YType::empty, "delayed-authen-proxy"},
    enable{YType::empty, "enable"},
    proxy_allow_move{YType::empty, "proxy-allow-move"},
    secure_arp{YType::empty, "secure-arp"}
    	,
    auth_username(nullptr) // presence node
	,broadcast_flag(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag>())
	,classes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes>())
	,giaddr(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr>())
	,lease_proxy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy>())
	,limit_lease(nullptr) // presence node
	,match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match>())
	,relay_information(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation>())
	,sessions(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs>())
{
    broadcast_flag->parent = this;
    classes->parent = this;
    giaddr->parent = this;
    lease_proxy->parent = this;
    match->parent = this;
    relay_information->parent = this;
    sessions->parent = this;
    vrfs->parent = this;

    yang_name = "proxy"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::~Proxy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::has_data() const
{
    return delayed_authen_proxy.is_set
	|| enable.is_set
	|| proxy_allow_move.is_set
	|| secure_arp.is_set
	|| (auth_username !=  nullptr && auth_username->has_data())
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (giaddr !=  nullptr && giaddr->has_data())
	|| (lease_proxy !=  nullptr && lease_proxy->has_data())
	|| (limit_lease !=  nullptr && limit_lease->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (relay_information !=  nullptr && relay_information->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delayed_authen_proxy.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(proxy_allow_move.yfilter)
	|| ydk::is_set(secure_arp.yfilter)
	|| (auth_username !=  nullptr && auth_username->has_operation())
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (giaddr !=  nullptr && giaddr->has_operation())
	|| (lease_proxy !=  nullptr && lease_proxy->has_operation())
	|| (limit_lease !=  nullptr && limit_lease->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (relay_information !=  nullptr && relay_information->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_authen_proxy.is_set || is_set(delayed_authen_proxy.yfilter)) leaf_name_data.push_back(delayed_authen_proxy.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (proxy_allow_move.is_set || is_set(proxy_allow_move.yfilter)) leaf_name_data.push_back(proxy_allow_move.get_name_leafdata());
    if (secure_arp.is_set || is_set(secure_arp.yfilter)) leaf_name_data.push_back(secure_arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-username")
    {
        if(auth_username == nullptr)
        {
            auth_username = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername>();
        }
        return auth_username;
    }

    if(child_yang_name == "broadcast-flag")
    {
        if(broadcast_flag == nullptr)
        {
            broadcast_flag = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag>();
        }
        return broadcast_flag;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes>();
        }
        return classes;
    }

    if(child_yang_name == "giaddr")
    {
        if(giaddr == nullptr)
        {
            giaddr = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr>();
        }
        return giaddr;
    }

    if(child_yang_name == "lease-proxy")
    {
        if(lease_proxy == nullptr)
        {
            lease_proxy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy>();
        }
        return lease_proxy;
    }

    if(child_yang_name == "limit-lease")
    {
        if(limit_lease == nullptr)
        {
            limit_lease = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease>();
        }
        return limit_lease;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match>();
        }
        return match;
    }

    if(child_yang_name == "relay-information")
    {
        if(relay_information == nullptr)
        {
            relay_information = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation>();
        }
        return relay_information;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_username != nullptr)
    {
        children["auth-username"] = auth_username;
    }

    if(broadcast_flag != nullptr)
    {
        children["broadcast-flag"] = broadcast_flag;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    if(giaddr != nullptr)
    {
        children["giaddr"] = giaddr;
    }

    if(lease_proxy != nullptr)
    {
        children["lease-proxy"] = lease_proxy;
    }

    if(limit_lease != nullptr)
    {
        children["limit-lease"] = limit_lease;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(relay_information != nullptr)
    {
        children["relay-information"] = relay_information;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-authen-proxy")
    {
        delayed_authen_proxy = value;
        delayed_authen_proxy.value_namespace = name_space;
        delayed_authen_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-allow-move")
    {
        proxy_allow_move = value;
        proxy_allow_move.value_namespace = name_space;
        proxy_allow_move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-arp")
    {
        secure_arp = value;
        secure_arp.value_namespace = name_space;
        secure_arp.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-authen-proxy")
    {
        delayed_authen_proxy.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "proxy-allow-move")
    {
        proxy_allow_move.yfilter = yfilter;
    }
    if(value_path == "secure-arp")
    {
        secure_arp.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-username" || name == "broadcast-flag" || name == "classes" || name == "giaddr" || name == "lease-proxy" || name == "limit-lease" || name == "match" || name == "relay-information" || name == "sessions" || name == "vrfs" || name == "delayed-authen-proxy" || name == "enable" || name == "proxy-allow-move" || name == "secure-arp")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::AuthUsername()
    :
    arg1{YType::enumeration, "arg1"},
    arg2{YType::enumeration, "arg2"}
{

    yang_name = "auth-username"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::~AuthUsername()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::has_data() const
{
    return arg1.is_set
	|| arg2.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arg1.yfilter)
	|| ydk::is_set(arg2.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arg1.is_set || is_set(arg1.yfilter)) leaf_name_data.push_back(arg1.get_name_leafdata());
    if (arg2.is_set || is_set(arg2.yfilter)) leaf_name_data.push_back(arg2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arg1")
    {
        arg1 = value;
        arg1.value_namespace = name_space;
        arg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arg2")
    {
        arg2 = value;
        arg2.value_namespace = name_space;
        arg2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arg1")
    {
        arg1.yfilter = yfilter;
    }
    if(value_path == "arg2")
    {
        arg2.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::AuthUsername::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arg1" || name == "arg2")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::BroadcastFlag()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "broadcast-flag"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::~BroadcastFlag()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Classes()
{

    yang_name = "classes"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::~Classes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    enable{YType::empty, "enable"}
    	,
    match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs>())
{
    match->parent = this;
    vrfs->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::~Class_()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| enable.is_set
	|| (match !=  nullptr && match->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match>();
        }
        return match;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "vrfs" || name == "class-name" || name == "enable")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Match()
    :
    vrf{YType::str, "vrf"}
    	,
    option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option>())
{
    option->parent = this;

    yang_name = "match"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::has_data() const
{
    return vrf.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "vrf")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::Option()
    :
    bit_mask{YType::str, "bit-mask"},
    option_type{YType::enumeration, "option-type"},
    pattern{YType::str, "pattern"}
{

    yang_name = "option"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::~Option()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::has_data() const
{
    return bit_mask.is_set
	|| option_type.is_set
	|| pattern.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_mask.yfilter)
	|| ydk::is_set(option_type.yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_mask.is_set || is_set(bit_mask.yfilter)) leaf_name_data.push_back(bit_mask.get_name_leafdata());
    if (option_type.is_set || is_set(option_type.yfilter)) leaf_name_data.push_back(option_type.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-mask")
    {
        bit_mask = value;
        bit_mask.value_namespace = name_space;
        bit_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-type")
    {
        option_type = value;
        option_type.value_namespace = name_space;
        option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-mask")
    {
        bit_mask.yfilter = yfilter;
    }
    if(value_path == "option-type")
    {
        option_type.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-mask" || name == "option-type" || name == "pattern")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper_addresses != nullptr)
    {
        children["helper-addresses"] = helper_addresses;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-addresses" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{

    yang_name = "helper-addresses"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    server_address{YType::str, "server-address"},
    gateway_address{YType::str, "gateway-address"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return server_address.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| ydk::is_set(gateway_address.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[server-address='" <<server_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.yfilter)) leaf_name_data.push_back(gateway_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
        gateway_address.value_namespace = name_space;
        gateway_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
    if(value_path == "gateway-address")
    {
        gateway_address.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-address" || name == "gateway-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::Giaddr()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "giaddr"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::~Giaddr()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "giaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Giaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::LeaseProxy()
    :
    client_lease_time{YType::uint32, "client-lease-time"},
    set_server_options{YType::empty, "set-server-options"}
{

    yang_name = "lease-proxy"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::~LeaseProxy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::has_data() const
{
    return client_lease_time.is_set
	|| set_server_options.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_lease_time.yfilter)
	|| ydk::is_set(set_server_options.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_lease_time.is_set || is_set(client_lease_time.yfilter)) leaf_name_data.push_back(client_lease_time.get_name_leafdata());
    if (set_server_options.is_set || is_set(set_server_options.yfilter)) leaf_name_data.push_back(set_server_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-lease-time")
    {
        client_lease_time = value;
        client_lease_time.value_namespace = name_space;
        client_lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-server-options")
    {
        set_server_options = value;
        set_server_options.value_namespace = name_space;
        set_server_options.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-lease-time")
    {
        client_lease_time.yfilter = yfilter;
    }
    if(value_path == "set-server-options")
    {
        set_server_options.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-lease-time" || name == "set-server-options")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::LimitLease()
    :
    limit_lease_count{YType::uint32, "limit-lease-count"},
    limit_type{YType::enumeration, "limit-type"}
{

    yang_name = "limit-lease"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::~LimitLease()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::has_data() const
{
    return limit_lease_count.is_set
	|| limit_type.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit_lease_count.yfilter)
	|| ydk::is_set(limit_type.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit_lease_count.is_set || is_set(limit_lease_count.yfilter)) leaf_name_data.push_back(limit_lease_count.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.yfilter)) leaf_name_data.push_back(limit_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit-lease-count")
    {
        limit_lease_count = value;
        limit_lease_count.value_namespace = name_space;
        limit_lease_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
        limit_type.value_namespace = name_space;
        limit_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit-lease-count")
    {
        limit_lease_count.yfilter = yfilter;
    }
    if(value_path == "limit-type")
    {
        limit_type.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit-lease-count" || name == "limit-type")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::Match()
    :
    def_options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions>())
	,option_filters(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters>())
{
    def_options->parent = this;
    option_filters->parent = this;

    yang_name = "match"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::has_data() const
{
    return (def_options !=  nullptr && def_options->has_data())
	|| (option_filters !=  nullptr && option_filters->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::has_operation() const
{
    return is_set(yfilter)
	|| (def_options !=  nullptr && def_options->has_operation())
	|| (option_filters !=  nullptr && option_filters->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "def-options")
    {
        if(def_options == nullptr)
        {
            def_options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions>();
        }
        return def_options;
    }

    if(child_yang_name == "option-filters")
    {
        if(option_filters == nullptr)
        {
            option_filters = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters>();
        }
        return option_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(def_options != nullptr)
    {
        children["def-options"] = def_options;
    }

    if(option_filters != nullptr)
    {
        children["option-filters"] = option_filters;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "def-options" || name == "option-filters")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOptions()
{

    yang_name = "def-options"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::~DefOptions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::has_data() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::has_operation() const
{
    for (std::size_t index=0; index<def_option.size(); index++)
    {
        if(def_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "def-option")
    {
        for(auto const & c : def_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption>();
        c->parent = this;
        def_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : def_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "def-option")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::DefOption()
    :
    def_matchoption{YType::int32, "def-matchoption"},
    def_matchaction{YType::enumeration, "def-matchaction"}
{

    yang_name = "def-option"; yang_parent_name = "def-options"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::~DefOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::has_data() const
{
    return def_matchoption.is_set
	|| def_matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(def_matchoption.yfilter)
	|| ydk::is_set(def_matchaction.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "def-option" <<"[def-matchoption='" <<def_matchoption <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (def_matchoption.is_set || is_set(def_matchoption.yfilter)) leaf_name_data.push_back(def_matchoption.get_name_leafdata());
    if (def_matchaction.is_set || is_set(def_matchaction.yfilter)) leaf_name_data.push_back(def_matchaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "def-matchoption")
    {
        def_matchoption = value;
        def_matchoption.value_namespace = name_space;
        def_matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "def-matchaction")
    {
        def_matchaction = value;
        def_matchaction.value_namespace = name_space;
        def_matchaction.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "def-matchoption")
    {
        def_matchoption.yfilter = yfilter;
    }
    if(value_path == "def-matchaction")
    {
        def_matchaction.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "def-matchoption" || name == "def-matchaction")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilters()
{

    yang_name = "option-filters"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::~OptionFilters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::has_data() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::has_operation() const
{
    for (std::size_t index=0; index<option_filter.size(); index++)
    {
        if(option_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-filter")
    {
        for(auto const & c : option_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter>();
        c->parent = this;
        option_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-filter")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::OptionFilter()
    :
    matchoption{YType::int32, "matchoption"},
    pattern{YType::str, "pattern"},
    format{YType::int32, "format"},
    matchaction{YType::enumeration, "matchaction"}
{

    yang_name = "option-filter"; yang_parent_name = "option-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::~OptionFilter()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::has_data() const
{
    return matchoption.is_set
	|| pattern.is_set
	|| format.is_set
	|| matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matchoption.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(matchaction.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-filter" <<"[matchoption='" <<matchoption <<"']" <<"[pattern='" <<pattern <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.yfilter)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (matchaction.is_set || is_set(matchaction.yfilter)) leaf_name_data.push_back(matchaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
        matchoption.value_namespace = name_space;
        matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchaction")
    {
        matchaction = value;
        matchaction.value_namespace = name_space;
        matchaction.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matchoption")
    {
        matchoption.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "matchaction")
    {
        matchaction.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matchoption" || name == "pattern" || name == "format" || name == "matchaction")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::RelayInformation()
    :
    allow_untrusted{YType::empty, "allow-untrusted"},
    authenticate{YType::enumeration, "authenticate"},
    check{YType::empty, "check"},
    circuit_id{YType::empty, "circuit-id"},
    option{YType::empty, "option"},
    policy{YType::enumeration, "policy"},
    remote_id{YType::str, "remote-id"},
    remote_id_suppress{YType::empty, "remote-id-suppress"},
    remote_id_xr{YType::empty, "remote-id-xr"},
    vpn{YType::empty, "vpn"},
    vpn_mode{YType::enumeration, "vpn-mode"}
{

    yang_name = "relay-information"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::~RelayInformation()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::has_data() const
{
    return allow_untrusted.is_set
	|| authenticate.is_set
	|| check.is_set
	|| circuit_id.is_set
	|| option.is_set
	|| policy.is_set
	|| remote_id.is_set
	|| remote_id_suppress.is_set
	|| remote_id_xr.is_set
	|| vpn.is_set
	|| vpn_mode.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(check.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(remote_id_suppress.yfilter)
	|| ydk::is_set(remote_id_xr.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(vpn_mode.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (remote_id_suppress.is_set || is_set(remote_id_suppress.yfilter)) leaf_name_data.push_back(remote_id_suppress.get_name_leafdata());
    if (remote_id_xr.is_set || is_set(remote_id_xr.yfilter)) leaf_name_data.push_back(remote_id_xr.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (vpn_mode.is_set || is_set(vpn_mode.yfilter)) leaf_name_data.push_back(vpn_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id-suppress")
    {
        remote_id_suppress = value;
        remote_id_suppress.value_namespace = name_space;
        remote_id_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id-xr")
    {
        remote_id_xr = value;
        remote_id_xr.value_namespace = name_space;
        remote_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode = value;
        vpn_mode.value_namespace = name_space;
        vpn_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "remote-id-suppress")
    {
        remote_id_suppress.yfilter = yfilter;
    }
    if(value_path == "remote-id-xr")
    {
        remote_id_xr.yfilter = yfilter;
    }
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-untrusted" || name == "authenticate" || name == "check" || name == "circuit-id" || name == "option" || name == "policy" || name == "remote-id" || name == "remote-id-suppress" || name == "remote-id-xr" || name == "vpn" || name == "vpn-mode")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::Sessions()
    :
    proxy_throttle_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType>())
{
    proxy_throttle_type->parent = this;

    yang_name = "sessions"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::~Sessions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::has_data() const
{
    return (proxy_throttle_type !=  nullptr && proxy_throttle_type->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| (proxy_throttle_type !=  nullptr && proxy_throttle_type->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-throttle-type")
    {
        if(proxy_throttle_type == nullptr)
        {
            proxy_throttle_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType>();
        }
        return proxy_throttle_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proxy_throttle_type != nullptr)
    {
        children["proxy-throttle-type"] = proxy_throttle_type;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-throttle-type")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyThrottleType()
    :
    proxy_mac_throttle(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle>())
{
    proxy_mac_throttle->parent = this;

    yang_name = "proxy-throttle-type"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::~ProxyThrottleType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::has_data() const
{
    return (proxy_mac_throttle !=  nullptr && proxy_mac_throttle->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::has_operation() const
{
    return is_set(yfilter)
	|| (proxy_mac_throttle !=  nullptr && proxy_mac_throttle->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-throttle-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-mac-throttle")
    {
        if(proxy_mac_throttle == nullptr)
        {
            proxy_mac_throttle = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle>();
        }
        return proxy_mac_throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proxy_mac_throttle != nullptr)
    {
        children["proxy-mac-throttle"] = proxy_mac_throttle;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-mac-throttle")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::ProxyMacThrottle()
    :
    num_block{YType::uint32, "num-block"},
    num_discover{YType::uint32, "num-discover"},
    num_request{YType::uint32, "num-request"}
{

    yang_name = "proxy-mac-throttle"; yang_parent_name = "proxy-throttle-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::~ProxyMacThrottle()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::has_data() const
{
    return num_block.is_set
	|| num_discover.is_set
	|| num_request.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_block.yfilter)
	|| ydk::is_set(num_discover.yfilter)
	|| ydk::is_set(num_request.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-mac-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_block.is_set || is_set(num_block.yfilter)) leaf_name_data.push_back(num_block.get_name_leafdata());
    if (num_discover.is_set || is_set(num_discover.yfilter)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_request.is_set || is_set(num_request.yfilter)) leaf_name_data.push_back(num_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-block")
    {
        num_block = value;
        num_block.value_namespace = name_space;
        num_block.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discover")
    {
        num_discover = value;
        num_discover.value_namespace = name_space;
        num_discover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-request")
    {
        num_request = value;
        num_request.value_namespace = name_space;
        num_request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-block")
    {
        num_block.yfilter = yfilter;
    }
    if(value_path == "num-discover")
    {
        num_discover.yfilter = yfilter;
    }
    if(value_path == "num-request")
    {
        num_request.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-block" || name == "num-discover" || name == "num-request")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper_addresses != nullptr)
    {
        children["helper-addresses"] = helper_addresses;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-addresses" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{

    yang_name = "helper-addresses"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    server_address{YType::str, "server-address"},
    gateway_address{YType::str, "gateway-address"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return server_address.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| ydk::is_set(gateway_address.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[server-address='" <<server_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.yfilter)) leaf_name_data.push_back(gateway_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
        gateway_address.value_namespace = name_space;
        gateway_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
    if(value_path == "gateway-address")
    {
        gateway_address.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-address" || name == "gateway-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Relay()
    :
    mac_mismatch_action{YType::enumeration, "mac-mismatch-action"}
    	,
    broadcast_policy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy>())
	,gi_addr_policy(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy>())
	,relay_information_option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs>())
{
    broadcast_policy->parent = this;
    gi_addr_policy->parent = this;
    relay_information_option->parent = this;
    vrfs->parent = this;

    yang_name = "relay"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::~Relay()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_data() const
{
    return mac_mismatch_action.is_set
	|| (broadcast_policy !=  nullptr && broadcast_policy->has_data())
	|| (gi_addr_policy !=  nullptr && gi_addr_policy->has_data())
	|| (relay_information_option !=  nullptr && relay_information_option->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_mismatch_action.yfilter)
	|| (broadcast_policy !=  nullptr && broadcast_policy->has_operation())
	|| (gi_addr_policy !=  nullptr && gi_addr_policy->has_operation())
	|| (relay_information_option !=  nullptr && relay_information_option->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_mismatch_action.is_set || is_set(mac_mismatch_action.yfilter)) leaf_name_data.push_back(mac_mismatch_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-policy")
    {
        if(broadcast_policy == nullptr)
        {
            broadcast_policy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy>();
        }
        return broadcast_policy;
    }

    if(child_yang_name == "gi-addr-policy")
    {
        if(gi_addr_policy == nullptr)
        {
            gi_addr_policy = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy>();
        }
        return gi_addr_policy;
    }

    if(child_yang_name == "relay-information-option")
    {
        if(relay_information_option == nullptr)
        {
            relay_information_option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption>();
        }
        return relay_information_option;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_policy != nullptr)
    {
        children["broadcast-policy"] = broadcast_policy;
    }

    if(gi_addr_policy != nullptr)
    {
        children["gi-addr-policy"] = gi_addr_policy;
    }

    if(relay_information_option != nullptr)
    {
        children["relay-information-option"] = relay_information_option;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-mismatch-action")
    {
        mac_mismatch_action = value;
        mac_mismatch_action.value_namespace = name_space;
        mac_mismatch_action.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-mismatch-action")
    {
        mac_mismatch_action.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-policy" || name == "gi-addr-policy" || name == "relay-information-option" || name == "vrfs" || name == "mac-mismatch-action")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::BroadcastPolicy()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "broadcast-policy"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::~BroadcastPolicy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::GiAddrPolicy()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "gi-addr-policy"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::~GiAddrPolicy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gi-addr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::RelayInformationOption()
    :
    allow_untrusted{YType::empty, "allow-untrusted"},
    check{YType::empty, "check"},
    insert{YType::empty, "insert"},
    policy{YType::enumeration, "policy"},
    subscriber_id{YType::str, "subscriber-id"},
    vpn{YType::empty, "vpn"},
    vpn_mode{YType::enumeration, "vpn-mode"}
{

    yang_name = "relay-information-option"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::~RelayInformationOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_data() const
{
    return allow_untrusted.is_set
	|| check.is_set
	|| insert.is_set
	|| policy.is_set
	|| subscriber_id.is_set
	|| vpn.is_set
	|| vpn_mode.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| ydk::is_set(check.yfilter)
	|| ydk::is_set(insert.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(vpn_mode.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());
    if (insert.is_set || is_set(insert.yfilter)) leaf_name_data.push_back(insert.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (vpn_mode.is_set || is_set(vpn_mode.yfilter)) leaf_name_data.push_back(vpn_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert")
    {
        insert = value;
        insert.value_namespace = name_space;
        insert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode = value;
        vpn_mode.value_namespace = name_space;
        vpn_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
    if(value_path == "insert")
    {
        insert.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-untrusted" || name == "check" || name == "insert" || name == "policy" || name == "subscriber-id" || name == "vpn" || name == "vpn-mode")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper_addresses != nullptr)
    {
        children["helper-addresses"] = helper_addresses;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-addresses" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{

    yang_name = "helper-addresses"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    ip_address{YType::str, "ip-address"},
    enable{YType::empty, "enable"},
    gateway_address{YType::str, "gateway-address"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return ip_address.is_set
	|| enable.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(gateway_address.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.yfilter)) leaf_name_data.push_back(gateway_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
        gateway_address.value_namespace = name_space;
        gateway_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "gateway-address")
    {
        gateway_address.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "enable" || name == "gateway-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Server()
    :
    boot_filename{YType::str, "boot-filename"},
    domain_name{YType::str, "domain-name"},
    infinite_lease{YType::empty, "infinite-lease"},
    next_server{YType::str, "next-server"},
    pool{YType::str, "pool"},
    secure_arp{YType::empty, "secure-arp"},
    server_allow_move{YType::empty, "server-allow-move"},
    subnet_mask{YType::str, "subnet-mask"}
    	,
    aaa_server(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer>())
	,broadcast_flag(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag>())
	,classes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes>())
	,default_routers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters>())
	,dns_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers>())
	,lease(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease>())
	,lease_limit(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit>())
	,match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match>())
	,net_bios_name_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers>())
	,netbios_node_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType>())
	,option_codes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes>())
	,relay(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay>())
	,requested_ip_address(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress>())
	,server_id_check(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck>())
	,session(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session>())
{
    aaa_server->parent = this;
    broadcast_flag->parent = this;
    classes->parent = this;
    default_routers->parent = this;
    dns_servers->parent = this;
    lease->parent = this;
    lease_limit->parent = this;
    match->parent = this;
    net_bios_name_servers->parent = this;
    netbios_node_type->parent = this;
    option_codes->parent = this;
    relay->parent = this;
    requested_ip_address->parent = this;
    server_id_check->parent = this;
    session->parent = this;

    yang_name = "server"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::~Server()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_data() const
{
    return boot_filename.is_set
	|| domain_name.is_set
	|| infinite_lease.is_set
	|| next_server.is_set
	|| pool.is_set
	|| secure_arp.is_set
	|| server_allow_move.is_set
	|| subnet_mask.is_set
	|| (aaa_server !=  nullptr && aaa_server->has_data())
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_data())
	|| (classes !=  nullptr && classes->has_data())
	|| (default_routers !=  nullptr && default_routers->has_data())
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (lease_limit !=  nullptr && lease_limit->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_data())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_data())
	|| (option_codes !=  nullptr && option_codes->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (requested_ip_address !=  nullptr && requested_ip_address->has_data())
	|| (server_id_check !=  nullptr && server_id_check->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_filename.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(infinite_lease.yfilter)
	|| ydk::is_set(next_server.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(secure_arp.yfilter)
	|| ydk::is_set(server_allow_move.yfilter)
	|| ydk::is_set(subnet_mask.yfilter)
	|| (aaa_server !=  nullptr && aaa_server->has_operation())
	|| (broadcast_flag !=  nullptr && broadcast_flag->has_operation())
	|| (classes !=  nullptr && classes->has_operation())
	|| (default_routers !=  nullptr && default_routers->has_operation())
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (lease_limit !=  nullptr && lease_limit->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_operation())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_operation())
	|| (option_codes !=  nullptr && option_codes->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (requested_ip_address !=  nullptr && requested_ip_address->has_operation())
	|| (server_id_check !=  nullptr && server_id_check->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_filename.is_set || is_set(boot_filename.yfilter)) leaf_name_data.push_back(boot_filename.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (infinite_lease.is_set || is_set(infinite_lease.yfilter)) leaf_name_data.push_back(infinite_lease.get_name_leafdata());
    if (next_server.is_set || is_set(next_server.yfilter)) leaf_name_data.push_back(next_server.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (secure_arp.is_set || is_set(secure_arp.yfilter)) leaf_name_data.push_back(secure_arp.get_name_leafdata());
    if (server_allow_move.is_set || is_set(server_allow_move.yfilter)) leaf_name_data.push_back(server_allow_move.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-server")
    {
        if(aaa_server == nullptr)
        {
            aaa_server = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer>();
        }
        return aaa_server;
    }

    if(child_yang_name == "broadcast-flag")
    {
        if(broadcast_flag == nullptr)
        {
            broadcast_flag = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag>();
        }
        return broadcast_flag;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes>();
        }
        return classes;
    }

    if(child_yang_name == "default-routers")
    {
        if(default_routers == nullptr)
        {
            default_routers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters>();
        }
        return default_routers;
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers == nullptr)
        {
            dns_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers>();
        }
        return dns_servers;
    }

    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease>();
        }
        return lease;
    }

    if(child_yang_name == "lease-limit")
    {
        if(lease_limit == nullptr)
        {
            lease_limit = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit>();
        }
        return lease_limit;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match>();
        }
        return match;
    }

    if(child_yang_name == "net-bios-name-servers")
    {
        if(net_bios_name_servers == nullptr)
        {
            net_bios_name_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers>();
        }
        return net_bios_name_servers;
    }

    if(child_yang_name == "netbios-node-type")
    {
        if(netbios_node_type == nullptr)
        {
            netbios_node_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType>();
        }
        return netbios_node_type;
    }

    if(child_yang_name == "option-codes")
    {
        if(option_codes == nullptr)
        {
            option_codes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes>();
        }
        return option_codes;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "requested-ip-address")
    {
        if(requested_ip_address == nullptr)
        {
            requested_ip_address = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress>();
        }
        return requested_ip_address;
    }

    if(child_yang_name == "server-id-check")
    {
        if(server_id_check == nullptr)
        {
            server_id_check = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck>();
        }
        return server_id_check;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa_server != nullptr)
    {
        children["aaa-server"] = aaa_server;
    }

    if(broadcast_flag != nullptr)
    {
        children["broadcast-flag"] = broadcast_flag;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    if(default_routers != nullptr)
    {
        children["default-routers"] = default_routers;
    }

    if(dns_servers != nullptr)
    {
        children["dns-servers"] = dns_servers;
    }

    if(lease != nullptr)
    {
        children["lease"] = lease;
    }

    if(lease_limit != nullptr)
    {
        children["lease-limit"] = lease_limit;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(net_bios_name_servers != nullptr)
    {
        children["net-bios-name-servers"] = net_bios_name_servers;
    }

    if(netbios_node_type != nullptr)
    {
        children["netbios-node-type"] = netbios_node_type;
    }

    if(option_codes != nullptr)
    {
        children["option-codes"] = option_codes;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(requested_ip_address != nullptr)
    {
        children["requested-ip-address"] = requested_ip_address;
    }

    if(server_id_check != nullptr)
    {
        children["server-id-check"] = server_id_check;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-filename")
    {
        boot_filename = value;
        boot_filename.value_namespace = name_space;
        boot_filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite-lease")
    {
        infinite_lease = value;
        infinite_lease.value_namespace = name_space;
        infinite_lease.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-server")
    {
        next_server = value;
        next_server.value_namespace = name_space;
        next_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-arp")
    {
        secure_arp = value;
        secure_arp.value_namespace = name_space;
        secure_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-allow-move")
    {
        server_allow_move = value;
        server_allow_move.value_namespace = name_space;
        server_allow_move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
        subnet_mask.value_namespace = name_space;
        subnet_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-filename")
    {
        boot_filename.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "infinite-lease")
    {
        infinite_lease.yfilter = yfilter;
    }
    if(value_path == "next-server")
    {
        next_server.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "secure-arp")
    {
        secure_arp.yfilter = yfilter;
    }
    if(value_path == "server-allow-move")
    {
        server_allow_move.yfilter = yfilter;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-server" || name == "broadcast-flag" || name == "classes" || name == "default-routers" || name == "dns-servers" || name == "lease" || name == "lease-limit" || name == "match" || name == "net-bios-name-servers" || name == "netbios-node-type" || name == "option-codes" || name == "relay" || name == "requested-ip-address" || name == "server-id-check" || name == "session" || name == "boot-filename" || name == "domain-name" || name == "infinite-lease" || name == "next-server" || name == "pool" || name == "secure-arp" || name == "server-allow-move" || name == "subnet-mask")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::AaaServer()
    :
    dhcp_option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption>())
{
    dhcp_option->parent = this;

    yang_name = "aaa-server"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::~AaaServer()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::has_data() const
{
    return (dhcp_option !=  nullptr && dhcp_option->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_option !=  nullptr && dhcp_option->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-option")
    {
        if(dhcp_option == nullptr)
        {
            dhcp_option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption>();
        }
        return dhcp_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_option != nullptr)
    {
        children["dhcp-option"] = dhcp_option;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-option")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::DhcpOption()
    :
    force_insert{YType::empty, "force-insert"}
{

    yang_name = "dhcp-option"; yang_parent_name = "aaa-server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::~DhcpOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::has_data() const
{
    return force_insert.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_insert.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_insert.is_set || is_set(force_insert.yfilter)) leaf_name_data.push_back(force_insert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-insert")
    {
        force_insert = value;
        force_insert.value_namespace = name_space;
        force_insert.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-insert")
    {
        force_insert.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::AaaServer::DhcpOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-insert")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::BroadcastFlag()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "broadcast-flag"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::~BroadcastFlag()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Classes()
{

    yang_name = "classes"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::~Classes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    boot_filename{YType::str, "boot-filename"},
    domain_name{YType::str, "domain-name"},
    enable{YType::empty, "enable"},
    infinite_lease{YType::empty, "infinite-lease"},
    next_server{YType::str, "next-server"},
    pool{YType::str, "pool"},
    subnet_mask{YType::str, "subnet-mask"}
    	,
    class_match(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch>())
	,default_routers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters>())
	,dns_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers>())
	,lease(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease>())
	,net_bios_name_servers(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers>())
	,netbios_node_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType>())
	,option_codes(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes>())
{
    class_match->parent = this;
    default_routers->parent = this;
    dns_servers->parent = this;
    lease->parent = this;
    net_bios_name_servers->parent = this;
    netbios_node_type->parent = this;
    option_codes->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::~Class_()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| boot_filename.is_set
	|| domain_name.is_set
	|| enable.is_set
	|| infinite_lease.is_set
	|| next_server.is_set
	|| pool.is_set
	|| subnet_mask.is_set
	|| (class_match !=  nullptr && class_match->has_data())
	|| (default_routers !=  nullptr && default_routers->has_data())
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_data())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_data())
	|| (option_codes !=  nullptr && option_codes->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(boot_filename.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(infinite_lease.yfilter)
	|| ydk::is_set(next_server.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(subnet_mask.yfilter)
	|| (class_match !=  nullptr && class_match->has_operation())
	|| (default_routers !=  nullptr && default_routers->has_operation())
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (net_bios_name_servers !=  nullptr && net_bios_name_servers->has_operation())
	|| (netbios_node_type !=  nullptr && netbios_node_type->has_operation())
	|| (option_codes !=  nullptr && option_codes->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (boot_filename.is_set || is_set(boot_filename.yfilter)) leaf_name_data.push_back(boot_filename.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (infinite_lease.is_set || is_set(infinite_lease.yfilter)) leaf_name_data.push_back(infinite_lease.get_name_leafdata());
    if (next_server.is_set || is_set(next_server.yfilter)) leaf_name_data.push_back(next_server.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-match")
    {
        if(class_match == nullptr)
        {
            class_match = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch>();
        }
        return class_match;
    }

    if(child_yang_name == "default-routers")
    {
        if(default_routers == nullptr)
        {
            default_routers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters>();
        }
        return default_routers;
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers == nullptr)
        {
            dns_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers>();
        }
        return dns_servers;
    }

    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease>();
        }
        return lease;
    }

    if(child_yang_name == "net-bios-name-servers")
    {
        if(net_bios_name_servers == nullptr)
        {
            net_bios_name_servers = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers>();
        }
        return net_bios_name_servers;
    }

    if(child_yang_name == "netbios-node-type")
    {
        if(netbios_node_type == nullptr)
        {
            netbios_node_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType>();
        }
        return netbios_node_type;
    }

    if(child_yang_name == "option-codes")
    {
        if(option_codes == nullptr)
        {
            option_codes = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes>();
        }
        return option_codes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_match != nullptr)
    {
        children["class-match"] = class_match;
    }

    if(default_routers != nullptr)
    {
        children["default-routers"] = default_routers;
    }

    if(dns_servers != nullptr)
    {
        children["dns-servers"] = dns_servers;
    }

    if(lease != nullptr)
    {
        children["lease"] = lease;
    }

    if(net_bios_name_servers != nullptr)
    {
        children["net-bios-name-servers"] = net_bios_name_servers;
    }

    if(netbios_node_type != nullptr)
    {
        children["netbios-node-type"] = netbios_node_type;
    }

    if(option_codes != nullptr)
    {
        children["option-codes"] = option_codes;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-filename")
    {
        boot_filename = value;
        boot_filename.value_namespace = name_space;
        boot_filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite-lease")
    {
        infinite_lease = value;
        infinite_lease.value_namespace = name_space;
        infinite_lease.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-server")
    {
        next_server = value;
        next_server.value_namespace = name_space;
        next_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
        subnet_mask.value_namespace = name_space;
        subnet_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "boot-filename")
    {
        boot_filename.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "infinite-lease")
    {
        infinite_lease.yfilter = yfilter;
    }
    if(value_path == "next-server")
    {
        next_server.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-match" || name == "default-routers" || name == "dns-servers" || name == "lease" || name == "net-bios-name-servers" || name == "netbios-node-type" || name == "option-codes" || name == "class-name" || name == "boot-filename" || name == "domain-name" || name == "enable" || name == "infinite-lease" || name == "next-server" || name == "pool" || name == "subnet-mask")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassMatch()
    :
    l2_interface{YType::str, "l2-interface"},
    vrf{YType::str, "vrf"}
    	,
    class_options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions>())
{
    class_options->parent = this;

    yang_name = "class-match"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::~ClassMatch()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::has_data() const
{
    return l2_interface.is_set
	|| vrf.is_set
	|| (class_options !=  nullptr && class_options->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (class_options !=  nullptr && class_options->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_interface.is_set || is_set(l2_interface.yfilter)) leaf_name_data.push_back(l2_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-options")
    {
        if(class_options == nullptr)
        {
            class_options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions>();
        }
        return class_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_options != nullptr)
    {
        children["class-options"] = class_options;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-interface")
    {
        l2_interface = value;
        l2_interface.value_namespace = name_space;
        l2_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-interface")
    {
        l2_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-options" || name == "l2-interface" || name == "vrf")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOptions()
{

    yang_name = "class-options"; yang_parent_name = "class-match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::~ClassOptions()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::has_data() const
{
    for (std::size_t index=0; index<class_option.size(); index++)
    {
        if(class_option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::has_operation() const
{
    for (std::size_t index=0; index<class_option.size(); index++)
    {
        if(class_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-option")
    {
        for(auto const & c : class_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption>();
        c->parent = this;
        class_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-option")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::ClassOption()
    :
    matchoption{YType::enumeration, "matchoption"},
    bit_mask{YType::str, "bit-mask"},
    pattern{YType::str, "pattern"}
{

    yang_name = "class-option"; yang_parent_name = "class-options"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::~ClassOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::has_data() const
{
    return matchoption.is_set
	|| bit_mask.is_set
	|| pattern.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matchoption.yfilter)
	|| ydk::is_set(bit_mask.yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-option" <<"[matchoption='" <<matchoption <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.yfilter)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (bit_mask.is_set || is_set(bit_mask.yfilter)) leaf_name_data.push_back(bit_mask.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
        matchoption.value_namespace = name_space;
        matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-mask")
    {
        bit_mask = value;
        bit_mask.value_namespace = name_space;
        bit_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matchoption")
    {
        matchoption.yfilter = yfilter;
    }
    if(value_path == "bit-mask")
    {
        bit_mask.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matchoption" || name == "bit-mask" || name == "pattern")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::DefaultRouters()
    :
    default_router{YType::str, "default-router"}
{

    yang_name = "default-routers"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::~DefaultRouters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::has_data() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::has_operation() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_router.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-router")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::DnsServers()
    :
    dns_server{YType::str, "dns-server"}
{

    yang_name = "dns-servers"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::~DnsServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::Lease()
    :
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    infinite{YType::str, "infinite"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "lease"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::~Lease()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| infinite.is_set
	|| minutes.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(infinite.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "infinite" || name == "minutes")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::NetBiosNameServers()
    :
    net_bios_name_server{YType::str, "net-bios-name-server"}
{

    yang_name = "net-bios-name-servers"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::~NetBiosNameServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::has_data() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::has_operation() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(net_bios_name_server.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-bios-name-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto net_bios_name_server_name_datas = net_bios_name_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_bios_name_server_name_datas.begin(), net_bios_name_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net-bios-name-server")
    {
        net_bios_name_server.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net-bios-name-server")
    {
        net_bios_name_server.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-bios-name-server")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::NetbiosNodeType()
    :
    broadcast_node{YType::str, "broadcast-node"},
    hexadecimal{YType::str, "hexadecimal"},
    hybrid_node{YType::str, "hybrid-node"},
    mixed_node{YType::str, "mixed-node"},
    peer_to_peer_node{YType::str, "peer-to-peer-node"}
{

    yang_name = "netbios-node-type"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::~NetbiosNodeType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::has_data() const
{
    return broadcast_node.is_set
	|| hexadecimal.is_set
	|| hybrid_node.is_set
	|| mixed_node.is_set
	|| peer_to_peer_node.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_node.yfilter)
	|| ydk::is_set(hexadecimal.yfilter)
	|| ydk::is_set(hybrid_node.yfilter)
	|| ydk::is_set(mixed_node.yfilter)
	|| ydk::is_set(peer_to_peer_node.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netbios-node-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_node.is_set || is_set(broadcast_node.yfilter)) leaf_name_data.push_back(broadcast_node.get_name_leafdata());
    if (hexadecimal.is_set || is_set(hexadecimal.yfilter)) leaf_name_data.push_back(hexadecimal.get_name_leafdata());
    if (hybrid_node.is_set || is_set(hybrid_node.yfilter)) leaf_name_data.push_back(hybrid_node.get_name_leafdata());
    if (mixed_node.is_set || is_set(mixed_node.yfilter)) leaf_name_data.push_back(mixed_node.get_name_leafdata());
    if (peer_to_peer_node.is_set || is_set(peer_to_peer_node.yfilter)) leaf_name_data.push_back(peer_to_peer_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-node")
    {
        broadcast_node = value;
        broadcast_node.value_namespace = name_space;
        broadcast_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexadecimal")
    {
        hexadecimal = value;
        hexadecimal.value_namespace = name_space;
        hexadecimal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hybrid-node")
    {
        hybrid_node = value;
        hybrid_node.value_namespace = name_space;
        hybrid_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixed-node")
    {
        mixed_node = value;
        mixed_node.value_namespace = name_space;
        mixed_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-to-peer-node")
    {
        peer_to_peer_node = value;
        peer_to_peer_node.value_namespace = name_space;
        peer_to_peer_node.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-node")
    {
        broadcast_node.yfilter = yfilter;
    }
    if(value_path == "hexadecimal")
    {
        hexadecimal.yfilter = yfilter;
    }
    if(value_path == "hybrid-node")
    {
        hybrid_node.yfilter = yfilter;
    }
    if(value_path == "mixed-node")
    {
        mixed_node.yfilter = yfilter;
    }
    if(value_path == "peer-to-peer-node")
    {
        peer_to_peer_node.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-node" || name == "hexadecimal" || name == "hybrid-node" || name == "mixed-node" || name == "peer-to-peer-node")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCodes()
{

    yang_name = "option-codes"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::~OptionCodes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::has_data() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::has_operation() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-codes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-code")
    {
        for(auto const & c : option_code)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode>();
        c->parent = this;
        option_code.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_code)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-code")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::OptionCode()
    :
    option_code{YType::uint32, "option-code"},
    ascii_string{YType::str, "ascii-string"},
    force_insert{YType::int32, "force-insert"},
    hex_string{YType::str, "hex-string"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "option-code"; yang_parent_name = "option-codes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::~OptionCode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::has_data() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_code.is_set
	|| ascii_string.is_set
	|| force_insert.is_set
	|| hex_string.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::has_operation() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_code.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(force_insert.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-code" <<"[option-code='" <<option_code <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_code.is_set || is_set(option_code.yfilter)) leaf_name_data.push_back(option_code.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (force_insert.is_set || is_set(force_insert.yfilter)) leaf_name_data.push_back(force_insert.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    auto ip_address_name_datas = ip_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_address_name_datas.begin(), ip_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-code")
    {
        option_code = value;
        option_code.value_namespace = name_space;
        option_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-insert")
    {
        force_insert = value;
        force_insert.value_namespace = name_space;
        force_insert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-code")
    {
        option_code.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "force-insert")
    {
        force_insert.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-code" || name == "ascii-string" || name == "force-insert" || name == "hex-string" || name == "ip-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::DefaultRouters()
    :
    default_router{YType::str, "default-router"}
{

    yang_name = "default-routers"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::~DefaultRouters()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::has_data() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::has_operation() const
{
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_router.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-router")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::DnsServers()
    :
    dns_server{YType::str, "dns-server"}
{

    yang_name = "dns-servers"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::~DnsServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::Lease()
    :
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    infinite{YType::str, "infinite"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "lease"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::~Lease()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| infinite.is_set
	|| minutes.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(infinite.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "infinite" || name == "minutes")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::LeaseLimit()
    :
    lease_limit_value{YType::enumeration, "lease-limit-value"},
    range{YType::uint32, "range"}
{

    yang_name = "lease-limit"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::~LeaseLimit()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::has_data() const
{
    return lease_limit_value.is_set
	|| range.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lease_limit_value.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lease_limit_value.is_set || is_set(lease_limit_value.yfilter)) leaf_name_data.push_back(lease_limit_value.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lease-limit-value")
    {
        lease_limit_value = value;
        lease_limit_value.value_namespace = name_space;
        lease_limit_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lease-limit-value")
    {
        lease_limit_value.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lease-limit-value" || name == "range")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Match()
    :
    option_defaults(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults>())
	,options(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options>())
{
    option_defaults->parent = this;
    options->parent = this;

    yang_name = "match"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::~Match()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::has_data() const
{
    return (option_defaults !=  nullptr && option_defaults->has_data())
	|| (options !=  nullptr && options->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::has_operation() const
{
    return is_set(yfilter)
	|| (option_defaults !=  nullptr && option_defaults->has_operation())
	|| (options !=  nullptr && options->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-defaults")
    {
        if(option_defaults == nullptr)
        {
            option_defaults = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults>();
        }
        return option_defaults;
    }

    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option_defaults != nullptr)
    {
        children["option-defaults"] = option_defaults;
    }

    if(options != nullptr)
    {
        children["options"] = options;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-defaults" || name == "options")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefaults()
{

    yang_name = "option-defaults"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::~OptionDefaults()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::has_data() const
{
    for (std::size_t index=0; index<option_default.size(); index++)
    {
        if(option_default[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::has_operation() const
{
    for (std::size_t index=0; index<option_default.size(); index++)
    {
        if(option_default[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-default")
    {
        for(auto const & c : option_default)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault>();
        c->parent = this;
        option_default.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_default)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-default")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::OptionDefault()
    :
    matchoption{YType::enumeration, "matchoption"},
    matchaction{YType::enumeration, "matchaction"}
{

    yang_name = "option-default"; yang_parent_name = "option-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::~OptionDefault()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::has_data() const
{
    return matchoption.is_set
	|| matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matchoption.yfilter)
	|| ydk::is_set(matchaction.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-default" <<"[matchoption='" <<matchoption <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.yfilter)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (matchaction.is_set || is_set(matchaction.yfilter)) leaf_name_data.push_back(matchaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
        matchoption.value_namespace = name_space;
        matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchaction")
    {
        matchaction = value;
        matchaction.value_namespace = name_space;
        matchaction.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matchoption")
    {
        matchoption.yfilter = yfilter;
    }
    if(value_path == "matchaction")
    {
        matchaction.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matchoption" || name == "matchaction")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Options()
{

    yang_name = "options"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::~Options()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::has_data() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::has_operation() const
{
    for (std::size_t index=0; index<option.size(); index++)
    {
        if(option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        for(auto const & c : option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option>();
        c->parent = this;
        option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::Option()
    :
    matchoption{YType::enumeration, "matchoption"},
    pattern{YType::str, "pattern"},
    format{YType::int32, "format"},
    matchaction{YType::enumeration, "matchaction"}
{

    yang_name = "option"; yang_parent_name = "options"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::~Option()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::has_data() const
{
    return matchoption.is_set
	|| pattern.is_set
	|| format.is_set
	|| matchaction.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(matchoption.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(matchaction.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option" <<"[matchoption='" <<matchoption <<"']" <<"[pattern='" <<pattern <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (matchoption.is_set || is_set(matchoption.yfilter)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (matchaction.is_set || is_set(matchaction.yfilter)) leaf_name_data.push_back(matchaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "matchoption")
    {
        matchoption = value;
        matchoption.value_namespace = name_space;
        matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchaction")
    {
        matchaction = value;
        matchaction.value_namespace = name_space;
        matchaction.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "matchoption")
    {
        matchoption.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "matchaction")
    {
        matchaction.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "matchoption" || name == "pattern" || name == "format" || name == "matchaction")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::NetBiosNameServers()
    :
    net_bios_name_server{YType::str, "net-bios-name-server"}
{

    yang_name = "net-bios-name-servers"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::~NetBiosNameServers()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::has_data() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::has_operation() const
{
    for (auto const & leaf : net_bios_name_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(net_bios_name_server.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-bios-name-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto net_bios_name_server_name_datas = net_bios_name_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_bios_name_server_name_datas.begin(), net_bios_name_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net-bios-name-server")
    {
        net_bios_name_server.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net-bios-name-server")
    {
        net_bios_name_server.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-bios-name-server")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::NetbiosNodeType()
    :
    broadcast_node{YType::str, "broadcast-node"},
    hexadecimal{YType::str, "hexadecimal"},
    hybrid_node{YType::str, "hybrid-node"},
    mixed_node{YType::str, "mixed-node"},
    peer_to_peer_node{YType::str, "peer-to-peer-node"}
{

    yang_name = "netbios-node-type"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::~NetbiosNodeType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::has_data() const
{
    return broadcast_node.is_set
	|| hexadecimal.is_set
	|| hybrid_node.is_set
	|| mixed_node.is_set
	|| peer_to_peer_node.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_node.yfilter)
	|| ydk::is_set(hexadecimal.yfilter)
	|| ydk::is_set(hybrid_node.yfilter)
	|| ydk::is_set(mixed_node.yfilter)
	|| ydk::is_set(peer_to_peer_node.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netbios-node-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_node.is_set || is_set(broadcast_node.yfilter)) leaf_name_data.push_back(broadcast_node.get_name_leafdata());
    if (hexadecimal.is_set || is_set(hexadecimal.yfilter)) leaf_name_data.push_back(hexadecimal.get_name_leafdata());
    if (hybrid_node.is_set || is_set(hybrid_node.yfilter)) leaf_name_data.push_back(hybrid_node.get_name_leafdata());
    if (mixed_node.is_set || is_set(mixed_node.yfilter)) leaf_name_data.push_back(mixed_node.get_name_leafdata());
    if (peer_to_peer_node.is_set || is_set(peer_to_peer_node.yfilter)) leaf_name_data.push_back(peer_to_peer_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-node")
    {
        broadcast_node = value;
        broadcast_node.value_namespace = name_space;
        broadcast_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexadecimal")
    {
        hexadecimal = value;
        hexadecimal.value_namespace = name_space;
        hexadecimal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hybrid-node")
    {
        hybrid_node = value;
        hybrid_node.value_namespace = name_space;
        hybrid_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixed-node")
    {
        mixed_node = value;
        mixed_node.value_namespace = name_space;
        mixed_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-to-peer-node")
    {
        peer_to_peer_node = value;
        peer_to_peer_node.value_namespace = name_space;
        peer_to_peer_node.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-node")
    {
        broadcast_node.yfilter = yfilter;
    }
    if(value_path == "hexadecimal")
    {
        hexadecimal.yfilter = yfilter;
    }
    if(value_path == "hybrid-node")
    {
        hybrid_node.yfilter = yfilter;
    }
    if(value_path == "mixed-node")
    {
        mixed_node.yfilter = yfilter;
    }
    if(value_path == "peer-to-peer-node")
    {
        peer_to_peer_node.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-node" || name == "hexadecimal" || name == "hybrid-node" || name == "mixed-node" || name == "peer-to-peer-node")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCodes()
{

    yang_name = "option-codes"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::~OptionCodes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::has_data() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::has_operation() const
{
    for (std::size_t index=0; index<option_code.size(); index++)
    {
        if(option_code[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-codes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-code")
    {
        for(auto const & c : option_code)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode>();
        c->parent = this;
        option_code.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_code)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-code")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::OptionCode()
    :
    option_code{YType::uint32, "option-code"},
    ascii_string{YType::str, "ascii-string"},
    force_insert{YType::int32, "force-insert"},
    hex_string{YType::str, "hex-string"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "option-code"; yang_parent_name = "option-codes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::~OptionCode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::has_data() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_code.is_set
	|| ascii_string.is_set
	|| force_insert.is_set
	|| hex_string.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::has_operation() const
{
    for (auto const & leaf : ip_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_code.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(force_insert.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-code" <<"[option-code='" <<option_code <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_code.is_set || is_set(option_code.yfilter)) leaf_name_data.push_back(option_code.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (force_insert.is_set || is_set(force_insert.yfilter)) leaf_name_data.push_back(force_insert.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    auto ip_address_name_datas = ip_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_address_name_datas.begin(), ip_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-code")
    {
        option_code = value;
        option_code.value_namespace = name_space;
        option_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-insert")
    {
        force_insert = value;
        force_insert.value_namespace = name_space;
        force_insert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address.append(value);
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-code")
    {
        option_code.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "force-insert")
    {
        force_insert.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-code" || name == "ascii-string" || name == "force-insert" || name == "hex-string" || name == "ip-address")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::Relay()
    :
    authenticate{YType::int32, "authenticate"}
{

    yang_name = "relay"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::~Relay()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::has_data() const
{
    return authenticate.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticate")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::RequestedIpAddress()
    :
    check{YType::empty, "check"}
{

    yang_name = "requested-ip-address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::~RequestedIpAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::has_data() const
{
    return check.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requested-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::ServerIdCheck()
    :
    check{YType::empty, "check"}
{

    yang_name = "server-id-check"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::~ServerIdCheck()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::has_data() const
{
    return check.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-id-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::Session()
    :
    throttle_type(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType>())
{
    throttle_type->parent = this;

    yang_name = "session"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::~Session()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::has_data() const
{
    return (throttle_type !=  nullptr && throttle_type->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::has_operation() const
{
    return is_set(yfilter)
	|| (throttle_type !=  nullptr && throttle_type->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle-type")
    {
        if(throttle_type == nullptr)
        {
            throttle_type = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType>();
        }
        return throttle_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(throttle_type != nullptr)
    {
        children["throttle-type"] = throttle_type;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle-type")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::ThrottleType()
    :
    mac_throttle(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle>())
{
    mac_throttle->parent = this;

    yang_name = "throttle-type"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::~ThrottleType()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::has_data() const
{
    return (mac_throttle !=  nullptr && mac_throttle->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::has_operation() const
{
    return is_set(yfilter)
	|| (mac_throttle !=  nullptr && mac_throttle->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-throttle")
    {
        if(mac_throttle == nullptr)
        {
            mac_throttle = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle>();
        }
        return mac_throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_throttle != nullptr)
    {
        children["mac-throttle"] = mac_throttle;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-throttle")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::MacThrottle()
    :
    num_block{YType::uint32, "num-block"},
    num_discover{YType::uint32, "num-discover"},
    num_request{YType::uint32, "num-request"}
{

    yang_name = "mac-throttle"; yang_parent_name = "throttle-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::~MacThrottle()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::has_data() const
{
    return num_block.is_set
	|| num_discover.is_set
	|| num_request.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_block.yfilter)
	|| ydk::is_set(num_discover.yfilter)
	|| ydk::is_set(num_request.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_block.is_set || is_set(num_block.yfilter)) leaf_name_data.push_back(num_block.get_name_leafdata());
    if (num_discover.is_set || is_set(num_discover.yfilter)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_request.is_set || is_set(num_request.yfilter)) leaf_name_data.push_back(num_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-block")
    {
        num_block = value;
        num_block.value_namespace = name_space;
        num_block.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discover")
    {
        num_discover = value;
        num_discover.value_namespace = name_space;
        num_discover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-request")
    {
        num_request = value;
        num_request.value_namespace = name_space;
        num_request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-block")
    {
        num_block.yfilter = yfilter;
    }
    if(value_path == "num-discover")
    {
        num_discover.yfilter = yfilter;
    }
    if(value_path == "num-request")
    {
        num_request.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-block" || name == "num-discover" || name == "num-request")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::Snoop()
    :
    trusted{YType::empty, "trusted"}
    	,
    relay_information_option(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption>())
{
    relay_information_option->parent = this;

    yang_name = "snoop"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::~Snoop()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::has_data() const
{
    return trusted.is_set
	|| (relay_information_option !=  nullptr && relay_information_option->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (relay_information_option !=  nullptr && relay_information_option->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay-information-option")
    {
        if(relay_information_option == nullptr)
        {
            relay_information_option = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption>();
        }
        return relay_information_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay_information_option != nullptr)
    {
        children["relay-information-option"] = relay_information_option;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay-information-option" || name == "trusted")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RelayInformationOption()
    :
    allow_untrusted{YType::empty, "allow-untrusted"},
    insert{YType::empty, "insert"},
    policy{YType::enumeration, "policy"}
    	,
    remote_id(std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId>())
{
    remote_id->parent = this;

    yang_name = "relay-information-option"; yang_parent_name = "snoop"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::~RelayInformationOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::has_data() const
{
    return allow_untrusted.is_set
	|| insert.is_set
	|| policy.is_set
	|| (remote_id !=  nullptr && remote_id->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| ydk::is_set(insert.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (insert.is_set || is_set(insert.yfilter)) leaf_name_data.push_back(insert.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert")
    {
        insert = value;
        insert.value_namespace = name_space;
        insert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
    if(value_path == "insert")
    {
        insert.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id" || name == "allow-untrusted" || name == "insert" || name == "policy")
        return true;
    return false;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::RemoteId()
    :
    format_type{YType::uint32, "format-type"},
    remote_id_value{YType::str, "remote-id-value"}
{

    yang_name = "remote-id"; yang_parent_name = "relay-information-option"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::~RemoteId()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::has_data() const
{
    return format_type.is_set
	|| remote_id_value.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format_type.yfilter)
	|| ydk::is_set(remote_id_value.yfilter);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format_type.is_set || is_set(format_type.yfilter)) leaf_name_data.push_back(format_type.get_name_leafdata());
    if (remote_id_value.is_set || is_set(remote_id_value.yfilter)) leaf_name_data.push_back(remote_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format-type")
    {
        format_type = value;
        format_type.value_namespace = name_space;
        format_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id-value")
    {
        remote_id_value = value;
        remote_id_value.value_namespace = name_space;
        remote_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format-type")
    {
        format_type.yfilter = yfilter;
    }
    if(value_path == "remote-id-value")
    {
        remote_id_value.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-type" || name == "remote-id-value")
        return true;
    return false;
}

Ipv4Dhcpd::RateLimit::RateLimit()
    :
    num_discover{YType::uint32, "num-discover"},
    num_period{YType::uint32, "num-period"}
{

    yang_name = "rate-limit"; yang_parent_name = "ipv4-dhcpd"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::RateLimit::~RateLimit()
{
}

bool Ipv4Dhcpd::RateLimit::has_data() const
{
    return num_discover.is_set
	|| num_period.is_set;
}

bool Ipv4Dhcpd::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_discover.yfilter)
	|| ydk::is_set(num_period.yfilter);
}

std::string Ipv4Dhcpd::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_discover.is_set || is_set(num_discover.yfilter)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_period.is_set || is_set(num_period.yfilter)) leaf_name_data.push_back(num_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-discover")
    {
        num_discover = value;
        num_discover.value_namespace = name_space;
        num_discover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-period")
    {
        num_period = value;
        num_period.value_namespace = name_space;
        num_period.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-discover")
    {
        num_discover.yfilter = yfilter;
    }
    if(value_path == "num-period")
    {
        num_period.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-discover" || name == "num-period")
        return true;
    return false;
}

Ipv4Dhcpd::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "ipv4-dhcpd"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Dhcpd::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Dhcpd::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Dhcpd::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Dhcpd::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    profile(nullptr) // presence node
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Dhcpd::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (profile !=  nullptr && profile->has_data());
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Ipv4Dhcpd::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Dhcpd::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Ipv4Dhcpd::Vrfs::Vrf::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Ipv4Dhcpd::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Dhcpd::Vrfs::Vrf::Profile::Profile()
    :
    mode{YType::enumeration, "mode"},
    vrf_profile_name{YType::str, "vrf-profile-name"}
{

    yang_name = "profile"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Dhcpd::Vrfs::Vrf::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_data() const
{
    return mode.is_set
	|| vrf_profile_name.is_set;
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(vrf_profile_name.yfilter);
}

std::string Ipv4Dhcpd::Vrfs::Vrf::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Dhcpd::Vrfs::Vrf::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (vrf_profile_name.is_set || is_set(vrf_profile_name.yfilter)) leaf_name_data.push_back(vrf_profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Vrfs::Vrf::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Vrfs::Vrf::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Vrfs::Vrf::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-profile-name")
    {
        vrf_profile_name = value;
        vrf_profile_name.value_namespace = name_space;
        vrf_profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Dhcpd::Vrfs::Vrf::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "vrf-profile-name")
    {
        vrf_profile_name.yfilter = yfilter;
    }
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "vrf-profile-name")
        return true;
    return false;
}

const Enum::YLeaf Ipv4dhcpdFmt::no_format {0, "no-format"};
const Enum::YLeaf Ipv4dhcpdFmt::format {1, "format"};

const Enum::YLeaf Ipv4dhcpdRelayInfoOptionPolicy::replace {0, "replace"};
const Enum::YLeaf Ipv4dhcpdRelayInfoOptionPolicy::keep {1, "keep"};
const Enum::YLeaf Ipv4dhcpdRelayInfoOptionPolicy::drop {2, "drop"};
const Enum::YLeaf Ipv4dhcpdRelayInfoOptionPolicy::encapsulate {3, "encapsulate"};

const Enum::YLeaf Policy::ignore {0, "ignore"};
const Enum::YLeaf Policy::check {1, "check"};
const Enum::YLeaf Policy::unicastalways {2, "unicastalways"};

const Enum::YLeaf Ipv4dhcpdMode::base {0, "base"};
const Enum::YLeaf Ipv4dhcpdMode::relay {1, "relay"};
const Enum::YLeaf Ipv4dhcpdMode::snoop {2, "snoop"};
const Enum::YLeaf Ipv4dhcpdMode::server {3, "server"};
const Enum::YLeaf Ipv4dhcpdMode::proxy {4, "proxy"};
const Enum::YLeaf Ipv4dhcpdMode::base2 {5, "base2"};

const Enum::YLeaf Ipv4dhcpdLayer::layer2 {2, "layer2"};
const Enum::YLeaf Ipv4dhcpdLayer::layer3 {3, "layer3"};

const Enum::YLeaf Dhcpv4LimitLease1::interface {1, "interface"};
const Enum::YLeaf Dhcpv4LimitLease1::circuit_id {2, "circuit-id"};
const Enum::YLeaf Dhcpv4LimitLease1::remote_id {3, "remote-id"};
const Enum::YLeaf Dhcpv4LimitLease1::circuit_id_remote_id {4, "circuit-id-remote-id"};

const Enum::YLeaf Ipv4dhcpdFmtSpecifier::physical_chassis {1, "physical-chassis"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::physical_slot {2, "physical-slot"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::physical_sub_slot {3, "physical-sub-slot"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::physical_port {4, "physical-port"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::physical_sub_port {5, "physical-sub-port"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::inner_vlan_id {6, "inner-vlan-id"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::outer_vlan_id {7, "outer-vlan-id"};
const Enum::YLeaf Ipv4dhcpdFmtSpecifier::l2_interface {8, "l2-interface"};

const Enum::YLeaf Dhcpv4MatchOption::Y_60__FWD_SLASH__60 {60, "60/60"};
const Enum::YLeaf Dhcpv4MatchOption::Y_77__FWD_SLASH__77 {77, "77/77"};
const Enum::YLeaf Dhcpv4MatchOption::Y_124__FWD_SLASH__124 {124, "124/124"};
const Enum::YLeaf Dhcpv4MatchOption::Y_125__FWD_SLASH__125 {125, "125/125"};

const Enum::YLeaf MacMismatchAction::forward {0, "forward"};
const Enum::YLeaf MacMismatchAction::drop {1, "drop"};

const Enum::YLeaf LeaseLimitValue::per_interface {1, "per-interface"};
const Enum::YLeaf LeaseLimitValue::per_circuit_id {2, "per-circuit-id"};
const Enum::YLeaf LeaseLimitValue::per_remote_id {3, "per-remote-id"};

const Enum::YLeaf Ipv4dhcpdGiaddrPolicy::giaddr_policy_keep {1, "giaddr-policy-keep"};

const Enum::YLeaf Matchoption::circuitid {1, "circuitid"};
const Enum::YLeaf Matchoption::remoteid {2, "remoteid"};
const Enum::YLeaf Matchoption::Y_60 {60, "60"};
const Enum::YLeaf Matchoption::Y_77 {77, "77"};
const Enum::YLeaf Matchoption::Y_124 {124, "124"};
const Enum::YLeaf Matchoption::Y_125 {125, "125"};

const Enum::YLeaf ProxyAction::allow {0, "allow"};
const Enum::YLeaf ProxyAction::drop {1, "drop"};

const Enum::YLeaf Ipv4dhcpdRelayInfoOptionvpnMode::rfc {0, "rfc"};
const Enum::YLeaf Ipv4dhcpdRelayInfoOptionvpnMode::cisco {1, "cisco"};

const Enum::YLeaf Ipv4dhcpdRelayInfoOptionAuthenticate::received {0, "received"};
const Enum::YLeaf Ipv4dhcpdRelayInfoOptionAuthenticate::inserted {1, "inserted"};

const Enum::YLeaf Matchaction::allow {0, "allow"};
const Enum::YLeaf Matchaction::drop {1, "drop"};

const Enum::YLeaf Ipv4dhcpdBroadcastFlagPolicy::ignore {0, "ignore"};
const Enum::YLeaf Ipv4dhcpdBroadcastFlagPolicy::check {1, "check"};
const Enum::YLeaf Ipv4dhcpdBroadcastFlagPolicy::unicast_always {2, "unicast-always"};

const Enum::YLeaf Dhcpv4AuthUsername::auth_username_mac {1, "auth-username-mac"};
const Enum::YLeaf Dhcpv4AuthUsername::auth_username_giaddr {2, "auth-username-giaddr"};

const Enum::YLeaf BaseAction::allow {0, "allow"};
const Enum::YLeaf BaseAction::drop {1, "drop"};


}
}

