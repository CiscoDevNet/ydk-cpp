
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_0.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Snmp::Snmp()
    :
    inform_pending{YType::uint32, "inform-pending"},
    inform_retries{YType::uint32, "inform-retries"},
    inform_timeout{YType::uint32, "inform-timeout"},
    oid_poll_stats{YType::empty, "oid-poll-stats"},
    packet_size{YType::uint32, "packet-size"},
    throttle_time{YType::uint32, "throttle-time"},
    trap_port{YType::uint32, "trap-port"},
    trap_source{YType::str, "trap-source"},
    trap_source_ipv4{YType::str, "trap-source-ipv4"},
    trap_source_ipv6{YType::str, "trap-source-ipv6"},
    vrf_authentication_trap_disable{YType::empty, "vrf-authentication-trap-disable"}
    	,
    administration(std::make_shared<Snmp::Administration>())
	,agent(std::make_shared<Snmp::Agent>())
	,bulk_stats(std::make_shared<Snmp::BulkStats>())
	,context_mappings(std::make_shared<Snmp::ContextMappings>())
	,contexts(std::make_shared<Snmp::Contexts>())
	,correlator(std::make_shared<Snmp::Correlator>())
	,default_community_maps(std::make_shared<Snmp::DefaultCommunityMaps>())
	,encrypted_community_maps(std::make_shared<Snmp::EncryptedCommunityMaps>())
	,groups(std::make_shared<Snmp::Groups>())
	,ipv4(std::make_shared<Snmp::Ipv4>())
	,ipv6(std::make_shared<Snmp::Ipv6>())
	,logging(std::make_shared<Snmp::Logging>())
	,notification(std::make_shared<Snmp::Notification>())
	,overload_control(nullptr) // presence node
	,system(std::make_shared<Snmp::System>())
	,target(std::make_shared<Snmp::Target>())
	,timeouts(std::make_shared<Snmp::Timeouts>())
	,trap(std::make_shared<Snmp::Trap>())
	,trap_hosts(std::make_shared<Snmp::TrapHosts>())
	,users(std::make_shared<Snmp::Users>())
	,views(std::make_shared<Snmp::Views>())
	,vrfs(std::make_shared<Snmp::Vrfs>())
{
    administration->parent = this;

    agent->parent = this;

    bulk_stats->parent = this;

    context_mappings->parent = this;

    contexts->parent = this;

    correlator->parent = this;

    default_community_maps->parent = this;

    encrypted_community_maps->parent = this;

    groups->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    logging->parent = this;

    notification->parent = this;

    system->parent = this;

    target->parent = this;

    timeouts->parent = this;

    trap->parent = this;

    trap_hosts->parent = this;

    users->parent = this;

    views->parent = this;

    vrfs->parent = this;

    yang_name = "snmp"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-cfg";
}

Snmp::~Snmp()
{
}

