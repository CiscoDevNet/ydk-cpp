
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_0.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Snmp::Snmp()
    :
    inform_retries{YType::uint32, "inform-retries"},
    trap_port{YType::uint32, "trap-port"},
    oid_poll_stats{YType::empty, "oid-poll-stats"},
    trap_source{YType::str, "trap-source"},
    vrf_authentication_trap_disable{YType::empty, "vrf-authentication-trap-disable"},
    inform_timeout{YType::uint32, "inform-timeout"},
    trap_source_ipv6{YType::str, "trap-source-ipv6"},
    packet_size{YType::uint32, "packet-size"},
    throttle_time{YType::uint32, "throttle-time"},
    trap_source_ipv4{YType::str, "trap-source-ipv4"},
    inform_pending{YType::uint32, "inform-pending"}
        ,
    encrypted_community_maps(std::make_shared<Snmp::EncryptedCommunityMaps>())
    , views(std::make_shared<Snmp::Views>())
    , logging(std::make_shared<Snmp::Logging>())
    , administration(std::make_shared<Snmp::Administration>())
    , agent(std::make_shared<Snmp::Agent>())
    , trap(std::make_shared<Snmp::Trap>())
    , drop_packet(std::make_shared<Snmp::DropPacket>())
    , ipv6(std::make_shared<Snmp::Ipv6>())
    , ipv4(std::make_shared<Snmp::Ipv4>())
    , system(std::make_shared<Snmp::System>())
    , target(std::make_shared<Snmp::Target>())
    , notification(std::make_shared<Snmp::Notification>())
    , correlator(std::make_shared<Snmp::Correlator>())
    , bulk_stats(std::make_shared<Snmp::BulkStats>())
    , default_community_maps(std::make_shared<Snmp::DefaultCommunityMaps>())
    , overload_control(nullptr) // presence node
    , timeouts(std::make_shared<Snmp::Timeouts>())
    , users(std::make_shared<Snmp::Users>())
    , vrfs(std::make_shared<Snmp::Vrfs>())
    , groups(std::make_shared<Snmp::Groups>())
    , trap_hosts(std::make_shared<Snmp::TrapHosts>())
    , contexts(std::make_shared<Snmp::Contexts>())
    , context_mappings(std::make_shared<Snmp::ContextMappings>())
{
    encrypted_community_maps->parent = this;
    views->parent = this;
    logging->parent = this;
    administration->parent = this;
    agent->parent = this;
    trap->parent = this;
    drop_packet->parent = this;
    ipv6->parent = this;
    ipv4->parent = this;
    system->parent = this;
    target->parent = this;
    notification->parent = this;
    correlator->parent = this;
    bulk_stats->parent = this;
    default_community_maps->parent = this;
    timeouts->parent = this;
    users->parent = this;
    vrfs->parent = this;
    groups->parent = this;
    trap_hosts->parent = this;
    contexts->parent = this;
    context_mappings->parent = this;

    yang_name = "snmp"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Snmp::~Snmp()
{
}

bool Snmp::has_data() const
{
    if (is_presence_container) return true;
    return inform_retries.is_set
	|| trap_port.is_set
	|| oid_poll_stats.is_set
	|| trap_source.is_set
	|| vrf_authentication_trap_disable.is_set
	|| inform_timeout.is_set
	|| trap_source_ipv6.is_set
	|| packet_size.is_set
	|| throttle_time.is_set
	|| trap_source_ipv4.is_set
	|| inform_pending.is_set
	|| (encrypted_community_maps !=  nullptr && encrypted_community_maps->has_data())
	|| (views !=  nullptr && views->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (administration !=  nullptr && administration->has_data())
	|| (agent !=  nullptr && agent->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (drop_packet !=  nullptr && drop_packet->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (target !=  nullptr && target->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (correlator !=  nullptr && correlator->has_data())
	|| (bulk_stats !=  nullptr && bulk_stats->has_data())
	|| (default_community_maps !=  nullptr && default_community_maps->has_data())
	|| (overload_control !=  nullptr && overload_control->has_data())
	|| (timeouts !=  nullptr && timeouts->has_data())
	|| (users !=  nullptr && users->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (trap_hosts !=  nullptr && trap_hosts->has_data())
	|| (contexts !=  nullptr && contexts->has_data())
	|| (context_mappings !=  nullptr && context_mappings->has_data());
}

bool Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inform_retries.yfilter)
	|| ydk::is_set(trap_port.yfilter)
	|| ydk::is_set(oid_poll_stats.yfilter)
	|| ydk::is_set(trap_source.yfilter)
	|| ydk::is_set(vrf_authentication_trap_disable.yfilter)
	|| ydk::is_set(inform_timeout.yfilter)
	|| ydk::is_set(trap_source_ipv6.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(throttle_time.yfilter)
	|| ydk::is_set(trap_source_ipv4.yfilter)
	|| ydk::is_set(inform_pending.yfilter)
	|| (encrypted_community_maps !=  nullptr && encrypted_community_maps->has_operation())
	|| (views !=  nullptr && views->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (administration !=  nullptr && administration->has_operation())
	|| (agent !=  nullptr && agent->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (drop_packet !=  nullptr && drop_packet->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (target !=  nullptr && target->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (bulk_stats !=  nullptr && bulk_stats->has_operation())
	|| (default_community_maps !=  nullptr && default_community_maps->has_operation())
	|| (overload_control !=  nullptr && overload_control->has_operation())
	|| (timeouts !=  nullptr && timeouts->has_operation())
	|| (users !=  nullptr && users->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (trap_hosts !=  nullptr && trap_hosts->has_operation())
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (context_mappings !=  nullptr && context_mappings->has_operation());
}

std::string Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inform_retries.is_set || is_set(inform_retries.yfilter)) leaf_name_data.push_back(inform_retries.get_name_leafdata());
    if (trap_port.is_set || is_set(trap_port.yfilter)) leaf_name_data.push_back(trap_port.get_name_leafdata());
    if (oid_poll_stats.is_set || is_set(oid_poll_stats.yfilter)) leaf_name_data.push_back(oid_poll_stats.get_name_leafdata());
    if (trap_source.is_set || is_set(trap_source.yfilter)) leaf_name_data.push_back(trap_source.get_name_leafdata());
    if (vrf_authentication_trap_disable.is_set || is_set(vrf_authentication_trap_disable.yfilter)) leaf_name_data.push_back(vrf_authentication_trap_disable.get_name_leafdata());
    if (inform_timeout.is_set || is_set(inform_timeout.yfilter)) leaf_name_data.push_back(inform_timeout.get_name_leafdata());
    if (trap_source_ipv6.is_set || is_set(trap_source_ipv6.yfilter)) leaf_name_data.push_back(trap_source_ipv6.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (throttle_time.is_set || is_set(throttle_time.yfilter)) leaf_name_data.push_back(throttle_time.get_name_leafdata());
    if (trap_source_ipv4.is_set || is_set(trap_source_ipv4.yfilter)) leaf_name_data.push_back(trap_source_ipv4.get_name_leafdata());
    if (inform_pending.is_set || is_set(inform_pending.yfilter)) leaf_name_data.push_back(inform_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community-maps")
    {
        if(encrypted_community_maps == nullptr)
        {
            encrypted_community_maps = std::make_shared<Snmp::EncryptedCommunityMaps>();
        }
        return encrypted_community_maps;
    }

    if(child_yang_name == "views")
    {
        if(views == nullptr)
        {
            views = std::make_shared<Snmp::Views>();
        }
        return views;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Snmp::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "administration")
    {
        if(administration == nullptr)
        {
            administration = std::make_shared<Snmp::Administration>();
        }
        return administration;
    }

    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Snmp::Agent>();
        }
        return agent;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "drop-packet")
    {
        if(drop_packet == nullptr)
        {
            drop_packet = std::make_shared<Snmp::DropPacket>();
        }
        return drop_packet;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Snmp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Snmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Snmp::System>();
        }
        return system;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Snmp::Target>();
        }
        return target;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Snmp::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Snmp::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "bulk-stats")
    {
        if(bulk_stats == nullptr)
        {
            bulk_stats = std::make_shared<Snmp::BulkStats>();
        }
        return bulk_stats;
    }

    if(child_yang_name == "default-community-maps")
    {
        if(default_community_maps == nullptr)
        {
            default_community_maps = std::make_shared<Snmp::DefaultCommunityMaps>();
        }
        return default_community_maps;
    }

    if(child_yang_name == "overload-control")
    {
        if(overload_control == nullptr)
        {
            overload_control = std::make_shared<Snmp::OverloadControl>();
        }
        return overload_control;
    }

    if(child_yang_name == "timeouts")
    {
        if(timeouts == nullptr)
        {
            timeouts = std::make_shared<Snmp::Timeouts>();
        }
        return timeouts;
    }

    if(child_yang_name == "users")
    {
        if(users == nullptr)
        {
            users = std::make_shared<Snmp::Users>();
        }
        return users;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Snmp::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Snmp::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "trap-hosts")
    {
        if(trap_hosts == nullptr)
        {
            trap_hosts = std::make_shared<Snmp::TrapHosts>();
        }
        return trap_hosts;
    }

    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Snmp::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "context-mappings")
    {
        if(context_mappings == nullptr)
        {
            context_mappings = std::make_shared<Snmp::ContextMappings>();
        }
        return context_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encrypted_community_maps != nullptr)
    {
        _children["encrypted-community-maps"] = encrypted_community_maps;
    }

    if(views != nullptr)
    {
        _children["views"] = views;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(administration != nullptr)
    {
        _children["administration"] = administration;
    }

    if(agent != nullptr)
    {
        _children["agent"] = agent;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    if(drop_packet != nullptr)
    {
        _children["drop-packet"] = drop_packet;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(target != nullptr)
    {
        _children["target"] = target;
    }

    if(notification != nullptr)
    {
        _children["notification"] = notification;
    }

    if(correlator != nullptr)
    {
        _children["correlator"] = correlator;
    }

    if(bulk_stats != nullptr)
    {
        _children["bulk-stats"] = bulk_stats;
    }

    if(default_community_maps != nullptr)
    {
        _children["default-community-maps"] = default_community_maps;
    }

    if(overload_control != nullptr)
    {
        _children["overload-control"] = overload_control;
    }

    if(timeouts != nullptr)
    {
        _children["timeouts"] = timeouts;
    }

    if(users != nullptr)
    {
        _children["users"] = users;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(trap_hosts != nullptr)
    {
        _children["trap-hosts"] = trap_hosts;
    }

    if(contexts != nullptr)
    {
        _children["contexts"] = contexts;
    }

    if(context_mappings != nullptr)
    {
        _children["context-mappings"] = context_mappings;
    }

    return _children;
}

void Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inform-retries")
    {
        inform_retries = value;
        inform_retries.value_namespace = name_space;
        inform_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-port")
    {
        trap_port = value;
        trap_port.value_namespace = name_space;
        trap_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-poll-stats")
    {
        oid_poll_stats = value;
        oid_poll_stats.value_namespace = name_space;
        oid_poll_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-source")
    {
        trap_source = value;
        trap_source.value_namespace = name_space;
        trap_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-authentication-trap-disable")
    {
        vrf_authentication_trap_disable = value;
        vrf_authentication_trap_disable.value_namespace = name_space;
        vrf_authentication_trap_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inform-timeout")
    {
        inform_timeout = value;
        inform_timeout.value_namespace = name_space;
        inform_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-source-ipv6")
    {
        trap_source_ipv6 = value;
        trap_source_ipv6.value_namespace = name_space;
        trap_source_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle-time")
    {
        throttle_time = value;
        throttle_time.value_namespace = name_space;
        throttle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-source-ipv4")
    {
        trap_source_ipv4 = value;
        trap_source_ipv4.value_namespace = name_space;
        trap_source_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inform-pending")
    {
        inform_pending = value;
        inform_pending.value_namespace = name_space;
        inform_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inform-retries")
    {
        inform_retries.yfilter = yfilter;
    }
    if(value_path == "trap-port")
    {
        trap_port.yfilter = yfilter;
    }
    if(value_path == "oid-poll-stats")
    {
        oid_poll_stats.yfilter = yfilter;
    }
    if(value_path == "trap-source")
    {
        trap_source.yfilter = yfilter;
    }
    if(value_path == "vrf-authentication-trap-disable")
    {
        vrf_authentication_trap_disable.yfilter = yfilter;
    }
    if(value_path == "inform-timeout")
    {
        inform_timeout.yfilter = yfilter;
    }
    if(value_path == "trap-source-ipv6")
    {
        trap_source_ipv6.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "throttle-time")
    {
        throttle_time.yfilter = yfilter;
    }
    if(value_path == "trap-source-ipv4")
    {
        trap_source_ipv4.yfilter = yfilter;
    }
    if(value_path == "inform-pending")
    {
        inform_pending.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Snmp::clone_ptr() const
{
    return std::make_shared<Snmp>();
}

std::string Snmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Snmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Snmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Snmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-community-maps" || name == "views" || name == "logging" || name == "administration" || name == "agent" || name == "trap" || name == "drop-packet" || name == "ipv6" || name == "ipv4" || name == "system" || name == "target" || name == "notification" || name == "correlator" || name == "bulk-stats" || name == "default-community-maps" || name == "overload-control" || name == "timeouts" || name == "users" || name == "vrfs" || name == "groups" || name == "trap-hosts" || name == "contexts" || name == "context-mappings" || name == "inform-retries" || name == "trap-port" || name == "oid-poll-stats" || name == "trap-source" || name == "vrf-authentication-trap-disable" || name == "inform-timeout" || name == "trap-source-ipv6" || name == "packet-size" || name == "throttle-time" || name == "trap-source-ipv4" || name == "inform-pending")
        return true;
    return false;
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMaps()
    :
    encrypted_community_map(this, {"community_name"})
{

    yang_name = "encrypted-community-maps"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::EncryptedCommunityMaps::~EncryptedCommunityMaps()
{
}

bool Snmp::EncryptedCommunityMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encrypted_community_map.len(); index++)
    {
        if(encrypted_community_map[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::EncryptedCommunityMaps::has_operation() const
{
    for (std::size_t index=0; index<encrypted_community_map.len(); index++)
    {
        if(encrypted_community_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::EncryptedCommunityMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EncryptedCommunityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EncryptedCommunityMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::EncryptedCommunityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community-map")
    {
        auto ent_ = std::make_shared<Snmp::EncryptedCommunityMaps::EncryptedCommunityMap>();
        ent_->parent = this;
        encrypted_community_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::EncryptedCommunityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encrypted_community_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::EncryptedCommunityMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::EncryptedCommunityMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::EncryptedCommunityMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-community-map")
        return true;
    return false;
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::EncryptedCommunityMap()
    :
    community_name{YType::str, "community-name"},
    context{YType::str, "context"},
    security{YType::str, "security"},
    target_list{YType::str, "target-list"}
{

    yang_name = "encrypted-community-map"; yang_parent_name = "encrypted-community-maps"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::~EncryptedCommunityMap()
{
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| context.is_set
	|| security.is_set
	|| target_list.is_set;
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(target_list.yfilter);
}

std::string Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/encrypted-community-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community-map";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (target_list.is_set || is_set(target_list.yfilter)) leaf_name_data.push_back(target_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-list")
    {
        target_list = value;
        target_list.value_namespace = name_space;
        target_list.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "target-list")
    {
        target_list.yfilter = yfilter;
    }
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "context" || name == "security" || name == "target-list")
        return true;
    return false;
}

Snmp::Views::Views()
    :
    view(this, {"view_name", "family"})
{

    yang_name = "views"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Views::~Views()
{
}

bool Snmp::Views::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Views::has_operation() const
{
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Views::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Views::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "views";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Views::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Views::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view")
    {
        auto ent_ = std::make_shared<Snmp::Views::View>();
        ent_->parent = this;
        view.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Views::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : view.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Views::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Views::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Views::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view")
        return true;
    return false;
}

Snmp::Views::View::View()
    :
    view_name{YType::str, "view-name"},
    family{YType::str, "family"},
    view_inclusion{YType::enumeration, "view-inclusion"}
{

    yang_name = "view"; yang_parent_name = "views"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Views::View::~View()
{
}

bool Snmp::Views::View::has_data() const
{
    if (is_presence_container) return true;
    return view_name.is_set
	|| family.is_set
	|| view_inclusion.is_set;
}

bool Snmp::Views::View::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(view_name.yfilter)
	|| ydk::is_set(family.yfilter)
	|| ydk::is_set(view_inclusion.yfilter);
}

std::string Snmp::Views::View::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/views/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Views::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view";
    ADD_KEY_TOKEN(view_name, "view-name");
    ADD_KEY_TOKEN(family, "family");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Views::View::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());
    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());
    if (view_inclusion.is_set || is_set(view_inclusion.yfilter)) leaf_name_data.push_back(view_inclusion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Views::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Views::View::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Views::View::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view-inclusion")
    {
        view_inclusion = value;
        view_inclusion.value_namespace = name_space;
        view_inclusion.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Views::View::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
    if(value_path == "view-inclusion")
    {
        view_inclusion.yfilter = yfilter;
    }
}

bool Snmp::Views::View::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view-name" || name == "family" || name == "view-inclusion")
        return true;
    return false;
}

Snmp::Logging::Logging()
    :
    threshold(std::make_shared<Snmp::Logging::Threshold>())
{
    threshold->parent = this;

    yang_name = "logging"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Logging::~Logging()
{
}

bool Snmp::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Snmp::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Snmp::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Snmp::Logging::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Snmp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Snmp::Logging::Threshold::Threshold()
    :
    oid_processing{YType::uint32, "oid-processing"},
    pdu_processing{YType::uint32, "pdu-processing"}
{

    yang_name = "threshold"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Logging::Threshold::~Threshold()
{
}

bool Snmp::Logging::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return oid_processing.is_set
	|| pdu_processing.is_set;
}

bool Snmp::Logging::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid_processing.yfilter)
	|| ydk::is_set(pdu_processing.yfilter);
}

std::string Snmp::Logging::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Logging::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Logging::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid_processing.is_set || is_set(oid_processing.yfilter)) leaf_name_data.push_back(oid_processing.get_name_leafdata());
    if (pdu_processing.is_set || is_set(pdu_processing.yfilter)) leaf_name_data.push_back(pdu_processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Logging::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Logging::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Logging::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid-processing")
    {
        oid_processing = value;
        oid_processing.value_namespace = name_space;
        oid_processing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-processing")
    {
        pdu_processing = value;
        pdu_processing.value_namespace = name_space;
        pdu_processing.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Logging::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid-processing")
    {
        oid_processing.yfilter = yfilter;
    }
    if(value_path == "pdu-processing")
    {
        pdu_processing.yfilter = yfilter;
    }
}

bool Snmp::Logging::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid-processing" || name == "pdu-processing")
        return true;
    return false;
}

Snmp::Administration::Administration()
    :
    default_communities(std::make_shared<Snmp::Administration::DefaultCommunities>())
    , encrypted_communities(std::make_shared<Snmp::Administration::EncryptedCommunities>())
{
    default_communities->parent = this;
    encrypted_communities->parent = this;

    yang_name = "administration"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Administration::~Administration()
{
}

bool Snmp::Administration::has_data() const
{
    if (is_presence_container) return true;
    return (default_communities !=  nullptr && default_communities->has_data())
	|| (encrypted_communities !=  nullptr && encrypted_communities->has_data());
}

bool Snmp::Administration::has_operation() const
{
    return is_set(yfilter)
	|| (default_communities !=  nullptr && default_communities->has_operation())
	|| (encrypted_communities !=  nullptr && encrypted_communities->has_operation());
}

std::string Snmp::Administration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "administration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Administration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-communities")
    {
        if(default_communities == nullptr)
        {
            default_communities = std::make_shared<Snmp::Administration::DefaultCommunities>();
        }
        return default_communities;
    }

    if(child_yang_name == "encrypted-communities")
    {
        if(encrypted_communities == nullptr)
        {
            encrypted_communities = std::make_shared<Snmp::Administration::EncryptedCommunities>();
        }
        return encrypted_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Administration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_communities != nullptr)
    {
        _children["default-communities"] = default_communities;
    }

    if(encrypted_communities != nullptr)
    {
        _children["encrypted-communities"] = encrypted_communities;
    }

    return _children;
}

void Snmp::Administration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Administration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Administration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-communities" || name == "encrypted-communities")
        return true;
    return false;
}

Snmp::Administration::DefaultCommunities::DefaultCommunities()
    :
    default_community(this, {"community_name"})
{

    yang_name = "default-communities"; yang_parent_name = "administration"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Administration::DefaultCommunities::~DefaultCommunities()
{
}

bool Snmp::Administration::DefaultCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_community.len(); index++)
    {
        if(default_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Administration::DefaultCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_community.len(); index++)
    {
        if(default_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Administration::DefaultCommunities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::DefaultCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::DefaultCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Administration::DefaultCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-community")
    {
        auto ent_ = std::make_shared<Snmp::Administration::DefaultCommunities::DefaultCommunity>();
        ent_->parent = this;
        default_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Administration::DefaultCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : default_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Administration::DefaultCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Administration::DefaultCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Administration::DefaultCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-community")
        return true;
    return false;
}

Snmp::Administration::DefaultCommunities::DefaultCommunity::DefaultCommunity()
    :
    community_name{YType::str, "community-name"},
    priviledge{YType::enumeration, "priviledge"},
    view_name{YType::str, "view-name"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v4_access_list{YType::str, "v4-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    owner{YType::enumeration, "owner"}
{

    yang_name = "default-community"; yang_parent_name = "default-communities"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Administration::DefaultCommunities::DefaultCommunity::~DefaultCommunity()
{
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| priviledge.is_set
	|| view_name.is_set
	|| v4acl_type.is_set
	|| v4_access_list.is_set
	|| v6acl_type.is_set
	|| v6_access_list.is_set
	|| owner.is_set;
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(priviledge.yfilter)
	|| ydk::is_set(view_name.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Snmp::Administration::DefaultCommunities::DefaultCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/default-communities/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::DefaultCommunities::DefaultCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::DefaultCommunities::DefaultCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (priviledge.is_set || is_set(priviledge.yfilter)) leaf_name_data.push_back(priviledge.get_name_leafdata());
    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Administration::DefaultCommunities::DefaultCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Administration::DefaultCommunities::DefaultCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Administration::DefaultCommunities::DefaultCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priviledge")
    {
        priviledge = value;
        priviledge.value_namespace = name_space;
        priviledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Administration::DefaultCommunities::DefaultCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "priviledge")
    {
        priviledge.yfilter = yfilter;
    }
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "priviledge" || name == "view-name" || name == "v4acl-type" || name == "v4-access-list" || name == "v6acl-type" || name == "v6-access-list" || name == "owner")
        return true;
    return false;
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunities()
    :
    encrypted_community(this, {"community_name"})
{

    yang_name = "encrypted-communities"; yang_parent_name = "administration"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Administration::EncryptedCommunities::~EncryptedCommunities()
{
}

bool Snmp::Administration::EncryptedCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encrypted_community.len(); index++)
    {
        if(encrypted_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Administration::EncryptedCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_community.len(); index++)
    {
        if(encrypted_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Administration::EncryptedCommunities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::EncryptedCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::EncryptedCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Administration::EncryptedCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community")
    {
        auto ent_ = std::make_shared<Snmp::Administration::EncryptedCommunities::EncryptedCommunity>();
        ent_->parent = this;
        encrypted_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Administration::EncryptedCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encrypted_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Administration::EncryptedCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Administration::EncryptedCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Administration::EncryptedCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-community")
        return true;
    return false;
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunity::EncryptedCommunity()
    :
    community_name{YType::str, "community-name"},
    priviledge{YType::enumeration, "priviledge"},
    view_name{YType::str, "view-name"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v4_access_list{YType::str, "v4-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    owner{YType::enumeration, "owner"}
{

    yang_name = "encrypted-community"; yang_parent_name = "encrypted-communities"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunity::~EncryptedCommunity()
{
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| priviledge.is_set
	|| view_name.is_set
	|| v4acl_type.is_set
	|| v4_access_list.is_set
	|| v6acl_type.is_set
	|| v6_access_list.is_set
	|| owner.is_set;
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(priviledge.yfilter)
	|| ydk::is_set(view_name.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/encrypted-communities/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (priviledge.is_set || is_set(priviledge.yfilter)) leaf_name_data.push_back(priviledge.get_name_leafdata());
    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Administration::EncryptedCommunities::EncryptedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priviledge")
    {
        priviledge = value;
        priviledge.value_namespace = name_space;
        priviledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Administration::EncryptedCommunities::EncryptedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "priviledge")
    {
        priviledge.yfilter = yfilter;
    }
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "priviledge" || name == "view-name" || name == "v4acl-type" || name == "v4-access-list" || name == "v6acl-type" || name == "v6-access-list" || name == "owner")
        return true;
    return false;
}

Snmp::Agent::Agent()
    :
    engine_id(std::make_shared<Snmp::Agent::EngineId>())
{
    engine_id->parent = this;

    yang_name = "agent"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Agent::~Agent()
{
}

bool Snmp::Agent::has_data() const
{
    if (is_presence_container) return true;
    return (engine_id !=  nullptr && engine_id->has_data());
}

bool Snmp::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (engine_id !=  nullptr && engine_id->has_operation());
}

std::string Snmp::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "engine-id")
    {
        if(engine_id == nullptr)
        {
            engine_id = std::make_shared<Snmp::Agent::EngineId>();
        }
        return engine_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(engine_id != nullptr)
    {
        _children["engine-id"] = engine_id;
    }

    return _children;
}

void Snmp::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "engine-id")
        return true;
    return false;
}

Snmp::Agent::EngineId::EngineId()
    :
    local{YType::str, "local"}
        ,
    remotes(std::make_shared<Snmp::Agent::EngineId::Remotes>())
{
    remotes->parent = this;

    yang_name = "engine-id"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Agent::EngineId::~EngineId()
{
}

bool Snmp::Agent::EngineId::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| (remotes !=  nullptr && remotes->has_data());
}

bool Snmp::Agent::EngineId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (remotes !=  nullptr && remotes->has_operation());
}

std::string Snmp::Agent::EngineId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::EngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::EngineId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Agent::EngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remotes")
    {
        if(remotes == nullptr)
        {
            remotes = std::make_shared<Snmp::Agent::EngineId::Remotes>();
        }
        return remotes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Agent::EngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remotes != nullptr)
    {
        _children["remotes"] = remotes;
    }

    return _children;
}

void Snmp::Agent::EngineId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Agent::EngineId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Snmp::Agent::EngineId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remotes" || name == "local")
        return true;
    return false;
}

Snmp::Agent::EngineId::Remotes::Remotes()
    :
    remote(this, {"remote_address"})
{

    yang_name = "remotes"; yang_parent_name = "engine-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Agent::EngineId::Remotes::~Remotes()
{
}

bool Snmp::Agent::EngineId::Remotes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote.len(); index++)
    {
        if(remote[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Agent::EngineId::Remotes::has_operation() const
{
    for (std::size_t index=0; index<remote.len(); index++)
    {
        if(remote[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Agent::EngineId::Remotes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/engine-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::EngineId::Remotes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::EngineId::Remotes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Agent::EngineId::Remotes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        auto ent_ = std::make_shared<Snmp::Agent::EngineId::Remotes::Remote>();
        ent_->parent = this;
        remote.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Agent::EngineId::Remotes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Agent::EngineId::Remotes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Agent::EngineId::Remotes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Agent::EngineId::Remotes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote")
        return true;
    return false;
}

Snmp::Agent::EngineId::Remotes::Remote::Remote()
    :
    remote_address{YType::str, "remote-address"},
    remote_engine_id{YType::str, "remote-engine-id"},
    port{YType::uint16, "port"}
{

    yang_name = "remote"; yang_parent_name = "remotes"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Agent::EngineId::Remotes::Remote::~Remote()
{
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_data() const
{
    if (is_presence_container) return true;
    return remote_address.is_set
	|| remote_engine_id.is_set
	|| port.is_set;
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_engine_id.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Agent::EngineId::Remotes::Remote::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/engine-id/remotes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::EngineId::Remotes::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    ADD_KEY_TOKEN(remote_address, "remote-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::EngineId::Remotes::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_engine_id.is_set || is_set(remote_engine_id.yfilter)) leaf_name_data.push_back(remote_engine_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Agent::EngineId::Remotes::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Agent::EngineId::Remotes::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Agent::EngineId::Remotes::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-engine-id")
    {
        remote_engine_id = value;
        remote_engine_id.value_namespace = name_space;
        remote_engine_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Agent::EngineId::Remotes::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-engine-id")
    {
        remote_engine_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-address" || name == "remote-engine-id" || name == "port")
        return true;
    return false;
}

Snmp::Trap::Trap()
    :
    timeout{YType::uint32, "timeout"},
    throttle_time{YType::uint32, "throttle-time"},
    queue_length{YType::uint32, "queue-length"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Trap::~Trap()
{
}

bool Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| throttle_time.is_set
	|| queue_length.is_set;
}

bool Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(throttle_time.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Snmp::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (throttle_time.is_set || is_set(throttle_time.yfilter)) leaf_name_data.push_back(throttle_time.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle-time")
    {
        throttle_time = value;
        throttle_time.value_namespace = name_space;
        throttle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "throttle-time")
    {
        throttle_time.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "throttle-time" || name == "queue-length")
        return true;
    return false;
}

Snmp::DropPacket::DropPacket()
    :
    unknown_user{YType::empty, "unknown-user"}
{

    yang_name = "drop-packet"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::DropPacket::~DropPacket()
{
}

bool Snmp::DropPacket::has_data() const
{
    if (is_presence_container) return true;
    return unknown_user.is_set;
}

bool Snmp::DropPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_user.yfilter);
}

std::string Snmp::DropPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::DropPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::DropPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_user.is_set || is_set(unknown_user.yfilter)) leaf_name_data.push_back(unknown_user.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::DropPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::DropPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::DropPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-user")
    {
        unknown_user = value;
        unknown_user.value_namespace = name_space;
        unknown_user.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::DropPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-user")
    {
        unknown_user.yfilter = yfilter;
    }
}

bool Snmp::DropPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-user")
        return true;
    return false;
}

Snmp::Ipv6::Ipv6()
    :
    tos(std::make_shared<Snmp::Ipv6::Tos>())
{
    tos->parent = this;

    yang_name = "ipv6"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Ipv6::~Ipv6()
{
}

bool Snmp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (tos !=  nullptr && tos->has_data());
}

bool Snmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Snmp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Snmp::Ipv6::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    return _children;
}

void Snmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

Snmp::Ipv6::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    precedence{YType::str, "precedence"},
    dscp{YType::str, "dscp"}
{

    yang_name = "tos"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Ipv6::Tos::~Tos()
{
}

bool Snmp::Ipv6::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| precedence.is_set
	|| dscp.is_set;
}

bool Snmp::Ipv6::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Snmp::Ipv6::Tos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv6::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv6::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Ipv6::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Ipv6::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Ipv6::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Ipv6::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Snmp::Ipv6::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "precedence" || name == "dscp")
        return true;
    return false;
}

Snmp::Ipv4::Ipv4()
    :
    tos(std::make_shared<Snmp::Ipv4::Tos>())
{
    tos->parent = this;

    yang_name = "ipv4"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Ipv4::~Ipv4()
{
}

bool Snmp::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (tos !=  nullptr && tos->has_data());
}

bool Snmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Snmp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Snmp::Ipv4::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    return _children;
}

void Snmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

Snmp::Ipv4::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    precedence{YType::str, "precedence"},
    dscp{YType::str, "dscp"}
{

    yang_name = "tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Ipv4::Tos::~Tos()
{
}

bool Snmp::Ipv4::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| precedence.is_set
	|| dscp.is_set;
}

bool Snmp::Ipv4::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Snmp::Ipv4::Tos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv4::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv4::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Ipv4::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Ipv4::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Ipv4::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Ipv4::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Snmp::Ipv4::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "precedence" || name == "dscp")
        return true;
    return false;
}

Snmp::System::System()
    :
    chassis_id{YType::str, "chassis-id"},
    location{YType::str, "location"},
    contact{YType::str, "contact"}
{

    yang_name = "system"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::System::~System()
{
}

bool Snmp::System::has_data() const
{
    if (is_presence_container) return true;
    return chassis_id.is_set
	|| location.is_set
	|| contact.is_set;
}

bool Snmp::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(contact.yfilter);
}

std::string Snmp::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (contact.is_set || is_set(contact.yfilter)) leaf_name_data.push_back(contact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact")
    {
        contact = value;
        contact.value_namespace = name_space;
        contact.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "contact")
    {
        contact.yfilter = yfilter;
    }
}

bool Snmp::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis-id" || name == "location" || name == "contact")
        return true;
    return false;
}

Snmp::Target::Target()
    :
    targets(std::make_shared<Snmp::Target::Targets>())
{
    targets->parent = this;

    yang_name = "target"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Target::~Target()
{
}

bool Snmp::Target::has_data() const
{
    if (is_presence_container) return true;
    return (targets !=  nullptr && targets->has_data());
}

bool Snmp::Target::has_operation() const
{
    return is_set(yfilter)
	|| (targets !=  nullptr && targets->has_operation());
}

std::string Snmp::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targets")
    {
        if(targets == nullptr)
        {
            targets = std::make_shared<Snmp::Target::Targets>();
        }
        return targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(targets != nullptr)
    {
        _children["targets"] = targets;
    }

    return _children;
}

void Snmp::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targets")
        return true;
    return false;
}

Snmp::Target::Targets::Targets()
    :
    target(this, {"target_list_name"})
{

    yang_name = "targets"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Target::Targets::~Targets()
{
}

bool Snmp::Target::Targets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<target.len(); index++)
    {
        if(target[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::has_operation() const
{
    for (std::size_t index=0; index<target.len(); index++)
    {
        if(target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Target::Targets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/target/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Target::Targets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::Targets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        auto ent_ = std::make_shared<Snmp::Target::Targets::Target_>();
        ent_->parent = this;
        target.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::Targets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : target.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Target::Targets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::Targets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::Targets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::Target_()
    :
    target_list_name{YType::str, "target-list-name"}
        ,
    vrf_names(std::make_shared<Snmp::Target::Targets::Target_::VrfNames>())
    , target_addresses(std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses>())
{
    vrf_names->parent = this;
    target_addresses->parent = this;

    yang_name = "target"; yang_parent_name = "targets"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Target::Targets::Target_::~Target_()
{
}

bool Snmp::Target::Targets::Target_::has_data() const
{
    if (is_presence_container) return true;
    return target_list_name.is_set
	|| (vrf_names !=  nullptr && vrf_names->has_data())
	|| (target_addresses !=  nullptr && target_addresses->has_data());
}

bool Snmp::Target::Targets::Target_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_list_name.yfilter)
	|| (vrf_names !=  nullptr && vrf_names->has_operation())
	|| (target_addresses !=  nullptr && target_addresses->has_operation());
}

std::string Snmp::Target::Targets::Target_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/target/targets/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Target::Targets::Target_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    ADD_KEY_TOKEN(target_list_name, "target-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_list_name.is_set || is_set(target_list_name.yfilter)) leaf_name_data.push_back(target_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::Targets::Target_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Snmp::Target::Targets::Target_::VrfNames>();
        }
        return vrf_names;
    }

    if(child_yang_name == "target-addresses")
    {
        if(target_addresses == nullptr)
        {
            target_addresses = std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses>();
        }
        return target_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::Targets::Target_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_names != nullptr)
    {
        _children["vrf-names"] = vrf_names;
    }

    if(target_addresses != nullptr)
    {
        _children["target-addresses"] = target_addresses;
    }

    return _children;
}

void Snmp::Target::Targets::Target_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-list-name")
    {
        target_list_name = value;
        target_list_name.value_namespace = name_space;
        target_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Target::Targets::Target_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-list-name")
    {
        target_list_name.yfilter = yfilter;
    }
}

bool Snmp::Target::Targets::Target_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-names" || name == "target-addresses" || name == "target-list-name")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::VrfNames::VrfNames()
    :
    vrf_name(this, {"name"})
{

    yang_name = "vrf-names"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Target::Targets::Target_::VrfNames::~VrfNames()
{
}

bool Snmp::Target::Targets::Target_::VrfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::Target_::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Target::Targets::Target_::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::Targets::Target_::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        auto ent_ = std::make_shared<Snmp::Target::Targets::Target_::VrfNames::VrfName>();
        ent_->parent = this;
        vrf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::Targets::Target_::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Target::Targets::Target_::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::Targets::Target_::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::Targets::Target_::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::VrfNames::VrfName::VrfName()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Target::Targets::Target_::VrfNames::VrfName::~VrfName()
{
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Snmp::Target::Targets::Target_::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::Targets::Target_::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::Targets::Target_::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Target::Targets::Target_::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Target::Targets::Target_::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddresses()
    :
    target_address(this, {"ip_address"})
{

    yang_name = "target-addresses"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Target::Targets::Target_::TargetAddresses::~TargetAddresses()
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<target_address.len(); index++)
    {
        if(target_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_operation() const
{
    for (std::size_t index=0; index<target_address.len(); index++)
    {
        if(target_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Target::Targets::Target_::TargetAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::TargetAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::Targets::Target_::TargetAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        auto ent_ = std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress>();
        ent_->parent = this;
        target_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::Targets::Target_::TargetAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : target_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Target::Targets::Target_::TargetAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::Targets::Target_::TargetAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::TargetAddress()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "target-address"; yang_parent_name = "target-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::~TargetAddress()
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Snmp::Notification::Notification()
    :
    ipsla{YType::boolean, "Cisco-IOS-XR-man-ipsla-cfg:ipsla"}
        ,
    snmp(std::make_shared<Snmp::Notification::Snmp_>())
    , selective_vrf_download(std::make_shared<Snmp::Notification::SelectiveVrfDownload>())
    , flash(std::make_shared<Snmp::Notification::Flash>())
    , entity_state(std::make_shared<Snmp::Notification::EntityState>())
    , ospfv3(std::make_shared<Snmp::Notification::Ospfv3>())
    , vpls(std::make_shared<Snmp::Notification::Vpls>())
    , l2vpn(std::make_shared<Snmp::Notification::L2vpn>())
    , config_man(std::make_shared<Snmp::Notification::ConfigMan>())
    , isis(std::make_shared<Snmp::Notification::Isis>())
    , entity_redundancy(std::make_shared<Snmp::Notification::EntityRedundancy>())
    , cfm(std::make_shared<Snmp::Notification::Cfm>())
    , rsvp(std::make_shared<Snmp::Notification::Rsvp>())
    , vrrp(std::make_shared<Snmp::Notification::Vrrp>())
    , subscriber_mib(std::make_shared<Snmp::Notification::SubscriberMib>())
    , mpls_l3vpn(std::make_shared<Snmp::Notification::MplsL3vpn>())
    , frequency_synchronization(std::make_shared<Snmp::Notification::FrequencySynchronization>())
    , entity_(std::make_shared<Snmp::Notification::Entity>())
    , otn(std::make_shared<Snmp::Notification::Otn>())
    , bfd(std::make_shared<Snmp::Notification::Bfd>())
    , ip_sec(std::make_shared<Snmp::Notification::IpSec>())
    , isakmp(std::make_shared<Snmp::Notification::Isakmp>())
    , mpls_ldp(std::make_shared<Snmp::Notification::MplsLdp>())
    , optical(std::make_shared<Snmp::Notification::Optical>())
    , fru_control(std::make_shared<Snmp::Notification::FruControl>())
    , diametermib(std::make_shared<Snmp::Notification::Diametermib>())
    , rf(std::make_shared<Snmp::Notification::Rf>())
    , bgp(std::make_shared<Snmp::Notification::Bgp>())
    , ntp(std::make_shared<Snmp::Notification::Ntp>())
    , syslog(std::make_shared<Snmp::Notification::Syslog>())
    , hsrp(std::make_shared<Snmp::Notification::Hsrp>())
    , optical_ots(std::make_shared<Snmp::Notification::OpticalOts>())
    , config_copy(std::make_shared<Snmp::Notification::ConfigCopy>())
    , ospf(std::make_shared<Snmp::Notification::Ospf>())
    , system(std::make_shared<Snmp::Notification::System>())
    , l2tun(std::make_shared<Snmp::Notification::L2tun>())
    , cisco_entity_ext(std::make_shared<Snmp::Notification::CiscoEntityExt>())
    , addresspool_mib(std::make_shared<Snmp::Notification::AddresspoolMib>())
    , sensor(std::make_shared<Snmp::Notification::Sensor>())
    , oam(std::make_shared<Snmp::Notification::Oam>())
    , bridge(std::make_shared<Snmp::Notification::Bridge>())
    , mpls_te_p2mp(std::make_shared<Snmp::Notification::MplsTeP2mp>())
    , mpls_te(std::make_shared<Snmp::Notification::MplsTe>())
    , mpls_frr(std::make_shared<Snmp::Notification::MplsFrr>())
    , fabric_crs(std::make_shared<Snmp::Notification::FabricCrs>())
{
    snmp->parent = this;
    selective_vrf_download->parent = this;
    flash->parent = this;
    entity_state->parent = this;
    ospfv3->parent = this;
    vpls->parent = this;
    l2vpn->parent = this;
    config_man->parent = this;
    isis->parent = this;
    entity_redundancy->parent = this;
    cfm->parent = this;
    rsvp->parent = this;
    vrrp->parent = this;
    subscriber_mib->parent = this;
    mpls_l3vpn->parent = this;
    frequency_synchronization->parent = this;
    entity_->parent = this;
    otn->parent = this;
    bfd->parent = this;
    ip_sec->parent = this;
    isakmp->parent = this;
    mpls_ldp->parent = this;
    optical->parent = this;
    fru_control->parent = this;
    diametermib->parent = this;
    rf->parent = this;
    bgp->parent = this;
    ntp->parent = this;
    syslog->parent = this;
    hsrp->parent = this;
    optical_ots->parent = this;
    config_copy->parent = this;
    ospf->parent = this;
    system->parent = this;
    l2tun->parent = this;
    cisco_entity_ext->parent = this;
    addresspool_mib->parent = this;
    sensor->parent = this;
    oam->parent = this;
    bridge->parent = this;
    mpls_te_p2mp->parent = this;
    mpls_te->parent = this;
    mpls_frr->parent = this;
    fabric_crs->parent = this;

    yang_name = "notification"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::~Notification()
{
}

bool Snmp::Notification::has_data() const
{
    if (is_presence_container) return true;
    return ipsla.is_set
	|| (snmp !=  nullptr && snmp->has_data())
	|| (selective_vrf_download !=  nullptr && selective_vrf_download->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (entity_state !=  nullptr && entity_state->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (vpls !=  nullptr && vpls->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (config_man !=  nullptr && config_man->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (entity_redundancy !=  nullptr && entity_redundancy->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data())
	|| (subscriber_mib !=  nullptr && subscriber_mib->has_data())
	|| (mpls_l3vpn !=  nullptr && mpls_l3vpn->has_data())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data())
	|| (entity_ !=  nullptr && entity_->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (ip_sec !=  nullptr && ip_sec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (optical !=  nullptr && optical->has_data())
	|| (fru_control !=  nullptr && fru_control->has_data())
	|| (diametermib !=  nullptr && diametermib->has_data())
	|| (rf !=  nullptr && rf->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (hsrp !=  nullptr && hsrp->has_data())
	|| (optical_ots !=  nullptr && optical_ots->has_data())
	|| (config_copy !=  nullptr && config_copy->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (l2tun !=  nullptr && l2tun->has_data())
	|| (cisco_entity_ext !=  nullptr && cisco_entity_ext->has_data())
	|| (addresspool_mib !=  nullptr && addresspool_mib->has_data())
	|| (sensor !=  nullptr && sensor->has_data())
	|| (oam !=  nullptr && oam->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (mpls_te_p2mp !=  nullptr && mpls_te_p2mp->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (mpls_frr !=  nullptr && mpls_frr->has_data())
	|| (fabric_crs !=  nullptr && fabric_crs->has_data());
}

bool Snmp::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla.yfilter)
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (selective_vrf_download !=  nullptr && selective_vrf_download->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (entity_state !=  nullptr && entity_state->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (vpls !=  nullptr && vpls->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (config_man !=  nullptr && config_man->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (entity_redundancy !=  nullptr && entity_redundancy->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation())
	|| (subscriber_mib !=  nullptr && subscriber_mib->has_operation())
	|| (mpls_l3vpn !=  nullptr && mpls_l3vpn->has_operation())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation())
	|| (entity_ !=  nullptr && entity_->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (ip_sec !=  nullptr && ip_sec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (optical !=  nullptr && optical->has_operation())
	|| (fru_control !=  nullptr && fru_control->has_operation())
	|| (diametermib !=  nullptr && diametermib->has_operation())
	|| (rf !=  nullptr && rf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (hsrp !=  nullptr && hsrp->has_operation())
	|| (optical_ots !=  nullptr && optical_ots->has_operation())
	|| (config_copy !=  nullptr && config_copy->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (l2tun !=  nullptr && l2tun->has_operation())
	|| (cisco_entity_ext !=  nullptr && cisco_entity_ext->has_operation())
	|| (addresspool_mib !=  nullptr && addresspool_mib->has_operation())
	|| (sensor !=  nullptr && sensor->has_operation())
	|| (oam !=  nullptr && oam->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (mpls_te_p2mp !=  nullptr && mpls_te_p2mp->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (mpls_frr !=  nullptr && mpls_frr->has_operation())
	|| (fabric_crs !=  nullptr && fabric_crs->has_operation());
}

std::string Snmp::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla.is_set || is_set(ipsla.yfilter)) leaf_name_data.push_back(ipsla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Snmp::Notification::Snmp_>();
        }
        return snmp;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download")
    {
        if(selective_vrf_download == nullptr)
        {
            selective_vrf_download = std::make_shared<Snmp::Notification::SelectiveVrfDownload>();
        }
        return selective_vrf_download;
    }

    if(child_yang_name == "Cisco-IOS-XR-flashmib-cfg:flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Snmp::Notification::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-entstatemib-cfg:entity-state")
    {
        if(entity_state == nullptr)
        {
            entity_state = std::make_shared<Snmp::Notification::EntityState>();
        }
        return entity_state;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Snmp::Notification::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2vpn-cfg:vpls")
    {
        if(vpls == nullptr)
        {
            vpls = std::make_shared<Snmp::Notification::Vpls>();
        }
        return vpls;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2vpn-cfg:l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Snmp::Notification::L2vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "Cisco-IOS-XR-config-mibs-cfg:config-man")
    {
        if(config_man == nullptr)
        {
            config_man = std::make_shared<Snmp::Notification::ConfigMan>();
        }
        return config_man;
    }

    if(child_yang_name == "Cisco-IOS-XR-clns-isis-cfg:isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Snmp::Notification::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-ceredundancymib-cfg:entity-redundancy")
    {
        if(entity_redundancy == nullptr)
        {
            entity_redundancy = std::make_shared<Snmp::Notification::EntityRedundancy>();
        }
        return entity_redundancy;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-cfm-cfg:cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Snmp::Notification::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-rsvp-cfg:rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Snmp::Notification::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Snmp::Notification::Vrrp>();
        }
        return vrrp;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber-mib")
    {
        if(subscriber_mib == nullptr)
        {
            subscriber_mib = std::make_shared<Snmp::Notification::SubscriberMib>();
        }
        return subscriber_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-vpn-cfg:mpls-l3vpn")
    {
        if(mpls_l3vpn == nullptr)
        {
            mpls_l3vpn = std::make_shared<Snmp::Notification::MplsL3vpn>();
        }
        return mpls_l3vpn;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<Snmp::Notification::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-entitymib-cfg:entity")
    {
        if(entity_ == nullptr)
        {
            entity_ = std::make_shared<Snmp::Notification::Entity>();
        }
        return entity_;
    }

    if(child_yang_name == "Cisco-IOS-XR-otnifmib-cfg:otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Snmp::Notification::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-bfd-cfg:bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Snmp::Notification::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "Cisco-IOS-XR-crypto-mibs-ipsecflowmon-cfg:ip-sec")
    {
        if(ip_sec == nullptr)
        {
            ip_sec = std::make_shared<Snmp::Notification::IpSec>();
        }
        return ip_sec;
    }

    if(child_yang_name == "Cisco-IOS-XR-crypto-mibs-ipsecflowmon-cfg:isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Snmp::Notification::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Snmp::Notification::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "Cisco-IOS-XR-opticalmib-cfg:optical")
    {
        if(optical == nullptr)
        {
            optical = std::make_shared<Snmp::Notification::Optical>();
        }
        return optical;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-frucontrolmib-cfg:fru-control")
    {
        if(fru_control == nullptr)
        {
            fru_control = std::make_shared<Snmp::Notification::FruControl>();
        }
        return fru_control;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-diameter-base-mib-cfg:diametermib")
    {
        if(diametermib == nullptr)
        {
            diametermib = std::make_shared<Snmp::Notification::Diametermib>();
        }
        return diametermib;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-mib-rfmib-cfg:rf")
    {
        if(rf == nullptr)
        {
            rf = std::make_shared<Snmp::Notification::Rf>();
        }
        return rf;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-bgp-cfg:bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Snmp::Notification::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-ntp-cfg:ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Snmp::Notification::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-syslogmib-cfg:syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Snmp::Notification::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp")
    {
        if(hsrp == nullptr)
        {
            hsrp = std::make_shared<Snmp::Notification::Hsrp>();
        }
        return hsrp;
    }

    if(child_yang_name == "Cisco-IOS-XR-opticalotsmib-cfg:optical-ots")
    {
        if(optical_ots == nullptr)
        {
            optical_ots = std::make_shared<Snmp::Notification::OpticalOts>();
        }
        return optical_ots;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-confcopymib-cfg:config-copy")
    {
        if(config_copy == nullptr)
        {
            config_copy = std::make_shared<Snmp::Notification::ConfigCopy>();
        }
        return config_copy;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ospf-cfg:ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Snmp::Notification::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-systemmib-cfg:system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Snmp::Notification::System>();
        }
        return system;
    }

    if(child_yang_name == "Cisco-IOS-XR-tunnel-l2tun-proto-mibs-cfg:l2tun")
    {
        if(l2tun == nullptr)
        {
            l2tun = std::make_shared<Snmp::Notification::L2tun>();
        }
        return l2tun;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-entityextmib-cfg:cisco-entity-ext")
    {
        if(cisco_entity_ext == nullptr)
        {
            cisco_entity_ext = std::make_shared<Snmp::Notification::CiscoEntityExt>();
        }
        return cisco_entity_ext;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-daps-mib-cfg:addresspool-mib")
    {
        if(addresspool_mib == nullptr)
        {
            addresspool_mib = std::make_shared<Snmp::Notification::AddresspoolMib>();
        }
        return addresspool_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor")
    {
        if(sensor == nullptr)
        {
            sensor = std::make_shared<Snmp::Notification::Sensor>();
        }
        return sensor;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-link-oam-cfg:oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Snmp::Notification::Oam>();
        }
        return oam;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-bridgemib-cfg:bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Snmp::Notification::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-te-p2mp")
    {
        if(mpls_te_p2mp == nullptr)
        {
            mpls_te_p2mp = std::make_shared<Snmp::Notification::MplsTeP2mp>();
        }
        return mpls_te_p2mp;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Snmp::Notification::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-frr")
    {
        if(mpls_frr == nullptr)
        {
            mpls_frr = std::make_shared<Snmp::Notification::MplsFrr>();
        }
        return mpls_frr;
    }

    if(child_yang_name == "Cisco-IOS-XR-fabhfr-mib-cfg:fabric-crs")
    {
        if(fabric_crs == nullptr)
        {
            fabric_crs = std::make_shared<Snmp::Notification::FabricCrs>();
        }
        return fabric_crs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(selective_vrf_download != nullptr)
    {
        _children["Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download"] = selective_vrf_download;
    }

    if(flash != nullptr)
    {
        _children["Cisco-IOS-XR-flashmib-cfg:flash"] = flash;
    }

    if(entity_state != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-entstatemib-cfg:entity-state"] = entity_state;
    }

    if(ospfv3 != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3"] = ospfv3;
    }

    if(vpls != nullptr)
    {
        _children["Cisco-IOS-XR-l2vpn-cfg:vpls"] = vpls;
    }

    if(l2vpn != nullptr)
    {
        _children["Cisco-IOS-XR-l2vpn-cfg:l2vpn"] = l2vpn;
    }

    if(config_man != nullptr)
    {
        _children["Cisco-IOS-XR-config-mibs-cfg:config-man"] = config_man;
    }

    if(isis != nullptr)
    {
        _children["Cisco-IOS-XR-clns-isis-cfg:isis"] = isis;
    }

    if(entity_redundancy != nullptr)
    {
        _children["Cisco-IOS-XR-infra-ceredundancymib-cfg:entity-redundancy"] = entity_redundancy;
    }

    if(cfm != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-cfm-cfg:cfm"] = cfm;
    }

    if(rsvp != nullptr)
    {
        _children["Cisco-IOS-XR-ip-rsvp-cfg:rsvp"] = rsvp;
    }

    if(vrrp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp"] = vrrp;
    }

    if(subscriber_mib != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber-mib"] = subscriber_mib;
    }

    if(mpls_l3vpn != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-vpn-cfg:mpls-l3vpn"] = mpls_l3vpn;
    }

    if(frequency_synchronization != nullptr)
    {
        _children["Cisco-IOS-XR-freqsync-cfg:frequency-synchronization"] = frequency_synchronization;
    }

    if(entity_ != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-entitymib-cfg:entity"] = entity_;
    }

    if(otn != nullptr)
    {
        _children["Cisco-IOS-XR-otnifmib-cfg:otn"] = otn;
    }

    if(bfd != nullptr)
    {
        _children["Cisco-IOS-XR-ip-bfd-cfg:bfd"] = bfd;
    }

    if(ip_sec != nullptr)
    {
        _children["Cisco-IOS-XR-crypto-mibs-ipsecflowmon-cfg:ip-sec"] = ip_sec;
    }

    if(isakmp != nullptr)
    {
        _children["Cisco-IOS-XR-crypto-mibs-ipsecflowmon-cfg:isakmp"] = isakmp;
    }

    if(mpls_ldp != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp"] = mpls_ldp;
    }

    if(optical != nullptr)
    {
        _children["Cisco-IOS-XR-opticalmib-cfg:optical"] = optical;
    }

    if(fru_control != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-frucontrolmib-cfg:fru-control"] = fru_control;
    }

    if(diametermib != nullptr)
    {
        _children["Cisco-IOS-XR-aaa-diameter-base-mib-cfg:diametermib"] = diametermib;
    }

    if(rf != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-mib-rfmib-cfg:rf"] = rf;
    }

    if(bgp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-bgp-cfg:bgp"] = bgp;
    }

    if(ntp != nullptr)
    {
        _children["Cisco-IOS-XR-ip-ntp-cfg:ntp"] = ntp;
    }

    if(syslog != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-syslogmib-cfg:syslog"] = syslog;
    }

    if(hsrp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp"] = hsrp;
    }

    if(optical_ots != nullptr)
    {
        _children["Cisco-IOS-XR-opticalotsmib-cfg:optical-ots"] = optical_ots;
    }

    if(config_copy != nullptr)
    {
        _children["Cisco-IOS-XR-infra-confcopymib-cfg:config-copy"] = config_copy;
    }

    if(ospf != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-ospf-cfg:ospf"] = ospf;
    }

    if(system != nullptr)
    {
        _children["Cisco-IOS-XR-infra-systemmib-cfg:system"] = system;
    }

    if(l2tun != nullptr)
    {
        _children["Cisco-IOS-XR-tunnel-l2tun-proto-mibs-cfg:l2tun"] = l2tun;
    }

    if(cisco_entity_ext != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-entityextmib-cfg:cisco-entity-ext"] = cisco_entity_ext;
    }

    if(addresspool_mib != nullptr)
    {
        _children["Cisco-IOS-XR-ip-daps-mib-cfg:addresspool-mib"] = addresspool_mib;
    }

    if(sensor != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor"] = sensor;
    }

    if(oam != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-link-oam-cfg:oam"] = oam;
    }

    if(bridge != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-bridgemib-cfg:bridge"] = bridge;
    }

    if(mpls_te_p2mp != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-te-cfg:mpls-te-p2mp"] = mpls_te_p2mp;
    }

    if(mpls_te != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-te-cfg:mpls-te"] = mpls_te;
    }

    if(mpls_frr != nullptr)
    {
        _children["Cisco-IOS-XR-mpls-te-cfg:mpls-frr"] = mpls_frr;
    }

    if(fabric_crs != nullptr)
    {
        _children["Cisco-IOS-XR-fabhfr-mib-cfg:fabric-crs"] = fabric_crs;
    }

    return _children;
}

void Snmp::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XR-man-ipsla-cfg:ipsla")
    {
        ipsla = value;
        ipsla.value_namespace = name_space;
        ipsla.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla")
    {
        ipsla.yfilter = yfilter;
    }
}

bool Snmp::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "selective-vrf-download" || name == "flash" || name == "entity-state" || name == "ospfv3" || name == "vpls" || name == "l2vpn" || name == "config-man" || name == "isis" || name == "entity-redundancy" || name == "cfm" || name == "rsvp" || name == "vrrp" || name == "subscriber-mib" || name == "mpls-l3vpn" || name == "frequency-synchronization" || name == "entity" || name == "otn" || name == "bfd" || name == "ip-sec" || name == "isakmp" || name == "mpls-ldp" || name == "optical" || name == "fru-control" || name == "diametermib" || name == "rf" || name == "bgp" || name == "ntp" || name == "syslog" || name == "hsrp" || name == "optical-ots" || name == "config-copy" || name == "ospf" || name == "system" || name == "l2tun" || name == "cisco-entity-ext" || name == "addresspool-mib" || name == "sensor" || name == "oam" || name == "bridge" || name == "mpls-te-p2mp" || name == "mpls-te" || name == "mpls-frr" || name == "fabric-crs" || name == "ipsla")
        return true;
    return false;
}

Snmp::Notification::Snmp_::Snmp_()
    :
    authentication{YType::empty, "authentication"},
    cold_start{YType::empty, "cold-start"},
    warm_start{YType::empty, "warm-start"},
    enable{YType::empty, "enable"},
    link_down{YType::empty, "Cisco-IOS-XR-snmp-ifmib-cfg:link-down"},
    link_up{YType::empty, "Cisco-IOS-XR-snmp-ifmib-cfg:link-up"}
{

    yang_name = "snmp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Snmp_::~Snmp_()
{
}

bool Snmp::Notification::Snmp_::has_data() const
{
    if (is_presence_container) return true;
    return authentication.is_set
	|| cold_start.is_set
	|| warm_start.is_set
	|| enable.is_set
	|| link_down.is_set
	|| link_up.is_set;
}

bool Snmp::Notification::Snmp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(cold_start.yfilter)
	|| ydk::is_set(warm_start.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(link_down.yfilter)
	|| ydk::is_set(link_up.yfilter);
}

std::string Snmp::Notification::Snmp_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Snmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Snmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (cold_start.is_set || is_set(cold_start.yfilter)) leaf_name_data.push_back(cold_start.get_name_leafdata());
    if (warm_start.is_set || is_set(warm_start.yfilter)) leaf_name_data.push_back(warm_start.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (link_down.is_set || is_set(link_down.yfilter)) leaf_name_data.push_back(link_down.get_name_leafdata());
    if (link_up.is_set || is_set(link_up.yfilter)) leaf_name_data.push_back(link_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Snmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Snmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Snmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cold-start")
    {
        cold_start = value;
        cold_start.value_namespace = name_space;
        cold_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warm-start")
    {
        warm_start = value;
        warm_start.value_namespace = name_space;
        warm_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-snmp-ifmib-cfg:link-down")
    {
        link_down = value;
        link_down.value_namespace = name_space;
        link_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-snmp-ifmib-cfg:link-up")
    {
        link_up = value;
        link_up.value_namespace = name_space;
        link_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Snmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "cold-start")
    {
        cold_start.yfilter = yfilter;
    }
    if(value_path == "warm-start")
    {
        warm_start.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "link-down")
    {
        link_down.yfilter = yfilter;
    }
    if(value_path == "link-up")
    {
        link_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::Snmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "cold-start" || name == "warm-start" || name == "enable" || name == "link-down" || name == "link-up")
        return true;
    return false;
}

Snmp::Notification::SelectiveVrfDownload::SelectiveVrfDownload()
    :
    role_change{YType::empty, "role-change"}
{

    yang_name = "selective-vrf-download"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool Snmp::Notification::SelectiveVrfDownload::has_data() const
{
    if (is_presence_container) return true;
    return role_change.is_set;
}

bool Snmp::Notification::SelectiveVrfDownload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role_change.yfilter);
}

std::string Snmp::Notification::SelectiveVrfDownload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::SelectiveVrfDownload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role_change.is_set || is_set(role_change.yfilter)) leaf_name_data.push_back(role_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::SelectiveVrfDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::SelectiveVrfDownload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role-change")
    {
        role_change = value;
        role_change.value_namespace = name_space;
        role_change.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::SelectiveVrfDownload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role-change")
    {
        role_change.yfilter = yfilter;
    }
}

bool Snmp::Notification::SelectiveVrfDownload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role-change")
        return true;
    return false;
}

Snmp::Notification::Flash::Flash()
    :
    insertion{YType::empty, "insertion"},
    removal{YType::empty, "removal"}
{

    yang_name = "flash"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Flash::~Flash()
{
}

bool Snmp::Notification::Flash::has_data() const
{
    if (is_presence_container) return true;
    return insertion.is_set
	|| removal.is_set;
}

bool Snmp::Notification::Flash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insertion.yfilter)
	|| ydk::is_set(removal.yfilter);
}

std::string Snmp::Notification::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flashmib-cfg:flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insertion.is_set || is_set(insertion.yfilter)) leaf_name_data.push_back(insertion.get_name_leafdata());
    if (removal.is_set || is_set(removal.yfilter)) leaf_name_data.push_back(removal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insertion")
    {
        insertion = value;
        insertion.value_namespace = name_space;
        insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removal")
    {
        removal = value;
        removal.value_namespace = name_space;
        removal.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insertion")
    {
        insertion.yfilter = yfilter;
    }
    if(value_path == "removal")
    {
        removal.yfilter = yfilter;
    }
}

bool Snmp::Notification::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insertion" || name == "removal")
        return true;
    return false;
}

Snmp::Notification::EntityState::EntityState()
    :
    switchover{YType::empty, "switchover"},
    oper_status{YType::empty, "oper-status"}
{

    yang_name = "entity-state"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::EntityState::~EntityState()
{
}

bool Snmp::Notification::EntityState::has_data() const
{
    if (is_presence_container) return true;
    return switchover.is_set
	|| oper_status.is_set;
}

bool Snmp::Notification::EntityState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchover.yfilter)
	|| ydk::is_set(oper_status.yfilter);
}

std::string Snmp::Notification::EntityState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::EntityState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entstatemib-cfg:entity-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::EntityState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::EntityState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::EntityState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::EntityState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::EntityState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
}

bool Snmp::Notification::EntityState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover" || name == "oper-status")
        return true;
    return false;
}

Snmp::Notification::Ospfv3::Ospfv3()
    :
    error(std::make_shared<Snmp::Notification::Ospfv3::Error>())
    , state_change(std::make_shared<Snmp::Notification::Ospfv3::StateChange>())
{
    error->parent = this;
    state_change->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospfv3::~Ospfv3()
{
}

bool Snmp::Notification::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return (error !=  nullptr && error->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Snmp::Notification::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Snmp::Notification::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Snmp::Notification::Ospfv3::Error>();
        }
        return error;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Snmp::Notification::Ospfv3::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(error != nullptr)
    {
        _children["error"] = error;
    }

    if(state_change != nullptr)
    {
        _children["state-change"] = state_change;
    }

    return _children;
}

void Snmp::Notification::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "state-change")
        return true;
    return false;
}

Snmp::Notification::Ospfv3::Error::Error()
    :
    config_error{YType::empty, "config-error"},
    bad_packet{YType::empty, "bad-packet"},
    virtual_bad_packet{YType::empty, "virtual-bad-packet"},
    virtual_config_error{YType::empty, "virtual-config-error"}
{

    yang_name = "error"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospfv3::Error::~Error()
{
}

bool Snmp::Notification::Ospfv3::Error::has_data() const
{
    if (is_presence_container) return true;
    return config_error.is_set
	|| bad_packet.is_set
	|| virtual_bad_packet.is_set
	|| virtual_config_error.is_set;
}

bool Snmp::Notification::Ospfv3::Error::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_error.yfilter)
	|| ydk::is_set(bad_packet.yfilter)
	|| ydk::is_set(virtual_bad_packet.yfilter)
	|| ydk::is_set(virtual_config_error.yfilter);
}

std::string Snmp::Notification::Ospfv3::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospfv3::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospfv3::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_error.is_set || is_set(config_error.yfilter)) leaf_name_data.push_back(config_error.get_name_leafdata());
    if (bad_packet.is_set || is_set(bad_packet.yfilter)) leaf_name_data.push_back(bad_packet.get_name_leafdata());
    if (virtual_bad_packet.is_set || is_set(virtual_bad_packet.yfilter)) leaf_name_data.push_back(virtual_bad_packet.get_name_leafdata());
    if (virtual_config_error.is_set || is_set(virtual_config_error.yfilter)) leaf_name_data.push_back(virtual_config_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospfv3::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospfv3::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ospfv3::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-error")
    {
        config_error = value;
        config_error.value_namespace = name_space;
        config_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-packet")
    {
        bad_packet = value;
        bad_packet.value_namespace = name_space;
        bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet = value;
        virtual_bad_packet.value_namespace = name_space;
        virtual_bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error = value;
        virtual_config_error.value_namespace = name_space;
        virtual_config_error.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospfv3::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-error")
    {
        config_error.yfilter = yfilter;
    }
    if(value_path == "bad-packet")
    {
        bad_packet.yfilter = yfilter;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet.yfilter = yfilter;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospfv3::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-error" || name == "bad-packet" || name == "virtual-bad-packet" || name == "virtual-config-error")
        return true;
    return false;
}

Snmp::Notification::Ospfv3::StateChange::StateChange()
    :
    restart_virtual_helper{YType::empty, "restart-virtual-helper"},
    nssa_translator{YType::empty, "nssa-translator"},
    interface{YType::empty, "interface"},
    restart{YType::empty, "restart"},
    neighbor{YType::empty, "neighbor"},
    virtual_interface{YType::empty, "virtual-interface"},
    restart_helper{YType::empty, "restart-helper"},
    virtual_neighbor{YType::empty, "virtual-neighbor"}
{

    yang_name = "state-change"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospfv3::StateChange::~StateChange()
{
}

bool Snmp::Notification::Ospfv3::StateChange::has_data() const
{
    if (is_presence_container) return true;
    return restart_virtual_helper.is_set
	|| nssa_translator.is_set
	|| interface.is_set
	|| restart.is_set
	|| neighbor.is_set
	|| virtual_interface.is_set
	|| restart_helper.is_set
	|| virtual_neighbor.is_set;
}

bool Snmp::Notification::Ospfv3::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart_virtual_helper.yfilter)
	|| ydk::is_set(nssa_translator.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(restart_helper.yfilter)
	|| ydk::is_set(virtual_neighbor.yfilter);
}

std::string Snmp::Notification::Ospfv3::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospfv3::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospfv3::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart_virtual_helper.is_set || is_set(restart_virtual_helper.yfilter)) leaf_name_data.push_back(restart_virtual_helper.get_name_leafdata());
    if (nssa_translator.is_set || is_set(nssa_translator.yfilter)) leaf_name_data.push_back(nssa_translator.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (restart_helper.is_set || is_set(restart_helper.yfilter)) leaf_name_data.push_back(restart_helper.get_name_leafdata());
    if (virtual_neighbor.is_set || is_set(virtual_neighbor.yfilter)) leaf_name_data.push_back(virtual_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospfv3::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospfv3::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ospfv3::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart-virtual-helper")
    {
        restart_virtual_helper = value;
        restart_virtual_helper.value_namespace = name_space;
        restart_virtual_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translator")
    {
        nssa_translator = value;
        nssa_translator.value_namespace = name_space;
        nssa_translator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-helper")
    {
        restart_helper = value;
        restart_helper.value_namespace = name_space;
        restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor = value;
        virtual_neighbor.value_namespace = name_space;
        virtual_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospfv3::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart-virtual-helper")
    {
        restart_virtual_helper.yfilter = yfilter;
    }
    if(value_path == "nssa-translator")
    {
        nssa_translator.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "restart-helper")
    {
        restart_helper.yfilter = yfilter;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospfv3::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart-virtual-helper" || name == "nssa-translator" || name == "interface" || name == "restart" || name == "neighbor" || name == "virtual-interface" || name == "restart-helper" || name == "virtual-neighbor")
        return true;
    return false;
}

Snmp::Notification::Vpls::Vpls()
    :
    full_clear{YType::empty, "full-clear"},
    status{YType::empty, "status"},
    enable{YType::empty, "enable"},
    full_raise{YType::empty, "full-raise"}
{

    yang_name = "vpls"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Vpls::~Vpls()
{
}

bool Snmp::Notification::Vpls::has_data() const
{
    if (is_presence_container) return true;
    return full_clear.is_set
	|| status.is_set
	|| enable.is_set
	|| full_raise.is_set;
}

bool Snmp::Notification::Vpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_clear.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(full_raise.yfilter);
}

std::string Snmp::Notification::Vpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Vpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Vpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_clear.is_set || is_set(full_clear.yfilter)) leaf_name_data.push_back(full_clear.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (full_raise.is_set || is_set(full_raise.yfilter)) leaf_name_data.push_back(full_raise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Vpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Vpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Vpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-clear")
    {
        full_clear = value;
        full_clear.value_namespace = name_space;
        full_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-raise")
    {
        full_raise = value;
        full_raise.value_namespace = name_space;
        full_raise.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Vpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-clear")
    {
        full_clear.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "full-raise")
    {
        full_raise.yfilter = yfilter;
    }
}

bool Snmp::Notification::Vpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-clear" || name == "status" || name == "enable" || name == "full-raise")
        return true;
    return false;
}

Snmp::Notification::L2vpn::L2vpn()
    :
    cisco{YType::empty, "cisco"},
    enable{YType::empty, "enable"},
    vc_down{YType::empty, "vc-down"},
    vc_up{YType::empty, "vc-up"}
{

    yang_name = "l2vpn"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::L2vpn::~L2vpn()
{
}

bool Snmp::Notification::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return cisco.is_set
	|| enable.is_set
	|| vc_down.is_set
	|| vc_up.is_set;
}

bool Snmp::Notification::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(vc_down.yfilter)
	|| ydk::is_set(vc_up.yfilter);
}

std::string Snmp::Notification::L2vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (vc_down.is_set || is_set(vc_down.yfilter)) leaf_name_data.push_back(vc_down.get_name_leafdata());
    if (vc_up.is_set || is_set(vc_up.yfilter)) leaf_name_data.push_back(vc_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-down")
    {
        vc_down = value;
        vc_down.value_namespace = name_space;
        vc_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-up")
    {
        vc_up = value;
        vc_up.value_namespace = name_space;
        vc_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "vc-down")
    {
        vc_down.yfilter = yfilter;
    }
    if(value_path == "vc-up")
    {
        vc_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "enable" || name == "vc-down" || name == "vc-up")
        return true;
    return false;
}

Snmp::Notification::ConfigMan::ConfigMan()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "config-man"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::ConfigMan::~ConfigMan()
{
}

bool Snmp::Notification::ConfigMan::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::ConfigMan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::ConfigMan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::ConfigMan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mibs-cfg:config-man";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::ConfigMan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::ConfigMan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::ConfigMan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::ConfigMan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::ConfigMan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::ConfigMan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Isis::Isis()
    :
    database_overflow{YType::enumeration, "database-overflow"},
    manual_address_drops{YType::enumeration, "manual-address-drops"},
    corrupted_lsp_detected{YType::enumeration, "corrupted-lsp-detected"},
    attempt_to_exceed_max_sequence{YType::enumeration, "attempt-to-exceed-max-sequence"},
    id_length_mismatch{YType::enumeration, "id-length-mismatch"},
    max_area_address_mismatch{YType::enumeration, "max-area-address-mismatch"},
    own_lsp_purge{YType::enumeration, "own-lsp-purge"},
    sequence_number_skip{YType::enumeration, "sequence-number-skip"},
    authentication_type_failure{YType::enumeration, "authentication-type-failure"},
    authentication_failure{YType::enumeration, "authentication-failure"},
    version_skew{YType::enumeration, "version-skew"},
    area_mismatch{YType::enumeration, "area-mismatch"},
    rejected_adjacency{YType::enumeration, "rejected-adjacency"},
    lsp_too_large_to_propagate{YType::enumeration, "lsp-too-large-to-propagate"},
    originated_lsp_buffer_size_mismatch{YType::enumeration, "originated-lsp-buffer-size-mismatch"},
    protocols_supported_mismatch{YType::enumeration, "protocols-supported-mismatch"},
    adjacency_change{YType::enumeration, "adjacency-change"},
    lsp_error_detected{YType::enumeration, "lsp-error-detected"},
    all{YType::enumeration, "all"}
{

    yang_name = "isis"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Isis::~Isis()
{
}

bool Snmp::Notification::Isis::has_data() const
{
    if (is_presence_container) return true;
    return database_overflow.is_set
	|| manual_address_drops.is_set
	|| corrupted_lsp_detected.is_set
	|| attempt_to_exceed_max_sequence.is_set
	|| id_length_mismatch.is_set
	|| max_area_address_mismatch.is_set
	|| own_lsp_purge.is_set
	|| sequence_number_skip.is_set
	|| authentication_type_failure.is_set
	|| authentication_failure.is_set
	|| version_skew.is_set
	|| area_mismatch.is_set
	|| rejected_adjacency.is_set
	|| lsp_too_large_to_propagate.is_set
	|| originated_lsp_buffer_size_mismatch.is_set
	|| protocols_supported_mismatch.is_set
	|| adjacency_change.is_set
	|| lsp_error_detected.is_set
	|| all.is_set;
}

bool Snmp::Notification::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(database_overflow.yfilter)
	|| ydk::is_set(manual_address_drops.yfilter)
	|| ydk::is_set(corrupted_lsp_detected.yfilter)
	|| ydk::is_set(attempt_to_exceed_max_sequence.yfilter)
	|| ydk::is_set(id_length_mismatch.yfilter)
	|| ydk::is_set(max_area_address_mismatch.yfilter)
	|| ydk::is_set(own_lsp_purge.yfilter)
	|| ydk::is_set(sequence_number_skip.yfilter)
	|| ydk::is_set(authentication_type_failure.yfilter)
	|| ydk::is_set(authentication_failure.yfilter)
	|| ydk::is_set(version_skew.yfilter)
	|| ydk::is_set(area_mismatch.yfilter)
	|| ydk::is_set(rejected_adjacency.yfilter)
	|| ydk::is_set(lsp_too_large_to_propagate.yfilter)
	|| ydk::is_set(originated_lsp_buffer_size_mismatch.yfilter)
	|| ydk::is_set(protocols_supported_mismatch.yfilter)
	|| ydk::is_set(adjacency_change.yfilter)
	|| ydk::is_set(lsp_error_detected.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Snmp::Notification::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_overflow.is_set || is_set(database_overflow.yfilter)) leaf_name_data.push_back(database_overflow.get_name_leafdata());
    if (manual_address_drops.is_set || is_set(manual_address_drops.yfilter)) leaf_name_data.push_back(manual_address_drops.get_name_leafdata());
    if (corrupted_lsp_detected.is_set || is_set(corrupted_lsp_detected.yfilter)) leaf_name_data.push_back(corrupted_lsp_detected.get_name_leafdata());
    if (attempt_to_exceed_max_sequence.is_set || is_set(attempt_to_exceed_max_sequence.yfilter)) leaf_name_data.push_back(attempt_to_exceed_max_sequence.get_name_leafdata());
    if (id_length_mismatch.is_set || is_set(id_length_mismatch.yfilter)) leaf_name_data.push_back(id_length_mismatch.get_name_leafdata());
    if (max_area_address_mismatch.is_set || is_set(max_area_address_mismatch.yfilter)) leaf_name_data.push_back(max_area_address_mismatch.get_name_leafdata());
    if (own_lsp_purge.is_set || is_set(own_lsp_purge.yfilter)) leaf_name_data.push_back(own_lsp_purge.get_name_leafdata());
    if (sequence_number_skip.is_set || is_set(sequence_number_skip.yfilter)) leaf_name_data.push_back(sequence_number_skip.get_name_leafdata());
    if (authentication_type_failure.is_set || is_set(authentication_type_failure.yfilter)) leaf_name_data.push_back(authentication_type_failure.get_name_leafdata());
    if (authentication_failure.is_set || is_set(authentication_failure.yfilter)) leaf_name_data.push_back(authentication_failure.get_name_leafdata());
    if (version_skew.is_set || is_set(version_skew.yfilter)) leaf_name_data.push_back(version_skew.get_name_leafdata());
    if (area_mismatch.is_set || is_set(area_mismatch.yfilter)) leaf_name_data.push_back(area_mismatch.get_name_leafdata());
    if (rejected_adjacency.is_set || is_set(rejected_adjacency.yfilter)) leaf_name_data.push_back(rejected_adjacency.get_name_leafdata());
    if (lsp_too_large_to_propagate.is_set || is_set(lsp_too_large_to_propagate.yfilter)) leaf_name_data.push_back(lsp_too_large_to_propagate.get_name_leafdata());
    if (originated_lsp_buffer_size_mismatch.is_set || is_set(originated_lsp_buffer_size_mismatch.yfilter)) leaf_name_data.push_back(originated_lsp_buffer_size_mismatch.get_name_leafdata());
    if (protocols_supported_mismatch.is_set || is_set(protocols_supported_mismatch.yfilter)) leaf_name_data.push_back(protocols_supported_mismatch.get_name_leafdata());
    if (adjacency_change.is_set || is_set(adjacency_change.yfilter)) leaf_name_data.push_back(adjacency_change.get_name_leafdata());
    if (lsp_error_detected.is_set || is_set(lsp_error_detected.yfilter)) leaf_name_data.push_back(lsp_error_detected.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "database-overflow")
    {
        database_overflow = value;
        database_overflow.value_namespace = name_space;
        database_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-address-drops")
    {
        manual_address_drops = value;
        manual_address_drops.value_namespace = name_space;
        manual_address_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupted-lsp-detected")
    {
        corrupted_lsp_detected = value;
        corrupted_lsp_detected.value_namespace = name_space;
        corrupted_lsp_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attempt-to-exceed-max-sequence")
    {
        attempt_to_exceed_max_sequence = value;
        attempt_to_exceed_max_sequence.value_namespace = name_space;
        attempt_to_exceed_max_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length-mismatch")
    {
        id_length_mismatch = value;
        id_length_mismatch.value_namespace = name_space;
        id_length_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-address-mismatch")
    {
        max_area_address_mismatch = value;
        max_area_address_mismatch.value_namespace = name_space;
        max_area_address_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "own-lsp-purge")
    {
        own_lsp_purge = value;
        own_lsp_purge.value_namespace = name_space;
        own_lsp_purge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-skip")
    {
        sequence_number_skip = value;
        sequence_number_skip.value_namespace = name_space;
        sequence_number_skip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type-failure")
    {
        authentication_type_failure = value;
        authentication_type_failure.value_namespace = name_space;
        authentication_type_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure = value;
        authentication_failure.value_namespace = name_space;
        authentication_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-skew")
    {
        version_skew = value;
        version_skew.value_namespace = name_space;
        version_skew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-mismatch")
    {
        area_mismatch = value;
        area_mismatch.value_namespace = name_space;
        area_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-adjacency")
    {
        rejected_adjacency = value;
        rejected_adjacency.value_namespace = name_space;
        rejected_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-too-large-to-propagate")
    {
        lsp_too_large_to_propagate = value;
        lsp_too_large_to_propagate.value_namespace = name_space;
        lsp_too_large_to_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originated-lsp-buffer-size-mismatch")
    {
        originated_lsp_buffer_size_mismatch = value;
        originated_lsp_buffer_size_mismatch.value_namespace = name_space;
        originated_lsp_buffer_size_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocols-supported-mismatch")
    {
        protocols_supported_mismatch = value;
        protocols_supported_mismatch.value_namespace = name_space;
        protocols_supported_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-change")
    {
        adjacency_change = value;
        adjacency_change.value_namespace = name_space;
        adjacency_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-error-detected")
    {
        lsp_error_detected = value;
        lsp_error_detected.value_namespace = name_space;
        lsp_error_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "database-overflow")
    {
        database_overflow.yfilter = yfilter;
    }
    if(value_path == "manual-address-drops")
    {
        manual_address_drops.yfilter = yfilter;
    }
    if(value_path == "corrupted-lsp-detected")
    {
        corrupted_lsp_detected.yfilter = yfilter;
    }
    if(value_path == "attempt-to-exceed-max-sequence")
    {
        attempt_to_exceed_max_sequence.yfilter = yfilter;
    }
    if(value_path == "id-length-mismatch")
    {
        id_length_mismatch.yfilter = yfilter;
    }
    if(value_path == "max-area-address-mismatch")
    {
        max_area_address_mismatch.yfilter = yfilter;
    }
    if(value_path == "own-lsp-purge")
    {
        own_lsp_purge.yfilter = yfilter;
    }
    if(value_path == "sequence-number-skip")
    {
        sequence_number_skip.yfilter = yfilter;
    }
    if(value_path == "authentication-type-failure")
    {
        authentication_type_failure.yfilter = yfilter;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure.yfilter = yfilter;
    }
    if(value_path == "version-skew")
    {
        version_skew.yfilter = yfilter;
    }
    if(value_path == "area-mismatch")
    {
        area_mismatch.yfilter = yfilter;
    }
    if(value_path == "rejected-adjacency")
    {
        rejected_adjacency.yfilter = yfilter;
    }
    if(value_path == "lsp-too-large-to-propagate")
    {
        lsp_too_large_to_propagate.yfilter = yfilter;
    }
    if(value_path == "originated-lsp-buffer-size-mismatch")
    {
        originated_lsp_buffer_size_mismatch.yfilter = yfilter;
    }
    if(value_path == "protocols-supported-mismatch")
    {
        protocols_supported_mismatch.yfilter = yfilter;
    }
    if(value_path == "adjacency-change")
    {
        adjacency_change.yfilter = yfilter;
    }
    if(value_path == "lsp-error-detected")
    {
        lsp_error_detected.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Snmp::Notification::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-overflow" || name == "manual-address-drops" || name == "corrupted-lsp-detected" || name == "attempt-to-exceed-max-sequence" || name == "id-length-mismatch" || name == "max-area-address-mismatch" || name == "own-lsp-purge" || name == "sequence-number-skip" || name == "authentication-type-failure" || name == "authentication-failure" || name == "version-skew" || name == "area-mismatch" || name == "rejected-adjacency" || name == "lsp-too-large-to-propagate" || name == "originated-lsp-buffer-size-mismatch" || name == "protocols-supported-mismatch" || name == "adjacency-change" || name == "lsp-error-detected" || name == "all")
        return true;
    return false;
}

Snmp::Notification::EntityRedundancy::EntityRedundancy()
    :
    switchover{YType::empty, "switchover"},
    enable{YType::empty, "enable"},
    status{YType::empty, "status"}
{

    yang_name = "entity-redundancy"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::EntityRedundancy::~EntityRedundancy()
{
}

bool Snmp::Notification::EntityRedundancy::has_data() const
{
    if (is_presence_container) return true;
    return switchover.is_set
	|| enable.is_set
	|| status.is_set;
}

bool Snmp::Notification::EntityRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchover.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Snmp::Notification::EntityRedundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::EntityRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ceredundancymib-cfg:entity-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::EntityRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::EntityRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::EntityRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::EntityRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::EntityRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Snmp::Notification::EntityRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover" || name == "enable" || name == "status")
        return true;
    return false;
}

Snmp::Notification::Cfm::Cfm()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cfm"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Cfm::~Cfm()
{
}

bool Snmp::Notification::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Rsvp::Rsvp()
    :
    lost_flow{YType::empty, "lost-flow"},
    new_flow{YType::empty, "new-flow"},
    enable{YType::empty, "enable"}
{

    yang_name = "rsvp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Rsvp::~Rsvp()
{
}

bool Snmp::Notification::Rsvp::has_data() const
{
    if (is_presence_container) return true;
    return lost_flow.is_set
	|| new_flow.is_set
	|| enable.is_set;
}

bool Snmp::Notification::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lost_flow.yfilter)
	|| ydk::is_set(new_flow.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lost_flow.is_set || is_set(lost_flow.yfilter)) leaf_name_data.push_back(lost_flow.get_name_leafdata());
    if (new_flow.is_set || is_set(new_flow.yfilter)) leaf_name_data.push_back(new_flow.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lost-flow")
    {
        lost_flow = value;
        lost_flow.value_namespace = name_space;
        lost_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-flow")
    {
        new_flow = value;
        new_flow.value_namespace = name_space;
        new_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lost-flow")
    {
        lost_flow.yfilter = yfilter;
    }
    if(value_path == "new-flow")
    {
        new_flow.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lost-flow" || name == "new-flow" || name == "enable")
        return true;
    return false;
}

Snmp::Notification::Vrrp::Vrrp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "vrrp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Vrrp::~Vrrp()
{
}

bool Snmp::Notification::Vrrp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Vrrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Vrrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::SubscriberMib::SubscriberMib()
    :
    session_aggregate(std::make_shared<Snmp::Notification::SubscriberMib::SessionAggregate>())
{
    session_aggregate->parent = this;

    yang_name = "subscriber-mib"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::SubscriberMib::~SubscriberMib()
{
}

bool Snmp::Notification::SubscriberMib::has_data() const
{
    if (is_presence_container) return true;
    return (session_aggregate !=  nullptr && session_aggregate->has_data());
}

bool Snmp::Notification::SubscriberMib::has_operation() const
{
    return is_set(yfilter)
	|| (session_aggregate !=  nullptr && session_aggregate->has_operation());
}

std::string Snmp::Notification::SubscriberMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::SubscriberMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::SubscriberMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::SubscriberMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-aggregate")
    {
        if(session_aggregate == nullptr)
        {
            session_aggregate = std::make_shared<Snmp::Notification::SubscriberMib::SessionAggregate>();
        }
        return session_aggregate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::SubscriberMib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_aggregate != nullptr)
    {
        _children["session-aggregate"] = session_aggregate;
    }

    return _children;
}

void Snmp::Notification::SubscriberMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::SubscriberMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::SubscriberMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-aggregate")
        return true;
    return false;
}

Snmp::Notification::SubscriberMib::SessionAggregate::SessionAggregate()
    :
    node{YType::empty, "node"},
    access_interface{YType::empty, "access-interface"}
{

    yang_name = "session-aggregate"; yang_parent_name = "subscriber-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::SubscriberMib::SessionAggregate::~SessionAggregate()
{
}

bool Snmp::Notification::SubscriberMib::SessionAggregate::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| access_interface.is_set;
}

bool Snmp::Notification::SubscriberMib::SessionAggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(access_interface.yfilter);
}

std::string Snmp::Notification::SubscriberMib::SessionAggregate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::SubscriberMib::SessionAggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::SubscriberMib::SessionAggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (access_interface.is_set || is_set(access_interface.yfilter)) leaf_name_data.push_back(access_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::SubscriberMib::SessionAggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::SubscriberMib::SessionAggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::SubscriberMib::SessionAggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface")
    {
        access_interface = value;
        access_interface.value_namespace = name_space;
        access_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::SubscriberMib::SessionAggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "access-interface")
    {
        access_interface.yfilter = yfilter;
    }
}

bool Snmp::Notification::SubscriberMib::SessionAggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "access-interface")
        return true;
    return false;
}

Snmp::Notification::MplsL3vpn::MplsL3vpn()
    :
    max_threshold_reissue_notification_time{YType::uint32, "max-threshold-reissue-notification-time"},
    max_threshold_exceeded{YType::empty, "max-threshold-exceeded"},
    max_threshold_cleared{YType::empty, "max-threshold-cleared"},
    mid_threshold_exceeded{YType::empty, "mid-threshold-exceeded"},
    enable{YType::empty, "enable"},
    vrf_down{YType::empty, "vrf-down"},
    vrf_up{YType::empty, "vrf-up"}
{

    yang_name = "mpls-l3vpn"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::MplsL3vpn::~MplsL3vpn()
{
}

bool Snmp::Notification::MplsL3vpn::has_data() const
{
    if (is_presence_container) return true;
    return max_threshold_reissue_notification_time.is_set
	|| max_threshold_exceeded.is_set
	|| max_threshold_cleared.is_set
	|| mid_threshold_exceeded.is_set
	|| enable.is_set
	|| vrf_down.is_set
	|| vrf_up.is_set;
}

bool Snmp::Notification::MplsL3vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold_reissue_notification_time.yfilter)
	|| ydk::is_set(max_threshold_exceeded.yfilter)
	|| ydk::is_set(max_threshold_cleared.yfilter)
	|| ydk::is_set(mid_threshold_exceeded.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(vrf_down.yfilter)
	|| ydk::is_set(vrf_up.yfilter);
}

std::string Snmp::Notification::MplsL3vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsL3vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-cfg:mpls-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsL3vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_reissue_notification_time.is_set || is_set(max_threshold_reissue_notification_time.yfilter)) leaf_name_data.push_back(max_threshold_reissue_notification_time.get_name_leafdata());
    if (max_threshold_exceeded.is_set || is_set(max_threshold_exceeded.yfilter)) leaf_name_data.push_back(max_threshold_exceeded.get_name_leafdata());
    if (max_threshold_cleared.is_set || is_set(max_threshold_cleared.yfilter)) leaf_name_data.push_back(max_threshold_cleared.get_name_leafdata());
    if (mid_threshold_exceeded.is_set || is_set(mid_threshold_exceeded.yfilter)) leaf_name_data.push_back(mid_threshold_exceeded.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (vrf_down.is_set || is_set(vrf_down.yfilter)) leaf_name_data.push_back(vrf_down.get_name_leafdata());
    if (vrf_up.is_set || is_set(vrf_up.yfilter)) leaf_name_data.push_back(vrf_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::MplsL3vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::MplsL3vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::MplsL3vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold-reissue-notification-time")
    {
        max_threshold_reissue_notification_time = value;
        max_threshold_reissue_notification_time.value_namespace = name_space;
        max_threshold_reissue_notification_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-exceeded")
    {
        max_threshold_exceeded = value;
        max_threshold_exceeded.value_namespace = name_space;
        max_threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-cleared")
    {
        max_threshold_cleared = value;
        max_threshold_cleared.value_namespace = name_space;
        max_threshold_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mid-threshold-exceeded")
    {
        mid_threshold_exceeded = value;
        mid_threshold_exceeded.value_namespace = name_space;
        mid_threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-down")
    {
        vrf_down = value;
        vrf_down.value_namespace = name_space;
        vrf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-up")
    {
        vrf_up = value;
        vrf_up.value_namespace = name_space;
        vrf_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsL3vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold-reissue-notification-time")
    {
        max_threshold_reissue_notification_time.yfilter = yfilter;
    }
    if(value_path == "max-threshold-exceeded")
    {
        max_threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "max-threshold-cleared")
    {
        max_threshold_cleared.yfilter = yfilter;
    }
    if(value_path == "mid-threshold-exceeded")
    {
        mid_threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "vrf-down")
    {
        vrf_down.yfilter = yfilter;
    }
    if(value_path == "vrf-up")
    {
        vrf_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsL3vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold-reissue-notification-time" || name == "max-threshold-exceeded" || name == "max-threshold-cleared" || name == "mid-threshold-exceeded" || name == "enable" || name == "vrf-down" || name == "vrf-up")
        return true;
    return false;
}

Snmp::Notification::FrequencySynchronization::FrequencySynchronization()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "frequency-synchronization"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::FrequencySynchronization::~FrequencySynchronization()
{
}

bool Snmp::Notification::FrequencySynchronization::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::FrequencySynchronization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Entity::Entity()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "entity"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Entity::~Entity()
{
}

bool Snmp::Notification::Entity::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Entity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Entity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Entity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Entity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Entity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Entity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Entity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Entity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Entity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Otn::Otn()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "otn"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Otn::~Otn()
{
}

bool Snmp::Notification::Otn::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Otn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-otnifmib-cfg:otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Bfd::Bfd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bfd"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Bfd::~Bfd()
{
}

bool Snmp::Notification::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::IpSec::IpSec()
    :
    tunnel_stop{YType::empty, "tunnel-stop"},
    tunnel_start{YType::empty, "tunnel-start"}
{

    yang_name = "ip-sec"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::IpSec::~IpSec()
{
}

bool Snmp::Notification::IpSec::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_stop.is_set
	|| tunnel_start.is_set;
}

bool Snmp::Notification::IpSec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_stop.yfilter)
	|| ydk::is_set(tunnel_start.yfilter);
}

std::string Snmp::Notification::IpSec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::IpSec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-mibs-ipsecflowmon-cfg:ip-sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::IpSec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_stop.is_set || is_set(tunnel_stop.yfilter)) leaf_name_data.push_back(tunnel_stop.get_name_leafdata());
    if (tunnel_start.is_set || is_set(tunnel_start.yfilter)) leaf_name_data.push_back(tunnel_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::IpSec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::IpSec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::IpSec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-stop")
    {
        tunnel_stop = value;
        tunnel_stop.value_namespace = name_space;
        tunnel_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-start")
    {
        tunnel_start = value;
        tunnel_start.value_namespace = name_space;
        tunnel_start.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::IpSec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-stop")
    {
        tunnel_stop.yfilter = yfilter;
    }
    if(value_path == "tunnel-start")
    {
        tunnel_start.yfilter = yfilter;
    }
}

bool Snmp::Notification::IpSec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-stop" || name == "tunnel-start")
        return true;
    return false;
}

Snmp::Notification::Isakmp::Isakmp()
    :
    tunnel_stop{YType::empty, "tunnel-stop"},
    tunnel_start{YType::empty, "tunnel-start"}
{

    yang_name = "isakmp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Isakmp::~Isakmp()
{
}

bool Snmp::Notification::Isakmp::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_stop.is_set
	|| tunnel_start.is_set;
}

bool Snmp::Notification::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_stop.yfilter)
	|| ydk::is_set(tunnel_start.yfilter);
}

std::string Snmp::Notification::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-mibs-ipsecflowmon-cfg:isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_stop.is_set || is_set(tunnel_stop.yfilter)) leaf_name_data.push_back(tunnel_stop.get_name_leafdata());
    if (tunnel_start.is_set || is_set(tunnel_start.yfilter)) leaf_name_data.push_back(tunnel_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-stop")
    {
        tunnel_stop = value;
        tunnel_stop.value_namespace = name_space;
        tunnel_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-start")
    {
        tunnel_start = value;
        tunnel_start.value_namespace = name_space;
        tunnel_start.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-stop")
    {
        tunnel_stop.yfilter = yfilter;
    }
    if(value_path == "tunnel-start")
    {
        tunnel_start.yfilter = yfilter;
    }
}

bool Snmp::Notification::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-stop" || name == "tunnel-start")
        return true;
    return false;
}

Snmp::Notification::MplsLdp::MplsLdp()
    :
    session_up{YType::empty, "session-up"},
    init_session_threshold_exceeded{YType::empty, "init-session-threshold-exceeded"},
    session_down{YType::empty, "session-down"}
{

    yang_name = "mpls-ldp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::MplsLdp::~MplsLdp()
{
}

bool Snmp::Notification::MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return session_up.is_set
	|| init_session_threshold_exceeded.is_set
	|| session_down.is_set;
}

bool Snmp::Notification::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(init_session_threshold_exceeded.yfilter)
	|| ydk::is_set(session_down.yfilter);
}

std::string Snmp::Notification::MplsLdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (init_session_threshold_exceeded.is_set || is_set(init_session_threshold_exceeded.yfilter)) leaf_name_data.push_back(init_session_threshold_exceeded.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-session-threshold-exceeded")
    {
        init_session_threshold_exceeded = value;
        init_session_threshold_exceeded.value_namespace = name_space;
        init_session_threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "init-session-threshold-exceeded")
    {
        init_session_threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-up" || name == "init-session-threshold-exceeded" || name == "session-down")
        return true;
    return false;
}

Snmp::Notification::Optical::Optical()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "optical"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Optical::~Optical()
{
}

bool Snmp::Notification::Optical::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Optical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Optical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Optical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-opticalmib-cfg:optical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Optical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Optical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Optical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Optical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Optical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Optical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::FruControl::FruControl()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "fru-control"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::FruControl::~FruControl()
{
}

bool Snmp::Notification::FruControl::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::FruControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::FruControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::FruControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-frucontrolmib-cfg:fru-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::FruControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::FruControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::FruControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::FruControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::FruControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::FruControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Diametermib::Diametermib()
    :
    protocolerror{YType::boolean, "protocolerror"},
    permanentfail{YType::boolean, "permanentfail"},
    peerdown{YType::boolean, "peerdown"},
    peerup{YType::boolean, "peerup"},
    transientfail{YType::boolean, "transientfail"}
{

    yang_name = "diametermib"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Diametermib::~Diametermib()
{
}

bool Snmp::Notification::Diametermib::has_data() const
{
    if (is_presence_container) return true;
    return protocolerror.is_set
	|| permanentfail.is_set
	|| peerdown.is_set
	|| peerup.is_set
	|| transientfail.is_set;
}

bool Snmp::Notification::Diametermib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocolerror.yfilter)
	|| ydk::is_set(permanentfail.yfilter)
	|| ydk::is_set(peerdown.yfilter)
	|| ydk::is_set(peerup.yfilter)
	|| ydk::is_set(transientfail.yfilter);
}

std::string Snmp::Notification::Diametermib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Diametermib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-base-mib-cfg:diametermib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Diametermib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocolerror.is_set || is_set(protocolerror.yfilter)) leaf_name_data.push_back(protocolerror.get_name_leafdata());
    if (permanentfail.is_set || is_set(permanentfail.yfilter)) leaf_name_data.push_back(permanentfail.get_name_leafdata());
    if (peerdown.is_set || is_set(peerdown.yfilter)) leaf_name_data.push_back(peerdown.get_name_leafdata());
    if (peerup.is_set || is_set(peerup.yfilter)) leaf_name_data.push_back(peerup.get_name_leafdata());
    if (transientfail.is_set || is_set(transientfail.yfilter)) leaf_name_data.push_back(transientfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Diametermib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Diametermib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Diametermib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolerror")
    {
        protocolerror = value;
        protocolerror.value_namespace = name_space;
        protocolerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanentfail")
    {
        permanentfail = value;
        permanentfail.value_namespace = name_space;
        permanentfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerdown")
    {
        peerdown = value;
        peerdown.value_namespace = name_space;
        peerdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerup")
    {
        peerup = value;
        peerup.value_namespace = name_space;
        peerup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transientfail")
    {
        transientfail = value;
        transientfail.value_namespace = name_space;
        transientfail.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Diametermib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolerror")
    {
        protocolerror.yfilter = yfilter;
    }
    if(value_path == "permanentfail")
    {
        permanentfail.yfilter = yfilter;
    }
    if(value_path == "peerdown")
    {
        peerdown.yfilter = yfilter;
    }
    if(value_path == "peerup")
    {
        peerup.yfilter = yfilter;
    }
    if(value_path == "transientfail")
    {
        transientfail.yfilter = yfilter;
    }
}

bool Snmp::Notification::Diametermib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolerror" || name == "permanentfail" || name == "peerdown" || name == "peerup" || name == "transientfail")
        return true;
    return false;
}

Snmp::Notification::Rf::Rf()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "rf"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Rf::~Rf()
{
}

bool Snmp::Notification::Rf::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Rf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Rf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Rf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-mib-rfmib-cfg:rf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Rf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Rf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Rf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Rf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Rf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Rf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Bgp::Bgp()
    :
    bgp4mib(std::make_shared<Snmp::Notification::Bgp::Bgp4mib>())
    , cisco_bgp4mib(std::make_shared<Snmp::Notification::Bgp::CiscoBgp4mib>())
{
    bgp4mib->parent = this;
    cisco_bgp4mib->parent = this;

    yang_name = "bgp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Bgp::~Bgp()
{
}

bool Snmp::Notification::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (bgp4mib !=  nullptr && bgp4mib->has_data())
	|| (cisco_bgp4mib !=  nullptr && cisco_bgp4mib->has_data());
}

bool Snmp::Notification::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp4mib !=  nullptr && bgp4mib->has_operation())
	|| (cisco_bgp4mib !=  nullptr && cisco_bgp4mib->has_operation());
}

std::string Snmp::Notification::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp4mib")
    {
        if(bgp4mib == nullptr)
        {
            bgp4mib = std::make_shared<Snmp::Notification::Bgp::Bgp4mib>();
        }
        return bgp4mib;
    }

    if(child_yang_name == "cisco-bgp4mib")
    {
        if(cisco_bgp4mib == nullptr)
        {
            cisco_bgp4mib = std::make_shared<Snmp::Notification::Bgp::CiscoBgp4mib>();
        }
        return cisco_bgp4mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp4mib != nullptr)
    {
        _children["bgp4mib"] = bgp4mib;
    }

    if(cisco_bgp4mib != nullptr)
    {
        _children["cisco-bgp4mib"] = cisco_bgp4mib;
    }

    return _children;
}

void Snmp::Notification::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp4mib" || name == "cisco-bgp4mib")
        return true;
    return false;
}

Snmp::Notification::Bgp::Bgp4mib::Bgp4mib()
    :
    enable{YType::empty, "enable"},
    up_down{YType::empty, "up-down"}
{

    yang_name = "bgp4mib"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Bgp::Bgp4mib::~Bgp4mib()
{
}

bool Snmp::Notification::Bgp::Bgp4mib::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| up_down.is_set;
}

bool Snmp::Notification::Bgp::Bgp4mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Snmp::Notification::Bgp::Bgp4mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bgp::Bgp4mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bgp::Bgp4mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Bgp::Bgp4mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Bgp::Bgp4mib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Bgp::Bgp4mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bgp::Bgp4mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bgp::Bgp4mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "up-down")
        return true;
    return false;
}

Snmp::Notification::Bgp::CiscoBgp4mib::CiscoBgp4mib()
    :
    enable{YType::empty, "enable"},
    up_down{YType::empty, "up-down"}
{

    yang_name = "cisco-bgp4mib"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Bgp::CiscoBgp4mib::~CiscoBgp4mib()
{
}

bool Snmp::Notification::Bgp::CiscoBgp4mib::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| up_down.is_set;
}

bool Snmp::Notification::Bgp::CiscoBgp4mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Snmp::Notification::Bgp::CiscoBgp4mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bgp::CiscoBgp4mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bgp4mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bgp::CiscoBgp4mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Bgp::CiscoBgp4mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Bgp::CiscoBgp4mib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Bgp::CiscoBgp4mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bgp::CiscoBgp4mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bgp::CiscoBgp4mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "up-down")
        return true;
    return false;
}

Snmp::Notification::Ntp::Ntp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "ntp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ntp::~Ntp()
{
}

bool Snmp::Notification::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Ntp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Syslog::Syslog()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "syslog"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Syslog::~Syslog()
{
}

bool Snmp::Notification::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-syslogmib-cfg:syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Hsrp::Hsrp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "hsrp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Hsrp::~Hsrp()
{
}

bool Snmp::Notification::Hsrp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Hsrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Hsrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Hsrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Hsrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Hsrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Hsrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Hsrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::OpticalOts::OpticalOts()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "optical-ots"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::OpticalOts::~OpticalOts()
{
}

bool Snmp::Notification::OpticalOts::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::OpticalOts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::OpticalOts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::OpticalOts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-opticalotsmib-cfg:optical-ots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::OpticalOts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::OpticalOts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::OpticalOts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::OpticalOts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::OpticalOts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::OpticalOts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::ConfigCopy::ConfigCopy()
    :
    completion{YType::empty, "completion"}
{

    yang_name = "config-copy"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::ConfigCopy::~ConfigCopy()
{
}

bool Snmp::Notification::ConfigCopy::has_data() const
{
    if (is_presence_container) return true;
    return completion.is_set;
}

bool Snmp::Notification::ConfigCopy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(completion.yfilter);
}

std::string Snmp::Notification::ConfigCopy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::ConfigCopy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-confcopymib-cfg:config-copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::ConfigCopy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (completion.is_set || is_set(completion.yfilter)) leaf_name_data.push_back(completion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::ConfigCopy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::ConfigCopy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::ConfigCopy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "completion")
    {
        completion = value;
        completion.value_namespace = name_space;
        completion.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::ConfigCopy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "completion")
    {
        completion.yfilter = yfilter;
    }
}

bool Snmp::Notification::ConfigCopy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "completion")
        return true;
    return false;
}

Snmp::Notification::Ospf::Ospf()
    :
    lsa(std::make_shared<Snmp::Notification::Ospf::Lsa>())
    , state_change(std::make_shared<Snmp::Notification::Ospf::StateChange>())
    , retransmit(std::make_shared<Snmp::Notification::Ospf::Retransmit>())
    , error(std::make_shared<Snmp::Notification::Ospf::Error>())
{
    lsa->parent = this;
    state_change->parent = this;
    retransmit->parent = this;
    error->parent = this;

    yang_name = "ospf"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospf::~Ospf()
{
}

bool Snmp::Notification::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return (lsa !=  nullptr && lsa->has_data())
	|| (state_change !=  nullptr && state_change->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (error !=  nullptr && error->has_data());
}

bool Snmp::Notification::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (error !=  nullptr && error->has_operation());
}

std::string Snmp::Notification::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-cfg:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Snmp::Notification::Ospf::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Snmp::Notification::Ospf::StateChange>();
        }
        return state_change;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Snmp::Notification::Ospf::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Snmp::Notification::Ospf::Error>();
        }
        return error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa != nullptr)
    {
        _children["lsa"] = lsa;
    }

    if(state_change != nullptr)
    {
        _children["state-change"] = state_change;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(error != nullptr)
    {
        _children["error"] = error;
    }

    return _children;
}

void Snmp::Notification::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "state-change" || name == "retransmit" || name == "error")
        return true;
    return false;
}

Snmp::Notification::Ospf::Lsa::Lsa()
    :
    max_age_lsa{YType::empty, "max-age-lsa"},
    originate_lsa{YType::empty, "originate-lsa"}
{

    yang_name = "lsa"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospf::Lsa::~Lsa()
{
}

bool Snmp::Notification::Ospf::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return max_age_lsa.is_set
	|| originate_lsa.is_set;
}

bool Snmp::Notification::Ospf::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_age_lsa.yfilter)
	|| ydk::is_set(originate_lsa.yfilter);
}

std::string Snmp::Notification::Ospf::Lsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_age_lsa.is_set || is_set(max_age_lsa.yfilter)) leaf_name_data.push_back(max_age_lsa.get_name_leafdata());
    if (originate_lsa.is_set || is_set(originate_lsa.yfilter)) leaf_name_data.push_back(originate_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospf::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospf::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ospf::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-age-lsa")
    {
        max_age_lsa = value;
        max_age_lsa.value_namespace = name_space;
        max_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originate-lsa")
    {
        originate_lsa = value;
        originate_lsa.value_namespace = name_space;
        originate_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.yfilter = yfilter;
    }
    if(value_path == "originate-lsa")
    {
        originate_lsa.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-age-lsa" || name == "originate-lsa")
        return true;
    return false;
}

Snmp::Notification::Ospf::StateChange::StateChange()
    :
    interface{YType::empty, "interface"},
    virtual_interface{YType::empty, "virtual-interface"},
    virtual_neighbor{YType::empty, "virtual-neighbor"},
    neighbor{YType::empty, "neighbor"}
{

    yang_name = "state-change"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospf::StateChange::~StateChange()
{
}

bool Snmp::Notification::Ospf::StateChange::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| virtual_interface.is_set
	|| virtual_neighbor.is_set
	|| neighbor.is_set;
}

bool Snmp::Notification::Ospf::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(virtual_neighbor.yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Snmp::Notification::Ospf::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (virtual_neighbor.is_set || is_set(virtual_neighbor.yfilter)) leaf_name_data.push_back(virtual_neighbor.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospf::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospf::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ospf::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor = value;
        virtual_neighbor.value_namespace = name_space;
        virtual_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "virtual-interface" || name == "virtual-neighbor" || name == "neighbor")
        return true;
    return false;
}

Snmp::Notification::Ospf::Retransmit::Retransmit()
    :
    virtual_packet{YType::empty, "virtual-packet"},
    packet{YType::empty, "packet"}
{

    yang_name = "retransmit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospf::Retransmit::~Retransmit()
{
}

bool Snmp::Notification::Ospf::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return virtual_packet.is_set
	|| packet.is_set;
}

bool Snmp::Notification::Ospf::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_packet.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string Snmp::Notification::Ospf::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_packet.is_set || is_set(virtual_packet.yfilter)) leaf_name_data.push_back(virtual_packet.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospf::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospf::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ospf::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-packet")
    {
        virtual_packet = value;
        virtual_packet.value_namespace = name_space;
        virtual_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-packet")
    {
        virtual_packet.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-packet" || name == "packet")
        return true;
    return false;
}

Snmp::Notification::Ospf::Error::Error()
    :
    config_error{YType::empty, "config-error"},
    authentication_failure{YType::empty, "authentication-failure"},
    virtual_config_error{YType::empty, "virtual-config-error"},
    virtual_authentication_failure{YType::empty, "virtual-authentication-failure"},
    bad_packet{YType::empty, "bad-packet"},
    virtual_bad_packet{YType::empty, "virtual-bad-packet"}
{

    yang_name = "error"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Ospf::Error::~Error()
{
}

bool Snmp::Notification::Ospf::Error::has_data() const
{
    if (is_presence_container) return true;
    return config_error.is_set
	|| authentication_failure.is_set
	|| virtual_config_error.is_set
	|| virtual_authentication_failure.is_set
	|| bad_packet.is_set
	|| virtual_bad_packet.is_set;
}

bool Snmp::Notification::Ospf::Error::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_error.yfilter)
	|| ydk::is_set(authentication_failure.yfilter)
	|| ydk::is_set(virtual_config_error.yfilter)
	|| ydk::is_set(virtual_authentication_failure.yfilter)
	|| ydk::is_set(bad_packet.yfilter)
	|| ydk::is_set(virtual_bad_packet.yfilter);
}

std::string Snmp::Notification::Ospf::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_error.is_set || is_set(config_error.yfilter)) leaf_name_data.push_back(config_error.get_name_leafdata());
    if (authentication_failure.is_set || is_set(authentication_failure.yfilter)) leaf_name_data.push_back(authentication_failure.get_name_leafdata());
    if (virtual_config_error.is_set || is_set(virtual_config_error.yfilter)) leaf_name_data.push_back(virtual_config_error.get_name_leafdata());
    if (virtual_authentication_failure.is_set || is_set(virtual_authentication_failure.yfilter)) leaf_name_data.push_back(virtual_authentication_failure.get_name_leafdata());
    if (bad_packet.is_set || is_set(bad_packet.yfilter)) leaf_name_data.push_back(bad_packet.get_name_leafdata());
    if (virtual_bad_packet.is_set || is_set(virtual_bad_packet.yfilter)) leaf_name_data.push_back(virtual_bad_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Ospf::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Ospf::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Ospf::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-error")
    {
        config_error = value;
        config_error.value_namespace = name_space;
        config_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure = value;
        authentication_failure.value_namespace = name_space;
        authentication_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error = value;
        virtual_config_error.value_namespace = name_space;
        virtual_config_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-authentication-failure")
    {
        virtual_authentication_failure = value;
        virtual_authentication_failure.value_namespace = name_space;
        virtual_authentication_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-packet")
    {
        bad_packet = value;
        bad_packet.value_namespace = name_space;
        bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet = value;
        virtual_bad_packet.value_namespace = name_space;
        virtual_bad_packet.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-error")
    {
        config_error.yfilter = yfilter;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure.yfilter = yfilter;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error.yfilter = yfilter;
    }
    if(value_path == "virtual-authentication-failure")
    {
        virtual_authentication_failure.yfilter = yfilter;
    }
    if(value_path == "bad-packet")
    {
        bad_packet.yfilter = yfilter;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-error" || name == "authentication-failure" || name == "virtual-config-error" || name == "virtual-authentication-failure" || name == "bad-packet" || name == "virtual-bad-packet")
        return true;
    return false;
}

Snmp::Notification::System::System()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "system"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::System::~System()
{
}

bool Snmp::Notification::System::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-systemmib-cfg:system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::L2tun::L2tun()
    :
    tunnel_up{YType::boolean, "tunnel-up"},
    tunnel_down{YType::boolean, "tunnel-down"},
    pseudowire_status{YType::boolean, "pseudowire-status"},
    sessions{YType::boolean, "sessions"}
{

    yang_name = "l2tun"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::L2tun::~L2tun()
{
}

bool Snmp::Notification::L2tun::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_up.is_set
	|| tunnel_down.is_set
	|| pseudowire_status.is_set
	|| sessions.is_set;
}

bool Snmp::Notification::L2tun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_up.yfilter)
	|| ydk::is_set(tunnel_down.yfilter)
	|| ydk::is_set(pseudowire_status.yfilter)
	|| ydk::is_set(sessions.yfilter);
}

std::string Snmp::Notification::L2tun::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::L2tun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-proto-mibs-cfg:l2tun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::L2tun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_up.is_set || is_set(tunnel_up.yfilter)) leaf_name_data.push_back(tunnel_up.get_name_leafdata());
    if (tunnel_down.is_set || is_set(tunnel_down.yfilter)) leaf_name_data.push_back(tunnel_down.get_name_leafdata());
    if (pseudowire_status.is_set || is_set(pseudowire_status.yfilter)) leaf_name_data.push_back(pseudowire_status.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::L2tun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::L2tun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::L2tun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-up")
    {
        tunnel_up = value;
        tunnel_up.value_namespace = name_space;
        tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-down")
    {
        tunnel_down = value;
        tunnel_down.value_namespace = name_space;
        tunnel_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-status")
    {
        pseudowire_status = value;
        pseudowire_status.value_namespace = name_space;
        pseudowire_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::L2tun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-up")
    {
        tunnel_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-down")
    {
        tunnel_down.yfilter = yfilter;
    }
    if(value_path == "pseudowire-status")
    {
        pseudowire_status.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
}

bool Snmp::Notification::L2tun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-up" || name == "tunnel-down" || name == "pseudowire-status" || name == "sessions")
        return true;
    return false;
}

Snmp::Notification::CiscoEntityExt::CiscoEntityExt()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cisco-entity-ext"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::CiscoEntityExt::~CiscoEntityExt()
{
}

bool Snmp::Notification::CiscoEntityExt::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::CiscoEntityExt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::CiscoEntityExt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::CiscoEntityExt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entityextmib-cfg:cisco-entity-ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::CiscoEntityExt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::CiscoEntityExt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::CiscoEntityExt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::CiscoEntityExt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::CiscoEntityExt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::CiscoEntityExt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::AddresspoolMib::AddresspoolMib()
    :
    high{YType::boolean, "high"},
    low{YType::boolean, "low"}
{

    yang_name = "addresspool-mib"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::AddresspoolMib::~AddresspoolMib()
{
}

bool Snmp::Notification::AddresspoolMib::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set;
}

bool Snmp::Notification::AddresspoolMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Snmp::Notification::AddresspoolMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::AddresspoolMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-mib-cfg:addresspool-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::AddresspoolMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::AddresspoolMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::AddresspoolMib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::AddresspoolMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::AddresspoolMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Snmp::Notification::AddresspoolMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Snmp::Notification::Sensor::Sensor()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "sensor"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Sensor::~Sensor()
{
}

bool Snmp::Notification::Sensor::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Sensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Oam::Oam()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "oam"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Oam::~Oam()
{
}

bool Snmp::Notification::Oam::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Oam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Oam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Bridge::Bridge()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bridge"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::Bridge::~Bridge()
{
}

bool Snmp::Notification::Bridge::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Snmp::Notification::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-bridgemib-cfg:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::MplsTeP2mp::MplsTeP2mp()
    :
    up{YType::empty, "up"},
    down{YType::empty, "down"}
{

    yang_name = "mpls-te-p2mp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::MplsTeP2mp::~MplsTeP2mp()
{
}

bool Snmp::Notification::MplsTeP2mp::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set;
}

bool Snmp::Notification::MplsTeP2mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Snmp::Notification::MplsTeP2mp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsTeP2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsTeP2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::MplsTeP2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::MplsTeP2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::MplsTeP2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsTeP2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsTeP2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down")
        return true;
    return false;
}

Snmp::Notification::MplsTe::MplsTe()
    :
    cisco{YType::empty, "cisco"},
    up{YType::empty, "up"},
    reoptimize{YType::empty, "reoptimize"},
    reroute{YType::empty, "reroute"},
    down{YType::empty, "down"}
        ,
    cisco_extension(std::make_shared<Snmp::Notification::MplsTe::CiscoExtension>())
{
    cisco_extension->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::MplsTe::~MplsTe()
{
}

bool Snmp::Notification::MplsTe::has_data() const
{
    if (is_presence_container) return true;
    return cisco.is_set
	|| up.is_set
	|| reoptimize.is_set
	|| reroute.is_set
	|| down.is_set
	|| (cisco_extension !=  nullptr && cisco_extension->has_data());
}

bool Snmp::Notification::MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(reoptimize.yfilter)
	|| ydk::is_set(reroute.yfilter)
	|| ydk::is_set(down.yfilter)
	|| (cisco_extension !=  nullptr && cisco_extension->has_operation());
}

std::string Snmp::Notification::MplsTe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (reoptimize.is_set || is_set(reoptimize.yfilter)) leaf_name_data.push_back(reoptimize.get_name_leafdata());
    if (reroute.is_set || is_set(reroute.yfilter)) leaf_name_data.push_back(reroute.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-extension")
    {
        if(cisco_extension == nullptr)
        {
            cisco_extension = std::make_shared<Snmp::Notification::MplsTe::CiscoExtension>();
        }
        return cisco_extension;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco_extension != nullptr)
    {
        _children["cisco-extension"] = cisco_extension;
    }

    return _children;
}

void Snmp::Notification::MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize")
    {
        reoptimize = value;
        reoptimize.value_namespace = name_space;
        reoptimize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute")
    {
        reroute = value;
        reroute.value_namespace = name_space;
        reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "reoptimize")
    {
        reoptimize.yfilter = yfilter;
    }
    if(value_path == "reroute")
    {
        reroute.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-extension" || name == "cisco" || name == "up" || name == "reoptimize" || name == "reroute" || name == "down")
        return true;
    return false;
}

Snmp::Notification::MplsTe::CiscoExtension::CiscoExtension()
    :
    preempt{YType::empty, "preempt"},
    insufficient_bandwidth{YType::empty, "insufficient-bandwidth"},
    re_route_pending_clear{YType::empty, "re-route-pending-clear"},
    bringup_fail{YType::empty, "bringup-fail"},
    re_route_pending{YType::empty, "re-route-pending"}
{

    yang_name = "cisco-extension"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::MplsTe::CiscoExtension::~CiscoExtension()
{
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set
	|| insufficient_bandwidth.is_set
	|| re_route_pending_clear.is_set
	|| bringup_fail.is_set
	|| re_route_pending.is_set;
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(insufficient_bandwidth.yfilter)
	|| ydk::is_set(re_route_pending_clear.yfilter)
	|| ydk::is_set(bringup_fail.yfilter)
	|| ydk::is_set(re_route_pending.yfilter);
}

std::string Snmp::Notification::MplsTe::CiscoExtension::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsTe::CiscoExtension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsTe::CiscoExtension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (insufficient_bandwidth.is_set || is_set(insufficient_bandwidth.yfilter)) leaf_name_data.push_back(insufficient_bandwidth.get_name_leafdata());
    if (re_route_pending_clear.is_set || is_set(re_route_pending_clear.yfilter)) leaf_name_data.push_back(re_route_pending_clear.get_name_leafdata());
    if (bringup_fail.is_set || is_set(bringup_fail.yfilter)) leaf_name_data.push_back(bringup_fail.get_name_leafdata());
    if (re_route_pending.is_set || is_set(re_route_pending.yfilter)) leaf_name_data.push_back(re_route_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::MplsTe::CiscoExtension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::MplsTe::CiscoExtension::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::MplsTe::CiscoExtension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bandwidth")
    {
        insufficient_bandwidth = value;
        insufficient_bandwidth.value_namespace = name_space;
        insufficient_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-route-pending-clear")
    {
        re_route_pending_clear = value;
        re_route_pending_clear.value_namespace = name_space;
        re_route_pending_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bringup-fail")
    {
        bringup_fail = value;
        bringup_fail.value_namespace = name_space;
        bringup_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-route-pending")
    {
        re_route_pending = value;
        re_route_pending.value_namespace = name_space;
        re_route_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsTe::CiscoExtension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "insufficient-bandwidth")
    {
        insufficient_bandwidth.yfilter = yfilter;
    }
    if(value_path == "re-route-pending-clear")
    {
        re_route_pending_clear.yfilter = yfilter;
    }
    if(value_path == "bringup-fail")
    {
        bringup_fail.yfilter = yfilter;
    }
    if(value_path == "re-route-pending")
    {
        re_route_pending.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt" || name == "insufficient-bandwidth" || name == "re-route-pending-clear" || name == "bringup-fail" || name == "re-route-pending")
        return true;
    return false;
}

Snmp::Notification::MplsFrr::MplsFrr()
    :
    unprotected{YType::empty, "unprotected"},
    enable{YType::empty, "enable"},
    protected_{YType::empty, "protected"}
{

    yang_name = "mpls-frr"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::MplsFrr::~MplsFrr()
{
}

bool Snmp::Notification::MplsFrr::has_data() const
{
    if (is_presence_container) return true;
    return unprotected.is_set
	|| enable.is_set
	|| protected_.is_set;
}

bool Snmp::Notification::MplsFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unprotected.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Snmp::Notification::MplsFrr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsFrr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unprotected.is_set || is_set(unprotected.yfilter)) leaf_name_data.push_back(unprotected.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::MplsFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::MplsFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::MplsFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unprotected")
    {
        unprotected = value;
        unprotected.value_namespace = name_space;
        unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unprotected")
    {
        unprotected.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unprotected" || name == "enable" || name == "protected")
        return true;
    return false;
}

Snmp::Notification::FabricCrs::FabricCrs()
    :
    bundle_state{YType::empty, "bundle-state"},
    plane_state{YType::empty, "plane-state"},
    bundle_downed_link{YType::empty, "bundle-downed-link"}
{

    yang_name = "fabric-crs"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Notification::FabricCrs::~FabricCrs()
{
}

bool Snmp::Notification::FabricCrs::has_data() const
{
    if (is_presence_container) return true;
    return bundle_state.is_set
	|| plane_state.is_set
	|| bundle_downed_link.is_set;
}

bool Snmp::Notification::FabricCrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(plane_state.yfilter)
	|| ydk::is_set(bundle_downed_link.yfilter);
}

std::string Snmp::Notification::FabricCrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::FabricCrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fabhfr-mib-cfg:fabric-crs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::FabricCrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (plane_state.is_set || is_set(plane_state.yfilter)) leaf_name_data.push_back(plane_state.get_name_leafdata());
    if (bundle_downed_link.is_set || is_set(bundle_downed_link.yfilter)) leaf_name_data.push_back(bundle_downed_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Notification::FabricCrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Notification::FabricCrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Notification::FabricCrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-state")
    {
        plane_state = value;
        plane_state.value_namespace = name_space;
        plane_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-downed-link")
    {
        bundle_downed_link = value;
        bundle_downed_link.value_namespace = name_space;
        bundle_downed_link.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::FabricCrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "plane-state")
    {
        plane_state.yfilter = yfilter;
    }
    if(value_path == "bundle-downed-link")
    {
        bundle_downed_link.yfilter = yfilter;
    }
}

bool Snmp::Notification::FabricCrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-state" || name == "plane-state" || name == "bundle-downed-link")
        return true;
    return false;
}

Snmp::Correlator::Correlator()
    :
    buffer_size{YType::uint32, "buffer-size"}
        ,
    rules(std::make_shared<Snmp::Correlator::Rules>())
    , rule_sets(std::make_shared<Snmp::Correlator::RuleSets>())
{
    rules->parent = this;
    rule_sets->parent = this;

    yang_name = "correlator"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::~Correlator()
{
}

bool Snmp::Correlator::has_data() const
{
    if (is_presence_container) return true;
    return buffer_size.is_set
	|| (rules !=  nullptr && rules->has_data())
	|| (rule_sets !=  nullptr && rule_sets->has_data());
}

bool Snmp::Correlator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| (rules !=  nullptr && rules->has_operation())
	|| (rule_sets !=  nullptr && rule_sets->has_operation());
}

std::string Snmp::Correlator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "correlator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Snmp::Correlator::Rules>();
        }
        return rules;
    }

    if(child_yang_name == "rule-sets")
    {
        if(rule_sets == nullptr)
        {
            rule_sets = std::make_shared<Snmp::Correlator::RuleSets>();
        }
        return rule_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rules != nullptr)
    {
        _children["rules"] = rules;
    }

    if(rule_sets != nullptr)
    {
        _children["rule-sets"] = rule_sets;
    }

    return _children;
}

void Snmp::Correlator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Snmp::Correlator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "rule-sets" || name == "buffer-size")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rules()
    :
    rule(this, {"name"})
{

    yang_name = "rules"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::Rules::~Rules()
{
}

bool Snmp::Correlator::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.len(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Rules::Rule>();
        ent_->parent = this;
        rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::Rule()
    :
    name{YType::str, "name"},
    timeout{YType::uint32, "timeout"}
        ,
    root_causes(std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses>())
    , non_root_causes(std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses>())
    , applied_to(std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo>())
{
    root_causes->parent = this;
    non_root_causes->parent = this;
    applied_to->parent = this;

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::Rules::Rule::~Rule()
{
}

bool Snmp::Correlator::Rules::Rule::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| timeout.is_set
	|| (root_causes !=  nullptr && root_causes->has_data())
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (applied_to !=  nullptr && applied_to->has_data());
}

bool Snmp::Correlator::Rules::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (root_causes !=  nullptr && root_causes->has_operation())
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (applied_to !=  nullptr && applied_to->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root-causes")
    {
        if(root_causes == nullptr)
        {
            root_causes = std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses>();
        }
        return root_causes;
    }

    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(root_causes != nullptr)
    {
        _children["root-causes"] = root_causes;
    }

    if(non_root_causes != nullptr)
    {
        _children["non-root-causes"] = non_root_causes;
    }

    if(applied_to != nullptr)
    {
        _children["applied-to"] = applied_to;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root-causes" || name == "non-root-causes" || name == "applied-to" || name == "name" || name == "timeout")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCauses()
    :
    root_cause(this, {"oid"})
{

    yang_name = "root-causes"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::RootCauses::~RootCauses()
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<root_cause.len(); index++)
    {
        if(root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::RootCauses::has_operation() const
{
    for (std::size_t index=0; index<root_cause.len(); index++)
    {
        if(root_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::RootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::RootCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::RootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root-cause")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses::RootCause>();
        ent_->parent = this;
        root_cause.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::RootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : root_cause.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::RootCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::RootCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root-cause")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::RootCause()
    :
    oid{YType::str, "oid"},
    created{YType::empty, "created"}
        ,
    var_binds(std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds>())
{
    var_binds->parent = this;

    yang_name = "root-cause"; yang_parent_name = "root-causes"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::~RootCause()
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| created.is_set
	|| (var_binds !=  nullptr && var_binds->has_data());
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(created.yfilter)
	|| (var_binds !=  nullptr && var_binds->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::RootCauses::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";
    ADD_KEY_TOKEN(oid, "oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::RootCauses::RootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-binds")
    {
        if(var_binds == nullptr)
        {
            var_binds = std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds>();
        }
        return var_binds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(var_binds != nullptr)
    {
        _children["var-binds"] = var_binds;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-binds" || name == "oid" || name == "created")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBinds()
    :
    var_bind(this, {"oid"})
{

    yang_name = "var-binds"; yang_parent_name = "root-cause"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::~VarBinds()
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::has_operation() const
{
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-binds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind>();
        ent_->parent = this;
        var_bind.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : var_bind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::VarBind()
    :
    oid{YType::str, "oid"}
        ,
    match(std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match>())
{
    match->parent = this;

    yang_name = "var-bind"; yang_parent_name = "var-binds"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";
    ADD_KEY_TOKEN(oid, "oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "oid")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::Match()
    :
    value_{YType::str, "value"},
    index_{YType::str, "index"}
{

    yang_name = "match"; yang_parent_name = "var-bind"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::~Match()
{
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| index_.is_set;
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::RootCauses::RootCause::VarBinds::VarBind::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "index")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCauses()
    :
    non_root_cause(this, {"oid"})
{

    yang_name = "non-root-causes"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::NonRootCauses::~NonRootCauses()
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<non_root_cause.len(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.len(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonRootCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause>();
        ent_->parent = this;
        non_root_cause.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : non_root_cause.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-cause")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::NonRootCause()
    :
    oid{YType::str, "oid"},
    created{YType::empty, "created"}
        ,
    var_binds(std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds>())
{
    var_binds->parent = this;

    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| created.is_set
	|| (var_binds !=  nullptr && var_binds->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(created.yfilter)
	|| (var_binds !=  nullptr && var_binds->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause";
    ADD_KEY_TOKEN(oid, "oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-binds")
    {
        if(var_binds == nullptr)
        {
            var_binds = std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds>();
        }
        return var_binds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(var_binds != nullptr)
    {
        _children["var-binds"] = var_binds;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-binds" || name == "oid" || name == "created")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBinds()
    :
    var_bind(this, {"oid"})
{

    yang_name = "var-binds"; yang_parent_name = "non-root-cause"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::~VarBinds()
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::has_operation() const
{
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-binds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind>();
        ent_->parent = this;
        var_bind.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : var_bind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::VarBind()
    :
    oid{YType::str, "oid"}
        ,
    match(std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match>())
{
    match->parent = this;

    yang_name = "var-bind"; yang_parent_name = "var-binds"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";
    ADD_KEY_TOKEN(oid, "oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "oid")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::Match()
    :
    value_{YType::str, "value"},
    index_{YType::str, "index"}
{

    yang_name = "match"; yang_parent_name = "var-bind"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::~Match()
{
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| index_.is_set;
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "index")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
        ,
    hosts(std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts>())
{
    hosts->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (hosts !=  nullptr && hosts->has_data());
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts" || name == "all")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Hosts()
    :
    host(this, {"ip_address", "port"})
{

    yang_name = "hosts"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::~Hosts()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::~Host()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "port")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSets()
    :
    rule_set(this, {"name"})
{

    yang_name = "rule-sets"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::RuleSets::~RuleSets()
{
}

bool Snmp::Correlator::RuleSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_set.len(); index++)
    {
        if(rule_set[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::has_operation() const
{
    for (std::size_t index=0; index<rule_set.len(); index++)
    {
        if(rule_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleSets::RuleSet>();
        ent_->parent = this;
        rule_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::RuleSet()
    :
    name{YType::str, "name"}
        ,
    rulenames(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames>())
    , applied_to(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo>())
{
    rulenames->parent = this;
    applied_to->parent = this;

    yang_name = "rule-set"; yang_parent_name = "rule-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::RuleSets::RuleSet::~RuleSet()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (rulenames !=  nullptr && rulenames->has_data())
	|| (applied_to !=  nullptr && applied_to->has_data());
}

bool Snmp::Correlator::RuleSets::RuleSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rulenames !=  nullptr && rulenames->has_operation())
	|| (applied_to !=  nullptr && applied_to->has_operation());
}

std::string Snmp::Correlator::RuleSets::RuleSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/rule-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleSets::RuleSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::RuleSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulenames")
    {
        if(rulenames == nullptr)
        {
            rulenames = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames>();
        }
        return rulenames;
    }

    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo>();
        }
        return applied_to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::RuleSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rulenames != nullptr)
    {
        _children["rulenames"] = rulenames;
    }

    if(applied_to != nullptr)
    {
        _children["applied-to"] = applied_to;
    }

    return _children;
}

void Snmp::Correlator::RuleSets::RuleSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulenames" || name == "applied-to" || name == "name")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulenames()
    :
    rulename(this, {"rulename"})
{

    yang_name = "rulenames"; yang_parent_name = "rule-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::~Rulenames()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulename.len(); index++)
    {
        if(rulename[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_operation() const
{
    for (std::size_t index=0; index<rulename.len(); index++)
    {
        if(rulename[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulenames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulename")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename>();
        ent_->parent = this;
        rulename.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulename.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulename")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::Rulename()
    :
    rulename{YType::str, "rulename"}
{

    yang_name = "rulename"; yang_parent_name = "rulenames"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::~Rulename()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_data() const
{
    if (is_presence_container) return true;
    return rulename.is_set;
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rulename.yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulename";
    ADD_KEY_TOKEN(rulename, "rulename");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulename.is_set || is_set(rulename.yfilter)) leaf_name_data.push_back(rulename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rulename")
    {
        rulename = value;
        rulename.value_namespace = name_space;
        rulename.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rulename")
    {
        rulename.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulename")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
        ,
    hosts(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts>())
{
    hosts->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::~AppliedTo()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (hosts !=  nullptr && hosts->has_data());
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    return _children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts" || name == "all")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Hosts()
    :
    host(this, {"ip_address", "port"})
{

    yang_name = "hosts"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::~Hosts()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::~Host()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "port")
        return true;
    return false;
}

Snmp::BulkStats::BulkStats()
    :
    memory{YType::uint32, "memory"}
        ,
    schemas(std::make_shared<Snmp::BulkStats::Schemas>())
    , objects(std::make_shared<Snmp::BulkStats::Objects>())
    , transfers(std::make_shared<Snmp::BulkStats::Transfers>())
{
    schemas->parent = this;
    objects->parent = this;
    transfers->parent = this;

    yang_name = "bulk-stats"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::~BulkStats()
{
}

bool Snmp::BulkStats::has_data() const
{
    if (is_presence_container) return true;
    return memory.is_set
	|| (schemas !=  nullptr && schemas->has_data())
	|| (objects !=  nullptr && objects->has_data())
	|| (transfers !=  nullptr && transfers->has_data());
}

bool Snmp::BulkStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory.yfilter)
	|| (schemas !=  nullptr && schemas->has_operation())
	|| (objects !=  nullptr && objects->has_operation())
	|| (transfers !=  nullptr && transfers->has_operation());
}

std::string Snmp::BulkStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schemas")
    {
        if(schemas == nullptr)
        {
            schemas = std::make_shared<Snmp::BulkStats::Schemas>();
        }
        return schemas;
    }

    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<Snmp::BulkStats::Objects>();
        }
        return objects;
    }

    if(child_yang_name == "transfers")
    {
        if(transfers == nullptr)
        {
            transfers = std::make_shared<Snmp::BulkStats::Transfers>();
        }
        return transfers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(schemas != nullptr)
    {
        _children["schemas"] = schemas;
    }

    if(objects != nullptr)
    {
        _children["objects"] = objects;
    }

    if(transfers != nullptr)
    {
        _children["transfers"] = transfers;
    }

    return _children;
}

void Snmp::BulkStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schemas" || name == "objects" || name == "transfers" || name == "memory")
        return true;
    return false;
}

Snmp::BulkStats::Schemas::Schemas()
    :
    schema(this, {"schema_name"})
{

    yang_name = "schemas"; yang_parent_name = "bulk-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::Schemas::~Schemas()
{
}

bool Snmp::BulkStats::Schemas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<schema.len(); index++)
    {
        if(schema[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Schemas::has_operation() const
{
    for (std::size_t index=0; index<schema.len(); index++)
    {
        if(schema[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Schemas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Schemas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schema")
    {
        auto ent_ = std::make_shared<Snmp::BulkStats::Schemas::Schema>();
        ent_->parent = this;
        schema.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Schemas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : schema.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::BulkStats::Schemas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Schemas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Schemas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schema")
        return true;
    return false;
}

Snmp::BulkStats::Schemas::Schema::Schema()
    :
    schema_name{YType::str, "schema-name"},
    type{YType::empty, "type"},
    schema_object_list{YType::str, "schema-object-list"},
    poll_interval{YType::uint32, "poll-interval"}
        ,
    instance(nullptr) // presence node
{

    yang_name = "schema"; yang_parent_name = "schemas"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::Schemas::Schema::~Schema()
{
}

bool Snmp::BulkStats::Schemas::Schema::has_data() const
{
    if (is_presence_container) return true;
    return schema_name.is_set
	|| type.is_set
	|| schema_object_list.is_set
	|| poll_interval.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool Snmp::BulkStats::Schemas::Schema::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schema_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(schema_object_list.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string Snmp::BulkStats::Schemas::Schema::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/schemas/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema";
    ADD_KEY_TOKEN(schema_name, "schema-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Schemas::Schema::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schema_name.is_set || is_set(schema_name.yfilter)) leaf_name_data.push_back(schema_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (schema_object_list.is_set || is_set(schema_object_list.yfilter)) leaf_name_data.push_back(schema_object_list.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<Snmp::BulkStats::Schemas::Schema::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Schemas::Schema::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(instance != nullptr)
    {
        _children["instance"] = instance;
    }

    return _children;
}

void Snmp::BulkStats::Schemas::Schema::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schema-name")
    {
        schema_name = value;
        schema_name.value_namespace = name_space;
        schema_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schema-object-list")
    {
        schema_object_list = value;
        schema_object_list.value_namespace = name_space;
        schema_object_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Schemas::Schema::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schema-name")
    {
        schema_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "schema-object-list")
    {
        schema_object_list.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Schemas::Schema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "schema-name" || name == "type" || name == "schema-object-list" || name == "poll-interval")
        return true;
    return false;
}

Snmp::BulkStats::Schemas::Schema::Instance::Instance()
    :
    type{YType::enumeration, "type"},
    instance{YType::str, "instance"},
    start{YType::str, "start"},
    end{YType::str, "end"},
    max{YType::uint32, "max"},
    sub_interface{YType::boolean, "sub-interface"}
{

    yang_name = "instance"; yang_parent_name = "schema"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Snmp::BulkStats::Schemas::Schema::Instance::~Instance()
{
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| instance.is_set
	|| start.is_set
	|| end.is_set
	|| max.is_set
	|| sub_interface.is_set;
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(sub_interface.yfilter);
}

std::string Snmp::BulkStats::Schemas::Schema::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Schemas::Schema::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (sub_interface.is_set || is_set(sub_interface.yfilter)) leaf_name_data.push_back(sub_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Schemas::Schema::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Schemas::Schema::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::BulkStats::Schemas::Schema::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface")
    {
        sub_interface = value;
        sub_interface.value_namespace = name_space;
        sub_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Schemas::Schema::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "sub-interface")
    {
        sub_interface.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "instance" || name == "start" || name == "end" || name == "max" || name == "sub-interface")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Objects()
    :
    object(this, {"object_list_name"})
{

    yang_name = "objects"; yang_parent_name = "bulk-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::Objects::~Objects()
{
}

bool Snmp::BulkStats::Objects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto ent_ = std::make_shared<Snmp::BulkStats::Objects::Object>();
        ent_->parent = this;
        object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::BulkStats::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Object::Object()
    :
    object_list_name{YType::str, "object-list-name"},
    type{YType::empty, "type"}
        ,
    objects(std::make_shared<Snmp::BulkStats::Objects::Object::Objects_>())
{
    objects->parent = this;

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::Objects::Object::~Object()
{
}

bool Snmp::BulkStats::Objects::Object::has_data() const
{
    if (is_presence_container) return true;
    return object_list_name.is_set
	|| type.is_set
	|| (objects !=  nullptr && objects->has_data());
}

bool Snmp::BulkStats::Objects::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_list_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (objects !=  nullptr && objects->has_operation());
}

std::string Snmp::BulkStats::Objects::Object::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/objects/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(object_list_name, "object-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_list_name.is_set || is_set(object_list_name.yfilter)) leaf_name_data.push_back(object_list_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<Snmp::BulkStats::Objects::Object::Objects_>();
        }
        return objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Objects::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(objects != nullptr)
    {
        _children["objects"] = objects;
    }

    return _children;
}

void Snmp::BulkStats::Objects::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-list-name")
    {
        object_list_name = value;
        object_list_name.value_namespace = name_space;
        object_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Objects::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-list-name")
    {
        object_list_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Objects::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects" || name == "object-list-name" || name == "type")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Object::Objects_::Objects_()
    :
    object(this, {"oid"})
{

    yang_name = "objects"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::BulkStats::Objects::Object::Objects_::~Objects_()
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Objects::Object::Objects_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::Object::Objects_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Objects::Object::Objects_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto ent_ = std::make_shared<Snmp::BulkStats::Objects::Object::Objects_::Object_>();
        ent_->parent = this;
        object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Objects::Object::Objects_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::BulkStats::Objects::Object::Objects_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Objects::Object::Objects_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Object::Objects_::Object_::Object_()
    :
    oid{YType::str, "oid"}
{

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::BulkStats::Objects::Object::Objects_::Object_::~Object_()
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set;
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter);
}

std::string Snmp::BulkStats::Objects::Object::Objects_::Object_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(oid, "oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::Object::Objects_::Object_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Objects::Object::Objects_::Object_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Objects::Object::Objects_::Object_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::BulkStats::Objects::Object::Objects_::Object_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Objects::Object::Objects_::Object_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfers()
    :
    transfer(this, {"transfer_name"})
{

    yang_name = "transfers"; yang_parent_name = "bulk-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::Transfers::~Transfers()
{
}

bool Snmp::BulkStats::Transfers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<transfer.len(); index++)
    {
        if(transfer[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Transfers::has_operation() const
{
    for (std::size_t index=0; index<transfer.len(); index++)
    {
        if(transfer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Transfers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Transfers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Transfers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer")
    {
        auto ent_ = std::make_shared<Snmp::BulkStats::Transfers::Transfer>();
        ent_->parent = this;
        transfer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Transfers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : transfer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::BulkStats::Transfers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Transfers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Transfers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfer::Transfer()
    :
    transfer_name{YType::str, "transfer-name"},
    secondary{YType::str, "secondary"},
    type{YType::empty, "type"},
    buffer_size{YType::uint32, "buffer-size"},
    retain{YType::uint32, "retain"},
    format{YType::enumeration, "format"},
    retry{YType::uint32, "retry"},
    enable{YType::empty, "enable"},
    primary{YType::str, "primary"},
    interval{YType::uint32, "interval"}
        ,
    transfer_schemas(std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas>())
{
    transfer_schemas->parent = this;

    yang_name = "transfer"; yang_parent_name = "transfers"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::BulkStats::Transfers::Transfer::~Transfer()
{
}

bool Snmp::BulkStats::Transfers::Transfer::has_data() const
{
    if (is_presence_container) return true;
    return transfer_name.is_set
	|| secondary.is_set
	|| type.is_set
	|| buffer_size.is_set
	|| retain.is_set
	|| format.is_set
	|| retry.is_set
	|| enable.is_set
	|| primary.is_set
	|| interval.is_set
	|| (transfer_schemas !=  nullptr && transfer_schemas->has_data());
}

bool Snmp::BulkStats::Transfers::Transfer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transfer_name.yfilter)
	|| ydk::is_set(secondary.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| ydk::is_set(retain.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (transfer_schemas !=  nullptr && transfer_schemas->has_operation());
}

std::string Snmp::BulkStats::Transfers::Transfer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/transfers/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Transfers::Transfer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer";
    ADD_KEY_TOKEN(transfer_name, "transfer-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::Transfer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transfer_name.is_set || is_set(transfer_name.yfilter)) leaf_name_data.push_back(transfer_name.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (retain.is_set || is_set(retain.yfilter)) leaf_name_data.push_back(retain.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Transfers::Transfer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer-schemas")
    {
        if(transfer_schemas == nullptr)
        {
            transfer_schemas = std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas>();
        }
        return transfer_schemas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Transfers::Transfer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transfer_schemas != nullptr)
    {
        _children["transfer-schemas"] = transfer_schemas;
    }

    return _children;
}

void Snmp::BulkStats::Transfers::Transfer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transfer-name")
    {
        transfer_name = value;
        transfer_name.value_namespace = name_space;
        transfer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retain")
    {
        retain = value;
        retain.value_namespace = name_space;
        retain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Transfers::Transfer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transfer-name")
    {
        transfer_name.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
    if(value_path == "retain")
    {
        retain.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Transfers::Transfer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer-schemas" || name == "transfer-name" || name == "secondary" || name == "type" || name == "buffer-size" || name == "retain" || name == "format" || name == "retry" || name == "enable" || name == "primary" || name == "interval")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchemas()
    :
    transfer_schema(this, {"schema_name"})
{

    yang_name = "transfer-schemas"; yang_parent_name = "transfer"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::~TransferSchemas()
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<transfer_schema.len(); index++)
    {
        if(transfer_schema[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_operation() const
{
    for (std::size_t index=0; index<transfer_schema.len(); index++)
    {
        if(transfer_schema[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer-schemas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer-schema")
    {
        auto ent_ = std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema>();
        ent_->parent = this;
        transfer_schema.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : transfer_schema.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer-schema")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::TransferSchema()
    :
    schema_name{YType::str, "schema-name"}
{

    yang_name = "transfer-schema"; yang_parent_name = "transfer-schemas"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::~TransferSchema()
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_data() const
{
    if (is_presence_container) return true;
    return schema_name.is_set;
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schema_name.yfilter);
}

std::string Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer-schema";
    ADD_KEY_TOKEN(schema_name, "schema-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schema_name.is_set || is_set(schema_name.yfilter)) leaf_name_data.push_back(schema_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schema-name")
    {
        schema_name = value;
        schema_name.value_namespace = name_space;
        schema_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schema-name")
    {
        schema_name.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schema-name")
        return true;
    return false;
}

Snmp::DefaultCommunityMaps::DefaultCommunityMaps()
    :
    default_community_map(this, {"community_name"})
{

    yang_name = "default-community-maps"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::DefaultCommunityMaps::~DefaultCommunityMaps()
{
}

bool Snmp::DefaultCommunityMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_community_map.len(); index++)
    {
        if(default_community_map[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::DefaultCommunityMaps::has_operation() const
{
    for (std::size_t index=0; index<default_community_map.len(); index++)
    {
        if(default_community_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::DefaultCommunityMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::DefaultCommunityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::DefaultCommunityMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::DefaultCommunityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-community-map")
    {
        auto ent_ = std::make_shared<Snmp::DefaultCommunityMaps::DefaultCommunityMap>();
        ent_->parent = this;
        default_community_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::DefaultCommunityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : default_community_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::DefaultCommunityMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::DefaultCommunityMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::DefaultCommunityMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-community-map")
        return true;
    return false;
}

Snmp::DefaultCommunityMaps::DefaultCommunityMap::DefaultCommunityMap()
    :
    community_name{YType::str, "community-name"},
    context{YType::str, "context"},
    security{YType::str, "security"},
    target_list{YType::str, "target-list"}
{

    yang_name = "default-community-map"; yang_parent_name = "default-community-maps"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::DefaultCommunityMaps::DefaultCommunityMap::~DefaultCommunityMap()
{
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| context.is_set
	|| security.is_set
	|| target_list.is_set;
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(target_list.yfilter);
}

std::string Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/default-community-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community-map";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (target_list.is_set || is_set(target_list.yfilter)) leaf_name_data.push_back(target_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::DefaultCommunityMaps::DefaultCommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-list")
    {
        target_list = value;
        target_list.value_namespace = name_space;
        target_list.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::DefaultCommunityMaps::DefaultCommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "target-list")
    {
        target_list.yfilter = yfilter;
    }
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "context" || name == "security" || name == "target-list")
        return true;
    return false;
}

Snmp::OverloadControl::OverloadControl()
    :
    drop_time{YType::uint32, "drop-time"},
    throttle_rate{YType::uint32, "throttle-rate"}
{

    yang_name = "overload-control"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Snmp::OverloadControl::~OverloadControl()
{
}

bool Snmp::OverloadControl::has_data() const
{
    if (is_presence_container) return true;
    return drop_time.is_set
	|| throttle_rate.is_set;
}

bool Snmp::OverloadControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_time.yfilter)
	|| ydk::is_set(throttle_rate.yfilter);
}

std::string Snmp::OverloadControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::OverloadControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::OverloadControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_time.is_set || is_set(drop_time.yfilter)) leaf_name_data.push_back(drop_time.get_name_leafdata());
    if (throttle_rate.is_set || is_set(throttle_rate.yfilter)) leaf_name_data.push_back(throttle_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::OverloadControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::OverloadControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::OverloadControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-time")
    {
        drop_time = value;
        drop_time.value_namespace = name_space;
        drop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle-rate")
    {
        throttle_rate = value;
        throttle_rate.value_namespace = name_space;
        throttle_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::OverloadControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-time")
    {
        drop_time.yfilter = yfilter;
    }
    if(value_path == "throttle-rate")
    {
        throttle_rate.yfilter = yfilter;
    }
}

bool Snmp::OverloadControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-time" || name == "throttle-rate")
        return true;
    return false;
}

Snmp::Timeouts::Timeouts()
    :
    duplicates{YType::uint32, "duplicates"},
    in_qdrop{YType::uint32, "in-qdrop"},
    threshold{YType::uint32, "threshold"},
    subagent{YType::uint32, "subagent"},
    pdu_stats{YType::uint32, "pdu-stats"}
{

    yang_name = "timeouts"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Timeouts::~Timeouts()
{
}

bool Snmp::Timeouts::has_data() const
{
    if (is_presence_container) return true;
    return duplicates.is_set
	|| in_qdrop.is_set
	|| threshold.is_set
	|| subagent.is_set
	|| pdu_stats.is_set;
}

bool Snmp::Timeouts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter)
	|| ydk::is_set(in_qdrop.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(subagent.yfilter)
	|| ydk::is_set(pdu_stats.yfilter);
}

std::string Snmp::Timeouts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Timeouts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeouts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Timeouts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (in_qdrop.is_set || is_set(in_qdrop.yfilter)) leaf_name_data.push_back(in_qdrop.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (subagent.is_set || is_set(subagent.yfilter)) leaf_name_data.push_back(subagent.get_name_leafdata());
    if (pdu_stats.is_set || is_set(pdu_stats.yfilter)) leaf_name_data.push_back(pdu_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Timeouts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Timeouts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Timeouts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-qdrop")
    {
        in_qdrop = value;
        in_qdrop.value_namespace = name_space;
        in_qdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subagent")
    {
        subagent = value;
        subagent.value_namespace = name_space;
        subagent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-stats")
    {
        pdu_stats = value;
        pdu_stats.value_namespace = name_space;
        pdu_stats.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Timeouts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
    if(value_path == "in-qdrop")
    {
        in_qdrop.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "subagent")
    {
        subagent.yfilter = yfilter;
    }
    if(value_path == "pdu-stats")
    {
        pdu_stats.yfilter = yfilter;
    }
}

bool Snmp::Timeouts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates" || name == "in-qdrop" || name == "threshold" || name == "subagent" || name == "pdu-stats")
        return true;
    return false;
}

Snmp::Users::Users()
    :
    user(this, {"user_name"})
{

    yang_name = "users"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Users::~Users()
{
}

bool Snmp::Users::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Users::has_operation() const
{
    for (std::size_t index=0; index<user.len(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Users::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Users::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        auto ent_ = std::make_shared<Snmp::Users::User>();
        ent_->parent = this;
        user.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Users::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Users::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Users::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Users::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Snmp::Users::User::User()
    :
    user_name{YType::str, "user-name"},
    group_name{YType::str, "group-name"},
    version{YType::enumeration, "version"},
    authentication_password_configured{YType::empty, "authentication-password-configured"},
    algorithm{YType::enumeration, "algorithm"},
    authentication_password{YType::str, "authentication-password"},
    privacy_password_configured{YType::empty, "privacy-password-configured"},
    priv_algorithm{YType::enumeration, "priv-algorithm"},
    privacy_password{YType::str, "privacy-password"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v4_access_list{YType::str, "v4-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    owner{YType::enumeration, "owner"},
    remote_address{YType::str, "remote-address"},
    port{YType::uint16, "port"}
{

    yang_name = "user"; yang_parent_name = "users"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Users::User::~User()
{
}

bool Snmp::Users::User::has_data() const
{
    if (is_presence_container) return true;
    return user_name.is_set
	|| group_name.is_set
	|| version.is_set
	|| authentication_password_configured.is_set
	|| algorithm.is_set
	|| authentication_password.is_set
	|| privacy_password_configured.is_set
	|| priv_algorithm.is_set
	|| privacy_password.is_set
	|| v4acl_type.is_set
	|| v4_access_list.is_set
	|| v6acl_type.is_set
	|| v6_access_list.is_set
	|| owner.is_set
	|| remote_address.is_set
	|| port.is_set;
}

bool Snmp::Users::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(authentication_password_configured.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(privacy_password_configured.yfilter)
	|| ydk::is_set(priv_algorithm.yfilter)
	|| ydk::is_set(privacy_password.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Users::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/users/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    ADD_KEY_TOKEN(user_name, "user-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Users::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (authentication_password_configured.is_set || is_set(authentication_password_configured.yfilter)) leaf_name_data.push_back(authentication_password_configured.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (privacy_password_configured.is_set || is_set(privacy_password_configured.yfilter)) leaf_name_data.push_back(privacy_password_configured.get_name_leafdata());
    if (priv_algorithm.is_set || is_set(priv_algorithm.yfilter)) leaf_name_data.push_back(priv_algorithm.get_name_leafdata());
    if (privacy_password.is_set || is_set(privacy_password.yfilter)) leaf_name_data.push_back(privacy_password.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Users::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password-configured")
    {
        authentication_password_configured = value;
        authentication_password_configured.value_namespace = name_space;
        authentication_password_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privacy-password-configured")
    {
        privacy_password_configured = value;
        privacy_password_configured.value_namespace = name_space;
        privacy_password_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priv-algorithm")
    {
        priv_algorithm = value;
        priv_algorithm.value_namespace = name_space;
        priv_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privacy-password")
    {
        privacy_password = value;
        privacy_password.value_namespace = name_space;
        privacy_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Users::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "authentication-password-configured")
    {
        authentication_password_configured.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "privacy-password-configured")
    {
        privacy_password_configured.yfilter = yfilter;
    }
    if(value_path == "priv-algorithm")
    {
        priv_algorithm.yfilter = yfilter;
    }
    if(value_path == "privacy-password")
    {
        privacy_password.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Users::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name" || name == "group-name" || name == "version" || name == "authentication-password-configured" || name == "algorithm" || name == "authentication-password" || name == "privacy-password-configured" || name == "priv-algorithm" || name == "privacy-password" || name == "v4acl-type" || name == "v4-access-list" || name == "v6acl-type" || name == "v6-access-list" || name == "owner" || name == "remote-address" || name == "port")
        return true;
    return false;
}

Snmp::Vrfs::Vrfs()
    :
    vrf(this, {"name"})
{

    yang_name = "vrfs"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Vrfs::~Vrfs()
{
}

bool Snmp::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::get_children() const
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

void Snmp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    trap_hosts(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts>())
    , contexts(std::make_shared<Snmp::Vrfs::Vrf::Contexts>())
    , context_mappings(std::make_shared<Snmp::Vrfs::Vrf::ContextMappings>())
{
    trap_hosts->parent = this;
    contexts->parent = this;
    context_mappings->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Vrfs::Vrf::~Vrf()
{
}

bool Snmp::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (trap_hosts !=  nullptr && trap_hosts->has_data())
	|| (contexts !=  nullptr && contexts->has_data())
	|| (context_mappings !=  nullptr && context_mappings->has_data());
}

bool Snmp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (trap_hosts !=  nullptr && trap_hosts->has_operation())
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (context_mappings !=  nullptr && context_mappings->has_operation());
}

std::string Snmp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-hosts")
    {
        if(trap_hosts == nullptr)
        {
            trap_hosts = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts>();
        }
        return trap_hosts;
    }

    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Snmp::Vrfs::Vrf::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "context-mappings")
    {
        if(context_mappings == nullptr)
        {
            context_mappings = std::make_shared<Snmp::Vrfs::Vrf::ContextMappings>();
        }
        return context_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap_hosts != nullptr)
    {
        _children["trap-hosts"] = trap_hosts;
    }

    if(contexts != nullptr)
    {
        _children["contexts"] = contexts;
    }

    if(context_mappings != nullptr)
    {
        _children["context-mappings"] = context_mappings;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-hosts" || name == "contexts" || name == "context-mappings" || name == "name")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHosts()
    :
    trap_host(this, {"ip_address"})
{

    yang_name = "trap-hosts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::~TrapHosts()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_host.len(); index++)
    {
        if(trap_host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_operation() const
{
    for (std::size_t index=0; index<trap_host.len(); index++)
    {
        if(trap_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-host")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost>();
        ent_->parent = this;
        trap_host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-host")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::TrapHost()
    :
    ip_address{YType::str, "ip-address"}
        ,
    encrypted_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities>())
    , inform_host(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost>())
    , default_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities>())
{
    encrypted_user_communities->parent = this;
    inform_host->parent = this;
    default_user_communities->parent = this;

    yang_name = "trap-host"; yang_parent_name = "trap-hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::~TrapHost()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_data())
	|| (inform_host !=  nullptr && inform_host->has_data())
	|| (default_user_communities !=  nullptr && default_user_communities->has_data());
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_operation())
	|| (inform_host !=  nullptr && inform_host->has_operation())
	|| (default_user_communities !=  nullptr && default_user_communities->has_operation());
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-host";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-communities")
    {
        if(encrypted_user_communities == nullptr)
        {
            encrypted_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities>();
        }
        return encrypted_user_communities;
    }

    if(child_yang_name == "inform-host")
    {
        if(inform_host == nullptr)
        {
            inform_host = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost>();
        }
        return inform_host;
    }

    if(child_yang_name == "default-user-communities")
    {
        if(default_user_communities == nullptr)
        {
            default_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities>();
        }
        return default_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encrypted_user_communities != nullptr)
    {
        _children["encrypted-user-communities"] = encrypted_user_communities;
    }

    if(inform_host != nullptr)
    {
        _children["inform-host"] = inform_host;
    }

    if(default_user_communities != nullptr)
    {
        _children["default-user-communities"] = default_user_communities;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-user-communities" || name == "inform-host" || name == "default-user-communities" || name == "ip-address")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunities()
    :
    encrypted_user_community(this, {"community_name"})
{

    yang_name = "encrypted-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::~EncryptedUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encrypted_user_community.len(); index++)
    {
        if(encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_user_community.len(); index++)
    {
        if(encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-community")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity>();
        ent_->parent = this;
        encrypted_user_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encrypted_user_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::EncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::uint32, "basic-trap-types"},
    advanced_trap_types1{YType::uint32, "advanced-trap-types1"},
    advanced_trap_types2{YType::uint32, "advanced-trap-types2"}
{

    yang_name = "encrypted-user-community"; yang_parent_name = "encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::~EncryptedUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformHost()
    :
    inform_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities>())
    , inform_encrypted_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>())
{
    inform_user_communities->parent = this;
    inform_encrypted_user_communities->parent = this;

    yang_name = "inform-host"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::~InformHost()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_data() const
{
    if (is_presence_container) return true;
    return (inform_user_communities !=  nullptr && inform_user_communities->has_data())
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_data());
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_operation() const
{
    return is_set(yfilter)
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_operation())
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_operation());
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-communities")
    {
        if(inform_user_communities == nullptr)
        {
            inform_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities>();
        }
        return inform_user_communities;
    }

    if(child_yang_name == "inform-encrypted-user-communities")
    {
        if(inform_encrypted_user_communities == nullptr)
        {
            inform_encrypted_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>();
        }
        return inform_encrypted_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inform_user_communities != nullptr)
    {
        _children["inform-user-communities"] = inform_user_communities;
    }

    if(inform_encrypted_user_communities != nullptr)
    {
        _children["inform-encrypted-user-communities"] = inform_encrypted_user_communities;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-user-communities" || name == "inform-encrypted-user-communities")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunities()
    :
    inform_user_community(this, {"community_name"})
{

    yang_name = "inform-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::~InformUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inform_user_community.len(); index++)
    {
        if(inform_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_user_community.len(); index++)
    {
        if(inform_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-community")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity>();
        ent_->parent = this;
        inform_user_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inform_user_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::InformUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::uint32, "basic-trap-types"},
    advanced_trap_types1{YType::uint32, "advanced-trap-types1"},
    advanced_trap_types2{YType::uint32, "advanced-trap-types2"}
{

    yang_name = "inform-user-community"; yang_parent_name = "inform-user-communities"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::~InformUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunities()
    :
    inform_encrypted_user_community(this, {"community_name"})
{

    yang_name = "inform-encrypted-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::~InformEncryptedUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inform_encrypted_user_community.len(); index++)
    {
        if(inform_encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.len(); index++)
    {
        if(inform_encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-community")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity>();
        ent_->parent = this;
        inform_encrypted_user_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inform_encrypted_user_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-encrypted-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::InformEncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::uint32, "basic-trap-types"},
    advanced_trap_types1{YType::uint32, "advanced-trap-types1"},
    advanced_trap_types2{YType::uint32, "advanced-trap-types2"}
{

    yang_name = "inform-encrypted-user-community"; yang_parent_name = "inform-encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::~InformEncryptedUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunities()
    :
    default_user_community(this, {"community_name"})
{

    yang_name = "default-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::~DefaultUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_user_community.len(); index++)
    {
        if(default_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_user_community.len(); index++)
    {
        if(default_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-community")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity>();
        ent_->parent = this;
        default_user_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : default_user_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::DefaultUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::uint32, "basic-trap-types"},
    advanced_trap_types1{YType::uint32, "advanced-trap-types1"},
    advanced_trap_types2{YType::uint32, "advanced-trap-types2"}
{

    yang_name = "default-user-community"; yang_parent_name = "default-user-communities"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::~DefaultUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::Contexts::Contexts()
    :
    context(this, {"context_name"})
{

    yang_name = "contexts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::Contexts::~Contexts()
{
}

bool Snmp::Vrfs::Vrf::Contexts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::Contexts::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::Contexts::Context::Context()
    :
    context_name{YType::str, "context-name"}
{

    yang_name = "context"; yang_parent_name = "contexts"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::Contexts::Context::~Context()
{
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_data() const
{
    if (is_presence_container) return true;
    return context_name.is_set;
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_name.yfilter);
}

std::string Snmp::Vrfs::Vrf::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(context_name, "context-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::Contexts::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Vrfs::Vrf::Contexts::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::Contexts::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-name")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMappings()
    :
    context_mapping(this, {"context_mapping_name"})
{

    yang_name = "context-mappings"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::ContextMappings::~ContextMappings()
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_mapping.len(); index++)
    {
        if(context_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_operation() const
{
    for (std::size_t index=0; index<context_mapping.len(); index++)
    {
        if(context_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::ContextMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::ContextMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::ContextMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mapping")
    {
        auto ent_ = std::make_shared<Snmp::Vrfs::Vrf::ContextMappings::ContextMapping>();
        ent_->parent = this;
        context_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::ContextMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Vrfs::Vrf::ContextMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::ContextMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::ContextMapping()
    :
    context_mapping_name{YType::str, "context-mapping-name"},
    context{YType::enumeration, "context"},
    instance_name{YType::str, "instance-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "context-mapping"; yang_parent_name = "context-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::~ContextMapping()
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_data() const
{
    if (is_presence_container) return true;
    return context_mapping_name.is_set
	|| context.is_set
	|| instance_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_mapping_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping";
    ADD_KEY_TOKEN(context_mapping_name, "context-mapping-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_mapping_name.is_set || is_set(context_mapping_name.yfilter)) leaf_name_data.push_back(context_mapping_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name = value;
        context_mapping_name.value_namespace = name_space;
        context_mapping_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping-name" || name == "context" || name == "instance-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Snmp::Groups::Groups()
    :
    group(this, {"name"})
{

    yang_name = "groups"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Groups::~Groups()
{
}

bool Snmp::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Snmp::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Snmp::Groups::Group::Group()
    :
    name{YType::str, "name"},
    snmp_version{YType::enumeration, "snmp-version"},
    security_model{YType::enumeration, "security-model"},
    notify_view{YType::str, "notify-view"},
    read_view{YType::str, "read-view"},
    write_view{YType::str, "write-view"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v4_access_list{YType::str, "v4-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    context_name{YType::str, "context-name"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Groups::Group::~Group()
{
}

bool Snmp::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| snmp_version.is_set
	|| security_model.is_set
	|| notify_view.is_set
	|| read_view.is_set
	|| write_view.is_set
	|| v4acl_type.is_set
	|| v4_access_list.is_set
	|| v6acl_type.is_set
	|| v6_access_list.is_set
	|| context_name.is_set;
}

bool Snmp::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(snmp_version.yfilter)
	|| ydk::is_set(security_model.yfilter)
	|| ydk::is_set(notify_view.yfilter)
	|| ydk::is_set(read_view.yfilter)
	|| ydk::is_set(write_view.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(context_name.yfilter);
}

std::string Snmp::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snmp_version.is_set || is_set(snmp_version.yfilter)) leaf_name_data.push_back(snmp_version.get_name_leafdata());
    if (security_model.is_set || is_set(security_model.yfilter)) leaf_name_data.push_back(security_model.get_name_leafdata());
    if (notify_view.is_set || is_set(notify_view.yfilter)) leaf_name_data.push_back(notify_view.get_name_leafdata());
    if (read_view.is_set || is_set(read_view.yfilter)) leaf_name_data.push_back(read_view.get_name_leafdata());
    if (write_view.is_set || is_set(write_view.yfilter)) leaf_name_data.push_back(write_view.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-version")
    {
        snmp_version = value;
        snmp_version.value_namespace = name_space;
        snmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-model")
    {
        security_model = value;
        security_model.value_namespace = name_space;
        security_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-view")
    {
        notify_view = value;
        notify_view.value_namespace = name_space;
        notify_view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-view")
    {
        read_view = value;
        read_view.value_namespace = name_space;
        read_view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-view")
    {
        write_view = value;
        write_view.value_namespace = name_space;
        write_view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "snmp-version")
    {
        snmp_version.yfilter = yfilter;
    }
    if(value_path == "security-model")
    {
        security_model.yfilter = yfilter;
    }
    if(value_path == "notify-view")
    {
        notify_view.yfilter = yfilter;
    }
    if(value_path == "read-view")
    {
        read_view.yfilter = yfilter;
    }
    if(value_path == "write-view")
    {
        write_view.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
}

bool Snmp::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "snmp-version" || name == "security-model" || name == "notify-view" || name == "read-view" || name == "write-view" || name == "v4acl-type" || name == "v4-access-list" || name == "v6acl-type" || name == "v6-access-list" || name == "context-name")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHosts()
    :
    trap_host(this, {"ip_address"})
{

    yang_name = "trap-hosts"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::TrapHosts::~TrapHosts()
{
}

bool Snmp::TrapHosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_host.len(); index++)
    {
        if(trap_host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::has_operation() const
{
    for (std::size_t index=0; index<trap_host.len(); index++)
    {
        if(trap_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::TrapHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-host")
    {
        auto ent_ = std::make_shared<Snmp::TrapHosts::TrapHost>();
        ent_->parent = this;
        trap_host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::TrapHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-host")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::TrapHost()
    :
    ip_address{YType::str, "ip-address"}
        ,
    encrypted_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities>())
    , inform_host(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost>())
    , default_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities>())
{
    encrypted_user_communities->parent = this;
    inform_host->parent = this;
    default_user_communities->parent = this;

    yang_name = "trap-host"; yang_parent_name = "trap-hosts"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::TrapHosts::TrapHost::~TrapHost()
{
}

bool Snmp::TrapHosts::TrapHost::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_data())
	|| (inform_host !=  nullptr && inform_host->has_data())
	|| (default_user_communities !=  nullptr && default_user_communities->has_data());
}

bool Snmp::TrapHosts::TrapHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_operation())
	|| (inform_host !=  nullptr && inform_host->has_operation())
	|| (default_user_communities !=  nullptr && default_user_communities->has_operation());
}

std::string Snmp::TrapHosts::TrapHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/trap-hosts/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::TrapHosts::TrapHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-host";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapHosts::TrapHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-communities")
    {
        if(encrypted_user_communities == nullptr)
        {
            encrypted_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities>();
        }
        return encrypted_user_communities;
    }

    if(child_yang_name == "inform-host")
    {
        if(inform_host == nullptr)
        {
            inform_host = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost>();
        }
        return inform_host;
    }

    if(child_yang_name == "default-user-communities")
    {
        if(default_user_communities == nullptr)
        {
            default_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities>();
        }
        return default_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapHosts::TrapHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encrypted_user_communities != nullptr)
    {
        _children["encrypted-user-communities"] = encrypted_user_communities;
    }

    if(inform_host != nullptr)
    {
        _children["inform-host"] = inform_host;
    }

    if(default_user_communities != nullptr)
    {
        _children["default-user-communities"] = default_user_communities;
    }

    return _children;
}

void Snmp::TrapHosts::TrapHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-user-communities" || name == "inform-host" || name == "default-user-communities" || name == "ip-address")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunities()
    :
    encrypted_user_community(this, {"community_name"})
{

    yang_name = "encrypted-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::~EncryptedUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encrypted_user_community.len(); index++)
    {
        if(encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_user_community.len(); index++)
    {
        if(encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-community")
    {
        auto ent_ = std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity>();
        ent_->parent = this;
        encrypted_user_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encrypted_user_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::EncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::uint32, "basic-trap-types"},
    advanced_trap_types1{YType::uint32, "advanced-trap-types1"},
    advanced_trap_types2{YType::uint32, "advanced-trap-types2"}
{

    yang_name = "encrypted-user-community"; yang_parent_name = "encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::~EncryptedUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_data() const
{
    if (is_presence_container) return true;
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-community";
    ADD_KEY_TOKEN(community_name, "community-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformHost()
    :
    inform_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities>())
    , inform_encrypted_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>())
{
    inform_user_communities->parent = this;
    inform_encrypted_user_communities->parent = this;

    yang_name = "inform-host"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::TrapHosts::TrapHost::InformHost::~InformHost()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_data() const
{
    if (is_presence_container) return true;
    return (inform_user_communities !=  nullptr && inform_user_communities->has_data())
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_data());
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_operation() const
{
    return is_set(yfilter)
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_operation())
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_operation());
}

std::string Snmp::TrapHosts::TrapHost::InformHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapHosts::TrapHost::InformHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-communities")
    {
        if(inform_user_communities == nullptr)
        {
            inform_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities>();
        }
        return inform_user_communities;
    }

    if(child_yang_name == "inform-encrypted-user-communities")
    {
        if(inform_encrypted_user_communities == nullptr)
        {
            inform_encrypted_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>();
        }
        return inform_encrypted_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapHosts::TrapHost::InformHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inform_user_communities != nullptr)
    {
        _children["inform-user-communities"] = inform_user_communities;
    }

    if(inform_encrypted_user_communities != nullptr)
    {
        _children["inform-encrypted-user-communities"] = inform_encrypted_user_communities;
    }

    return _children;
}

void Snmp::TrapHosts::TrapHost::InformHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::InformHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-user-communities" || name == "inform-encrypted-user-communities")
        return true;
    return false;
}

const Enum::YLeaf SnmpHashAlgorithm::none {0, "none"};
const Enum::YLeaf SnmpHashAlgorithm::md5 {1, "md5"};
const Enum::YLeaf SnmpHashAlgorithm::sha {2, "sha"};

const Enum::YLeaf SnmpAccessLevel::read_only {0, "read-only"};
const Enum::YLeaf SnmpAccessLevel::read_write {1, "read-write"};

const Enum::YLeaf SnmpBulkstatSchema::exact_interface {1, "exact-interface"};
const Enum::YLeaf SnmpBulkstatSchema::exact_oid {2, "exact-oid"};
const Enum::YLeaf SnmpBulkstatSchema::wild_interface {3, "wild-interface"};
const Enum::YLeaf SnmpBulkstatSchema::wild_oid {4, "wild-oid"};
const Enum::YLeaf SnmpBulkstatSchema::range_oid {5, "range-oid"};
const Enum::YLeaf SnmpBulkstatSchema::repeat_oid {6, "repeat-oid"};

const Enum::YLeaf GroupSnmpVersion::v1 {0, "v1"};
const Enum::YLeaf GroupSnmpVersion::v2c {1, "v2c"};
const Enum::YLeaf GroupSnmpVersion::v3 {2, "v3"};

const Enum::YLeaf SnmpOwnerAccess::sdr_owner {0, "sdr-owner"};
const Enum::YLeaf SnmpOwnerAccess::system_owner {1, "system-owner"};

const Enum::YLeaf SnmpBulkstatFileFormat::schema_ascii {1, "schema-ascii"};
const Enum::YLeaf SnmpBulkstatFileFormat::bulk_ascii {2, "bulk-ascii"};
const Enum::YLeaf SnmpBulkstatFileFormat::bulk_binary {3, "bulk-binary"};

const Enum::YLeaf SnmpSecurityModel::no_authentication {0, "no-authentication"};
const Enum::YLeaf SnmpSecurityModel::authentication {1, "authentication"};
const Enum::YLeaf SnmpSecurityModel::privacy {2, "privacy"};

const Enum::YLeaf SnmpTos::precedence {0, "precedence"};
const Enum::YLeaf SnmpTos::dscp {1, "dscp"};

const Enum::YLeaf Snmpacl::ipv4 {1, "ipv4"};
const Enum::YLeaf Snmpacl::ipv6 {2, "ipv6"};

const Enum::YLeaf SnmpDscpValue::default_ {0, "default"};
const Enum::YLeaf SnmpDscpValue::af11 {10, "af11"};
const Enum::YLeaf SnmpDscpValue::af12 {12, "af12"};
const Enum::YLeaf SnmpDscpValue::af13 {14, "af13"};
const Enum::YLeaf SnmpDscpValue::af21 {18, "af21"};
const Enum::YLeaf SnmpDscpValue::af22 {20, "af22"};
const Enum::YLeaf SnmpDscpValue::af23 {22, "af23"};
const Enum::YLeaf SnmpDscpValue::af31 {26, "af31"};
const Enum::YLeaf SnmpDscpValue::af32 {28, "af32"};
const Enum::YLeaf SnmpDscpValue::af33 {30, "af33"};
const Enum::YLeaf SnmpDscpValue::af41 {34, "af41"};
const Enum::YLeaf SnmpDscpValue::af42 {36, "af42"};
const Enum::YLeaf SnmpDscpValue::af43 {38, "af43"};
const Enum::YLeaf SnmpDscpValue::ef {46, "ef"};
const Enum::YLeaf SnmpDscpValue::cs1 {8, "cs1"};
const Enum::YLeaf SnmpDscpValue::cs2 {16, "cs2"};
const Enum::YLeaf SnmpDscpValue::cs3 {24, "cs3"};
const Enum::YLeaf SnmpDscpValue::cs4 {32, "cs4"};
const Enum::YLeaf SnmpDscpValue::cs5 {40, "cs5"};
const Enum::YLeaf SnmpDscpValue::cs6 {48, "cs6"};
const Enum::YLeaf SnmpDscpValue::cs7 {56, "cs7"};

const Enum::YLeaf UserSnmpVersion::v1 {1, "v1"};
const Enum::YLeaf UserSnmpVersion::v2c {2, "v2c"};
const Enum::YLeaf UserSnmpVersion::v3 {3, "v3"};

const Enum::YLeaf SnmpPrecedenceValue1::routine {0, "routine"};
const Enum::YLeaf SnmpPrecedenceValue1::priority {1, "priority"};
const Enum::YLeaf SnmpPrecedenceValue1::immediate {2, "immediate"};
const Enum::YLeaf SnmpPrecedenceValue1::flash {3, "flash"};
const Enum::YLeaf SnmpPrecedenceValue1::flash_override {4, "flash-override"};
const Enum::YLeaf SnmpPrecedenceValue1::critical {5, "critical"};
const Enum::YLeaf SnmpPrecedenceValue1::internet {6, "internet"};
const Enum::YLeaf SnmpPrecedenceValue1::network {7, "network"};

const Enum::YLeaf SnmpPrivAlgorithm::none {0, "none"};
const Enum::YLeaf SnmpPrivAlgorithm::des {1, "des"};
const Enum::YLeaf SnmpPrivAlgorithm::Y_3des {2, "3des"};
const Enum::YLeaf SnmpPrivAlgorithm::aes128 {3, "aes128"};
const Enum::YLeaf SnmpPrivAlgorithm::aes192 {4, "aes192"};
const Enum::YLeaf SnmpPrivAlgorithm::aes256 {5, "aes256"};

const Enum::YLeaf SnmpMibViewInclusion::included {1, "included"};
const Enum::YLeaf SnmpMibViewInclusion::excluded {2, "excluded"};

const Enum::YLeaf SnmpContext::vrf {1, "vrf"};
const Enum::YLeaf SnmpContext::bridge {4, "bridge"};
const Enum::YLeaf SnmpContext::ospf {5, "ospf"};
const Enum::YLeaf SnmpContext::ospfv3 {6, "ospfv3"};


}
}