bool Snmp::has_data() const
{
    return inform_pending.is_set
	|| inform_retries.is_set
	|| inform_timeout.is_set
	|| oid_poll_stats.is_set
	|| packet_size.is_set
	|| throttle_time.is_set
	|| trap_port.is_set
	|| trap_source.is_set
	|| trap_source_ipv4.is_set
	|| trap_source_ipv6.is_set
	|| vrf_authentication_trap_disable.is_set
	|| (administration !=  nullptr && administration->has_data())
	|| (agent !=  nullptr && agent->has_data())
	|| (bulk_stats !=  nullptr && bulk_stats->has_data())
	|| (context_mappings !=  nullptr && context_mappings->has_data())
	|| (contexts !=  nullptr && contexts->has_data())
	|| (correlator !=  nullptr && correlator->has_data())
	|| (default_community_maps !=  nullptr && default_community_maps->has_data())
	|| (encrypted_community_maps !=  nullptr && encrypted_community_maps->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (overload_control !=  nullptr && overload_control->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (target !=  nullptr && target->has_data())
	|| (timeouts !=  nullptr && timeouts->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (trap_hosts !=  nullptr && trap_hosts->has_data())
	|| (users !=  nullptr && users->has_data())
	|| (views !=  nullptr && views->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Snmp::has_operation() const
{
    return is_set(operation)
	|| is_set(inform_pending.operation)
	|| is_set(inform_retries.operation)
	|| is_set(inform_timeout.operation)
	|| is_set(oid_poll_stats.operation)
	|| is_set(packet_size.operation)
	|| is_set(throttle_time.operation)
	|| is_set(trap_port.operation)
	|| is_set(trap_source.operation)
	|| is_set(trap_source_ipv4.operation)
	|| is_set(trap_source_ipv6.operation)
	|| is_set(vrf_authentication_trap_disable.operation)
	|| (administration !=  nullptr && administration->has_operation())
	|| (agent !=  nullptr && agent->has_operation())
	|| (bulk_stats !=  nullptr && bulk_stats->has_operation())
	|| (context_mappings !=  nullptr && context_mappings->has_operation())
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (default_community_maps !=  nullptr && default_community_maps->has_operation())
	|| (encrypted_community_maps !=  nullptr && encrypted_community_maps->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (overload_control !=  nullptr && overload_control->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (target !=  nullptr && target->has_operation())
	|| (timeouts !=  nullptr && timeouts->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (trap_hosts !=  nullptr && trap_hosts->has_operation())
	|| (users !=  nullptr && users->has_operation())
	|| (views !=  nullptr && views->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp";

    return path_buffer.str();

}

const EntityPath Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inform_pending.is_set || is_set(inform_pending.operation)) leaf_name_data.push_back(inform_pending.get_name_leafdata());
    if (inform_retries.is_set || is_set(inform_retries.operation)) leaf_name_data.push_back(inform_retries.get_name_leafdata());
    if (inform_timeout.is_set || is_set(inform_timeout.operation)) leaf_name_data.push_back(inform_timeout.get_name_leafdata());
    if (oid_poll_stats.is_set || is_set(oid_poll_stats.operation)) leaf_name_data.push_back(oid_poll_stats.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (throttle_time.is_set || is_set(throttle_time.operation)) leaf_name_data.push_back(throttle_time.get_name_leafdata());
    if (trap_port.is_set || is_set(trap_port.operation)) leaf_name_data.push_back(trap_port.get_name_leafdata());
    if (trap_source.is_set || is_set(trap_source.operation)) leaf_name_data.push_back(trap_source.get_name_leafdata());
    if (trap_source_ipv4.is_set || is_set(trap_source_ipv4.operation)) leaf_name_data.push_back(trap_source_ipv4.get_name_leafdata());
    if (trap_source_ipv6.is_set || is_set(trap_source_ipv6.operation)) leaf_name_data.push_back(trap_source_ipv6.get_name_leafdata());
    if (vrf_authentication_trap_disable.is_set || is_set(vrf_authentication_trap_disable.operation)) leaf_name_data.push_back(vrf_authentication_trap_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "bulk-stats")
    {
        if(bulk_stats == nullptr)
        {
            bulk_stats = std::make_shared<Snmp::BulkStats>();
        }
        return bulk_stats;
    }

    if(child_yang_name == "context-mappings")
    {
        if(context_mappings == nullptr)
        {
            context_mappings = std::make_shared<Snmp::ContextMappings>();
        }
        return context_mappings;
    }

    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Snmp::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Snmp::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "default-community-maps")
    {
        if(default_community_maps == nullptr)
        {
            default_community_maps = std::make_shared<Snmp::DefaultCommunityMaps>();
        }
        return default_community_maps;
    }

    if(child_yang_name == "encrypted-community-maps")
    {
        if(encrypted_community_maps == nullptr)
        {
            encrypted_community_maps = std::make_shared<Snmp::EncryptedCommunityMaps>();
        }
        return encrypted_community_maps;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Snmp::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Snmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Snmp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Snmp::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Snmp::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "overload-control")
    {
        if(overload_control == nullptr)
        {
            overload_control = std::make_shared<Snmp::OverloadControl>();
        }
        return overload_control;
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

    if(child_yang_name == "timeouts")
    {
        if(timeouts == nullptr)
        {
            timeouts = std::make_shared<Snmp::Timeouts>();
        }
        return timeouts;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "trap-hosts")
    {
        if(trap_hosts == nullptr)
        {
            trap_hosts = std::make_shared<Snmp::TrapHosts>();
        }
        return trap_hosts;
    }

    if(child_yang_name == "users")
    {
        if(users == nullptr)
        {
            users = std::make_shared<Snmp::Users>();
        }
        return users;
    }

    if(child_yang_name == "views")
    {
        if(views == nullptr)
        {
            views = std::make_shared<Snmp::Views>();
        }
        return views;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Snmp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(administration != nullptr)
    {
        children["administration"] = administration;
    }

    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    if(bulk_stats != nullptr)
    {
        children["bulk-stats"] = bulk_stats;
    }

    if(context_mappings != nullptr)
    {
        children["context-mappings"] = context_mappings;
    }

    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(correlator != nullptr)
    {
        children["correlator"] = correlator;
    }

    if(default_community_maps != nullptr)
    {
        children["default-community-maps"] = default_community_maps;
    }

    if(encrypted_community_maps != nullptr)
    {
        children["encrypted-community-maps"] = encrypted_community_maps;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(overload_control != nullptr)
    {
        children["overload-control"] = overload_control;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(target != nullptr)
    {
        children["target"] = target;
    }

    if(timeouts != nullptr)
    {
        children["timeouts"] = timeouts;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(trap_hosts != nullptr)
    {
        children["trap-hosts"] = trap_hosts;
    }

    if(users != nullptr)
    {
        children["users"] = users;
    }

    if(views != nullptr)
    {
        children["views"] = views;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Snmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inform-pending")
    {
        inform_pending = value;
    }
    if(value_path == "inform-retries")
    {
        inform_retries = value;
    }
    if(value_path == "inform-timeout")
    {
        inform_timeout = value;
    }
    if(value_path == "oid-poll-stats")
    {
        oid_poll_stats = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "throttle-time")
    {
        throttle_time = value;
    }
    if(value_path == "trap-port")
    {
        trap_port = value;
    }
    if(value_path == "trap-source")
    {
        trap_source = value;
    }
    if(value_path == "trap-source-ipv4")
    {
        trap_source_ipv4 = value;
    }
    if(value_path == "trap-source-ipv6")
    {
        trap_source_ipv6 = value;
    }
    if(value_path == "vrf-authentication-trap-disable")
    {
        vrf_authentication_trap_disable = value;
    }
}

std::shared_ptr<Entity> Snmp::clone_ptr() const
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

Snmp::EncryptedCommunityMaps::EncryptedCommunityMaps()
{
    yang_name = "encrypted-community-maps"; yang_parent_name = "snmp";
}

Snmp::EncryptedCommunityMaps::~EncryptedCommunityMaps()
{
}

bool Snmp::EncryptedCommunityMaps::has_data() const
{
    for (std::size_t index=0; index<encrypted_community_map.size(); index++)
    {
        if(encrypted_community_map[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::EncryptedCommunityMaps::has_operation() const
{
    for (std::size_t index=0; index<encrypted_community_map.size(); index++)
    {
        if(encrypted_community_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::EncryptedCommunityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community-maps";

    return path_buffer.str();

}

const EntityPath Snmp::EncryptedCommunityMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::EncryptedCommunityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community-map")
    {
        for(auto const & c : encrypted_community_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::EncryptedCommunityMaps::EncryptedCommunityMap>();
        c->parent = this;
        encrypted_community_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EncryptedCommunityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_community_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::EncryptedCommunityMaps::set_value(const std::string & value_path, std::string value)
{
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::EncryptedCommunityMap()
    :
    community_name{YType::str, "community-name"},
    context{YType::str, "context"},
    security{YType::str, "security"},
    target_list{YType::str, "target-list"}
{
    yang_name = "encrypted-community-map"; yang_parent_name = "encrypted-community-maps";
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::~EncryptedCommunityMap()
{
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_data() const
{
    return community_name.is_set
	|| context.is_set
	|| security.is_set
	|| target_list.is_set;
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(context.operation)
	|| is_set(security.operation)
	|| is_set(target_list.operation);
}

std::string Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community-map" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/encrypted-community-maps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (security.is_set || is_set(security.operation)) leaf_name_data.push_back(security.get_name_leafdata());
    if (target_list.is_set || is_set(target_list.operation)) leaf_name_data.push_back(target_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "security")
    {
        security = value;
    }
    if(value_path == "target-list")
    {
        target_list = value;
    }
}

Snmp::Views::Views()
{
    yang_name = "views"; yang_parent_name = "snmp";
}

Snmp::Views::~Views()
{
}

bool Snmp::Views::has_data() const
{
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Views::has_operation() const
{
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Views::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "views";

    return path_buffer.str();

}

const EntityPath Snmp::Views::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Views::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view")
    {
        for(auto const & c : view)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Views::View>();
        c->parent = this;
        view.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Views::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : view)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Views::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Views::View::View()
    :
    view_name{YType::str, "view-name"},
    family{YType::str, "family"},
    view_inclusion{YType::enumeration, "view-inclusion"}
{
    yang_name = "view"; yang_parent_name = "views";
}

Snmp::Views::View::~View()
{
}

bool Snmp::Views::View::has_data() const
{
    return view_name.is_set
	|| family.is_set
	|| view_inclusion.is_set;
}

bool Snmp::Views::View::has_operation() const
{
    return is_set(operation)
	|| is_set(view_name.operation)
	|| is_set(family.operation)
	|| is_set(view_inclusion.operation);
}

std::string Snmp::Views::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view" <<"[view-name='" <<view_name <<"']" <<"[family='" <<family <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Views::View::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/views/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (view_name.is_set || is_set(view_name.operation)) leaf_name_data.push_back(view_name.get_name_leafdata());
    if (family.is_set || is_set(family.operation)) leaf_name_data.push_back(family.get_name_leafdata());
    if (view_inclusion.is_set || is_set(view_inclusion.operation)) leaf_name_data.push_back(view_inclusion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Views::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Views::View::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Views::View::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "view-name")
    {
        view_name = value;
    }
    if(value_path == "family")
    {
        family = value;
    }
    if(value_path == "view-inclusion")
    {
        view_inclusion = value;
    }
}

Snmp::Logging::Logging()
    :
    threshold(std::make_shared<Snmp::Logging::Threshold>())
{
    threshold->parent = this;

    yang_name = "logging"; yang_parent_name = "snmp";
}

Snmp::Logging::~Logging()
{
}

bool Snmp::Logging::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Snmp::Logging::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Snmp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Snmp::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Snmp::Logging::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Logging::Threshold::Threshold()
    :
    oid_processing{YType::uint32, "oid-processing"},
    pdu_processing{YType::uint32, "pdu-processing"}
{
    yang_name = "threshold"; yang_parent_name = "logging";
}

Snmp::Logging::Threshold::~Threshold()
{
}

bool Snmp::Logging::Threshold::has_data() const
{
    return oid_processing.is_set
	|| pdu_processing.is_set;
}

bool Snmp::Logging::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(oid_processing.operation)
	|| is_set(pdu_processing.operation);
}

std::string Snmp::Logging::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Snmp::Logging::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid_processing.is_set || is_set(oid_processing.operation)) leaf_name_data.push_back(oid_processing.get_name_leafdata());
    if (pdu_processing.is_set || is_set(pdu_processing.operation)) leaf_name_data.push_back(pdu_processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Logging::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Logging::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Logging::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid-processing")
    {
        oid_processing = value;
    }
    if(value_path == "pdu-processing")
    {
        pdu_processing = value;
    }
}

Snmp::Administration::Administration()
    :
    default_communities(std::make_shared<Snmp::Administration::DefaultCommunities>())
	,encrypted_communities(std::make_shared<Snmp::Administration::EncryptedCommunities>())
{
    default_communities->parent = this;

    encrypted_communities->parent = this;

    yang_name = "administration"; yang_parent_name = "snmp";
}

Snmp::Administration::~Administration()
{
}

bool Snmp::Administration::has_data() const
{
    return (default_communities !=  nullptr && default_communities->has_data())
	|| (encrypted_communities !=  nullptr && encrypted_communities->has_data());
}

bool Snmp::Administration::has_operation() const
{
    return is_set(operation)
	|| (default_communities !=  nullptr && default_communities->has_operation())
	|| (encrypted_communities !=  nullptr && encrypted_communities->has_operation());
}

std::string Snmp::Administration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "administration";

    return path_buffer.str();

}

const EntityPath Snmp::Administration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Administration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_communities != nullptr)
    {
        children["default-communities"] = default_communities;
    }

    if(encrypted_communities != nullptr)
    {
        children["encrypted-communities"] = encrypted_communities;
    }

    return children;
}

void Snmp::Administration::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Administration::DefaultCommunities::DefaultCommunities()
{
    yang_name = "default-communities"; yang_parent_name = "administration";
}

Snmp::Administration::DefaultCommunities::~DefaultCommunities()
{
}

bool Snmp::Administration::DefaultCommunities::has_data() const
{
    for (std::size_t index=0; index<default_community.size(); index++)
    {
        if(default_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Administration::DefaultCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_community.size(); index++)
    {
        if(default_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Administration::DefaultCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-communities";

    return path_buffer.str();

}

const EntityPath Snmp::Administration::DefaultCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Administration::DefaultCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-community")
    {
        for(auto const & c : default_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Administration::DefaultCommunities::DefaultCommunity>();
        c->parent = this;
        default_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::DefaultCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Administration::DefaultCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Administration::DefaultCommunities::DefaultCommunity::DefaultCommunity()
    :
    community_name{YType::str, "community-name"},
    owner{YType::enumeration, "owner"},
    priviledge{YType::enumeration, "priviledge"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    view_name{YType::str, "view-name"}
{
    yang_name = "default-community"; yang_parent_name = "default-communities";
}

Snmp::Administration::DefaultCommunities::DefaultCommunity::~DefaultCommunity()
{
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_data() const
{
    return community_name.is_set
	|| owner.is_set
	|| priviledge.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| view_name.is_set;
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(owner.operation)
	|| is_set(priviledge.operation)
	|| is_set(v4_access_list.operation)
	|| is_set(v4acl_type.operation)
	|| is_set(v6_access_list.operation)
	|| is_set(v6acl_type.operation)
	|| is_set(view_name.operation);
}

std::string Snmp::Administration::DefaultCommunities::DefaultCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Administration::DefaultCommunities::DefaultCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/default-communities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (priviledge.is_set || is_set(priviledge.operation)) leaf_name_data.push_back(priviledge.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.operation)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.operation)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.operation)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.operation)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (view_name.is_set || is_set(view_name.operation)) leaf_name_data.push_back(view_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Administration::DefaultCommunities::DefaultCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::DefaultCommunities::DefaultCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Administration::DefaultCommunities::DefaultCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "priviledge")
    {
        priviledge = value;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
    }
    if(value_path == "view-name")
    {
        view_name = value;
    }
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunities()
{
    yang_name = "encrypted-communities"; yang_parent_name = "administration";
}

Snmp::Administration::EncryptedCommunities::~EncryptedCommunities()
{
}

bool Snmp::Administration::EncryptedCommunities::has_data() const
{
    for (std::size_t index=0; index<encrypted_community.size(); index++)
    {
        if(encrypted_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Administration::EncryptedCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_community.size(); index++)
    {
        if(encrypted_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Administration::EncryptedCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-communities";

    return path_buffer.str();

}

const EntityPath Snmp::Administration::EncryptedCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Administration::EncryptedCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community")
    {
        for(auto const & c : encrypted_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Administration::EncryptedCommunities::EncryptedCommunity>();
        c->parent = this;
        encrypted_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::EncryptedCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Administration::EncryptedCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunity::EncryptedCommunity()
    :
    community_name{YType::str, "community-name"},
    owner{YType::enumeration, "owner"},
    priviledge{YType::enumeration, "priviledge"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    view_name{YType::str, "view-name"}
{
    yang_name = "encrypted-community"; yang_parent_name = "encrypted-communities";
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunity::~EncryptedCommunity()
{
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_data() const
{
    return community_name.is_set
	|| owner.is_set
	|| priviledge.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| view_name.is_set;
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(owner.operation)
	|| is_set(priviledge.operation)
	|| is_set(v4_access_list.operation)
	|| is_set(v4acl_type.operation)
	|| is_set(v6_access_list.operation)
	|| is_set(v6acl_type.operation)
	|| is_set(view_name.operation);
}

std::string Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/encrypted-communities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (priviledge.is_set || is_set(priviledge.operation)) leaf_name_data.push_back(priviledge.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.operation)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.operation)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.operation)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.operation)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (view_name.is_set || is_set(view_name.operation)) leaf_name_data.push_back(view_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Administration::EncryptedCommunities::EncryptedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "priviledge")
    {
        priviledge = value;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
    }
    if(value_path == "view-name")
    {
        view_name = value;
    }
}

Snmp::Agent::Agent()
    :
    engine_id(std::make_shared<Snmp::Agent::EngineId>())
{
    engine_id->parent = this;

    yang_name = "agent"; yang_parent_name = "snmp";
}

Snmp::Agent::~Agent()
{
}

bool Snmp::Agent::has_data() const
{
    return (engine_id !=  nullptr && engine_id->has_data());
}

bool Snmp::Agent::has_operation() const
{
    return is_set(operation)
	|| (engine_id !=  nullptr && engine_id->has_operation());
}

std::string Snmp::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

const EntityPath Snmp::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(engine_id != nullptr)
    {
        children["engine-id"] = engine_id;
    }

    return children;
}

void Snmp::Agent::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Agent::EngineId::EngineId()
    :
    local{YType::str, "local"}
    	,
    remotes(std::make_shared<Snmp::Agent::EngineId::Remotes>())
{
    remotes->parent = this;

    yang_name = "engine-id"; yang_parent_name = "agent";
}

Snmp::Agent::EngineId::~EngineId()
{
}

bool Snmp::Agent::EngineId::has_data() const
{
    return local.is_set
	|| (remotes !=  nullptr && remotes->has_data());
}

bool Snmp::Agent::EngineId::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| (remotes !=  nullptr && remotes->has_operation());
}

std::string Snmp::Agent::EngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine-id";

    return path_buffer.str();

}

const EntityPath Snmp::Agent::EngineId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Agent::EngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::EngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remotes != nullptr)
    {
        children["remotes"] = remotes;
    }

    return children;
}

void Snmp::Agent::EngineId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
}

Snmp::Agent::EngineId::Remotes::Remotes()
{
    yang_name = "remotes"; yang_parent_name = "engine-id";
}

Snmp::Agent::EngineId::Remotes::~Remotes()
{
}

bool Snmp::Agent::EngineId::Remotes::has_data() const
{
    for (std::size_t index=0; index<remote.size(); index++)
    {
        if(remote[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Agent::EngineId::Remotes::has_operation() const
{
    for (std::size_t index=0; index<remote.size(); index++)
    {
        if(remote[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Agent::EngineId::Remotes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotes";

    return path_buffer.str();

}

const EntityPath Snmp::Agent::EngineId::Remotes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/engine-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Agent::EngineId::Remotes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        for(auto const & c : remote)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Agent::EngineId::Remotes::Remote>();
        c->parent = this;
        remote.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::EngineId::Remotes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Agent::EngineId::Remotes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Agent::EngineId::Remotes::Remote::Remote()
    :
    remote_address{YType::str, "remote-address"},
    port{YType::uint16, "port"},
    remote_engine_id{YType::str, "remote-engine-id"}
{
    yang_name = "remote"; yang_parent_name = "remotes";
}

Snmp::Agent::EngineId::Remotes::Remote::~Remote()
{
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_data() const
{
    return remote_address.is_set
	|| port.is_set
	|| remote_engine_id.is_set;
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(remote_address.operation)
	|| is_set(port.operation)
	|| is_set(remote_engine_id.operation);
}

std::string Snmp::Agent::EngineId::Remotes::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote" <<"[remote-address='" <<remote_address <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Agent::EngineId::Remotes::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/engine-id/remotes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (remote_engine_id.is_set || is_set(remote_engine_id.operation)) leaf_name_data.push_back(remote_engine_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Agent::EngineId::Remotes::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::EngineId::Remotes::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Agent::EngineId::Remotes::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "remote-engine-id")
    {
        remote_engine_id = value;
    }
}

Snmp::Trap::Trap()
    :
    queue_length{YType::uint32, "queue-length"},
    throttle_time{YType::uint32, "throttle-time"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "trap"; yang_parent_name = "snmp";
}

Snmp::Trap::~Trap()
{
}

bool Snmp::Trap::has_data() const
{
    return queue_length.is_set
	|| throttle_time.is_set
	|| timeout.is_set;
}

bool Snmp::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(queue_length.operation)
	|| is_set(throttle_time.operation)
	|| is_set(timeout.operation);
}

std::string Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Snmp::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_length.is_set || is_set(queue_length.operation)) leaf_name_data.push_back(queue_length.get_name_leafdata());
    if (throttle_time.is_set || is_set(throttle_time.operation)) leaf_name_data.push_back(throttle_time.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-length")
    {
        queue_length = value;
    }
    if(value_path == "throttle-time")
    {
        throttle_time = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Snmp::Ipv6::Ipv6()
    :
    tos(std::make_shared<Snmp::Ipv6::Tos>())
{
    tos->parent = this;

    yang_name = "ipv6"; yang_parent_name = "snmp";
}

Snmp::Ipv6::~Ipv6()
{
}

bool Snmp::Ipv6::has_data() const
{
    return (tos !=  nullptr && tos->has_data());
}

bool Snmp::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Snmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Snmp::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Snmp::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Ipv6::Tos::Tos()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    type{YType::enumeration, "type"}
{
    yang_name = "tos"; yang_parent_name = "ipv6";
}

Snmp::Ipv6::Tos::~Tos()
{
}

bool Snmp::Ipv6::Tos::has_data() const
{
    return dscp.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool Snmp::Ipv6::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation)
	|| is_set(type.operation);
}

std::string Snmp::Ipv6::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Snmp::Ipv6::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Ipv6::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv6::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Ipv6::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Snmp::Ipv4::Ipv4()
    :
    tos(std::make_shared<Snmp::Ipv4::Tos>())
{
    tos->parent = this;

    yang_name = "ipv4"; yang_parent_name = "snmp";
}

Snmp::Ipv4::~Ipv4()
{
}

bool Snmp::Ipv4::has_data() const
{
    return (tos !=  nullptr && tos->has_data());
}

bool Snmp::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Snmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Snmp::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Snmp::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Ipv4::Tos::Tos()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    type{YType::enumeration, "type"}
{
    yang_name = "tos"; yang_parent_name = "ipv4";
}

Snmp::Ipv4::Tos::~Tos()
{
}

bool Snmp::Ipv4::Tos::has_data() const
{
    return dscp.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool Snmp::Ipv4::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation)
	|| is_set(type.operation);
}

std::string Snmp::Ipv4::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Snmp::Ipv4::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Ipv4::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv4::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Ipv4::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Snmp::System::System()
    :
    chassis_id{YType::str, "chassis-id"},
    contact{YType::str, "contact"},
    location{YType::str, "location"}
{
    yang_name = "system"; yang_parent_name = "snmp";
}

Snmp::System::~System()
{
}

bool Snmp::System::has_data() const
{
    return chassis_id.is_set
	|| contact.is_set
	|| location.is_set;
}

bool Snmp::System::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id.operation)
	|| is_set(contact.operation)
	|| is_set(location.operation);
}

std::string Snmp::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath Snmp::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.operation)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (contact.is_set || is_set(contact.operation)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
    }
    if(value_path == "contact")
    {
        contact = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Snmp::Target::Target()
    :
    targets(std::make_shared<Snmp::Target::Targets>())
{
    targets->parent = this;

    yang_name = "target"; yang_parent_name = "snmp";
}

Snmp::Target::~Target()
{
}

bool Snmp::Target::has_data() const
{
    return (targets !=  nullptr && targets->has_data());
}

bool Snmp::Target::has_operation() const
{
    return is_set(operation)
	|| (targets !=  nullptr && targets->has_operation());
}

std::string Snmp::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath Snmp::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(targets != nullptr)
    {
        children["targets"] = targets;
    }

    return children;
}

void Snmp::Target::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Target::Targets::Targets()
{
    yang_name = "targets"; yang_parent_name = "target";
}

Snmp::Target::Targets::~Targets()
{
}

bool Snmp::Target::Targets::has_data() const
{
    for (std::size_t index=0; index<target.size(); index++)
    {
        if(target[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::has_operation() const
{
    for (std::size_t index=0; index<target.size(); index++)
    {
        if(target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Target::Targets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targets";

    return path_buffer.str();

}

const EntityPath Snmp::Target::Targets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::Targets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        for(auto const & c : target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Target::Targets::Target_>();
        c->parent = this;
        target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Target::Targets::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Target::Targets::Target_::Target_()
    :
    target_list_name{YType::str, "target-list-name"}
    	,
    target_addresses(std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses>())
	,vrf_names(std::make_shared<Snmp::Target::Targets::Target_::VrfNames>())
{
    target_addresses->parent = this;

    vrf_names->parent = this;

    yang_name = "target"; yang_parent_name = "targets";
}

Snmp::Target::Targets::Target_::~Target_()
{
}

bool Snmp::Target::Targets::Target_::has_data() const
{
    return target_list_name.is_set
	|| (target_addresses !=  nullptr && target_addresses->has_data())
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Snmp::Target::Targets::Target_::has_operation() const
{
    return is_set(operation)
	|| is_set(target_list_name.operation)
	|| (target_addresses !=  nullptr && target_addresses->has_operation())
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Snmp::Target::Targets::Target_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target" <<"[target-list-name='" <<target_list_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Target::Targets::Target_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/target/targets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_list_name.is_set || is_set(target_list_name.operation)) leaf_name_data.push_back(target_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-addresses")
    {
        if(target_addresses == nullptr)
        {
            target_addresses = std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses>();
        }
        return target_addresses;
    }

    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Snmp::Target::Targets::Target_::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target_addresses != nullptr)
    {
        children["target-addresses"] = target_addresses;
    }

    if(vrf_names != nullptr)
    {
        children["vrf-names"] = vrf_names;
    }

    return children;
}

void Snmp::Target::Targets::Target_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "target-list-name")
    {
        target_list_name = value;
    }
}

Snmp::Target::Targets::Target_::VrfNames::VrfNames()
{
    yang_name = "vrf-names"; yang_parent_name = "target";
}

Snmp::Target::Targets::Target_::VrfNames::~VrfNames()
{
}

bool Snmp::Target::Targets::Target_::VrfNames::has_data() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::Target_::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Target::Targets::Target_::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";

    return path_buffer.str();

}

const EntityPath Snmp::Target::Targets::Target_::VrfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNames' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        for(auto const & c : vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Target::Targets::Target_::VrfNames::VrfName>();
        c->parent = this;
        vrf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Target::Targets::Target_::VrfNames::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Target::Targets::Target_::VrfNames::VrfName::VrfName()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf-name"; yang_parent_name = "vrf-names";
}

Snmp::Target::Targets::Target_::VrfNames::VrfName::~VrfName()
{
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_data() const
{
    return name.is_set;
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Snmp::Target::Targets::Target_::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Target::Targets::Target_::VrfNames::VrfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfName' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Target::Targets::Target_::VrfNames::VrfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddresses()
{
    yang_name = "target-addresses"; yang_parent_name = "target";
}

Snmp::Target::Targets::Target_::TargetAddresses::~TargetAddresses()
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_data() const
{
    for (std::size_t index=0; index<target_address.size(); index++)
    {
        if(target_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_operation() const
{
    for (std::size_t index=0; index<target_address.size(); index++)
    {
        if(target_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Target::Targets::Target_::TargetAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-addresses";

    return path_buffer.str();

}

const EntityPath Snmp::Target::Targets::Target_::TargetAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetAddresses' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::TargetAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        for(auto const & c : target_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress>();
        c->parent = this;
        target_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::TargetAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : target_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Target::Targets::Target_::TargetAddresses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::TargetAddress()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "target-address"; yang_parent_name = "target-addresses";
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::~TargetAddress()
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_data() const
{
    return ip_address.is_set;
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetAddress' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Snmp::Notification::Notification()
    :
    bfd(std::make_shared<Snmp::Notification::Bfd>())
	,bgp(std::make_shared<Snmp::Notification::Bgp>())
	,cfm(std::make_shared<Snmp::Notification::Cfm>())
	,config_copy(std::make_shared<Snmp::Notification::ConfigCopy>())
	,config_man(std::make_shared<Snmp::Notification::ConfigMan>())
	,entity_(std::make_shared<Snmp::Notification::Entity_>())
	,entity_redundancy(std::make_shared<Snmp::Notification::EntityRedundancy>())
	,entity_state(std::make_shared<Snmp::Notification::EntityState>())
	,flash(std::make_shared<Snmp::Notification::Flash>())
	,fru_control(std::make_shared<Snmp::Notification::FruControl>())
	,hsrp(std::make_shared<Snmp::Notification::Hsrp>())
	,isis(std::make_shared<Snmp::Notification::Isis>())
	,l2vpn(std::make_shared<Snmp::Notification::L2Vpn>())
	,mpls_frr(std::make_shared<Snmp::Notification::MplsFrr>())
	,mpls_l3vpn(std::make_shared<Snmp::Notification::MplsL3Vpn>())
	,mpls_ldp(std::make_shared<Snmp::Notification::MplsLdp>())
	,mpls_te(std::make_shared<Snmp::Notification::MplsTe>())
	,mpls_te_p2mp(std::make_shared<Snmp::Notification::MplsTeP2Mp>())
	,ntp(std::make_shared<Snmp::Notification::Ntp>())
	,oam(std::make_shared<Snmp::Notification::Oam>())
	,ospf(std::make_shared<Snmp::Notification::Ospf>())
	,ospfv3(std::make_shared<Snmp::Notification::Ospfv3>())
	,otn(std::make_shared<Snmp::Notification::Otn>())
	,rf(std::make_shared<Snmp::Notification::Rf>())
	,rsvp(std::make_shared<Snmp::Notification::Rsvp>())
	,selective_vrf_download(std::make_shared<Snmp::Notification::SelectiveVrfDownload>())
	,sensor(std::make_shared<Snmp::Notification::Sensor>())
	,snmp(std::make_shared<Snmp::Notification::Snmp_>())
	,syslog(std::make_shared<Snmp::Notification::Syslog>())
	,system(std::make_shared<Snmp::Notification::System>())
	,vpls(std::make_shared<Snmp::Notification::Vpls>())
	,vrrp(std::make_shared<Snmp::Notification::Vrrp>())
{
    bfd->parent = this;

    bgp->parent = this;

    cfm->parent = this;

    config_copy->parent = this;

    config_man->parent = this;

    entity_->parent = this;

    entity_redundancy->parent = this;

    entity_state->parent = this;

    flash->parent = this;

    fru_control->parent = this;

    hsrp->parent = this;

    isis->parent = this;

    l2vpn->parent = this;

    mpls_frr->parent = this;

    mpls_l3vpn->parent = this;

    mpls_ldp->parent = this;

    mpls_te->parent = this;

    mpls_te_p2mp->parent = this;

    ntp->parent = this;

    oam->parent = this;

    ospf->parent = this;

    ospfv3->parent = this;

    otn->parent = this;

    rf->parent = this;

    rsvp->parent = this;

    selective_vrf_download->parent = this;

    sensor->parent = this;

    snmp->parent = this;

    syslog->parent = this;

    system->parent = this;

    vpls->parent = this;

    vrrp->parent = this;

    yang_name = "notification"; yang_parent_name = "snmp";
}

Snmp::Notification::~Notification()
{
}

bool Snmp::Notification::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (config_copy !=  nullptr && config_copy->has_data())
	|| (config_man !=  nullptr && config_man->has_data())
	|| (entity_ !=  nullptr && entity_->has_data())
	|| (entity_redundancy !=  nullptr && entity_redundancy->has_data())
	|| (entity_state !=  nullptr && entity_state->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (fru_control !=  nullptr && fru_control->has_data())
	|| (hsrp !=  nullptr && hsrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (mpls_frr !=  nullptr && mpls_frr->has_data())
	|| (mpls_l3vpn !=  nullptr && mpls_l3vpn->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (mpls_te_p2mp !=  nullptr && mpls_te_p2mp->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (oam !=  nullptr && oam->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (rf !=  nullptr && rf->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (selective_vrf_download !=  nullptr && selective_vrf_download->has_data())
	|| (sensor !=  nullptr && sensor->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (vpls !=  nullptr && vpls->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Snmp::Notification::has_operation() const
{
    return is_set(operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (config_copy !=  nullptr && config_copy->has_operation())
	|| (config_man !=  nullptr && config_man->has_operation())
	|| (entity_ !=  nullptr && entity_->has_operation())
	|| (entity_redundancy !=  nullptr && entity_redundancy->has_operation())
	|| (entity_state !=  nullptr && entity_state->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (fru_control !=  nullptr && fru_control->has_operation())
	|| (hsrp !=  nullptr && hsrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (mpls_frr !=  nullptr && mpls_frr->has_operation())
	|| (mpls_l3vpn !=  nullptr && mpls_l3vpn->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (mpls_te_p2mp !=  nullptr && mpls_te_p2mp->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (oam !=  nullptr && oam->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (rf !=  nullptr && rf->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (selective_vrf_download !=  nullptr && selective_vrf_download->has_operation())
	|| (sensor !=  nullptr && sensor->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (vpls !=  nullptr && vpls->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Snmp::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Snmp::Notification::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Snmp::Notification::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Snmp::Notification::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "config-copy")
    {
        if(config_copy == nullptr)
        {
            config_copy = std::make_shared<Snmp::Notification::ConfigCopy>();
        }
        return config_copy;
    }

    if(child_yang_name == "config-man")
    {
        if(config_man == nullptr)
        {
            config_man = std::make_shared<Snmp::Notification::ConfigMan>();
        }
        return config_man;
    }

    if(child_yang_name == "entity")
    {
        if(entity_ == nullptr)
        {
            entity_ = std::make_shared<Snmp::Notification::Entity_>();
        }
        return entity_;
    }

    if(child_yang_name == "entity-redundancy")
    {
        if(entity_redundancy == nullptr)
        {
            entity_redundancy = std::make_shared<Snmp::Notification::EntityRedundancy>();
        }
        return entity_redundancy;
    }

    if(child_yang_name == "entity-state")
    {
        if(entity_state == nullptr)
        {
            entity_state = std::make_shared<Snmp::Notification::EntityState>();
        }
        return entity_state;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Snmp::Notification::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "fru-control")
    {
        if(fru_control == nullptr)
        {
            fru_control = std::make_shared<Snmp::Notification::FruControl>();
        }
        return fru_control;
    }

    if(child_yang_name == "hsrp")
    {
        if(hsrp == nullptr)
        {
            hsrp = std::make_shared<Snmp::Notification::Hsrp>();
        }
        return hsrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Snmp::Notification::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Snmp::Notification::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "mpls-frr")
    {
        if(mpls_frr == nullptr)
        {
            mpls_frr = std::make_shared<Snmp::Notification::MplsFrr>();
        }
        return mpls_frr;
    }

    if(child_yang_name == "mpls-l3vpn")
    {
        if(mpls_l3vpn == nullptr)
        {
            mpls_l3vpn = std::make_shared<Snmp::Notification::MplsL3Vpn>();
        }
        return mpls_l3vpn;
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Snmp::Notification::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Snmp::Notification::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "mpls-te-p2mp")
    {
        if(mpls_te_p2mp == nullptr)
        {
            mpls_te_p2mp = std::make_shared<Snmp::Notification::MplsTeP2Mp>();
        }
        return mpls_te_p2mp;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Snmp::Notification::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Snmp::Notification::Oam>();
        }
        return oam;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Snmp::Notification::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Snmp::Notification::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Snmp::Notification::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "rf")
    {
        if(rf == nullptr)
        {
            rf = std::make_shared<Snmp::Notification::Rf>();
        }
        return rf;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Snmp::Notification::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "selective-vrf-download")
    {
        if(selective_vrf_download == nullptr)
        {
            selective_vrf_download = std::make_shared<Snmp::Notification::SelectiveVrfDownload>();
        }
        return selective_vrf_download;
    }

    if(child_yang_name == "sensor")
    {
        if(sensor == nullptr)
        {
            sensor = std::make_shared<Snmp::Notification::Sensor>();
        }
        return sensor;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Snmp::Notification::Snmp_>();
        }
        return snmp;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Snmp::Notification::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Snmp::Notification::System>();
        }
        return system;
    }

    if(child_yang_name == "vpls")
    {
        if(vpls == nullptr)
        {
            vpls = std::make_shared<Snmp::Notification::Vpls>();
        }
        return vpls;
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Snmp::Notification::Vrrp>();
        }
        return vrrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(config_copy != nullptr)
    {
        children["config-copy"] = config_copy;
    }

    if(config_man != nullptr)
    {
        children["config-man"] = config_man;
    }

    if(entity_ != nullptr)
    {
        children["entity"] = entity_;
    }

    if(entity_redundancy != nullptr)
    {
        children["entity-redundancy"] = entity_redundancy;
    }

    if(entity_state != nullptr)
    {
        children["entity-state"] = entity_state;
    }

    if(flash != nullptr)
    {
        children["flash"] = flash;
    }

    if(fru_control != nullptr)
    {
        children["fru-control"] = fru_control;
    }

    if(hsrp != nullptr)
    {
        children["hsrp"] = hsrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(mpls_frr != nullptr)
    {
        children["mpls-frr"] = mpls_frr;
    }

    if(mpls_l3vpn != nullptr)
    {
        children["mpls-l3vpn"] = mpls_l3vpn;
    }

    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    if(mpls_te != nullptr)
    {
        children["mpls-te"] = mpls_te;
    }

    if(mpls_te_p2mp != nullptr)
    {
        children["mpls-te-p2mp"] = mpls_te_p2mp;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(rf != nullptr)
    {
        children["rf"] = rf;
    }

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
    }

    if(selective_vrf_download != nullptr)
    {
        children["selective-vrf-download"] = selective_vrf_download;
    }

    if(sensor != nullptr)
    {
        children["sensor"] = sensor;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(vpls != nullptr)
    {
        children["vpls"] = vpls;
    }

    if(vrrp != nullptr)
    {
        children["vrrp"] = vrrp;
    }

    return children;
}

void Snmp::Notification::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Notification::Snmp_::Snmp_()
    :
    authentication{YType::empty, "authentication"},
    cold_start{YType::empty, "cold-start"},
    enable{YType::empty, "enable"},
    link_down{YType::empty, "Cisco-IOS-XR-snmp-ifmib-cfg:link-down"},
    link_up{YType::empty, "Cisco-IOS-XR-snmp-ifmib-cfg:link-up"},
    warm_start{YType::empty, "warm-start"}
{
    yang_name = "snmp"; yang_parent_name = "notification";
}

Snmp::Notification::Snmp_::~Snmp_()
{
}

bool Snmp::Notification::Snmp_::has_data() const
{
    return authentication.is_set
	|| cold_start.is_set
	|| enable.is_set
	|| link_down.is_set
	|| link_up.is_set
	|| warm_start.is_set;
}

bool Snmp::Notification::Snmp_::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication.operation)
	|| is_set(cold_start.operation)
	|| is_set(enable.operation)
	|| is_set(link_down.operation)
	|| is_set(link_up.operation)
	|| is_set(warm_start.operation);
}

std::string Snmp::Notification::Snmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Snmp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (cold_start.is_set || is_set(cold_start.operation)) leaf_name_data.push_back(cold_start.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (link_down.is_set || is_set(link_down.operation)) leaf_name_data.push_back(link_down.get_name_leafdata());
    if (link_up.is_set || is_set(link_up.operation)) leaf_name_data.push_back(link_up.get_name_leafdata());
    if (warm_start.is_set || is_set(warm_start.operation)) leaf_name_data.push_back(warm_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Snmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Snmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Snmp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "cold-start")
    {
        cold_start = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "link-down")
    {
        link_down = value;
    }
    if(value_path == "link-up")
    {
        link_up = value;
    }
    if(value_path == "warm-start")
    {
        warm_start = value;
    }
}

Snmp::Notification::Vpls::Vpls()
    :
    enable{YType::empty, "enable"},
    full_clear{YType::empty, "full-clear"},
    full_raise{YType::empty, "full-raise"},
    status{YType::empty, "status"}
{
    yang_name = "vpls"; yang_parent_name = "notification";
}

Snmp::Notification::Vpls::~Vpls()
{
}

bool Snmp::Notification::Vpls::has_data() const
{
    return enable.is_set
	|| full_clear.is_set
	|| full_raise.is_set
	|| status.is_set;
}

bool Snmp::Notification::Vpls::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(full_clear.operation)
	|| is_set(full_raise.operation)
	|| is_set(status.operation);
}

std::string Snmp::Notification::Vpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:vpls";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Vpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (full_clear.is_set || is_set(full_clear.operation)) leaf_name_data.push_back(full_clear.get_name_leafdata());
    if (full_raise.is_set || is_set(full_raise.operation)) leaf_name_data.push_back(full_raise.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Vpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Vpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Vpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "full-clear")
    {
        full_clear = value;
    }
    if(value_path == "full-raise")
    {
        full_raise = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Snmp::Notification::L2Vpn::L2Vpn()
    :
    cisco{YType::empty, "cisco"},
    enable{YType::empty, "enable"},
    vc_down{YType::empty, "vc-down"},
    vc_up{YType::empty, "vc-up"}
{
    yang_name = "l2vpn"; yang_parent_name = "notification";
}

Snmp::Notification::L2Vpn::~L2Vpn()
{
}

bool Snmp::Notification::L2Vpn::has_data() const
{
    return cisco.is_set
	|| enable.is_set
	|| vc_down.is_set
	|| vc_up.is_set;
}

bool Snmp::Notification::L2Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(enable.operation)
	|| is_set(vc_down.operation)
	|| is_set(vc_up.operation);
}

std::string Snmp::Notification::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (vc_down.is_set || is_set(vc_down.operation)) leaf_name_data.push_back(vc_down.get_name_leafdata());
    if (vc_up.is_set || is_set(vc_up.operation)) leaf_name_data.push_back(vc_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::L2Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "vc-down")
    {
        vc_down = value;
    }
    if(value_path == "vc-up")
    {
        vc_up = value;
    }
}

Snmp::Notification::Isis::Isis()
    :
    adjacency_change{YType::enumeration, "adjacency-change"},
    all{YType::enumeration, "all"},
    area_mismatch{YType::enumeration, "area-mismatch"},
    attempt_to_exceed_max_sequence{YType::enumeration, "attempt-to-exceed-max-sequence"},
    authentication_failure{YType::enumeration, "authentication-failure"},
    authentication_type_failure{YType::enumeration, "authentication-type-failure"},
    corrupted_lsp_detected{YType::enumeration, "corrupted-lsp-detected"},
    database_overflow{YType::enumeration, "database-overflow"},
    id_length_mismatch{YType::enumeration, "id-length-mismatch"},
    lsp_error_detected{YType::enumeration, "lsp-error-detected"},
    lsp_too_large_to_propagate{YType::enumeration, "lsp-too-large-to-propagate"},
    manual_address_drops{YType::enumeration, "manual-address-drops"},
    max_area_address_mismatch{YType::enumeration, "max-area-address-mismatch"},
    originated_lsp_buffer_size_mismatch{YType::enumeration, "originated-lsp-buffer-size-mismatch"},
    own_lsp_purge{YType::enumeration, "own-lsp-purge"},
    protocols_supported_mismatch{YType::enumeration, "protocols-supported-mismatch"},
    rejected_adjacency{YType::enumeration, "rejected-adjacency"},
    sequence_number_skip{YType::enumeration, "sequence-number-skip"},
    version_skew{YType::enumeration, "version-skew"}
{
    yang_name = "isis"; yang_parent_name = "notification";
}

Snmp::Notification::Isis::~Isis()
{
}

bool Snmp::Notification::Isis::has_data() const
{
    return adjacency_change.is_set
	|| all.is_set
	|| area_mismatch.is_set
	|| attempt_to_exceed_max_sequence.is_set
	|| authentication_failure.is_set
	|| authentication_type_failure.is_set
	|| corrupted_lsp_detected.is_set
	|| database_overflow.is_set
	|| id_length_mismatch.is_set
	|| lsp_error_detected.is_set
	|| lsp_too_large_to_propagate.is_set
	|| manual_address_drops.is_set
	|| max_area_address_mismatch.is_set
	|| originated_lsp_buffer_size_mismatch.is_set
	|| own_lsp_purge.is_set
	|| protocols_supported_mismatch.is_set
	|| rejected_adjacency.is_set
	|| sequence_number_skip.is_set
	|| version_skew.is_set;
}

bool Snmp::Notification::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_change.operation)
	|| is_set(all.operation)
	|| is_set(area_mismatch.operation)
	|| is_set(attempt_to_exceed_max_sequence.operation)
	|| is_set(authentication_failure.operation)
	|| is_set(authentication_type_failure.operation)
	|| is_set(corrupted_lsp_detected.operation)
	|| is_set(database_overflow.operation)
	|| is_set(id_length_mismatch.operation)
	|| is_set(lsp_error_detected.operation)
	|| is_set(lsp_too_large_to_propagate.operation)
	|| is_set(manual_address_drops.operation)
	|| is_set(max_area_address_mismatch.operation)
	|| is_set(originated_lsp_buffer_size_mismatch.operation)
	|| is_set(own_lsp_purge.operation)
	|| is_set(protocols_supported_mismatch.operation)
	|| is_set(rejected_adjacency.operation)
	|| is_set(sequence_number_skip.operation)
	|| is_set(version_skew.operation);
}

std::string Snmp::Notification::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_change.is_set || is_set(adjacency_change.operation)) leaf_name_data.push_back(adjacency_change.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (area_mismatch.is_set || is_set(area_mismatch.operation)) leaf_name_data.push_back(area_mismatch.get_name_leafdata());
    if (attempt_to_exceed_max_sequence.is_set || is_set(attempt_to_exceed_max_sequence.operation)) leaf_name_data.push_back(attempt_to_exceed_max_sequence.get_name_leafdata());
    if (authentication_failure.is_set || is_set(authentication_failure.operation)) leaf_name_data.push_back(authentication_failure.get_name_leafdata());
    if (authentication_type_failure.is_set || is_set(authentication_type_failure.operation)) leaf_name_data.push_back(authentication_type_failure.get_name_leafdata());
    if (corrupted_lsp_detected.is_set || is_set(corrupted_lsp_detected.operation)) leaf_name_data.push_back(corrupted_lsp_detected.get_name_leafdata());
    if (database_overflow.is_set || is_set(database_overflow.operation)) leaf_name_data.push_back(database_overflow.get_name_leafdata());
    if (id_length_mismatch.is_set || is_set(id_length_mismatch.operation)) leaf_name_data.push_back(id_length_mismatch.get_name_leafdata());
    if (lsp_error_detected.is_set || is_set(lsp_error_detected.operation)) leaf_name_data.push_back(lsp_error_detected.get_name_leafdata());
    if (lsp_too_large_to_propagate.is_set || is_set(lsp_too_large_to_propagate.operation)) leaf_name_data.push_back(lsp_too_large_to_propagate.get_name_leafdata());
    if (manual_address_drops.is_set || is_set(manual_address_drops.operation)) leaf_name_data.push_back(manual_address_drops.get_name_leafdata());
    if (max_area_address_mismatch.is_set || is_set(max_area_address_mismatch.operation)) leaf_name_data.push_back(max_area_address_mismatch.get_name_leafdata());
    if (originated_lsp_buffer_size_mismatch.is_set || is_set(originated_lsp_buffer_size_mismatch.operation)) leaf_name_data.push_back(originated_lsp_buffer_size_mismatch.get_name_leafdata());
    if (own_lsp_purge.is_set || is_set(own_lsp_purge.operation)) leaf_name_data.push_back(own_lsp_purge.get_name_leafdata());
    if (protocols_supported_mismatch.is_set || is_set(protocols_supported_mismatch.operation)) leaf_name_data.push_back(protocols_supported_mismatch.get_name_leafdata());
    if (rejected_adjacency.is_set || is_set(rejected_adjacency.operation)) leaf_name_data.push_back(rejected_adjacency.get_name_leafdata());
    if (sequence_number_skip.is_set || is_set(sequence_number_skip.operation)) leaf_name_data.push_back(sequence_number_skip.get_name_leafdata());
    if (version_skew.is_set || is_set(version_skew.operation)) leaf_name_data.push_back(version_skew.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-change")
    {
        adjacency_change = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "area-mismatch")
    {
        area_mismatch = value;
    }
    if(value_path == "attempt-to-exceed-max-sequence")
    {
        attempt_to_exceed_max_sequence = value;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure = value;
    }
    if(value_path == "authentication-type-failure")
    {
        authentication_type_failure = value;
    }
    if(value_path == "corrupted-lsp-detected")
    {
        corrupted_lsp_detected = value;
    }
    if(value_path == "database-overflow")
    {
        database_overflow = value;
    }
    if(value_path == "id-length-mismatch")
    {
        id_length_mismatch = value;
    }
    if(value_path == "lsp-error-detected")
    {
        lsp_error_detected = value;
    }
    if(value_path == "lsp-too-large-to-propagate")
    {
        lsp_too_large_to_propagate = value;
    }
    if(value_path == "manual-address-drops")
    {
        manual_address_drops = value;
    }
    if(value_path == "max-area-address-mismatch")
    {
        max_area_address_mismatch = value;
    }
    if(value_path == "originated-lsp-buffer-size-mismatch")
    {
        originated_lsp_buffer_size_mismatch = value;
    }
    if(value_path == "own-lsp-purge")
    {
        own_lsp_purge = value;
    }
    if(value_path == "protocols-supported-mismatch")
    {
        protocols_supported_mismatch = value;
    }
    if(value_path == "rejected-adjacency")
    {
        rejected_adjacency = value;
    }
    if(value_path == "sequence-number-skip")
    {
        sequence_number_skip = value;
    }
    if(value_path == "version-skew")
    {
        version_skew = value;
    }
}

Snmp::Notification::ConfigMan::ConfigMan()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "config-man"; yang_parent_name = "notification";
}

Snmp::Notification::ConfigMan::~ConfigMan()
{
}

bool Snmp::Notification::ConfigMan::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::ConfigMan::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::ConfigMan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mibs-cfg:config-man";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::ConfigMan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::ConfigMan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::ConfigMan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::ConfigMan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Cfm::Cfm()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "cfm"; yang_parent_name = "notification";
}

Snmp::Notification::Cfm::~Cfm()
{
}

bool Snmp::Notification::Cfm::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Cfm::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Cfm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Oam::Oam()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "oam"; yang_parent_name = "notification";
}

Snmp::Notification::Oam::~Oam()
{
}

bool Snmp::Notification::Oam::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Oam::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:oam";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Oam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Oam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Flash::Flash()
    :
    insertion{YType::empty, "insertion"},
    removal{YType::empty, "removal"}
{
    yang_name = "flash"; yang_parent_name = "notification";
}

Snmp::Notification::Flash::~Flash()
{
}

bool Snmp::Notification::Flash::has_data() const
{
    return insertion.is_set
	|| removal.is_set;
}

bool Snmp::Notification::Flash::has_operation() const
{
    return is_set(operation)
	|| is_set(insertion.operation)
	|| is_set(removal.operation);
}

std::string Snmp::Notification::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flashmib-cfg:flash";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Flash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insertion.is_set || is_set(insertion.operation)) leaf_name_data.push_back(insertion.get_name_leafdata());
    if (removal.is_set || is_set(removal.operation)) leaf_name_data.push_back(removal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Flash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insertion")
    {
        insertion = value;
    }
    if(value_path == "removal")
    {
        removal = value;
    }
}

Snmp::Notification::EntityRedundancy::EntityRedundancy()
    :
    enable{YType::empty, "enable"},
    status{YType::empty, "status"},
    switchover{YType::empty, "switchover"}
{
    yang_name = "entity-redundancy"; yang_parent_name = "notification";
}

Snmp::Notification::EntityRedundancy::~EntityRedundancy()
{
}

bool Snmp::Notification::EntityRedundancy::has_data() const
{
    return enable.is_set
	|| status.is_set
	|| switchover.is_set;
}

bool Snmp::Notification::EntityRedundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(status.operation)
	|| is_set(switchover.operation);
}

std::string Snmp::Notification::EntityRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ceredundancymib-cfg:entity-redundancy";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::EntityRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.operation)) leaf_name_data.push_back(switchover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::EntityRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::EntityRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::EntityRedundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "switchover")
    {
        switchover = value;
    }
}

Snmp::Notification::ConfigCopy::ConfigCopy()
    :
    completion{YType::empty, "completion"}
{
    yang_name = "config-copy"; yang_parent_name = "notification";
}

Snmp::Notification::ConfigCopy::~ConfigCopy()
{
}

bool Snmp::Notification::ConfigCopy::has_data() const
{
    return completion.is_set;
}

bool Snmp::Notification::ConfigCopy::has_operation() const
{
    return is_set(operation)
	|| is_set(completion.operation);
}

std::string Snmp::Notification::ConfigCopy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-confcopymib-cfg:config-copy";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::ConfigCopy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (completion.is_set || is_set(completion.operation)) leaf_name_data.push_back(completion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::ConfigCopy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::ConfigCopy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::ConfigCopy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "completion")
    {
        completion = value;
    }
}

Snmp::Notification::SelectiveVrfDownload::SelectiveVrfDownload()
    :
    role_change{YType::empty, "role-change"}
{
    yang_name = "selective-vrf-download"; yang_parent_name = "notification";
}

Snmp::Notification::SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool Snmp::Notification::SelectiveVrfDownload::has_data() const
{
    return role_change.is_set;
}

bool Snmp::Notification::SelectiveVrfDownload::has_operation() const
{
    return is_set(operation)
	|| is_set(role_change.operation);
}

std::string Snmp::Notification::SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::SelectiveVrfDownload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role_change.is_set || is_set(role_change.operation)) leaf_name_data.push_back(role_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::SelectiveVrfDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::SelectiveVrfDownload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role-change")
    {
        role_change = value;
    }
}

Snmp::Notification::System::System()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "system"; yang_parent_name = "notification";
}

Snmp::Notification::System::~System()
{
}

bool Snmp::Notification::System::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::System::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-systemmib-cfg:system";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Bfd::Bfd()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bfd"; yang_parent_name = "notification";
}

Snmp::Notification::Bfd::~Bfd()
{
}

bool Snmp::Notification::Bfd::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Ntp::Ntp()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "ntp"; yang_parent_name = "notification";
}

Snmp::Notification::Ntp::~Ntp()
{
}

bool Snmp::Notification::Ntp::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Ntp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ntp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Rsvp::Rsvp()
    :
    enable{YType::empty, "enable"},
    lost_flow{YType::empty, "lost-flow"},
    new_flow{YType::empty, "new-flow"}
{
    yang_name = "rsvp"; yang_parent_name = "notification";
}

Snmp::Notification::Rsvp::~Rsvp()
{
}

bool Snmp::Notification::Rsvp::has_data() const
{
    return enable.is_set
	|| lost_flow.is_set
	|| new_flow.is_set;
}

bool Snmp::Notification::Rsvp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(lost_flow.operation)
	|| is_set(new_flow.operation);
}

std::string Snmp::Notification::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Rsvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (lost_flow.is_set || is_set(lost_flow.operation)) leaf_name_data.push_back(lost_flow.get_name_leafdata());
    if (new_flow.is_set || is_set(new_flow.operation)) leaf_name_data.push_back(new_flow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Rsvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "lost-flow")
    {
        lost_flow = value;
    }
    if(value_path == "new-flow")
    {
        new_flow = value;
    }
}

Snmp::Notification::Bgp::Bgp()
    :
    bgp4mib(std::make_shared<Snmp::Notification::Bgp::Bgp4Mib>())
	,cisco_bgp4mib(std::make_shared<Snmp::Notification::Bgp::CiscoBgp4Mib>())
{
    bgp4mib->parent = this;

    cisco_bgp4mib->parent = this;

    yang_name = "bgp"; yang_parent_name = "notification";
}

Snmp::Notification::Bgp::~Bgp()
{
}

bool Snmp::Notification::Bgp::has_data() const
{
    return (bgp4mib !=  nullptr && bgp4mib->has_data())
	|| (cisco_bgp4mib !=  nullptr && cisco_bgp4mib->has_data());
}

bool Snmp::Notification::Bgp::has_operation() const
{
    return is_set(operation)
	|| (bgp4mib !=  nullptr && bgp4mib->has_operation())
	|| (cisco_bgp4mib !=  nullptr && cisco_bgp4mib->has_operation());
}

std::string Snmp::Notification::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp4mib")
    {
        if(bgp4mib == nullptr)
        {
            bgp4mib = std::make_shared<Snmp::Notification::Bgp::Bgp4Mib>();
        }
        return bgp4mib;
    }

    if(child_yang_name == "cisco-bgp4mib")
    {
        if(cisco_bgp4mib == nullptr)
        {
            cisco_bgp4mib = std::make_shared<Snmp::Notification::Bgp::CiscoBgp4Mib>();
        }
        return cisco_bgp4mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp4mib != nullptr)
    {
        children["bgp4mib"] = bgp4mib;
    }

    if(cisco_bgp4mib != nullptr)
    {
        children["cisco-bgp4mib"] = cisco_bgp4mib;
    }

    return children;
}

void Snmp::Notification::Bgp::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Notification::Bgp::Bgp4Mib::Bgp4Mib()
    :
    enable{YType::empty, "enable"},
    up_down{YType::empty, "up-down"}
{
    yang_name = "bgp4mib"; yang_parent_name = "bgp";
}

Snmp::Notification::Bgp::Bgp4Mib::~Bgp4Mib()
{
}

bool Snmp::Notification::Bgp::Bgp4Mib::has_data() const
{
    return enable.is_set
	|| up_down.is_set;
}

bool Snmp::Notification::Bgp::Bgp4Mib::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(up_down.operation);
}

std::string Snmp::Notification::Bgp::Bgp4Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4mib";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Bgp::Bgp4Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.operation)) leaf_name_data.push_back(up_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Bgp::Bgp4Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bgp::Bgp4Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bgp::Bgp4Mib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "up-down")
    {
        up_down = value;
    }
}

Snmp::Notification::Bgp::CiscoBgp4Mib::CiscoBgp4Mib()
    :
    enable{YType::empty, "enable"},
    up_down{YType::empty, "up-down"}
{
    yang_name = "cisco-bgp4mib"; yang_parent_name = "bgp";
}

Snmp::Notification::Bgp::CiscoBgp4Mib::~CiscoBgp4Mib()
{
}

bool Snmp::Notification::Bgp::CiscoBgp4Mib::has_data() const
{
    return enable.is_set
	|| up_down.is_set;
}

bool Snmp::Notification::Bgp::CiscoBgp4Mib::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(up_down.operation);
}

std::string Snmp::Notification::Bgp::CiscoBgp4Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bgp4mib";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Bgp::CiscoBgp4Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.operation)) leaf_name_data.push_back(up_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Bgp::CiscoBgp4Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bgp::CiscoBgp4Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bgp::CiscoBgp4Mib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "up-down")
    {
        up_down = value;
    }
}

Snmp::Notification::Hsrp::Hsrp()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "hsrp"; yang_parent_name = "notification";
}

Snmp::Notification::Hsrp::~Hsrp()
{
}

bool Snmp::Notification::Hsrp::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Hsrp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Hsrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Hsrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Hsrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Ospf::Ospf()
    :
    error(std::make_shared<Snmp::Notification::Ospf::Error>())
	,lsa(std::make_shared<Snmp::Notification::Ospf::Lsa>())
	,retransmit(std::make_shared<Snmp::Notification::Ospf::Retransmit>())
	,state_change(std::make_shared<Snmp::Notification::Ospf::StateChange>())
{
    error->parent = this;

    lsa->parent = this;

    retransmit->parent = this;

    state_change->parent = this;

    yang_name = "ospf"; yang_parent_name = "notification";
}

Snmp::Notification::Ospf::~Ospf()
{
}

bool Snmp::Notification::Ospf::has_data() const
{
    return (error !=  nullptr && error->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Snmp::Notification::Ospf::has_operation() const
{
    return is_set(operation)
	|| (error !=  nullptr && error->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Snmp::Notification::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-cfg:ospf";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Snmp::Notification::Ospf::Error>();
        }
        return error;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Snmp::Notification::Ospf::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Snmp::Notification::Ospf::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Snmp::Notification::Ospf::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error != nullptr)
    {
        children["error"] = error;
    }

    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Snmp::Notification::Ospf::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Notification::Ospf::Lsa::Lsa()
    :
    max_age_lsa{YType::empty, "max-age-lsa"},
    originate_lsa{YType::empty, "originate-lsa"}
{
    yang_name = "lsa"; yang_parent_name = "ospf";
}

Snmp::Notification::Ospf::Lsa::~Lsa()
{
}

bool Snmp::Notification::Ospf::Lsa::has_data() const
{
    return max_age_lsa.is_set
	|| originate_lsa.is_set;
}

bool Snmp::Notification::Ospf::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(max_age_lsa.operation)
	|| is_set(originate_lsa.operation);
}

std::string Snmp::Notification::Ospf::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospf::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_age_lsa.is_set || is_set(max_age_lsa.operation)) leaf_name_data.push_back(max_age_lsa.get_name_leafdata());
    if (originate_lsa.is_set || is_set(originate_lsa.operation)) leaf_name_data.push_back(originate_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-age-lsa")
    {
        max_age_lsa = value;
    }
    if(value_path == "originate-lsa")
    {
        originate_lsa = value;
    }
}

Snmp::Notification::Ospf::StateChange::StateChange()
    :
    interface{YType::empty, "interface"},
    neighbor{YType::empty, "neighbor"},
    virtual_interface{YType::empty, "virtual-interface"},
    virtual_neighbor{YType::empty, "virtual-neighbor"}
{
    yang_name = "state-change"; yang_parent_name = "ospf";
}

Snmp::Notification::Ospf::StateChange::~StateChange()
{
}

bool Snmp::Notification::Ospf::StateChange::has_data() const
{
    return interface.is_set
	|| neighbor.is_set
	|| virtual_interface.is_set
	|| virtual_neighbor.is_set;
}

bool Snmp::Notification::Ospf::StateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(neighbor.operation)
	|| is_set(virtual_interface.operation)
	|| is_set(virtual_neighbor.operation);
}

std::string Snmp::Notification::Ospf::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospf::StateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (virtual_neighbor.is_set || is_set(virtual_neighbor.operation)) leaf_name_data.push_back(virtual_neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::StateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor = value;
    }
}

Snmp::Notification::Ospf::Retransmit::Retransmit()
    :
    packet{YType::empty, "packet"},
    virtual_packet{YType::empty, "virtual-packet"}
{
    yang_name = "retransmit"; yang_parent_name = "ospf";
}

Snmp::Notification::Ospf::Retransmit::~Retransmit()
{
}

bool Snmp::Notification::Ospf::Retransmit::has_data() const
{
    return packet.is_set
	|| virtual_packet.is_set;
}

bool Snmp::Notification::Ospf::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(packet.operation)
	|| is_set(virtual_packet.operation);
}

std::string Snmp::Notification::Ospf::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospf::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet.is_set || is_set(packet.operation)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (virtual_packet.is_set || is_set(virtual_packet.operation)) leaf_name_data.push_back(virtual_packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packet")
    {
        packet = value;
    }
    if(value_path == "virtual-packet")
    {
        virtual_packet = value;
    }
}

Snmp::Notification::Ospf::Error::Error()
    :
    authentication_failure{YType::empty, "authentication-failure"},
    bad_packet{YType::empty, "bad-packet"},
    config_error{YType::empty, "config-error"},
    virtual_authentication_failure{YType::empty, "virtual-authentication-failure"},
    virtual_bad_packet{YType::empty, "virtual-bad-packet"},
    virtual_config_error{YType::empty, "virtual-config-error"}
{
    yang_name = "error"; yang_parent_name = "ospf";
}

Snmp::Notification::Ospf::Error::~Error()
{
}

bool Snmp::Notification::Ospf::Error::has_data() const
{
    return authentication_failure.is_set
	|| bad_packet.is_set
	|| config_error.is_set
	|| virtual_authentication_failure.is_set
	|| virtual_bad_packet.is_set
	|| virtual_config_error.is_set;
}

bool Snmp::Notification::Ospf::Error::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_failure.operation)
	|| is_set(bad_packet.operation)
	|| is_set(config_error.operation)
	|| is_set(virtual_authentication_failure.operation)
	|| is_set(virtual_bad_packet.operation)
	|| is_set(virtual_config_error.operation);
}

std::string Snmp::Notification::Ospf::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospf::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_failure.is_set || is_set(authentication_failure.operation)) leaf_name_data.push_back(authentication_failure.get_name_leafdata());
    if (bad_packet.is_set || is_set(bad_packet.operation)) leaf_name_data.push_back(bad_packet.get_name_leafdata());
    if (config_error.is_set || is_set(config_error.operation)) leaf_name_data.push_back(config_error.get_name_leafdata());
    if (virtual_authentication_failure.is_set || is_set(virtual_authentication_failure.operation)) leaf_name_data.push_back(virtual_authentication_failure.get_name_leafdata());
    if (virtual_bad_packet.is_set || is_set(virtual_bad_packet.operation)) leaf_name_data.push_back(virtual_bad_packet.get_name_leafdata());
    if (virtual_config_error.is_set || is_set(virtual_config_error.operation)) leaf_name_data.push_back(virtual_config_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-failure")
    {
        authentication_failure = value;
    }
    if(value_path == "bad-packet")
    {
        bad_packet = value;
    }
    if(value_path == "config-error")
    {
        config_error = value;
    }
    if(value_path == "virtual-authentication-failure")
    {
        virtual_authentication_failure = value;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet = value;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error = value;
    }
}

Snmp::Notification::Vrrp::Vrrp()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "vrrp"; yang_parent_name = "notification";
}

Snmp::Notification::Vrrp::~Vrrp()
{
}

bool Snmp::Notification::Vrrp::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Vrrp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Vrrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Ospfv3::Ospfv3()
    :
    error(std::make_shared<Snmp::Notification::Ospfv3::Error>())
	,state_change(std::make_shared<Snmp::Notification::Ospfv3::StateChange>())
{
    error->parent = this;

    state_change->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "notification";
}

Snmp::Notification::Ospfv3::~Ospfv3()
{
}

bool Snmp::Notification::Ospfv3::has_data() const
{
    return (error !=  nullptr && error->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Snmp::Notification::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| (error !=  nullptr && error->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Snmp::Notification::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error != nullptr)
    {
        children["error"] = error;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Snmp::Notification::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Notification::Ospfv3::Error::Error()
    :
    bad_packet{YType::empty, "bad-packet"},
    config_error{YType::empty, "config-error"},
    virtual_bad_packet{YType::empty, "virtual-bad-packet"},
    virtual_config_error{YType::empty, "virtual-config-error"}
{
    yang_name = "error"; yang_parent_name = "ospfv3";
}

Snmp::Notification::Ospfv3::Error::~Error()
{
}

bool Snmp::Notification::Ospfv3::Error::has_data() const
{
    return bad_packet.is_set
	|| config_error.is_set
	|| virtual_bad_packet.is_set
	|| virtual_config_error.is_set;
}

bool Snmp::Notification::Ospfv3::Error::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_packet.operation)
	|| is_set(config_error.operation)
	|| is_set(virtual_bad_packet.operation)
	|| is_set(virtual_config_error.operation);
}

std::string Snmp::Notification::Ospfv3::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospfv3::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_packet.is_set || is_set(bad_packet.operation)) leaf_name_data.push_back(bad_packet.get_name_leafdata());
    if (config_error.is_set || is_set(config_error.operation)) leaf_name_data.push_back(config_error.get_name_leafdata());
    if (virtual_bad_packet.is_set || is_set(virtual_bad_packet.operation)) leaf_name_data.push_back(virtual_bad_packet.get_name_leafdata());
    if (virtual_config_error.is_set || is_set(virtual_config_error.operation)) leaf_name_data.push_back(virtual_config_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospfv3::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospfv3::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospfv3::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-packet")
    {
        bad_packet = value;
    }
    if(value_path == "config-error")
    {
        config_error = value;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet = value;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error = value;
    }
}

Snmp::Notification::Ospfv3::StateChange::StateChange()
    :
    interface{YType::empty, "interface"},
    neighbor{YType::empty, "neighbor"},
    nssa_translator{YType::empty, "nssa-translator"},
    restart{YType::empty, "restart"},
    restart_helper{YType::empty, "restart-helper"},
    restart_virtual_helper{YType::empty, "restart-virtual-helper"},
    virtual_interface{YType::empty, "virtual-interface"},
    virtual_neighbor{YType::empty, "virtual-neighbor"}
{
    yang_name = "state-change"; yang_parent_name = "ospfv3";
}

Snmp::Notification::Ospfv3::StateChange::~StateChange()
{
}

bool Snmp::Notification::Ospfv3::StateChange::has_data() const
{
    return interface.is_set
	|| neighbor.is_set
	|| nssa_translator.is_set
	|| restart.is_set
	|| restart_helper.is_set
	|| restart_virtual_helper.is_set
	|| virtual_interface.is_set
	|| virtual_neighbor.is_set;
}

bool Snmp::Notification::Ospfv3::StateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(neighbor.operation)
	|| is_set(nssa_translator.operation)
	|| is_set(restart.operation)
	|| is_set(restart_helper.operation)
	|| is_set(restart_virtual_helper.operation)
	|| is_set(virtual_interface.operation)
	|| is_set(virtual_neighbor.operation);
}

std::string Snmp::Notification::Ospfv3::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Ospfv3::StateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (nssa_translator.is_set || is_set(nssa_translator.operation)) leaf_name_data.push_back(nssa_translator.get_name_leafdata());
    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_helper.is_set || is_set(restart_helper.operation)) leaf_name_data.push_back(restart_helper.get_name_leafdata());
    if (restart_virtual_helper.is_set || is_set(restart_virtual_helper.operation)) leaf_name_data.push_back(restart_virtual_helper.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (virtual_neighbor.is_set || is_set(virtual_neighbor.operation)) leaf_name_data.push_back(virtual_neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Ospfv3::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospfv3::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospfv3::StateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "nssa-translator")
    {
        nssa_translator = value;
    }
    if(value_path == "restart")
    {
        restart = value;
    }
    if(value_path == "restart-helper")
    {
        restart_helper = value;
    }
    if(value_path == "restart-virtual-helper")
    {
        restart_virtual_helper = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor = value;
    }
}

Snmp::Notification::MplsLdp::MplsLdp()
    :
    init_session_threshold_exceeded{YType::empty, "init-session-threshold-exceeded"},
    session_down{YType::empty, "session-down"},
    session_up{YType::empty, "session-up"}
{
    yang_name = "mpls-ldp"; yang_parent_name = "notification";
}

Snmp::Notification::MplsLdp::~MplsLdp()
{
}

bool Snmp::Notification::MplsLdp::has_data() const
{
    return init_session_threshold_exceeded.is_set
	|| session_down.is_set
	|| session_up.is_set;
}

bool Snmp::Notification::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| is_set(init_session_threshold_exceeded.operation)
	|| is_set(session_down.operation)
	|| is_set(session_up.operation);
}

std::string Snmp::Notification::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_session_threshold_exceeded.is_set || is_set(init_session_threshold_exceeded.operation)) leaf_name_data.push_back(init_session_threshold_exceeded.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.operation)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsLdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-session-threshold-exceeded")
    {
        init_session_threshold_exceeded = value;
    }
    if(value_path == "session-down")
    {
        session_down = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

Snmp::Notification::MplsTeP2Mp::MplsTeP2Mp()
    :
    down{YType::empty, "down"},
    up{YType::empty, "up"}
{
    yang_name = "mpls-te-p2mp"; yang_parent_name = "notification";
}

Snmp::Notification::MplsTeP2Mp::~MplsTeP2Mp()
{
}

bool Snmp::Notification::MplsTeP2Mp::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Snmp::Notification::MplsTeP2Mp::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Snmp::Notification::MplsTeP2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-p2mp";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::MplsTeP2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::MplsTeP2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsTeP2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsTeP2Mp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Snmp::Notification::MplsTe::MplsTe()
    :
    cisco{YType::empty, "cisco"},
    down{YType::empty, "down"},
    reoptimize{YType::empty, "reoptimize"},
    reroute{YType::empty, "reroute"},
    up{YType::empty, "up"}
    	,
    cisco_extension(std::make_shared<Snmp::Notification::MplsTe::CiscoExtension>())
{
    cisco_extension->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "notification";
}

Snmp::Notification::MplsTe::~MplsTe()
{
}

bool Snmp::Notification::MplsTe::has_data() const
{
    return cisco.is_set
	|| down.is_set
	|| reoptimize.is_set
	|| reroute.is_set
	|| up.is_set
	|| (cisco_extension !=  nullptr && cisco_extension->has_data());
}

bool Snmp::Notification::MplsTe::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(down.operation)
	|| is_set(reoptimize.operation)
	|| is_set(reroute.operation)
	|| is_set(up.operation)
	|| (cisco_extension !=  nullptr && cisco_extension->has_operation());
}

std::string Snmp::Notification::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::MplsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (reoptimize.is_set || is_set(reoptimize.operation)) leaf_name_data.push_back(reoptimize.get_name_leafdata());
    if (reroute.is_set || is_set(reroute.operation)) leaf_name_data.push_back(reroute.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_extension != nullptr)
    {
        children["cisco-extension"] = cisco_extension;
    }

    return children;
}

void Snmp::Notification::MplsTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "reoptimize")
    {
        reoptimize = value;
    }
    if(value_path == "reroute")
    {
        reroute = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Snmp::Notification::MplsTe::CiscoExtension::CiscoExtension()
    :
    bringup_fail{YType::empty, "bringup-fail"},
    insufficient_bandwidth{YType::empty, "insufficient-bandwidth"},
    preempt{YType::empty, "preempt"},
    re_route_pending{YType::empty, "re-route-pending"},
    re_route_pending_clear{YType::empty, "re-route-pending-clear"}
{
    yang_name = "cisco-extension"; yang_parent_name = "mpls-te";
}

Snmp::Notification::MplsTe::CiscoExtension::~CiscoExtension()
{
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_data() const
{
    return bringup_fail.is_set
	|| insufficient_bandwidth.is_set
	|| preempt.is_set
	|| re_route_pending.is_set
	|| re_route_pending_clear.is_set;
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_operation() const
{
    return is_set(operation)
	|| is_set(bringup_fail.operation)
	|| is_set(insufficient_bandwidth.operation)
	|| is_set(preempt.operation)
	|| is_set(re_route_pending.operation)
	|| is_set(re_route_pending_clear.operation);
}

std::string Snmp::Notification::MplsTe::CiscoExtension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extension";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::MplsTe::CiscoExtension::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bringup_fail.is_set || is_set(bringup_fail.operation)) leaf_name_data.push_back(bringup_fail.get_name_leafdata());
    if (insufficient_bandwidth.is_set || is_set(insufficient_bandwidth.operation)) leaf_name_data.push_back(insufficient_bandwidth.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (re_route_pending.is_set || is_set(re_route_pending.operation)) leaf_name_data.push_back(re_route_pending.get_name_leafdata());
    if (re_route_pending_clear.is_set || is_set(re_route_pending_clear.operation)) leaf_name_data.push_back(re_route_pending_clear.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::MplsTe::CiscoExtension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsTe::CiscoExtension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsTe::CiscoExtension::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bringup-fail")
    {
        bringup_fail = value;
    }
    if(value_path == "insufficient-bandwidth")
    {
        insufficient_bandwidth = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "re-route-pending")
    {
        re_route_pending = value;
    }
    if(value_path == "re-route-pending-clear")
    {
        re_route_pending_clear = value;
    }
}

Snmp::Notification::MplsFrr::MplsFrr()
    :
    enable{YType::empty, "enable"},
    protected_{YType::empty, "protected"},
    unprotected{YType::empty, "unprotected"}
{
    yang_name = "mpls-frr"; yang_parent_name = "notification";
}

Snmp::Notification::MplsFrr::~MplsFrr()
{
}

bool Snmp::Notification::MplsFrr::has_data() const
{
    return enable.is_set
	|| protected_.is_set
	|| unprotected.is_set;
}

bool Snmp::Notification::MplsFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(protected_.operation)
	|| is_set(unprotected.operation);
}

std::string Snmp::Notification::MplsFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::MplsFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (unprotected.is_set || is_set(unprotected.operation)) leaf_name_data.push_back(unprotected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::MplsFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
    if(value_path == "unprotected")
    {
        unprotected = value;
    }
}

Snmp::Notification::MplsL3Vpn::MplsL3Vpn()
    :
    enable{YType::empty, "enable"},
    max_threshold_cleared{YType::empty, "max-threshold-cleared"},
    max_threshold_exceeded{YType::empty, "max-threshold-exceeded"},
    max_threshold_reissue_notification_time{YType::int32, "max-threshold-reissue-notification-time"},
    mid_threshold_exceeded{YType::empty, "mid-threshold-exceeded"},
    vrf_down{YType::empty, "vrf-down"},
    vrf_up{YType::empty, "vrf-up"}
{
    yang_name = "mpls-l3vpn"; yang_parent_name = "notification";
}

Snmp::Notification::MplsL3Vpn::~MplsL3Vpn()
{
}

bool Snmp::Notification::MplsL3Vpn::has_data() const
{
    return enable.is_set
	|| max_threshold_cleared.is_set
	|| max_threshold_exceeded.is_set
	|| max_threshold_reissue_notification_time.is_set
	|| mid_threshold_exceeded.is_set
	|| vrf_down.is_set
	|| vrf_up.is_set;
}

bool Snmp::Notification::MplsL3Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(max_threshold_cleared.operation)
	|| is_set(max_threshold_exceeded.operation)
	|| is_set(max_threshold_reissue_notification_time.operation)
	|| is_set(mid_threshold_exceeded.operation)
	|| is_set(vrf_down.operation)
	|| is_set(vrf_up.operation);
}

std::string Snmp::Notification::MplsL3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-cfg:mpls-l3vpn";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::MplsL3Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_threshold_cleared.is_set || is_set(max_threshold_cleared.operation)) leaf_name_data.push_back(max_threshold_cleared.get_name_leafdata());
    if (max_threshold_exceeded.is_set || is_set(max_threshold_exceeded.operation)) leaf_name_data.push_back(max_threshold_exceeded.get_name_leafdata());
    if (max_threshold_reissue_notification_time.is_set || is_set(max_threshold_reissue_notification_time.operation)) leaf_name_data.push_back(max_threshold_reissue_notification_time.get_name_leafdata());
    if (mid_threshold_exceeded.is_set || is_set(mid_threshold_exceeded.operation)) leaf_name_data.push_back(mid_threshold_exceeded.get_name_leafdata());
    if (vrf_down.is_set || is_set(vrf_down.operation)) leaf_name_data.push_back(vrf_down.get_name_leafdata());
    if (vrf_up.is_set || is_set(vrf_up.operation)) leaf_name_data.push_back(vrf_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::MplsL3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsL3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsL3Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "max-threshold-cleared")
    {
        max_threshold_cleared = value;
    }
    if(value_path == "max-threshold-exceeded")
    {
        max_threshold_exceeded = value;
    }
    if(value_path == "max-threshold-reissue-notification-time")
    {
        max_threshold_reissue_notification_time = value;
    }
    if(value_path == "mid-threshold-exceeded")
    {
        mid_threshold_exceeded = value;
    }
    if(value_path == "vrf-down")
    {
        vrf_down = value;
    }
    if(value_path == "vrf-up")
    {
        vrf_up = value;
    }
}

Snmp::Notification::Otn::Otn()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "otn"; yang_parent_name = "notification";
}

Snmp::Notification::Otn::~Otn()
{
}

bool Snmp::Notification::Otn::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-otnifmib-cfg:otn";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Sensor::Sensor()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "sensor"; yang_parent_name = "notification";
}

Snmp::Notification::Sensor::~Sensor()
{
}

bool Snmp::Notification::Sensor::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Entity_::Entity_()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "entity"; yang_parent_name = "notification";
}

Snmp::Notification::Entity_::~Entity_()
{
}

bool Snmp::Notification::Entity_::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Entity_::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Entity_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Entity_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Entity_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Entity_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Entity_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::EntityState::EntityState()
    :
    oper_status{YType::empty, "oper-status"},
    switchover{YType::empty, "switchover"}
{
    yang_name = "entity-state"; yang_parent_name = "notification";
}

Snmp::Notification::EntityState::~EntityState()
{
}

bool Snmp::Notification::EntityState::has_data() const
{
    return oper_status.is_set
	|| switchover.is_set;
}

bool Snmp::Notification::EntityState::has_operation() const
{
    return is_set(operation)
	|| is_set(oper_status.operation)
	|| is_set(switchover.operation);
}

std::string Snmp::Notification::EntityState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entstatemib-cfg:entity-state";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::EntityState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.operation)) leaf_name_data.push_back(switchover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::EntityState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::EntityState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::EntityState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "switchover")
    {
        switchover = value;
    }
}

Snmp::Notification::FruControl::FruControl()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "fru-control"; yang_parent_name = "notification";
}

Snmp::Notification::FruControl::~FruControl()
{
}

bool Snmp::Notification::FruControl::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::FruControl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::FruControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-frucontrolmib-cfg:fru-control";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::FruControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::FruControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::FruControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::FruControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Rf::Rf()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "rf"; yang_parent_name = "notification";
}

Snmp::Notification::Rf::~Rf()
{
}

bool Snmp::Notification::Rf::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Rf::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Rf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-mib-rfmib-cfg:rf";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Rf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Rf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Rf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Rf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Notification::Syslog::Syslog()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "syslog"; yang_parent_name = "notification";
}

Snmp::Notification::Syslog::~Syslog()
{
}

bool Snmp::Notification::Syslog::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Snmp::Notification::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-syslogmib-cfg:syslog";

    return path_buffer.str();

}

const EntityPath Snmp::Notification::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Notification::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Snmp::Correlator::Correlator()
    :
    buffer_size{YType::uint32, "buffer-size"}
    	,
    rule_sets(std::make_shared<Snmp::Correlator::RuleSets>())
	,rules(std::make_shared<Snmp::Correlator::Rules>())
{
    rule_sets->parent = this;

    rules->parent = this;

    yang_name = "correlator"; yang_parent_name = "snmp";
}

Snmp::Correlator::~Correlator()
{
}

bool Snmp::Correlator::has_data() const
{
    return buffer_size.is_set
	|| (rule_sets !=  nullptr && rule_sets->has_data())
	|| (rules !=  nullptr && rules->has_data());
}

bool Snmp::Correlator::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| (rule_sets !=  nullptr && rule_sets->has_operation())
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Snmp::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "correlator";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-sets")
    {
        if(rule_sets == nullptr)
        {
            rule_sets = std::make_shared<Snmp::Correlator::RuleSets>();
        }
        return rule_sets;
    }

    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Snmp::Correlator::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rule_sets != nullptr)
    {
        children["rule-sets"] = rule_sets;
    }

    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Snmp::Correlator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
}

Snmp::Correlator::Rules::Rules()
{
    yang_name = "rules"; yang_parent_name = "correlator";
}

Snmp::Correlator::Rules::~Rules()
{
}

bool Snmp::Correlator::Rules::has_data() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        for(auto const & c : rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule>();
        c->parent = this;
        rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Rules::Rule::Rule()
    :
    name{YType::str, "name"}
    	,
    applied_to(std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo>())
	,non_stateful(nullptr) // presence node
{
    applied_to->parent = this;

    yang_name = "rule"; yang_parent_name = "rules";
}

Snmp::Correlator::Rules::Rule::~Rule()
{
}

bool Snmp::Correlator::Rules::Rule::has_data() const
{
    return name.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (non_stateful !=  nullptr && non_stateful->has_data());
}

bool Snmp::Correlator::Rules::Rule::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (non_stateful !=  nullptr && non_stateful->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/rules/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "non-stateful")
    {
        if(non_stateful == nullptr)
        {
            non_stateful = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful>();
        }
        return non_stateful;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    if(non_stateful != nullptr)
    {
        children["non-stateful"] = non_stateful;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::NonStateful()
    :
    timeout{YType::uint32, "timeout"}
    	,
    non_root_causes(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses>())
	,root_causes(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses>())
{
    non_root_causes->parent = this;

    root_causes->parent = this;

    yang_name = "non-stateful"; yang_parent_name = "rule";
}

Snmp::Correlator::Rules::Rule::NonStateful::~NonStateful()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::has_data() const
{
    return timeout.is_set
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (root_causes !=  nullptr && root_causes->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation)
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (root_causes !=  nullptr && root_causes->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-stateful";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonStateful' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "root-causes")
    {
        if(root_causes == nullptr)
        {
            root_causes = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses>();
        }
        return root_causes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_root_causes != nullptr)
    {
        children["non-root-causes"] = non_root_causes;
    }

    if(root_causes != nullptr)
    {
        children["root-causes"] = root_causes;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCauses()
{
    yang_name = "root-causes"; yang_parent_name = "non-stateful";
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::~RootCauses()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::has_data() const
{
    for (std::size_t index=0; index<root_cause.size(); index++)
    {
        if(root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::has_operation() const
{
    for (std::size_t index=0; index<root_cause.size(); index++)
    {
        if(root_cause[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-causes";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RootCauses' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root-cause")
    {
        for(auto const & c : root_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause>();
        c->parent = this;
        root_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : root_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::RootCause()
    :
    oid{YType::str, "oid"},
    created{YType::empty, "created"}
    	,
    var_binds(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds>())
{
    var_binds->parent = this;

    yang_name = "root-cause"; yang_parent_name = "root-causes";
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::~RootCause()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::has_data() const
{
    return oid.is_set
	|| created.is_set
	|| (var_binds !=  nullptr && var_binds->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| is_set(created.operation)
	|| (var_binds !=  nullptr && var_binds->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause" <<"[oid='" <<oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RootCause' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (created.is_set || is_set(created.operation)) leaf_name_data.push_back(created.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-binds")
    {
        if(var_binds == nullptr)
        {
            var_binds = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds>();
        }
        return var_binds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(var_binds != nullptr)
    {
        children["var-binds"] = var_binds;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "created")
    {
        created = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBinds()
{
    yang_name = "var-binds"; yang_parent_name = "root-cause";
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::~VarBinds()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-binds";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBinds' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::VarBind()
    :
    oid{YType::str, "oid"}
    	,
    match(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match>())
{
    match->parent = this;

    yang_name = "var-bind"; yang_parent_name = "var-binds";
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::has_data() const
{
    return oid.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind" <<"[oid='" <<oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBind' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::Match()
    :
    index_{YType::str, "index"},
    value_{YType::str, "value"}
{
    yang_name = "match"; yang_parent_name = "var-bind";
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::~Match()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::has_data() const
{
    return index_.is_set
	|| value_.is_set;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(value_.operation);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCauses()
{
    yang_name = "non-root-causes"; yang_parent_name = "non-stateful";
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::~NonRootCauses()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_data() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootCauses' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        for(auto const & c : non_root_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause>();
        c->parent = this;
        non_root_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_root_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::NonRootCause()
    :
    oid{YType::str, "oid"},
    created{YType::empty, "created"}
    	,
    var_binds(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds>())
{
    var_binds->parent = this;

    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes";
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_data() const
{
    return oid.is_set
	|| created.is_set
	|| (var_binds !=  nullptr && var_binds->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| is_set(created.operation)
	|| (var_binds !=  nullptr && var_binds->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause" <<"[oid='" <<oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootCause' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (created.is_set || is_set(created.operation)) leaf_name_data.push_back(created.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-binds")
    {
        if(var_binds == nullptr)
        {
            var_binds = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds>();
        }
        return var_binds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(var_binds != nullptr)
    {
        children["var-binds"] = var_binds;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "created")
    {
        created = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBinds()
{
    yang_name = "var-binds"; yang_parent_name = "non-root-cause";
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::~VarBinds()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-binds";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBinds' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::VarBind()
    :
    oid{YType::str, "oid"}
    	,
    match(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match>())
{
    match->parent = this;

    yang_name = "var-bind"; yang_parent_name = "var-binds";
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::has_data() const
{
    return oid.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind" <<"[oid='" <<oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBind' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::Match()
    :
    index_{YType::str, "index"},
    value_{YType::str, "value"}
{
    yang_name = "match"; yang_parent_name = "var-bind";
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::~Match()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_data() const
{
    return index_.is_set
	|| value_.is_set;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(value_.operation);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Snmp::Correlator::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    hosts(std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts>())
{
    hosts->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule";
}

Snmp::Correlator::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_data() const
{
    return all.is_set
	|| (hosts !=  nullptr && hosts->has_data());
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::AppliedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AppliedTo' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "applied-to";
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::~Hosts()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hosts' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::~Host()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_data() const
{
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(port.operation);
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[ip-address='" <<ip_address <<"']" <<"[port='" <<port <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Snmp::Correlator::RuleSets::RuleSets()
{
    yang_name = "rule-sets"; yang_parent_name = "correlator";
}

Snmp::Correlator::RuleSets::~RuleSets()
{
}

bool Snmp::Correlator::RuleSets::has_data() const
{
    for (std::size_t index=0; index<rule_set.size(); index++)
    {
        if(rule_set[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::has_operation() const
{
    for (std::size_t index=0; index<rule_set.size(); index++)
    {
        if(rule_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::RuleSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-sets";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set")
    {
        for(auto const & c : rule_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSets::RuleSet>();
        c->parent = this;
        rule_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSets::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::RuleSets::RuleSet::RuleSet()
    :
    name{YType::str, "name"}
    	,
    applied_to(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo>())
	,rulenames(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames>())
{
    applied_to->parent = this;

    rulenames->parent = this;

    yang_name = "rule-set"; yang_parent_name = "rule-sets";
}

Snmp::Correlator::RuleSets::RuleSet::~RuleSet()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::has_data() const
{
    return name.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (rulenames !=  nullptr && rulenames->has_data());
}

bool Snmp::Correlator::RuleSets::RuleSet::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (rulenames !=  nullptr && rulenames->has_operation());
}

std::string Snmp::Correlator::RuleSets::RuleSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::RuleSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/rule-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "rulenames")
    {
        if(rulenames == nullptr)
        {
            rulenames = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames>();
        }
        return rulenames;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    if(rulenames != nullptr)
    {
        children["rulenames"] = rulenames;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulenames()
{
    yang_name = "rulenames"; yang_parent_name = "rule-set";
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::~Rulenames()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_data() const
{
    for (std::size_t index=0; index<rulename.size(); index++)
    {
        if(rulename[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_operation() const
{
    for (std::size_t index=0; index<rulename.size(); index++)
    {
        if(rulename[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulenames";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rulenames' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulename")
    {
        for(auto const & c : rulename)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename>();
        c->parent = this;
        rulename.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rulename)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::Rulename()
    :
    rulename{YType::str, "rulename"}
{
    yang_name = "rulename"; yang_parent_name = "rulenames";
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::~Rulename()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_data() const
{
    return rulename.is_set;
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_operation() const
{
    return is_set(operation)
	|| is_set(rulename.operation);
}

std::string Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulename" <<"[rulename='" <<rulename <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rulename' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulename.is_set || is_set(rulename.operation)) leaf_name_data.push_back(rulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rulename")
    {
        rulename = value;
    }
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    hosts(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts>())
{
    hosts->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule-set";
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::~AppliedTo()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_data() const
{
    return all.is_set
	|| (hosts !=  nullptr && hosts->has_data());
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AppliedTo' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "applied-to";
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::~Hosts()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hosts' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::~Host()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_data() const
{
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(port.operation);
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[ip-address='" <<ip_address <<"']" <<"[port='" <<port <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Snmp::BulkStats::BulkStats()
    :
    memory{YType::uint32, "memory"}
    	,
    objects(std::make_shared<Snmp::BulkStats::Objects>())
	,schemas(std::make_shared<Snmp::BulkStats::Schemas>())
	,transfers(std::make_shared<Snmp::BulkStats::Transfers>())
{
    objects->parent = this;

    schemas->parent = this;

    transfers->parent = this;

    yang_name = "bulk-stats"; yang_parent_name = "snmp";
}

Snmp::BulkStats::~BulkStats()
{
}

bool Snmp::BulkStats::has_data() const
{
    return memory.is_set
	|| (objects !=  nullptr && objects->has_data())
	|| (schemas !=  nullptr && schemas->has_data())
	|| (transfers !=  nullptr && transfers->has_data());
}

bool Snmp::BulkStats::has_operation() const
{
    return is_set(operation)
	|| is_set(memory.operation)
	|| (objects !=  nullptr && objects->has_operation())
	|| (schemas !=  nullptr && schemas->has_operation())
	|| (transfers !=  nullptr && transfers->has_operation());
}

std::string Snmp::BulkStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.operation)) leaf_name_data.push_back(memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<Snmp::BulkStats::Objects>();
        }
        return objects;
    }

    if(child_yang_name == "schemas")
    {
        if(schemas == nullptr)
        {
            schemas = std::make_shared<Snmp::BulkStats::Schemas>();
        }
        return schemas;
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(objects != nullptr)
    {
        children["objects"] = objects;
    }

    if(schemas != nullptr)
    {
        children["schemas"] = schemas;
    }

    if(transfers != nullptr)
    {
        children["transfers"] = transfers;
    }

    return children;
}

void Snmp::BulkStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory")
    {
        memory = value;
    }
}

Snmp::BulkStats::Schemas::Schemas()
{
    yang_name = "schemas"; yang_parent_name = "bulk-stats";
}

Snmp::BulkStats::Schemas::~Schemas()
{
}

bool Snmp::BulkStats::Schemas::has_data() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Schemas::has_operation() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::BulkStats::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Schemas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schema")
    {
        for(auto const & c : schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Schemas::Schema>();
        c->parent = this;
        schema.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Schemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schema)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Schemas::set_value(const std::string & value_path, std::string value)
{
}

Snmp::BulkStats::Schemas::Schema::Schema()
    :
    schema_name{YType::str, "schema-name"},
    poll_interval{YType::uint32, "poll-interval"},
    schema_object_list{YType::str, "schema-object-list"},
    type{YType::empty, "type"}
    	,
    instance(nullptr) // presence node
{
    yang_name = "schema"; yang_parent_name = "schemas";
}

Snmp::BulkStats::Schemas::Schema::~Schema()
{
}

bool Snmp::BulkStats::Schemas::Schema::has_data() const
{
    return schema_name.is_set
	|| poll_interval.is_set
	|| schema_object_list.is_set
	|| type.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool Snmp::BulkStats::Schemas::Schema::has_operation() const
{
    return is_set(operation)
	|| is_set(schema_name.operation)
	|| is_set(poll_interval.operation)
	|| is_set(schema_object_list.operation)
	|| is_set(type.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string Snmp::BulkStats::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema" <<"[schema-name='" <<schema_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Schemas::Schema::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/schemas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schema_name.is_set || is_set(schema_name.operation)) leaf_name_data.push_back(schema_name.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (schema_object_list.is_set || is_set(schema_object_list.operation)) leaf_name_data.push_back(schema_object_list.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Schemas::Schema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void Snmp::BulkStats::Schemas::Schema::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "schema-name")
    {
        schema_name = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "schema-object-list")
    {
        schema_object_list = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Snmp::BulkStats::Schemas::Schema::Instance::Instance()
    :
    end{YType::str, "end"},
    instance{YType::str, "instance"},
    max{YType::int32, "max"},
    start{YType::str, "start"},
    sub_interface{YType::boolean, "sub-interface"},
    type{YType::enumeration, "type"}
{
    yang_name = "instance"; yang_parent_name = "schema";
}

Snmp::BulkStats::Schemas::Schema::Instance::~Instance()
{
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_data() const
{
    return end.is_set
	|| instance.is_set
	|| max.is_set
	|| start.is_set
	|| sub_interface.is_set
	|| type.is_set;
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(instance.operation)
	|| is_set(max.operation)
	|| is_set(start.operation)
	|| is_set(sub_interface.operation)
	|| is_set(type.operation);
}

std::string Snmp::BulkStats::Schemas::Schema::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Schemas::Schema::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (sub_interface.is_set || is_set(sub_interface.operation)) leaf_name_data.push_back(sub_interface.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Schemas::Schema::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Schemas::Schema::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::BulkStats::Schemas::Schema::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "sub-interface")
    {
        sub_interface = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Snmp::BulkStats::Objects::Objects()
{
    yang_name = "objects"; yang_parent_name = "bulk-stats";
}

Snmp::BulkStats::Objects::~Objects()
{
}

bool Snmp::BulkStats::Objects::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::BulkStats::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Objects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Objects::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Objects::set_value(const std::string & value_path, std::string value)
{
}

Snmp::BulkStats::Objects::Object::Object()
    :
    object_list_name{YType::str, "object-list-name"},
    type{YType::empty, "type"}
    	,
    objects(std::make_shared<Snmp::BulkStats::Objects::Object::Objects_>())
{
    objects->parent = this;

    yang_name = "object"; yang_parent_name = "objects";
}

Snmp::BulkStats::Objects::Object::~Object()
{
}

bool Snmp::BulkStats::Objects::Object::has_data() const
{
    return object_list_name.is_set
	|| type.is_set
	|| (objects !=  nullptr && objects->has_data());
}

bool Snmp::BulkStats::Objects::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_list_name.operation)
	|| is_set(type.operation)
	|| (objects !=  nullptr && objects->has_operation());
}

std::string Snmp::BulkStats::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object-list-name='" <<object_list_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Objects::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/objects/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_list_name.is_set || is_set(object_list_name.operation)) leaf_name_data.push_back(object_list_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(objects != nullptr)
    {
        children["objects"] = objects;
    }

    return children;
}

void Snmp::BulkStats::Objects::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-list-name")
    {
        object_list_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Snmp::BulkStats::Objects::Object::Objects_::Objects_()
{
    yang_name = "objects"; yang_parent_name = "object";
}

Snmp::BulkStats::Objects::Object::Objects_::~Objects_()
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::BulkStats::Objects::Object::Objects_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Objects::Object::Objects_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Objects_' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::Object::Objects_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Objects::Object::Objects_::Object_>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::Object::Objects_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Objects::Object::Objects_::set_value(const std::string & value_path, std::string value)
{
}

Snmp::BulkStats::Objects::Object::Objects_::Object_::Object_()
    :
    oid{YType::str, "oid"}
{
    yang_name = "object"; yang_parent_name = "objects";
}

Snmp::BulkStats::Objects::Object::Objects_::Object_::~Object_()
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_data() const
{
    return oid.is_set;
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation);
}

std::string Snmp::BulkStats::Objects::Object::Objects_::Object_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[oid='" <<oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Objects::Object::Objects_::Object_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object_' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::Object::Objects_::Object_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::Object::Objects_::Object_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::BulkStats::Objects::Object::Objects_::Object_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
}

Snmp::BulkStats::Transfers::Transfers()
{
    yang_name = "transfers"; yang_parent_name = "bulk-stats";
}

Snmp::BulkStats::Transfers::~Transfers()
{
}

bool Snmp::BulkStats::Transfers::has_data() const
{
    for (std::size_t index=0; index<transfer.size(); index++)
    {
        if(transfer[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Transfers::has_operation() const
{
    for (std::size_t index=0; index<transfer.size(); index++)
    {
        if(transfer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::BulkStats::Transfers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfers";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Transfers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer")
    {
        for(auto const & c : transfer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Transfers::Transfer>();
        c->parent = this;
        transfer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transfer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Transfers::set_value(const std::string & value_path, std::string value)
{
}

Snmp::BulkStats::Transfers::Transfer::Transfer()
    :
    transfer_name{YType::str, "transfer-name"},
    buffer_size{YType::uint32, "buffer-size"},
    enable{YType::empty, "enable"},
    format{YType::enumeration, "format"},
    interval{YType::int32, "interval"},
    primary{YType::str, "primary"},
    retain{YType::uint32, "retain"},
    retry{YType::uint32, "retry"},
    secondary{YType::str, "secondary"},
    type{YType::empty, "type"}
    	,
    transfer_schemas(std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas>())
{
    transfer_schemas->parent = this;

    yang_name = "transfer"; yang_parent_name = "transfers";
}

Snmp::BulkStats::Transfers::Transfer::~Transfer()
{
}

bool Snmp::BulkStats::Transfers::Transfer::has_data() const
{
    return transfer_name.is_set
	|| buffer_size.is_set
	|| enable.is_set
	|| format.is_set
	|| interval.is_set
	|| primary.is_set
	|| retain.is_set
	|| retry.is_set
	|| secondary.is_set
	|| type.is_set
	|| (transfer_schemas !=  nullptr && transfer_schemas->has_data());
}

bool Snmp::BulkStats::Transfers::Transfer::has_operation() const
{
    return is_set(operation)
	|| is_set(transfer_name.operation)
	|| is_set(buffer_size.operation)
	|| is_set(enable.operation)
	|| is_set(format.operation)
	|| is_set(interval.operation)
	|| is_set(primary.operation)
	|| is_set(retain.operation)
	|| is_set(retry.operation)
	|| is_set(secondary.operation)
	|| is_set(type.operation)
	|| (transfer_schemas !=  nullptr && transfer_schemas->has_operation());
}

std::string Snmp::BulkStats::Transfers::Transfer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer" <<"[transfer-name='" <<transfer_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Transfers::Transfer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/transfers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transfer_name.is_set || is_set(transfer_name.operation)) leaf_name_data.push_back(transfer_name.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (retain.is_set || is_set(retain.operation)) leaf_name_data.push_back(retain.get_name_leafdata());
    if (retry.is_set || is_set(retry.operation)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::Transfer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::Transfer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transfer_schemas != nullptr)
    {
        children["transfer-schemas"] = transfer_schemas;
    }

    return children;
}

void Snmp::BulkStats::Transfers::Transfer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transfer-name")
    {
        transfer_name = value;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "retain")
    {
        retain = value;
    }
    if(value_path == "retry")
    {
        retry = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchemas()
{
    yang_name = "transfer-schemas"; yang_parent_name = "transfer";
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::~TransferSchemas()
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_data() const
{
    for (std::size_t index=0; index<transfer_schema.size(); index++)
    {
        if(transfer_schema[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_operation() const
{
    for (std::size_t index=0; index<transfer_schema.size(); index++)
    {
        if(transfer_schema[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer-schemas";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransferSchemas' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer-schema")
    {
        for(auto const & c : transfer_schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema>();
        c->parent = this;
        transfer_schema.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transfer_schema)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::set_value(const std::string & value_path, std::string value)
{
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::TransferSchema()
    :
    schema_name{YType::str, "schema-name"}
{
    yang_name = "transfer-schema"; yang_parent_name = "transfer-schemas";
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::~TransferSchema()
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_data() const
{
    return schema_name.is_set;
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_operation() const
{
    return is_set(operation)
	|| is_set(schema_name.operation);
}

std::string Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer-schema" <<"[schema-name='" <<schema_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransferSchema' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schema_name.is_set || is_set(schema_name.operation)) leaf_name_data.push_back(schema_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "schema-name")
    {
        schema_name = value;
    }
}

Snmp::DefaultCommunityMaps::DefaultCommunityMaps()
{
    yang_name = "default-community-maps"; yang_parent_name = "snmp";
}

Snmp::DefaultCommunityMaps::~DefaultCommunityMaps()
{
}

bool Snmp::DefaultCommunityMaps::has_data() const
{
    for (std::size_t index=0; index<default_community_map.size(); index++)
    {
        if(default_community_map[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::DefaultCommunityMaps::has_operation() const
{
    for (std::size_t index=0; index<default_community_map.size(); index++)
    {
        if(default_community_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::DefaultCommunityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community-maps";

    return path_buffer.str();

}

const EntityPath Snmp::DefaultCommunityMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::DefaultCommunityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-community-map")
    {
        for(auto const & c : default_community_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::DefaultCommunityMaps::DefaultCommunityMap>();
        c->parent = this;
        default_community_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::DefaultCommunityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_community_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::DefaultCommunityMaps::set_value(const std::string & value_path, std::string value)
{
}

Snmp::DefaultCommunityMaps::DefaultCommunityMap::DefaultCommunityMap()
    :
    community_name{YType::str, "community-name"},
    context{YType::str, "context"},
    security{YType::str, "security"},
    target_list{YType::str, "target-list"}
{
    yang_name = "default-community-map"; yang_parent_name = "default-community-maps";
}

Snmp::DefaultCommunityMaps::DefaultCommunityMap::~DefaultCommunityMap()
{
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_data() const
{
    return community_name.is_set
	|| context.is_set
	|| security.is_set
	|| target_list.is_set;
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(context.operation)
	|| is_set(security.operation)
	|| is_set(target_list.operation);
}

std::string Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community-map" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/default-community-maps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (security.is_set || is_set(security.operation)) leaf_name_data.push_back(security.get_name_leafdata());
    if (target_list.is_set || is_set(target_list.operation)) leaf_name_data.push_back(target_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::DefaultCommunityMaps::DefaultCommunityMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "security")
    {
        security = value;
    }
    if(value_path == "target-list")
    {
        target_list = value;
    }
}

Snmp::OverloadControl::OverloadControl()
    :
    drop_time{YType::uint32, "drop-time"},
    throttle_rate{YType::uint32, "throttle-rate"}
{
    yang_name = "overload-control"; yang_parent_name = "snmp";
}

Snmp::OverloadControl::~OverloadControl()
{
}

bool Snmp::OverloadControl::has_data() const
{
    return drop_time.is_set
	|| throttle_rate.is_set;
}

bool Snmp::OverloadControl::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_time.operation)
	|| is_set(throttle_rate.operation);
}

std::string Snmp::OverloadControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-control";

    return path_buffer.str();

}

const EntityPath Snmp::OverloadControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_time.is_set || is_set(drop_time.operation)) leaf_name_data.push_back(drop_time.get_name_leafdata());
    if (throttle_rate.is_set || is_set(throttle_rate.operation)) leaf_name_data.push_back(throttle_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::OverloadControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::OverloadControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::OverloadControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-time")
    {
        drop_time = value;
    }
    if(value_path == "throttle-rate")
    {
        throttle_rate = value;
    }
}

Snmp::Timeouts::Timeouts()
    :
    duplicates{YType::uint32, "duplicates"},
    in_qdrop{YType::uint32, "in-qdrop"},
    pdu_stats{YType::uint32, "pdu-stats"},
    subagent{YType::uint32, "subagent"}
{
    yang_name = "timeouts"; yang_parent_name = "snmp";
}

Snmp::Timeouts::~Timeouts()
{
}

bool Snmp::Timeouts::has_data() const
{
    return duplicates.is_set
	|| in_qdrop.is_set
	|| pdu_stats.is_set
	|| subagent.is_set;
}

bool Snmp::Timeouts::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicates.operation)
	|| is_set(in_qdrop.operation)
	|| is_set(pdu_stats.operation)
	|| is_set(subagent.operation);
}

std::string Snmp::Timeouts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeouts";

    return path_buffer.str();

}

const EntityPath Snmp::Timeouts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.operation)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (in_qdrop.is_set || is_set(in_qdrop.operation)) leaf_name_data.push_back(in_qdrop.get_name_leafdata());
    if (pdu_stats.is_set || is_set(pdu_stats.operation)) leaf_name_data.push_back(pdu_stats.get_name_leafdata());
    if (subagent.is_set || is_set(subagent.operation)) leaf_name_data.push_back(subagent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Timeouts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Timeouts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Timeouts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
    }
    if(value_path == "in-qdrop")
    {
        in_qdrop = value;
    }
    if(value_path == "pdu-stats")
    {
        pdu_stats = value;
    }
    if(value_path == "subagent")
    {
        subagent = value;
    }
}

Snmp::Users::Users()
{
    yang_name = "users"; yang_parent_name = "snmp";
}

Snmp::Users::~Users()
{
}

bool Snmp::Users::has_data() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Users::has_operation() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";

    return path_buffer.str();

}

const EntityPath Snmp::Users::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        for(auto const & c : user)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Users::User>();
        c->parent = this;
        user.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Users::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : user)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Users::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Users::User::User()
    :
    user_name{YType::str, "user-name"},
    algorithm{YType::enumeration, "algorithm"},
    authentication_password{YType::str, "authentication-password"},
    authentication_password_configured{YType::empty, "authentication-password-configured"},
    group_name{YType::str, "group-name"},
    owner{YType::enumeration, "owner"},
    port{YType::uint16, "port"},
    priv_algorithm{YType::enumeration, "priv-algorithm"},
    privacy_password{YType::str, "privacy-password"},
    privacy_password_configured{YType::empty, "privacy-password-configured"},
    remote_address{YType::str, "remote-address"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    version{YType::enumeration, "version"}
{
    yang_name = "user"; yang_parent_name = "users";
}

Snmp::Users::User::~User()
{
}

bool Snmp::Users::User::has_data() const
{
    return user_name.is_set
	|| algorithm.is_set
	|| authentication_password.is_set
	|| authentication_password_configured.is_set
	|| group_name.is_set
	|| owner.is_set
	|| port.is_set
	|| priv_algorithm.is_set
	|| privacy_password.is_set
	|| privacy_password_configured.is_set
	|| remote_address.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| version.is_set;
}

bool Snmp::Users::User::has_operation() const
{
    return is_set(operation)
	|| is_set(user_name.operation)
	|| is_set(algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(authentication_password_configured.operation)
	|| is_set(group_name.operation)
	|| is_set(owner.operation)
	|| is_set(port.operation)
	|| is_set(priv_algorithm.operation)
	|| is_set(privacy_password.operation)
	|| is_set(privacy_password_configured.operation)
	|| is_set(remote_address.operation)
	|| is_set(v4_access_list.operation)
	|| is_set(v4acl_type.operation)
	|| is_set(v6_access_list.operation)
	|| is_set(v6acl_type.operation)
	|| is_set(version.operation);
}

std::string Snmp::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user" <<"[user-name='" <<user_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Users::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/users/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.operation)) leaf_name_data.push_back(user_name.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (authentication_password_configured.is_set || is_set(authentication_password_configured.operation)) leaf_name_data.push_back(authentication_password_configured.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (priv_algorithm.is_set || is_set(priv_algorithm.operation)) leaf_name_data.push_back(priv_algorithm.get_name_leafdata());
    if (privacy_password.is_set || is_set(privacy_password.operation)) leaf_name_data.push_back(privacy_password.get_name_leafdata());
    if (privacy_password_configured.is_set || is_set(privacy_password_configured.operation)) leaf_name_data.push_back(privacy_password_configured.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.operation)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.operation)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.operation)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.operation)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Users::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-name")
    {
        user_name = value;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "authentication-password-configured")
    {
        authentication_password_configured = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "priv-algorithm")
    {
        priv_algorithm = value;
    }
    if(value_path == "privacy-password")
    {
        privacy_password = value;
    }
    if(value_path == "privacy-password-configured")
    {
        privacy_password_configured = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "snmp";
}

Snmp::Vrfs::~Vrfs()
{
}

bool Snmp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Snmp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    context_mappings(std::make_shared<Snmp::Vrfs::Vrf::ContextMappings>())
	,contexts(std::make_shared<Snmp::Vrfs::Vrf::Contexts>())
	,trap_hosts(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts>())
{
    context_mappings->parent = this;

    contexts->parent = this;

    trap_hosts->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Snmp::Vrfs::Vrf::~Vrf()
{
}

bool Snmp::Vrfs::Vrf::has_data() const
{
    return name.is_set
	|| (context_mappings !=  nullptr && context_mappings->has_data())
	|| (contexts !=  nullptr && contexts->has_data())
	|| (trap_hosts !=  nullptr && trap_hosts->has_data());
}

bool Snmp::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (context_mappings !=  nullptr && context_mappings->has_operation())
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (trap_hosts !=  nullptr && trap_hosts->has_operation());
}

std::string Snmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mappings")
    {
        if(context_mappings == nullptr)
        {
            context_mappings = std::make_shared<Snmp::Vrfs::Vrf::ContextMappings>();
        }
        return context_mappings;
    }

    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Snmp::Vrfs::Vrf::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "trap-hosts")
    {
        if(trap_hosts == nullptr)
        {
            trap_hosts = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts>();
        }
        return trap_hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(context_mappings != nullptr)
    {
        children["context-mappings"] = context_mappings;
    }

    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(trap_hosts != nullptr)
    {
        children["trap-hosts"] = trap_hosts;
    }

    return children;
}

void Snmp::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHosts()
{
    yang_name = "trap-hosts"; yang_parent_name = "vrf";
}

Snmp::Vrfs::Vrf::TrapHosts::~TrapHosts()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_data() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_operation() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-hosts";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapHosts' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-host")
    {
        for(auto const & c : trap_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost>();
        c->parent = this;
        trap_host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::TrapHost()
    :
    ip_address{YType::str, "ip-address"}
    	,
    default_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities>())
	,encrypted_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities>())
	,inform_host(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost>())
{
    default_user_communities->parent = this;

    encrypted_user_communities->parent = this;

    inform_host->parent = this;

    yang_name = "trap-host"; yang_parent_name = "trap-hosts";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::~TrapHost()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_data() const
{
    return ip_address.is_set
	|| (default_user_communities !=  nullptr && default_user_communities->has_data())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_data())
	|| (inform_host !=  nullptr && inform_host->has_data());
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (default_user_communities !=  nullptr && default_user_communities->has_operation())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_operation())
	|| (inform_host !=  nullptr && inform_host->has_operation());
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-host" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapHost' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-communities")
    {
        if(default_user_communities == nullptr)
        {
            default_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities>();
        }
        return default_user_communities;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_user_communities != nullptr)
    {
        children["default-user-communities"] = default_user_communities;
    }

    if(encrypted_user_communities != nullptr)
    {
        children["encrypted-user-communities"] = encrypted_user_communities;
    }

    if(inform_host != nullptr)
    {
        children["inform-host"] = inform_host;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunities()
{
    yang_name = "encrypted-user-communities"; yang_parent_name = "trap-host";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::~EncryptedUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncryptedUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-community")
    {
        for(auto const & c : encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity>();
        c->parent = this;
        encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::EncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "encrypted-user-community"; yang_parent_name = "encrypted-user-communities";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::~EncryptedUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncryptedUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformHost()
    :
    inform_encrypted_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>())
	,inform_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities>())
{
    inform_encrypted_user_communities->parent = this;

    inform_user_communities->parent = this;

    yang_name = "inform-host"; yang_parent_name = "trap-host";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::~InformHost()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_data() const
{
    return (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_data())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_data());
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_operation() const
{
    return is_set(operation)
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_operation())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_operation());
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-host";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformHost' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-communities")
    {
        if(inform_encrypted_user_communities == nullptr)
        {
            inform_encrypted_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>();
        }
        return inform_encrypted_user_communities;
    }

    if(child_yang_name == "inform-user-communities")
    {
        if(inform_user_communities == nullptr)
        {
            inform_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities>();
        }
        return inform_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inform_encrypted_user_communities != nullptr)
    {
        children["inform-encrypted-user-communities"] = inform_encrypted_user_communities;
    }

    if(inform_user_communities != nullptr)
    {
        children["inform-user-communities"] = inform_user_communities;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunities()
{
    yang_name = "inform-user-communities"; yang_parent_name = "inform-host";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::~InformUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-community")
    {
        for(auto const & c : inform_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity>();
        c->parent = this;
        inform_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::InformUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "inform-user-community"; yang_parent_name = "inform-user-communities";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::~InformUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunities()
{
    yang_name = "inform-encrypted-user-communities"; yang_parent_name = "inform-host";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::~InformEncryptedUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformEncryptedUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-community")
    {
        for(auto const & c : inform_encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity>();
        c->parent = this;
        inform_encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::InformEncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "inform-encrypted-user-community"; yang_parent_name = "inform-encrypted-user-communities";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::~InformEncryptedUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformEncryptedUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunities()
{
    yang_name = "default-user-communities"; yang_parent_name = "trap-host";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::~DefaultUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_data() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-community")
    {
        for(auto const & c : default_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity>();
        c->parent = this;
        default_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::DefaultUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "default-user-community"; yang_parent_name = "default-user-communities";
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::~DefaultUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::Vrfs::Vrf::Contexts::Contexts()
{
    yang_name = "contexts"; yang_parent_name = "vrf";
}

Snmp::Vrfs::Vrf::Contexts::~Contexts()
{
}

bool Snmp::Vrfs::Vrf::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::Contexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Contexts' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::Contexts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::Contexts::Context::Context()
    :
    context_name{YType::str, "context-name"}
{
    yang_name = "context"; yang_parent_name = "contexts";
}

Snmp::Vrfs::Vrf::Contexts::Context::~Context()
{
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_data() const
{
    return context_name.is_set;
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(context_name.operation);
}

std::string Snmp::Vrfs::Vrf::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context-name='" <<context_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::Contexts::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_name.is_set || is_set(context_name.operation)) leaf_name_data.push_back(context_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::Contexts::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-name")
    {
        context_name = value;
    }
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMappings()
{
    yang_name = "context-mappings"; yang_parent_name = "vrf";
}

Snmp::Vrfs::Vrf::ContextMappings::~ContextMappings()
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_data() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_operation() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Vrfs::Vrf::ContextMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mappings";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::ContextMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ContextMappings' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::ContextMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mapping")
    {
        for(auto const & c : context_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::ContextMappings::ContextMapping>();
        c->parent = this;
        context_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::ContextMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::ContextMappings::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::ContextMapping()
    :
    context_mapping_name{YType::str, "context-mapping-name"},
    context{YType::enumeration, "context"},
    instance_name{YType::str, "instance-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "context-mapping"; yang_parent_name = "context-mappings";
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::~ContextMapping()
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_data() const
{
    return context_mapping_name.is_set
	|| context.is_set
	|| instance_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(context_mapping_name.operation)
	|| is_set(context.operation)
	|| is_set(instance_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping" <<"[context-mapping-name='" <<context_mapping_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ContextMapping' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_mapping_name.is_set || is_set(context_mapping_name.operation)) leaf_name_data.push_back(context_mapping_name.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Snmp::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "snmp";
}

Snmp::Groups::~Groups()
{
}

bool Snmp::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Snmp::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Groups::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Groups::Group::Group()
    :
    name{YType::str, "name"},
    context_name{YType::str, "context-name"},
    notify_view{YType::str, "notify-view"},
    read_view{YType::str, "read-view"},
    security_model{YType::enumeration, "security-model"},
    snmp_version{YType::enumeration, "snmp-version"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    write_view{YType::str, "write-view"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

Snmp::Groups::Group::~Group()
{
}

bool Snmp::Groups::Group::has_data() const
{
    return name.is_set
	|| context_name.is_set
	|| notify_view.is_set
	|| read_view.is_set
	|| security_model.is_set
	|| snmp_version.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| write_view.is_set;
}

bool Snmp::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(context_name.operation)
	|| is_set(notify_view.operation)
	|| is_set(read_view.operation)
	|| is_set(security_model.operation)
	|| is_set(snmp_version.operation)
	|| is_set(v4_access_list.operation)
	|| is_set(v4acl_type.operation)
	|| is_set(v6_access_list.operation)
	|| is_set(v6acl_type.operation)
	|| is_set(write_view.operation);
}

std::string Snmp::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.operation)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (notify_view.is_set || is_set(notify_view.operation)) leaf_name_data.push_back(notify_view.get_name_leafdata());
    if (read_view.is_set || is_set(read_view.operation)) leaf_name_data.push_back(read_view.get_name_leafdata());
    if (security_model.is_set || is_set(security_model.operation)) leaf_name_data.push_back(security_model.get_name_leafdata());
    if (snmp_version.is_set || is_set(snmp_version.operation)) leaf_name_data.push_back(snmp_version.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.operation)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.operation)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.operation)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.operation)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (write_view.is_set || is_set(write_view.operation)) leaf_name_data.push_back(write_view.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "context-name")
    {
        context_name = value;
    }
    if(value_path == "notify-view")
    {
        notify_view = value;
    }
    if(value_path == "read-view")
    {
        read_view = value;
    }
    if(value_path == "security-model")
    {
        security_model = value;
    }
    if(value_path == "snmp-version")
    {
        snmp_version = value;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
    }
    if(value_path == "write-view")
    {
        write_view = value;
    }
}

Snmp::TrapHosts::TrapHosts()
{
    yang_name = "trap-hosts"; yang_parent_name = "snmp";
}

Snmp::TrapHosts::~TrapHosts()
{
}

bool Snmp::TrapHosts::has_data() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::has_operation() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::TrapHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-hosts";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-host")
    {
        for(auto const & c : trap_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost>();
        c->parent = this;
        trap_host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapHosts::TrapHost::TrapHost()
    :
    ip_address{YType::str, "ip-address"}
    	,
    default_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities>())
	,encrypted_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities>())
	,inform_host(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost>())
{
    default_user_communities->parent = this;

    encrypted_user_communities->parent = this;

    inform_host->parent = this;

    yang_name = "trap-host"; yang_parent_name = "trap-hosts";
}

Snmp::TrapHosts::TrapHost::~TrapHost()
{
}

bool Snmp::TrapHosts::TrapHost::has_data() const
{
    return ip_address.is_set
	|| (default_user_communities !=  nullptr && default_user_communities->has_data())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_data())
	|| (inform_host !=  nullptr && inform_host->has_data());
}

bool Snmp::TrapHosts::TrapHost::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (default_user_communities !=  nullptr && default_user_communities->has_operation())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_operation())
	|| (inform_host !=  nullptr && inform_host->has_operation());
}

std::string Snmp::TrapHosts::TrapHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-host" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/trap-hosts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-communities")
    {
        if(default_user_communities == nullptr)
        {
            default_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities>();
        }
        return default_user_communities;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_user_communities != nullptr)
    {
        children["default-user-communities"] = default_user_communities;
    }

    if(encrypted_user_communities != nullptr)
    {
        children["encrypted-user-communities"] = encrypted_user_communities;
    }

    if(inform_host != nullptr)
    {
        children["inform-host"] = inform_host;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunities()
{
    yang_name = "encrypted-user-communities"; yang_parent_name = "trap-host";
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::~EncryptedUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncryptedUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-community")
    {
        for(auto const & c : encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity>();
        c->parent = this;
        encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::EncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "encrypted-user-community"; yang_parent_name = "encrypted-user-communities";
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::~EncryptedUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncryptedUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::TrapHosts::TrapHost::InformHost::InformHost()
    :
    inform_encrypted_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>())
	,inform_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities>())
{
    inform_encrypted_user_communities->parent = this;

    inform_user_communities->parent = this;

    yang_name = "inform-host"; yang_parent_name = "trap-host";
}

Snmp::TrapHosts::TrapHost::InformHost::~InformHost()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_data() const
{
    return (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_data())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_data());
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_operation() const
{
    return is_set(operation)
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_operation())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_operation());
}

std::string Snmp::TrapHosts::TrapHost::InformHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-host";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::InformHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformHost' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-communities")
    {
        if(inform_encrypted_user_communities == nullptr)
        {
            inform_encrypted_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>();
        }
        return inform_encrypted_user_communities;
    }

    if(child_yang_name == "inform-user-communities")
    {
        if(inform_user_communities == nullptr)
        {
            inform_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities>();
        }
        return inform_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inform_encrypted_user_communities != nullptr)
    {
        children["inform-encrypted-user-communities"] = inform_encrypted_user_communities;
    }

    if(inform_user_communities != nullptr)
    {
        children["inform-user-communities"] = inform_user_communities;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunities()
{
    yang_name = "inform-user-communities"; yang_parent_name = "inform-host";
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::~InformUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-community")
    {
        for(auto const & c : inform_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity>();
        c->parent = this;
        inform_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::InformUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "inform-user-community"; yang_parent_name = "inform-user-communities";
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::~InformUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunities()
{
    yang_name = "inform-encrypted-user-communities"; yang_parent_name = "inform-host";
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::~InformEncryptedUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformEncryptedUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-community")
    {
        for(auto const & c : inform_encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity>();
        c->parent = this;
        inform_encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::InformEncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "inform-encrypted-user-community"; yang_parent_name = "inform-encrypted-user-communities";
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::~InformEncryptedUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InformEncryptedUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunities()
{
    yang_name = "default-user-communities"; yang_parent_name = "trap-host";
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::~DefaultUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_data() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-communities";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultUserCommunities' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-community")
    {
        for(auto const & c : default_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity>();
        c->parent = this;
        default_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::DefaultUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{
    yang_name = "default-user-community"; yang_parent_name = "default-user-communities";
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::~DefaultUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(community_name.operation)
	|| is_set(advanced_trap_types1.operation)
	|| is_set(advanced_trap_types2.operation)
	|| is_set(basic_trap_types.operation)
	|| is_set(port.operation)
	|| is_set(security_level.operation)
	|| is_set(version.operation);
}

std::string Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-community" <<"[community-name='" <<community_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultUserCommunity' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.operation)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.operation)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.operation)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.operation)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-name")
    {
        community_name = value;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Snmp::Contexts::Contexts()
{
    yang_name = "contexts"; yang_parent_name = "snmp";
}

Snmp::Contexts::~Contexts()
{
}

bool Snmp::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";

    return path_buffer.str();

}

const EntityPath Snmp::Contexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Contexts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Contexts::Context::Context()
    :
    context_name{YType::str, "context-name"}
{
    yang_name = "context"; yang_parent_name = "contexts";
}

Snmp::Contexts::Context::~Context()
{
}

bool Snmp::Contexts::Context::has_data() const
{
    return context_name.is_set;
}

bool Snmp::Contexts::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(context_name.operation);
}

std::string Snmp::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context-name='" <<context_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Contexts::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/contexts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_name.is_set || is_set(context_name.operation)) leaf_name_data.push_back(context_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Contexts::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-name")
    {
        context_name = value;
    }
}

Snmp::ContextMappings::ContextMappings()
{
    yang_name = "context-mappings"; yang_parent_name = "snmp";
}

Snmp::ContextMappings::~ContextMappings()
{
}

bool Snmp::ContextMappings::has_data() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::ContextMappings::has_operation() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::ContextMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mappings";

    return path_buffer.str();

}

const EntityPath Snmp::ContextMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::ContextMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mapping")
    {
        for(auto const & c : context_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::ContextMappings::ContextMapping>();
        c->parent = this;
        context_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::ContextMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::ContextMappings::set_value(const std::string & value_path, std::string value)
{
}

Snmp::ContextMappings::ContextMapping::ContextMapping()
    :
    context_mapping_name{YType::str, "context-mapping-name"},
    context{YType::enumeration, "context"},
    instance_name{YType::str, "instance-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "context-mapping"; yang_parent_name = "context-mappings";
}

Snmp::ContextMappings::ContextMapping::~ContextMapping()
{
}

bool Snmp::ContextMappings::ContextMapping::has_data() const
{
    return context_mapping_name.is_set
	|| context.is_set
	|| instance_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Snmp::ContextMappings::ContextMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(context_mapping_name.operation)
	|| is_set(context.operation)
	|| is_set(instance_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Snmp::ContextMappings::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping" <<"[context-mapping-name='" <<context_mapping_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::ContextMappings::ContextMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/context-mappings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_mapping_name.is_set || is_set(context_mapping_name.operation)) leaf_name_data.push_back(context_mapping_name.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::ContextMappings::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::ContextMappings::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::ContextMappings::ContextMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Mib::Mib()
    :
    sensor_mib_cache{YType::empty, "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor-mib-cache"}
    	,
    cb_qosmib(std::make_shared<Mib::CbQosmib>())
	,entity_mib(std::make_shared<Mib::EntityMib>())
	,interface_mib(std::make_shared<Mib::InterfaceMib>())
	,mpls_frr_mib(std::make_shared<Mib::MplsFrrMib>())
	,mpls_p2mp_mib(std::make_shared<Mib::MplsP2MpMib>())
	,mpls_te_ext_mib(std::make_shared<Mib::MplsTeExtMib>())
	,mpls_te_ext_std_mib(std::make_shared<Mib::MplsTeExtStdMib>())
	,mpls_te_mib(std::make_shared<Mib::MplsTeMib>())
{
    cb_qosmib->parent = this;

    entity_mib->parent = this;

    interface_mib->parent = this;

    mpls_frr_mib->parent = this;

    mpls_p2mp_mib->parent = this;

    mpls_te_ext_mib->parent = this;

    mpls_te_ext_std_mib->parent = this;

    mpls_te_mib->parent = this;

    yang_name = "mib"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-cfg";
}

Mib::~Mib()
{
}

bool Mib::has_data() const
{
    return sensor_mib_cache.is_set
	|| (cb_qosmib !=  nullptr && cb_qosmib->has_data())
	|| (entity_mib !=  nullptr && entity_mib->has_data())
	|| (interface_mib !=  nullptr && interface_mib->has_data())
	|| (mpls_frr_mib !=  nullptr && mpls_frr_mib->has_data())
	|| (mpls_p2mp_mib !=  nullptr && mpls_p2mp_mib->has_data())
	|| (mpls_te_ext_mib !=  nullptr && mpls_te_ext_mib->has_data())
	|| (mpls_te_ext_std_mib !=  nullptr && mpls_te_ext_std_mib->has_data())
	|| (mpls_te_mib !=  nullptr && mpls_te_mib->has_data());
}

bool Mib::has_operation() const
{
    return is_set(operation)
	|| is_set(sensor_mib_cache.operation)
	|| (cb_qosmib !=  nullptr && cb_qosmib->has_operation())
	|| (entity_mib !=  nullptr && entity_mib->has_operation())
	|| (interface_mib !=  nullptr && interface_mib->has_operation())
	|| (mpls_frr_mib !=  nullptr && mpls_frr_mib->has_operation())
	|| (mpls_p2mp_mib !=  nullptr && mpls_p2mp_mib->has_operation())
	|| (mpls_te_ext_mib !=  nullptr && mpls_te_ext_mib->has_operation())
	|| (mpls_te_ext_std_mib !=  nullptr && mpls_te_ext_std_mib->has_operation())
	|| (mpls_te_mib !=  nullptr && mpls_te_mib->has_operation());
}

std::string Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib";

    return path_buffer.str();

}

const EntityPath Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_mib_cache.is_set || is_set(sensor_mib_cache.operation)) leaf_name_data.push_back(sensor_mib_cache.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cb-qosmib")
    {
        if(cb_qosmib == nullptr)
        {
            cb_qosmib = std::make_shared<Mib::CbQosmib>();
        }
        return cb_qosmib;
    }

    if(child_yang_name == "entity-mib")
    {
        if(entity_mib == nullptr)
        {
            entity_mib = std::make_shared<Mib::EntityMib>();
        }
        return entity_mib;
    }

    if(child_yang_name == "interface-mib")
    {
        if(interface_mib == nullptr)
        {
            interface_mib = std::make_shared<Mib::InterfaceMib>();
        }
        return interface_mib;
    }

    if(child_yang_name == "mpls-frr-mib")
    {
        if(mpls_frr_mib == nullptr)
        {
            mpls_frr_mib = std::make_shared<Mib::MplsFrrMib>();
        }
        return mpls_frr_mib;
    }

    if(child_yang_name == "mpls-p2mp-mib")
    {
        if(mpls_p2mp_mib == nullptr)
        {
            mpls_p2mp_mib = std::make_shared<Mib::MplsP2MpMib>();
        }
        return mpls_p2mp_mib;
    }

    if(child_yang_name == "mpls-te-ext-mib")
    {
        if(mpls_te_ext_mib == nullptr)
        {
            mpls_te_ext_mib = std::make_shared<Mib::MplsTeExtMib>();
        }
        return mpls_te_ext_mib;
    }

    if(child_yang_name == "mpls-te-ext-std-mib")
    {
        if(mpls_te_ext_std_mib == nullptr)
        {
            mpls_te_ext_std_mib = std::make_shared<Mib::MplsTeExtStdMib>();
        }
        return mpls_te_ext_std_mib;
    }

    if(child_yang_name == "mpls-te-mib")
    {
        if(mpls_te_mib == nullptr)
        {
            mpls_te_mib = std::make_shared<Mib::MplsTeMib>();
        }
        return mpls_te_mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cb_qosmib != nullptr)
    {
        children["cb-qosmib"] = cb_qosmib;
    }

    if(entity_mib != nullptr)
    {
        children["entity-mib"] = entity_mib;
    }

    if(interface_mib != nullptr)
    {
        children["interface-mib"] = interface_mib;
    }

    if(mpls_frr_mib != nullptr)
    {
        children["mpls-frr-mib"] = mpls_frr_mib;
    }

    if(mpls_p2mp_mib != nullptr)
    {
        children["mpls-p2mp-mib"] = mpls_p2mp_mib;
    }

    if(mpls_te_ext_mib != nullptr)
    {
        children["mpls-te-ext-mib"] = mpls_te_ext_mib;
    }

    if(mpls_te_ext_std_mib != nullptr)
    {
        children["mpls-te-ext-std-mib"] = mpls_te_ext_std_mib;
    }

    if(mpls_te_mib != nullptr)
    {
        children["mpls-te-mib"] = mpls_te_mib;
    }

    return children;
}

void Mib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sensor-mib-cache")
    {
        sensor_mib_cache = value;
    }
}

std::shared_ptr<Entity> Mib::clone_ptr() const
{
    return std::make_shared<Mib>();
}

std::string Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Mib::MplsTeMib::MplsTeMib()
    :
    cache_garbage_collect_timer{YType::uint32, "cache-garbage-collect-timer"},
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-mib"; yang_parent_name = "mib";
}

Mib::MplsTeMib::~MplsTeMib()
{
}

bool Mib::MplsTeMib::has_data() const
{
    return cache_garbage_collect_timer.is_set
	|| cache_timer.is_set;
}

bool Mib::MplsTeMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_garbage_collect_timer.operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsTeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsTeMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_garbage_collect_timer.is_set || is_set(cache_garbage_collect_timer.operation)) leaf_name_data.push_back(cache_garbage_collect_timer.get_name_leafdata());
    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-garbage-collect-timer")
    {
        cache_garbage_collect_timer = value;
    }
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

Mib::MplsP2MpMib::MplsP2MpMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-p2mp-mib"; yang_parent_name = "mib";
}

Mib::MplsP2MpMib::~MplsP2MpMib()
{
}

bool Mib::MplsP2MpMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsP2MpMib::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_timer.operation);
}

std::string Mib::MplsP2MpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsP2MpMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.operation)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsP2MpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsP2MpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsP2MpMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
    }
}

const Enum::YLeaf SnmpHashAlgorithmEnum::none {0, "none"};
const Enum::YLeaf SnmpHashAlgorithmEnum::md5 {1, "md5"};
const Enum::YLeaf SnmpHashAlgorithmEnum::sha {2, "sha"};

const Enum::YLeaf SnmpAccessLevelEnum::read_only {0, "read-only"};
const Enum::YLeaf SnmpAccessLevelEnum::read_write {1, "read-write"};

const Enum::YLeaf SnmpBulkstatSchemaEnum::exact_interface {1, "exact-interface"};
const Enum::YLeaf SnmpBulkstatSchemaEnum::exact_oid {2, "exact-oid"};
const Enum::YLeaf SnmpBulkstatSchemaEnum::wild_interface {3, "wild-interface"};
const Enum::YLeaf SnmpBulkstatSchemaEnum::wild_oid {4, "wild-oid"};
const Enum::YLeaf SnmpBulkstatSchemaEnum::range_oid {5, "range-oid"};
const Enum::YLeaf SnmpBulkstatSchemaEnum::repeat_oid {6, "repeat-oid"};

const Enum::YLeaf GroupSnmpVersionEnum::v1 {0, "v1"};
const Enum::YLeaf GroupSnmpVersionEnum::v2c {1, "v2c"};
const Enum::YLeaf GroupSnmpVersionEnum::v3 {2, "v3"};

const Enum::YLeaf SnmpOwnerAccessEnum::sdr_owner {0, "sdr-owner"};
const Enum::YLeaf SnmpOwnerAccessEnum::system_owner {1, "system-owner"};

const Enum::YLeaf SnmpBulkstatFileFormatEnum::schema_ascii {1, "schema-ascii"};
const Enum::YLeaf SnmpBulkstatFileFormatEnum::bulk_ascii {2, "bulk-ascii"};
const Enum::YLeaf SnmpBulkstatFileFormatEnum::bulk_binary {3, "bulk-binary"};

const Enum::YLeaf SnmpSecurityModelEnum::no_authentication {0, "no-authentication"};
const Enum::YLeaf SnmpSecurityModelEnum::authentication {1, "authentication"};
const Enum::YLeaf SnmpSecurityModelEnum::privacy {2, "privacy"};

const Enum::YLeaf SnmpTosEnum::precedence {0, "precedence"};
const Enum::YLeaf SnmpTosEnum::dscp {1, "dscp"};

const Enum::YLeaf SnmpaclEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf SnmpaclEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf SnmpDscpValueEnum::default_ {0, "default"};
const Enum::YLeaf SnmpDscpValueEnum::af11 {10, "af11"};
const Enum::YLeaf SnmpDscpValueEnum::af12 {12, "af12"};
const Enum::YLeaf SnmpDscpValueEnum::af13 {14, "af13"};
const Enum::YLeaf SnmpDscpValueEnum::af21 {18, "af21"};
const Enum::YLeaf SnmpDscpValueEnum::af22 {20, "af22"};
const Enum::YLeaf SnmpDscpValueEnum::af23 {22, "af23"};
const Enum::YLeaf SnmpDscpValueEnum::af31 {26, "af31"};
const Enum::YLeaf SnmpDscpValueEnum::af32 {28, "af32"};
const Enum::YLeaf SnmpDscpValueEnum::af33 {30, "af33"};
const Enum::YLeaf SnmpDscpValueEnum::af41 {34, "af41"};
const Enum::YLeaf SnmpDscpValueEnum::af42 {36, "af42"};
const Enum::YLeaf SnmpDscpValueEnum::af43 {38, "af43"};
const Enum::YLeaf SnmpDscpValueEnum::ef {46, "ef"};
const Enum::YLeaf SnmpDscpValueEnum::cs1 {8, "cs1"};
const Enum::YLeaf SnmpDscpValueEnum::cs2 {16, "cs2"};
const Enum::YLeaf SnmpDscpValueEnum::cs3 {24, "cs3"};
const Enum::YLeaf SnmpDscpValueEnum::cs4 {32, "cs4"};
const Enum::YLeaf SnmpDscpValueEnum::cs5 {40, "cs5"};
const Enum::YLeaf SnmpDscpValueEnum::cs6 {48, "cs6"};
const Enum::YLeaf SnmpDscpValueEnum::cs7 {56, "cs7"};

const Enum::YLeaf UserSnmpVersionEnum::v1 {1, "v1"};
const Enum::YLeaf UserSnmpVersionEnum::v2c {2, "v2c"};
const Enum::YLeaf UserSnmpVersionEnum::v3 {3, "v3"};

const Enum::YLeaf SnmpPrecedenceValue1Enum::routine {0, "routine"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::priority {1, "priority"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::immediate {2, "immediate"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::flash {3, "flash"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::flash_override {4, "flash-override"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::critical {5, "critical"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::internet {6, "internet"};
const Enum::YLeaf SnmpPrecedenceValue1Enum::network {7, "network"};

const Enum::YLeaf SnmpPrivAlgorithmEnum::none {0, "none"};
const Enum::YLeaf SnmpPrivAlgorithmEnum::des {1, "des"};
const Enum::YLeaf SnmpPrivAlgorithmEnum::Y_3des {2, "3des"};
const Enum::YLeaf SnmpPrivAlgorithmEnum::aes128 {3, "aes128"};
const Enum::YLeaf SnmpPrivAlgorithmEnum::aes192 {4, "aes192"};
const Enum::YLeaf SnmpPrivAlgorithmEnum::aes256 {5, "aes256"};

const Enum::YLeaf SnmpMibViewInclusionEnum::included {1, "included"};
const Enum::YLeaf SnmpMibViewInclusionEnum::excluded {2, "excluded"};

const Enum::YLeaf SnmpContextEnum::vrf {1, "vrf"};
const Enum::YLeaf SnmpContextEnum::bridge {4, "bridge"};
const Enum::YLeaf SnmpContextEnum::ospf {5, "ospf"};
const Enum::YLeaf SnmpContextEnum::ospfv3 {6, "ospfv3"};


}
}

