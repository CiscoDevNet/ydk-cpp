
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_new_dhcpv6d_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_oper {

Dhcpv6::Dhcpv6()
    :
    issu_status(std::make_shared<Dhcpv6::IssuStatus>())
	,nodes(std::make_shared<Dhcpv6::Nodes>())
{
    issu_status->parent = this;

    nodes->parent = this;

    yang_name = "dhcpv6"; yang_parent_name = "Cisco-IOS-XR-ipv6-new-dhcpv6d-oper";
}

Dhcpv6::~Dhcpv6()
{
}

bool Dhcpv6::has_data() const
{
    return (issu_status !=  nullptr && issu_status->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Dhcpv6::has_operation() const
{
    return is_set(yfilter)
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-oper:dhcpv6";

    return path_buffer.str();

}

const EntityPath Dhcpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<Dhcpv6::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Dhcpv6::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Dhcpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Dhcpv6::clone_ptr() const
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
    if(name == "issu-status" || name == "nodes")
        return true;
    return false;
}

Dhcpv6::IssuStatus::IssuStatus()
    :
    big_bang_time{YType::uint64, "big-bang-time"},
    issu_ready_issu_mgr_connection{YType::boolean, "issu-ready-issu-mgr-connection"},
    issu_ready_time{YType::uint64, "issu-ready-time"},
    issu_sync_complete_time{YType::uint64, "issu-sync-complete-time"},
    issu_sync_start_time{YType::uint64, "issu-sync-start-time"},
    phase{YType::enumeration, "phase"},
    primary_role_time{YType::uint64, "primary-role-time"},
    process_start_time{YType::uint64, "process-start-time"},
    role{YType::enumeration, "role"},
    version{YType::enumeration, "version"}
{
    yang_name = "issu-status"; yang_parent_name = "dhcpv6";
}

Dhcpv6::IssuStatus::~IssuStatus()
{
}

bool Dhcpv6::IssuStatus::has_data() const
{
    return big_bang_time.is_set
	|| issu_ready_issu_mgr_connection.is_set
	|| issu_ready_time.is_set
	|| issu_sync_complete_time.is_set
	|| issu_sync_start_time.is_set
	|| phase.is_set
	|| primary_role_time.is_set
	|| process_start_time.is_set
	|| role.is_set
	|| version.is_set;
}

bool Dhcpv6::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(big_bang_time.yfilter)
	|| ydk::is_set(issu_ready_issu_mgr_connection.yfilter)
	|| ydk::is_set(issu_ready_time.yfilter)
	|| ydk::is_set(issu_sync_complete_time.yfilter)
	|| ydk::is_set(issu_sync_start_time.yfilter)
	|| ydk::is_set(phase.yfilter)
	|| ydk::is_set(primary_role_time.yfilter)
	|| ydk::is_set(process_start_time.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Dhcpv6::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";

    return path_buffer.str();

}

const EntityPath Dhcpv6::IssuStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-oper:dhcpv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (big_bang_time.is_set || is_set(big_bang_time.yfilter)) leaf_name_data.push_back(big_bang_time.get_name_leafdata());
    if (issu_ready_issu_mgr_connection.is_set || is_set(issu_ready_issu_mgr_connection.yfilter)) leaf_name_data.push_back(issu_ready_issu_mgr_connection.get_name_leafdata());
    if (issu_ready_time.is_set || is_set(issu_ready_time.yfilter)) leaf_name_data.push_back(issu_ready_time.get_name_leafdata());
    if (issu_sync_complete_time.is_set || is_set(issu_sync_complete_time.yfilter)) leaf_name_data.push_back(issu_sync_complete_time.get_name_leafdata());
    if (issu_sync_start_time.is_set || is_set(issu_sync_start_time.yfilter)) leaf_name_data.push_back(issu_sync_start_time.get_name_leafdata());
    if (phase.is_set || is_set(phase.yfilter)) leaf_name_data.push_back(phase.get_name_leafdata());
    if (primary_role_time.is_set || is_set(primary_role_time.yfilter)) leaf_name_data.push_back(primary_role_time.get_name_leafdata());
    if (process_start_time.is_set || is_set(process_start_time.yfilter)) leaf_name_data.push_back(process_start_time.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "big-bang-time")
    {
        big_bang_time = value;
        big_bang_time.value_namespace = name_space;
        big_bang_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-ready-issu-mgr-connection")
    {
        issu_ready_issu_mgr_connection = value;
        issu_ready_issu_mgr_connection.value_namespace = name_space;
        issu_ready_issu_mgr_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-ready-time")
    {
        issu_ready_time = value;
        issu_ready_time.value_namespace = name_space;
        issu_ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-sync-complete-time")
    {
        issu_sync_complete_time = value;
        issu_sync_complete_time.value_namespace = name_space;
        issu_sync_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-sync-start-time")
    {
        issu_sync_start_time = value;
        issu_sync_start_time.value_namespace = name_space;
        issu_sync_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase")
    {
        phase = value;
        phase.value_namespace = name_space;
        phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-role-time")
    {
        primary_role_time = value;
        primary_role_time.value_namespace = name_space;
        primary_role_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-start-time")
    {
        process_start_time = value;
        process_start_time.value_namespace = name_space;
        process_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "big-bang-time")
    {
        big_bang_time.yfilter = yfilter;
    }
    if(value_path == "issu-ready-issu-mgr-connection")
    {
        issu_ready_issu_mgr_connection.yfilter = yfilter;
    }
    if(value_path == "issu-ready-time")
    {
        issu_ready_time.yfilter = yfilter;
    }
    if(value_path == "issu-sync-complete-time")
    {
        issu_sync_complete_time.yfilter = yfilter;
    }
    if(value_path == "issu-sync-start-time")
    {
        issu_sync_start_time.yfilter = yfilter;
    }
    if(value_path == "phase")
    {
        phase.yfilter = yfilter;
    }
    if(value_path == "primary-role-time")
    {
        primary_role_time.yfilter = yfilter;
    }
    if(value_path == "process-start-time")
    {
        process_start_time.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Dhcpv6::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "big-bang-time" || name == "issu-ready-issu-mgr-connection" || name == "issu-ready-time" || name == "issu-sync-complete-time" || name == "issu-sync-start-time" || name == "phase" || name == "primary-role-time" || name == "process-start-time" || name == "role" || name == "version")
        return true;
    return false;
}

Dhcpv6::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "dhcpv6";
}

Dhcpv6::Nodes::~Nodes()
{
}

bool Dhcpv6::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-oper:dhcpv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    base(std::make_shared<Dhcpv6::Nodes::Node::Base>())
	,proxy(std::make_shared<Dhcpv6::Nodes::Node::Proxy>())
	,relay(std::make_shared<Dhcpv6::Nodes::Node::Relay>())
	,server(std::make_shared<Dhcpv6::Nodes::Node::Server>())
{
    base->parent = this;

    proxy->parent = this;

    relay->parent = this;

    server->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Dhcpv6::Nodes::Node::~Node()
{
}

bool Dhcpv6::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (base !=  nullptr && base->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Dhcpv6::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Dhcpv6::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-oper:dhcpv6/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Dhcpv6::Nodes::Node::Base>();
        }
        return base;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Dhcpv6::Nodes::Node::Proxy>();
        }
        return proxy;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Dhcpv6::Nodes::Node::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Dhcpv6::Nodes::Node::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::get_children() const
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

    return children;
}

void Dhcpv6::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "proxy" || name == "relay" || name == "server" || name == "node-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Proxy()
    :
    binding(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding>())
	,interfaces(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Interfaces>())
	,profiles(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles>())
	,statistics(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Statistics>())
	,vrfs(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs>())
{
    binding->parent = this;

    interfaces->parent = this;

    profiles->parent = this;

    statistics->parent = this;

    vrfs->parent = this;

    yang_name = "proxy"; yang_parent_name = "node";
}

Dhcpv6::Nodes::Node::Proxy::~Proxy()
{
}

bool Dhcpv6::Nodes::Node::Proxy::has_data() const
{
    return (binding !=  nullptr && binding->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| (binding !=  nullptr && binding->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proxy' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding>();
        }
        return binding;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding" || name == "interfaces" || name == "profiles" || name == "statistics" || name == "vrfs")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "proxy";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::~Vrfs()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics>())
{
    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::~Vrf()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Statistics()
    :
    advertise(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise>())
	,confirm(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm>())
	,decline(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline>())
	,inform(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform>())
	,lease_query(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery>())
	,lease_query_data(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData>())
	,lease_query_done(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone>())
	,lease_query_reply(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply>())
	,rebind(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind>())
	,reconfig(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig>())
	,relay_forward(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward>())
	,relay_reply(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply>())
	,release(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release>())
	,renew(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew>())
	,reply(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply>())
	,request(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request>())
	,solicit(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit>())
{
    advertise->parent = this;

    confirm->parent = this;

    decline->parent = this;

    inform->parent = this;

    lease_query->parent = this;

    lease_query_data->parent = this;

    lease_query_done->parent = this;

    lease_query_reply->parent = this;

    rebind->parent = this;

    reconfig->parent = this;

    relay_forward->parent = this;

    relay_reply->parent = this;

    release->parent = this;

    renew->parent = this;

    reply->parent = this;

    request->parent = this;

    solicit->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (confirm !=  nullptr && confirm->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_query_data !=  nullptr && lease_query_data->has_data())
	|| (lease_query_done !=  nullptr && lease_query_done->has_data())
	|| (lease_query_reply !=  nullptr && lease_query_reply->has_data())
	|| (rebind !=  nullptr && rebind->has_data())
	|| (reconfig !=  nullptr && reconfig->has_data())
	|| (relay_forward !=  nullptr && relay_forward->has_data())
	|| (relay_reply !=  nullptr && relay_reply->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (renew !=  nullptr && renew->has_data())
	|| (reply !=  nullptr && reply->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (solicit !=  nullptr && solicit->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (confirm !=  nullptr && confirm->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_query_data !=  nullptr && lease_query_data->has_operation())
	|| (lease_query_done !=  nullptr && lease_query_done->has_operation())
	|| (lease_query_reply !=  nullptr && lease_query_reply->has_operation())
	|| (rebind !=  nullptr && rebind->has_operation())
	|| (reconfig !=  nullptr && reconfig->has_operation())
	|| (relay_forward !=  nullptr && relay_forward->has_operation())
	|| (relay_reply !=  nullptr && relay_reply->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (renew !=  nullptr && renew->has_operation())
	|| (reply !=  nullptr && reply->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (solicit !=  nullptr && solicit->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "confirm")
    {
        if(confirm == nullptr)
        {
            confirm = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm>();
        }
        return confirm;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-query-data")
    {
        if(lease_query_data == nullptr)
        {
            lease_query_data = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData>();
        }
        return lease_query_data;
    }

    if(child_yang_name == "lease-query-done")
    {
        if(lease_query_done == nullptr)
        {
            lease_query_done = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone>();
        }
        return lease_query_done;
    }

    if(child_yang_name == "lease-query-reply")
    {
        if(lease_query_reply == nullptr)
        {
            lease_query_reply = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply>();
        }
        return lease_query_reply;
    }

    if(child_yang_name == "rebind")
    {
        if(rebind == nullptr)
        {
            rebind = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind>();
        }
        return rebind;
    }

    if(child_yang_name == "reconfig")
    {
        if(reconfig == nullptr)
        {
            reconfig = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig>();
        }
        return reconfig;
    }

    if(child_yang_name == "relay-forward")
    {
        if(relay_forward == nullptr)
        {
            relay_forward = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward>();
        }
        return relay_forward;
    }

    if(child_yang_name == "relay-reply")
    {
        if(relay_reply == nullptr)
        {
            relay_reply = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply>();
        }
        return relay_reply;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "renew")
    {
        if(renew == nullptr)
        {
            renew = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew>();
        }
        return renew;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request>();
        }
        return request;
    }

    if(child_yang_name == "solicit")
    {
        if(solicit == nullptr)
        {
            solicit = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit>();
        }
        return solicit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(confirm != nullptr)
    {
        children["confirm"] = confirm;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_query_data != nullptr)
    {
        children["lease-query-data"] = lease_query_data;
    }

    if(lease_query_done != nullptr)
    {
        children["lease-query-done"] = lease_query_done;
    }

    if(lease_query_reply != nullptr)
    {
        children["lease-query-reply"] = lease_query_reply;
    }

    if(rebind != nullptr)
    {
        children["rebind"] = rebind;
    }

    if(reconfig != nullptr)
    {
        children["reconfig"] = reconfig;
    }

    if(relay_forward != nullptr)
    {
        children["relay-forward"] = relay_forward;
    }

    if(relay_reply != nullptr)
    {
        children["relay-reply"] = relay_reply;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(renew != nullptr)
    {
        children["renew"] = renew;
    }

    if(reply != nullptr)
    {
        children["reply"] = reply;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(solicit != nullptr)
    {
        children["solicit"] = solicit;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "confirm" || name == "decline" || name == "inform" || name == "lease-query" || name == "lease-query-data" || name == "lease-query-done" || name == "lease-query-reply" || name == "rebind" || name == "reconfig" || name == "relay-forward" || name == "relay-reply" || name == "release" || name == "renew" || name == "reply" || name == "request" || name == "solicit")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::Solicit()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "solicit"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::~Solicit()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Solicit' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::Advertise()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "advertise"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::~Advertise()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::~Request()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::Reply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::~Reply()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::Confirm()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "confirm"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::~Confirm()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confirm";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confirm' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::~Decline()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::Renew()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "renew"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::~Renew()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "renew";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Renew' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::Rebind()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "rebind"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::~Rebind()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rebind";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rebind' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::~Release()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::Reconfig()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "reconfig"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::~Reconfig()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconfig";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reconfig' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::~Inform()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::RelayForward()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "relay-forward"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::~RelayForward()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-forward";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayForward' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::RelayReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "relay-reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::~RelayReply()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayReply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::~LeaseQuery()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::LeaseQueryReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::~LeaseQueryReply()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryReply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::LeaseQueryDone()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-done"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::~LeaseQueryDone()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-done";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryDone' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::LeaseQueryData()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-data"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::~LeaseQueryData()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-data";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryData' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "proxy";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::~Profiles()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profiles' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"}
    	,
    info(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info>())
	,throttle_infos(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos>())
{
    info->parent = this;

    throttle_infos->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::~Profile()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| (info !=  nullptr && info->has_data())
	|| (throttle_infos !=  nullptr && throttle_infos->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (throttle_infos !=  nullptr && throttle_infos->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info>();
        }
        return info;
    }

    if(child_yang_name == "throttle-infos")
    {
        if(throttle_infos == nullptr)
        {
            throttle_infos = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos>();
        }
        return throttle_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(throttle_infos != nullptr)
    {
        children["throttle-infos"] = throttle_infos;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "throttle-infos" || name == "profile-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfos()
{
    yang_name = "throttle-infos"; yang_parent_name = "profile";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::~ThrottleInfos()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::has_data() const
{
    for (std::size_t index=0; index<throttle_info.size(); index++)
    {
        if(throttle_info[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::has_operation() const
{
    for (std::size_t index=0; index<throttle_info.size(); index++)
    {
        if(throttle_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-infos";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThrottleInfos' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle-info")
    {
        for(auto const & c : throttle_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo>();
        c->parent = this;
        throttle_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : throttle_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle-info")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::ThrottleInfo()
    :
    mac_address{YType::str, "mac-address"},
    binding_chaddr{YType::str, "binding-chaddr"},
    ifname{YType::str, "ifname"},
    state{YType::uint32, "state"},
    time_left{YType::uint32, "time-left"}
{
    yang_name = "throttle-info"; yang_parent_name = "throttle-infos";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::~ThrottleInfo()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::has_data() const
{
    return mac_address.is_set
	|| binding_chaddr.is_set
	|| ifname.is_set
	|| state.is_set
	|| time_left.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(binding_chaddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(time_left.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-info" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThrottleInfo' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (binding_chaddr.is_set || is_set(binding_chaddr.yfilter)) leaf_name_data.push_back(binding_chaddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-chaddr")
    {
        binding_chaddr = value;
        binding_chaddr.value_namespace = name_space;
        binding_chaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "binding-chaddr")
    {
        binding_chaddr.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "binding-chaddr" || name == "ifname" || name == "state" || name == "time-left")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::Info()
    :
    interface_name{YType::str, "interface-name"},
    profile_helper_address{YType::str, "profile-helper-address"},
    profile_link_address{YType::str, "profile-link-address"},
    profile_name{YType::str, "profile-name"},
    remote_id{YType::str, "remote-id"},
    vrf_name{YType::str, "vrf-name"}
    	,
    interface_id_references(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences>())
	,interface_references(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences>())
	,vrf_references(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences>())
{
    interface_id_references->parent = this;

    interface_references->parent = this;

    vrf_references->parent = this;

    yang_name = "info"; yang_parent_name = "profile";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::~Info()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : profile_helper_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vrf_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return profile_link_address.is_set
	|| profile_name.is_set
	|| remote_id.is_set
	|| (interface_id_references !=  nullptr && interface_id_references->has_data())
	|| (interface_references !=  nullptr && interface_references->has_data())
	|| (vrf_references !=  nullptr && vrf_references->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : profile_helper_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : vrf_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(profile_helper_address.yfilter)
	|| ydk::is_set(profile_link_address.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (interface_id_references !=  nullptr && interface_id_references->has_operation())
	|| (interface_references !=  nullptr && interface_references->has_operation())
	|| (vrf_references !=  nullptr && vrf_references->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_link_address.is_set || is_set(profile_link_address.yfilter)) leaf_name_data.push_back(profile_link_address.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    auto profile_helper_address_name_datas = profile_helper_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_helper_address_name_datas.begin(), profile_helper_address_name_datas.end());
    auto vrf_name_name_datas = vrf_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vrf_name_name_datas.begin(), vrf_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-id-references")
    {
        if(interface_id_references == nullptr)
        {
            interface_id_references = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences>();
        }
        return interface_id_references;
    }

    if(child_yang_name == "interface-references")
    {
        if(interface_references == nullptr)
        {
            interface_references = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences>();
        }
        return interface_references;
    }

    if(child_yang_name == "vrf-references")
    {
        if(vrf_references == nullptr)
        {
            vrf_references = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences>();
        }
        return vrf_references;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_id_references != nullptr)
    {
        children["interface-id-references"] = interface_id_references;
    }

    if(interface_references != nullptr)
    {
        children["interface-references"] = interface_references;
    }

    if(vrf_references != nullptr)
    {
        children["vrf-references"] = vrf_references;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
    if(value_path == "profile-helper-address")
    {
        profile_helper_address.append(value);
    }
    if(value_path == "profile-link-address")
    {
        profile_link_address = value;
        profile_link_address.value_namespace = name_space;
        profile_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.append(value);
    }
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "profile-helper-address")
    {
        profile_helper_address.yfilter = yfilter;
    }
    if(value_path == "profile-link-address")
    {
        profile_link_address.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id-references" || name == "interface-references" || name == "vrf-references" || name == "interface-name" || name == "profile-helper-address" || name == "profile-link-address" || name == "profile-name" || name == "remote-id" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::InterfaceIdReferences()
{
    yang_name = "interface-id-references"; yang_parent_name = "info";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::~InterfaceIdReferences()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_iid_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_iid_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_iid_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_iid_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id-references";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceIdReferences' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-proxy-iid-reference")
    {
        for(auto const & c : ipv6_dhcpv6d_proxy_iid_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference>();
        c->parent = this;
        ipv6_dhcpv6d_proxy_iid_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_proxy_iid_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-proxy-iid-reference")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::Ipv6Dhcpv6DProxyIidReference()
    :
    proxy_iid_interface_name{YType::str, "proxy-iid-interface-name"},
    proxy_interface_id{YType::str, "proxy-interface-id"}
{
    yang_name = "ipv6-dhcpv6d-proxy-iid-reference"; yang_parent_name = "interface-id-references";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::~Ipv6Dhcpv6DProxyIidReference()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::has_data() const
{
    return proxy_iid_interface_name.is_set
	|| proxy_interface_id.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_iid_interface_name.yfilter)
	|| ydk::is_set(proxy_interface_id.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-proxy-iid-reference";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DProxyIidReference' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_iid_interface_name.is_set || is_set(proxy_iid_interface_name.yfilter)) leaf_name_data.push_back(proxy_iid_interface_name.get_name_leafdata());
    if (proxy_interface_id.is_set || is_set(proxy_interface_id.yfilter)) leaf_name_data.push_back(proxy_interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-iid-interface-name")
    {
        proxy_iid_interface_name = value;
        proxy_iid_interface_name.value_namespace = name_space;
        proxy_iid_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface-id")
    {
        proxy_interface_id = value;
        proxy_interface_id.value_namespace = name_space;
        proxy_interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-iid-interface-name")
    {
        proxy_iid_interface_name.yfilter = yfilter;
    }
    if(value_path == "proxy-interface-id")
    {
        proxy_interface_id.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-iid-interface-name" || name == "proxy-interface-id")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::VrfReferences()
{
    yang_name = "vrf-references"; yang_parent_name = "info";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::~VrfReferences()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_vrf_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_vrf_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_vrf_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_vrf_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-references";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfReferences' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-proxy-vrf-reference")
    {
        for(auto const & c : ipv6_dhcpv6d_proxy_vrf_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference>();
        c->parent = this;
        ipv6_dhcpv6d_proxy_vrf_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_proxy_vrf_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-proxy-vrf-reference")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::Ipv6Dhcpv6DProxyVrfReference()
    :
    proxy_reference_vrf_name{YType::str, "proxy-reference-vrf-name"}
{
    yang_name = "ipv6-dhcpv6d-proxy-vrf-reference"; yang_parent_name = "vrf-references";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::~Ipv6Dhcpv6DProxyVrfReference()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::has_data() const
{
    return proxy_reference_vrf_name.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_reference_vrf_name.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-proxy-vrf-reference";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DProxyVrfReference' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_reference_vrf_name.is_set || is_set(proxy_reference_vrf_name.yfilter)) leaf_name_data.push_back(proxy_reference_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-reference-vrf-name")
    {
        proxy_reference_vrf_name = value;
        proxy_reference_vrf_name.value_namespace = name_space;
        proxy_reference_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-reference-vrf-name")
    {
        proxy_reference_vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-reference-vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::InterfaceReferences()
{
    yang_name = "interface-references"; yang_parent_name = "info";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::~InterfaceReferences()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_interface_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_interface_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_interface_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_interface_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-references";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceReferences' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-proxy-interface-reference")
    {
        for(auto const & c : ipv6_dhcpv6d_proxy_interface_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference>();
        c->parent = this;
        ipv6_dhcpv6d_proxy_interface_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_proxy_interface_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-proxy-interface-reference")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::Ipv6Dhcpv6DProxyInterfaceReference()
    :
    proxy_reference_interface_name{YType::str, "proxy-reference-interface-name"}
{
    yang_name = "ipv6-dhcpv6d-proxy-interface-reference"; yang_parent_name = "interface-references";
}

Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::~Ipv6Dhcpv6DProxyInterfaceReference()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::has_data() const
{
    return proxy_reference_interface_name.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_reference_interface_name.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-proxy-interface-reference";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DProxyInterfaceReference' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_reference_interface_name.is_set || is_set(proxy_reference_interface_name.yfilter)) leaf_name_data.push_back(proxy_reference_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-reference-interface-name")
    {
        proxy_reference_interface_name = value;
        proxy_reference_interface_name.value_namespace = name_space;
        proxy_reference_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-reference-interface-name")
    {
        proxy_reference_interface_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-reference-interface-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "proxy";
}

Dhcpv6::Nodes::Node::Proxy::Interfaces::~Interfaces()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_proxy_interface_ambiguous{YType::uint32, "is-proxy-interface-ambiguous"},
    mac_throttle{YType::boolean, "mac-throttle"},
    proxy_interface_lease_limit_type{YType::enumeration, "proxy-interface-lease-limit-type"},
    proxy_interface_lease_limits{YType::uint32, "proxy-interface-lease-limits"},
    proxy_interface_mode{YType::enumeration, "proxy-interface-mode"},
    proxy_interface_profile_name{YType::str, "proxy-interface-profile-name"},
    proxy_vrf_name{YType::str, "proxy-vrf-name"},
    serg_role{YType::enumeration, "serg-role"},
    srg_role{YType::enumeration, "srg-role"},
    srg_vrf_name{YType::str, "srg-vrf-name"},
    srgp2p{YType::boolean, "srgp2p"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::~Interface()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| is_proxy_interface_ambiguous.is_set
	|| mac_throttle.is_set
	|| proxy_interface_lease_limit_type.is_set
	|| proxy_interface_lease_limits.is_set
	|| proxy_interface_mode.is_set
	|| proxy_interface_profile_name.is_set
	|| proxy_vrf_name.is_set
	|| serg_role.is_set
	|| srg_role.is_set
	|| srg_vrf_name.is_set
	|| srgp2p.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_proxy_interface_ambiguous.yfilter)
	|| ydk::is_set(mac_throttle.yfilter)
	|| ydk::is_set(proxy_interface_lease_limit_type.yfilter)
	|| ydk::is_set(proxy_interface_lease_limits.yfilter)
	|| ydk::is_set(proxy_interface_mode.yfilter)
	|| ydk::is_set(proxy_interface_profile_name.yfilter)
	|| ydk::is_set(proxy_vrf_name.yfilter)
	|| ydk::is_set(serg_role.yfilter)
	|| ydk::is_set(srg_role.yfilter)
	|| ydk::is_set(srg_vrf_name.yfilter)
	|| ydk::is_set(srgp2p.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_proxy_interface_ambiguous.is_set || is_set(is_proxy_interface_ambiguous.yfilter)) leaf_name_data.push_back(is_proxy_interface_ambiguous.get_name_leafdata());
    if (mac_throttle.is_set || is_set(mac_throttle.yfilter)) leaf_name_data.push_back(mac_throttle.get_name_leafdata());
    if (proxy_interface_lease_limit_type.is_set || is_set(proxy_interface_lease_limit_type.yfilter)) leaf_name_data.push_back(proxy_interface_lease_limit_type.get_name_leafdata());
    if (proxy_interface_lease_limits.is_set || is_set(proxy_interface_lease_limits.yfilter)) leaf_name_data.push_back(proxy_interface_lease_limits.get_name_leafdata());
    if (proxy_interface_mode.is_set || is_set(proxy_interface_mode.yfilter)) leaf_name_data.push_back(proxy_interface_mode.get_name_leafdata());
    if (proxy_interface_profile_name.is_set || is_set(proxy_interface_profile_name.yfilter)) leaf_name_data.push_back(proxy_interface_profile_name.get_name_leafdata());
    if (proxy_vrf_name.is_set || is_set(proxy_vrf_name.yfilter)) leaf_name_data.push_back(proxy_vrf_name.get_name_leafdata());
    if (serg_role.is_set || is_set(serg_role.yfilter)) leaf_name_data.push_back(serg_role.get_name_leafdata());
    if (srg_role.is_set || is_set(srg_role.yfilter)) leaf_name_data.push_back(srg_role.get_name_leafdata());
    if (srg_vrf_name.is_set || is_set(srg_vrf_name.yfilter)) leaf_name_data.push_back(srg_vrf_name.get_name_leafdata());
    if (srgp2p.is_set || is_set(srgp2p.yfilter)) leaf_name_data.push_back(srgp2p.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-interface-ambiguous")
    {
        is_proxy_interface_ambiguous = value;
        is_proxy_interface_ambiguous.value_namespace = name_space;
        is_proxy_interface_ambiguous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-throttle")
    {
        mac_throttle = value;
        mac_throttle.value_namespace = name_space;
        mac_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface-lease-limit-type")
    {
        proxy_interface_lease_limit_type = value;
        proxy_interface_lease_limit_type.value_namespace = name_space;
        proxy_interface_lease_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface-lease-limits")
    {
        proxy_interface_lease_limits = value;
        proxy_interface_lease_limits.value_namespace = name_space;
        proxy_interface_lease_limits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface-mode")
    {
        proxy_interface_mode = value;
        proxy_interface_mode.value_namespace = name_space;
        proxy_interface_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface-profile-name")
    {
        proxy_interface_profile_name = value;
        proxy_interface_profile_name.value_namespace = name_space;
        proxy_interface_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-vrf-name")
    {
        proxy_vrf_name = value;
        proxy_vrf_name.value_namespace = name_space;
        proxy_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-role")
    {
        serg_role = value;
        serg_role.value_namespace = name_space;
        serg_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-role")
    {
        srg_role = value;
        srg_role.value_namespace = name_space;
        srg_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name = value;
        srg_vrf_name.value_namespace = name_space;
        srg_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgp2p")
    {
        srgp2p = value;
        srgp2p.value_namespace = name_space;
        srgp2p.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-proxy-interface-ambiguous")
    {
        is_proxy_interface_ambiguous.yfilter = yfilter;
    }
    if(value_path == "mac-throttle")
    {
        mac_throttle.yfilter = yfilter;
    }
    if(value_path == "proxy-interface-lease-limit-type")
    {
        proxy_interface_lease_limit_type.yfilter = yfilter;
    }
    if(value_path == "proxy-interface-lease-limits")
    {
        proxy_interface_lease_limits.yfilter = yfilter;
    }
    if(value_path == "proxy-interface-mode")
    {
        proxy_interface_mode.yfilter = yfilter;
    }
    if(value_path == "proxy-interface-profile-name")
    {
        proxy_interface_profile_name.yfilter = yfilter;
    }
    if(value_path == "proxy-vrf-name")
    {
        proxy_vrf_name.yfilter = yfilter;
    }
    if(value_path == "serg-role")
    {
        serg_role.yfilter = yfilter;
    }
    if(value_path == "srg-role")
    {
        srg_role.yfilter = yfilter;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srgp2p")
    {
        srgp2p.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-proxy-interface-ambiguous" || name == "mac-throttle" || name == "proxy-interface-lease-limit-type" || name == "proxy-interface-lease-limits" || name == "proxy-interface-mode" || name == "proxy-interface-profile-name" || name == "proxy-vrf-name" || name == "serg-role" || name == "srg-role" || name == "srg-vrf-name" || name == "srgp2p")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "proxy";
}

Dhcpv6::Nodes::Node::Proxy::Statistics::~Statistics()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_stat.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_proxy_stat.size(); index++)
    {
        if(ipv6_dhcpv6d_proxy_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-proxy-stat")
    {
        for(auto const & c : ipv6_dhcpv6d_proxy_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat>();
        c->parent = this;
        ipv6_dhcpv6d_proxy_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_proxy_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-proxy-stat")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Ipv6Dhcpv6DProxyStat()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv6-dhcpv6d-proxy-stat"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::~Ipv6Dhcpv6DProxyStat()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-proxy-stat";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DProxyStat' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv6-dhcpv6d-proxy-stat";
}

Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::~Statistics_()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Binding()
    :
    clients(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients>())
	,summary(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Summary>())
{
    clients->parent = this;

    summary->parent = this;

    yang_name = "binding"; yang_parent_name = "proxy";
}

Dhcpv6::Nodes::Node::Proxy::Binding::~Binding()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::has_operation() const
{
    return is_set(yfilter)
	|| (clients !=  nullptr && clients->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "summary")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "binding";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::~Clients()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::Client()
    :
    client_id{YType::str, "client-id"},
    access_vrf_name{YType::str, "access-vrf-name"},
    class_name{YType::str, "class-name"},
    client_flag{YType::uint32, "client-flag"},
    duid{YType::str, "duid"},
    framed_ipv6_prefix{YType::str, "framed-ipv6-prefix"},
    framed_prefix_length{YType::uint8, "framed-prefix-length"},
    ia_id_p_ds{YType::uint32, "ia-id-p-ds"},
    interface_name{YType::str, "interface-name"},
    is_nak_next_renew{YType::boolean, "is-nak-next-renew"},
    mac_address{YType::str, "mac-address"},
    pool_name{YType::str, "pool-name"},
    profile_name{YType::str, "profile-name"},
    proxy_binding_inner_tag{YType::uint32, "proxy-binding-inner-tag"},
    proxy_binding_outer_tag{YType::uint32, "proxy-binding-outer-tag"},
    proxy_binding_tags{YType::uint8, "proxy-binding-tags"},
    rx_interface_id{YType::str, "rx-interface-id"},
    rx_remote_id{YType::str, "rx-remote-id"},
    serg_intf_role{YType::uint32, "serg-intf-role"},
    serg_state{YType::uint32, "serg-state"},
    server_ipv6_address{YType::str, "server-ipv6-address"},
    srg_intf_role{YType::uint32, "srg-intf-role"},
    srg_state{YType::uint32, "srg-state"},
    srg_vrf_name{YType::str, "srg-vrf-name"},
    srgp2p{YType::boolean, "srgp2p"},
    subscriber_label{YType::uint32, "subscriber-label"},
    tx_interface_id{YType::str, "tx-interface-id"},
    tx_remote_id{YType::str, "tx-remote-id"},
    vrf_name{YType::str, "vrf-name"}
    	,
    ia_id_pd(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd>())
{
    ia_id_pd->parent = this;

    yang_name = "client"; yang_parent_name = "clients";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::~Client()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::has_data() const
{
    return client_id.is_set
	|| access_vrf_name.is_set
	|| class_name.is_set
	|| client_flag.is_set
	|| duid.is_set
	|| framed_ipv6_prefix.is_set
	|| framed_prefix_length.is_set
	|| ia_id_p_ds.is_set
	|| interface_name.is_set
	|| is_nak_next_renew.is_set
	|| mac_address.is_set
	|| pool_name.is_set
	|| profile_name.is_set
	|| proxy_binding_inner_tag.is_set
	|| proxy_binding_outer_tag.is_set
	|| proxy_binding_tags.is_set
	|| rx_interface_id.is_set
	|| rx_remote_id.is_set
	|| serg_intf_role.is_set
	|| serg_state.is_set
	|| server_ipv6_address.is_set
	|| srg_intf_role.is_set
	|| srg_state.is_set
	|| srg_vrf_name.is_set
	|| srgp2p.is_set
	|| subscriber_label.is_set
	|| tx_interface_id.is_set
	|| tx_remote_id.is_set
	|| vrf_name.is_set
	|| (ia_id_pd !=  nullptr && ia_id_pd->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(access_vrf_name.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(client_flag.yfilter)
	|| ydk::is_set(duid.yfilter)
	|| ydk::is_set(framed_ipv6_prefix.yfilter)
	|| ydk::is_set(framed_prefix_length.yfilter)
	|| ydk::is_set(ia_id_p_ds.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_nak_next_renew.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(proxy_binding_inner_tag.yfilter)
	|| ydk::is_set(proxy_binding_outer_tag.yfilter)
	|| ydk::is_set(proxy_binding_tags.yfilter)
	|| ydk::is_set(rx_interface_id.yfilter)
	|| ydk::is_set(rx_remote_id.yfilter)
	|| ydk::is_set(serg_intf_role.yfilter)
	|| ydk::is_set(serg_state.yfilter)
	|| ydk::is_set(server_ipv6_address.yfilter)
	|| ydk::is_set(srg_intf_role.yfilter)
	|| ydk::is_set(srg_state.yfilter)
	|| ydk::is_set(srg_vrf_name.yfilter)
	|| ydk::is_set(srgp2p.yfilter)
	|| ydk::is_set(subscriber_label.yfilter)
	|| ydk::is_set(tx_interface_id.yfilter)
	|| ydk::is_set(tx_remote_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ia_id_pd !=  nullptr && ia_id_pd->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (access_vrf_name.is_set || is_set(access_vrf_name.yfilter)) leaf_name_data.push_back(access_vrf_name.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (client_flag.is_set || is_set(client_flag.yfilter)) leaf_name_data.push_back(client_flag.get_name_leafdata());
    if (duid.is_set || is_set(duid.yfilter)) leaf_name_data.push_back(duid.get_name_leafdata());
    if (framed_ipv6_prefix.is_set || is_set(framed_ipv6_prefix.yfilter)) leaf_name_data.push_back(framed_ipv6_prefix.get_name_leafdata());
    if (framed_prefix_length.is_set || is_set(framed_prefix_length.yfilter)) leaf_name_data.push_back(framed_prefix_length.get_name_leafdata());
    if (ia_id_p_ds.is_set || is_set(ia_id_p_ds.yfilter)) leaf_name_data.push_back(ia_id_p_ds.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_nak_next_renew.is_set || is_set(is_nak_next_renew.yfilter)) leaf_name_data.push_back(is_nak_next_renew.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (proxy_binding_inner_tag.is_set || is_set(proxy_binding_inner_tag.yfilter)) leaf_name_data.push_back(proxy_binding_inner_tag.get_name_leafdata());
    if (proxy_binding_outer_tag.is_set || is_set(proxy_binding_outer_tag.yfilter)) leaf_name_data.push_back(proxy_binding_outer_tag.get_name_leafdata());
    if (proxy_binding_tags.is_set || is_set(proxy_binding_tags.yfilter)) leaf_name_data.push_back(proxy_binding_tags.get_name_leafdata());
    if (rx_interface_id.is_set || is_set(rx_interface_id.yfilter)) leaf_name_data.push_back(rx_interface_id.get_name_leafdata());
    if (rx_remote_id.is_set || is_set(rx_remote_id.yfilter)) leaf_name_data.push_back(rx_remote_id.get_name_leafdata());
    if (serg_intf_role.is_set || is_set(serg_intf_role.yfilter)) leaf_name_data.push_back(serg_intf_role.get_name_leafdata());
    if (serg_state.is_set || is_set(serg_state.yfilter)) leaf_name_data.push_back(serg_state.get_name_leafdata());
    if (server_ipv6_address.is_set || is_set(server_ipv6_address.yfilter)) leaf_name_data.push_back(server_ipv6_address.get_name_leafdata());
    if (srg_intf_role.is_set || is_set(srg_intf_role.yfilter)) leaf_name_data.push_back(srg_intf_role.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.yfilter)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (srg_vrf_name.is_set || is_set(srg_vrf_name.yfilter)) leaf_name_data.push_back(srg_vrf_name.get_name_leafdata());
    if (srgp2p.is_set || is_set(srgp2p.yfilter)) leaf_name_data.push_back(srgp2p.get_name_leafdata());
    if (subscriber_label.is_set || is_set(subscriber_label.yfilter)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (tx_interface_id.is_set || is_set(tx_interface_id.yfilter)) leaf_name_data.push_back(tx_interface_id.get_name_leafdata());
    if (tx_remote_id.is_set || is_set(tx_remote_id.yfilter)) leaf_name_data.push_back(tx_remote_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ia-id-pd")
    {
        if(ia_id_pd == nullptr)
        {
            ia_id_pd = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd>();
        }
        return ia_id_pd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ia_id_pd != nullptr)
    {
        children["ia-id-pd"] = ia_id_pd;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name = value;
        access_vrf_name.value_namespace = name_space;
        access_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-flag")
    {
        client_flag = value;
        client_flag.value_namespace = name_space;
        client_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duid")
    {
        duid = value;
        duid.value_namespace = name_space;
        duid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framed-ipv6-prefix")
    {
        framed_ipv6_prefix = value;
        framed_ipv6_prefix.value_namespace = name_space;
        framed_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framed-prefix-length")
    {
        framed_prefix_length = value;
        framed_prefix_length.value_namespace = name_space;
        framed_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-id-p-ds")
    {
        ia_id_p_ds = value;
        ia_id_p_ds.value_namespace = name_space;
        ia_id_p_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew = value;
        is_nak_next_renew.value_namespace = name_space;
        is_nak_next_renew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-binding-inner-tag")
    {
        proxy_binding_inner_tag = value;
        proxy_binding_inner_tag.value_namespace = name_space;
        proxy_binding_inner_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-binding-outer-tag")
    {
        proxy_binding_outer_tag = value;
        proxy_binding_outer_tag.value_namespace = name_space;
        proxy_binding_outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-binding-tags")
    {
        proxy_binding_tags = value;
        proxy_binding_tags.value_namespace = name_space;
        proxy_binding_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-interface-id")
    {
        rx_interface_id = value;
        rx_interface_id.value_namespace = name_space;
        rx_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id = value;
        rx_remote_id.value_namespace = name_space;
        rx_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-intf-role")
    {
        serg_intf_role = value;
        serg_intf_role.value_namespace = name_space;
        serg_intf_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-state")
    {
        serg_state = value;
        serg_state.value_namespace = name_space;
        serg_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-ipv6-address")
    {
        server_ipv6_address = value;
        server_ipv6_address.value_namespace = name_space;
        server_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-intf-role")
    {
        srg_intf_role = value;
        srg_intf_role.value_namespace = name_space;
        srg_intf_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
        srg_state.value_namespace = name_space;
        srg_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name = value;
        srg_vrf_name.value_namespace = name_space;
        srg_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgp2p")
    {
        srgp2p = value;
        srgp2p.value_namespace = name_space;
        srgp2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
        subscriber_label.value_namespace = name_space;
        subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-interface-id")
    {
        tx_interface_id = value;
        tx_interface_id.value_namespace = name_space;
        tx_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-remote-id")
    {
        tx_remote_id = value;
        tx_remote_id.value_namespace = name_space;
        tx_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "client-flag")
    {
        client_flag.yfilter = yfilter;
    }
    if(value_path == "duid")
    {
        duid.yfilter = yfilter;
    }
    if(value_path == "framed-ipv6-prefix")
    {
        framed_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "framed-prefix-length")
    {
        framed_prefix_length.yfilter = yfilter;
    }
    if(value_path == "ia-id-p-ds")
    {
        ia_id_p_ds.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "proxy-binding-inner-tag")
    {
        proxy_binding_inner_tag.yfilter = yfilter;
    }
    if(value_path == "proxy-binding-outer-tag")
    {
        proxy_binding_outer_tag.yfilter = yfilter;
    }
    if(value_path == "proxy-binding-tags")
    {
        proxy_binding_tags.yfilter = yfilter;
    }
    if(value_path == "rx-interface-id")
    {
        rx_interface_id.yfilter = yfilter;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id.yfilter = yfilter;
    }
    if(value_path == "serg-intf-role")
    {
        serg_intf_role.yfilter = yfilter;
    }
    if(value_path == "serg-state")
    {
        serg_state.yfilter = yfilter;
    }
    if(value_path == "server-ipv6-address")
    {
        server_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "srg-intf-role")
    {
        srg_intf_role.yfilter = yfilter;
    }
    if(value_path == "srg-state")
    {
        srg_state.yfilter = yfilter;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srgp2p")
    {
        srgp2p.yfilter = yfilter;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label.yfilter = yfilter;
    }
    if(value_path == "tx-interface-id")
    {
        tx_interface_id.yfilter = yfilter;
    }
    if(value_path == "tx-remote-id")
    {
        tx_remote_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ia-id-pd" || name == "client-id" || name == "access-vrf-name" || name == "class-name" || name == "client-flag" || name == "duid" || name == "framed-ipv6-prefix" || name == "framed-prefix-length" || name == "ia-id-p-ds" || name == "interface-name" || name == "is-nak-next-renew" || name == "mac-address" || name == "pool-name" || name == "profile-name" || name == "proxy-binding-inner-tag" || name == "proxy-binding-outer-tag" || name == "proxy-binding-tags" || name == "rx-interface-id" || name == "rx-remote-id" || name == "serg-intf-role" || name == "serg-state" || name == "server-ipv6-address" || name == "srg-intf-role" || name == "srg-state" || name == "srg-vrf-name" || name == "srgp2p" || name == "subscriber-label" || name == "tx-interface-id" || name == "tx-remote-id" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::IaIdPd()
{
    yang_name = "ia-id-pd"; yang_parent_name = "client";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::~IaIdPd()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::has_data() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_ia_id_pd_info.size(); index++)
    {
        if(bag_dhcpv6d_ia_id_pd_info[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::has_operation() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_ia_id_pd_info.size(); index++)
    {
        if(bag_dhcpv6d_ia_id_pd_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-id-pd";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IaIdPd' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bag-dhcpv6d-ia-id-pd-info")
    {
        for(auto const & c : bag_dhcpv6d_ia_id_pd_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo>();
        c->parent = this;
        bag_dhcpv6d_ia_id_pd_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bag_dhcpv6d_ia_id_pd_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bag-dhcpv6d-ia-id-pd-info")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::BagDhcpv6DIaIdPdInfo()
    :
    flags{YType::uint32, "flags"},
    ia_id{YType::uint32, "ia-id"},
    ia_type{YType::enumeration, "ia-type"},
    state{YType::enumeration, "state"},
    total_address{YType::uint16, "total-address"}
    	,
    addresses(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses>())
{
    addresses->parent = this;

    yang_name = "bag-dhcpv6d-ia-id-pd-info"; yang_parent_name = "ia-id-pd";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::~BagDhcpv6DIaIdPdInfo()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::has_data() const
{
    return flags.is_set
	|| ia_id.is_set
	|| ia_type.is_set
	|| state.is_set
	|| total_address.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ia_id.yfilter)
	|| ydk::is_set(ia_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(total_address.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bag-dhcpv6d-ia-id-pd-info";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BagDhcpv6DIaIdPdInfo' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ia_id.is_set || is_set(ia_id.yfilter)) leaf_name_data.push_back(ia_id.get_name_leafdata());
    if (ia_type.is_set || is_set(ia_type.yfilter)) leaf_name_data.push_back(ia_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_address.is_set || is_set(total_address.yfilter)) leaf_name_data.push_back(total_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-id")
    {
        ia_id = value;
        ia_id.value_namespace = name_space;
        ia_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-type")
    {
        ia_type = value;
        ia_type.value_namespace = name_space;
        ia_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-address")
    {
        total_address = value;
        total_address.value_namespace = name_space;
        total_address.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ia-id")
    {
        ia_id.yfilter = yfilter;
    }
    if(value_path == "ia-type")
    {
        ia_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "total-address")
    {
        total_address.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "flags" || name == "ia-id" || name == "ia-type" || name == "state" || name == "total-address")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "bag-dhcpv6d-ia-id-pd-info";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::~Addresses()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::has_data() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_addr_attrb.size(); index++)
    {
        if(bag_dhcpv6d_addr_attrb[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::has_operation() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_addr_attrb.size(); index++)
    {
        if(bag_dhcpv6d_addr_attrb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bag-dhcpv6d-addr-attrb")
    {
        for(auto const & c : bag_dhcpv6d_addr_attrb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb>();
        c->parent = this;
        bag_dhcpv6d_addr_attrb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bag_dhcpv6d_addr_attrb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bag-dhcpv6d-addr-attrb")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::BagDhcpv6DAddrAttrb()
    :
    lease_time{YType::uint32, "lease-time"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    remaining_lease_time{YType::uint32, "remaining-lease-time"}
{
    yang_name = "bag-dhcpv6d-addr-attrb"; yang_parent_name = "addresses";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::~BagDhcpv6DAddrAttrb()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::has_data() const
{
    return lease_time.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| remaining_lease_time.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lease_time.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(remaining_lease_time.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bag-dhcpv6d-addr-attrb";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BagDhcpv6DAddrAttrb' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lease_time.is_set || is_set(lease_time.yfilter)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (remaining_lease_time.is_set || is_set(remaining_lease_time.yfilter)) leaf_name_data.push_back(remaining_lease_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lease-time")
    {
        lease_time = value;
        lease_time.value_namespace = name_space;
        lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time = value;
        remaining_lease_time.value_namespace = name_space;
        remaining_lease_time.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lease-time")
    {
        lease_time.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lease-time" || name == "prefix" || name == "prefix-length" || name == "remaining-lease-time")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Summary()
    :
    clients{YType::uint32, "clients"}
    	,
    iana(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana>())
	,iapd(std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd>())
{
    iana->parent = this;

    iapd->parent = this;

    yang_name = "summary"; yang_parent_name = "binding";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Summary::~Summary()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::has_data() const
{
    return clients.is_set
	|| (iana !=  nullptr && iana->has_data())
	|| (iapd !=  nullptr && iapd->has_data());
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clients.yfilter)
	|| (iana !=  nullptr && iana->has_operation())
	|| (iapd !=  nullptr && iapd->has_operation());
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clients.is_set || is_set(clients.yfilter)) leaf_name_data.push_back(clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iana")
    {
        if(iana == nullptr)
        {
            iana = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana>();
        }
        return iana;
    }

    if(child_yang_name == "iapd")
    {
        if(iapd == nullptr)
        {
            iapd = std::make_shared<Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd>();
        }
        return iapd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iana != nullptr)
    {
        children["iana"] = iana;
    }

    if(iapd != nullptr)
    {
        children["iapd"] = iapd;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clients")
    {
        clients = value;
        clients.value_namespace = name_space;
        clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iana" || name == "iapd" || name == "clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::Iana()
    :
    bound_clients{YType::uint32, "bound-clients"},
    daps_waiting_clients{YType::uint32, "daps-waiting-clients"},
    dpm_waiting_clients{YType::uint32, "dpm-waiting-clients"},
    iedge_waiting_clients{YType::uint32, "iedge-waiting-clients"},
    initializing_clients{YType::uint32, "initializing-clients"},
    msg_waiting_clients{YType::uint32, "msg-waiting-clients"},
    rib_waiting_clients{YType::uint32, "rib-waiting-clients"}
{
    yang_name = "iana"; yang_parent_name = "summary";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::~Iana()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::has_data() const
{
    return bound_clients.is_set
	|| daps_waiting_clients.is_set
	|| dpm_waiting_clients.is_set
	|| iedge_waiting_clients.is_set
	|| initializing_clients.is_set
	|| msg_waiting_clients.is_set
	|| rib_waiting_clients.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_clients.yfilter)
	|| ydk::is_set(daps_waiting_clients.yfilter)
	|| ydk::is_set(dpm_waiting_clients.yfilter)
	|| ydk::is_set(iedge_waiting_clients.yfilter)
	|| ydk::is_set(initializing_clients.yfilter)
	|| ydk::is_set(msg_waiting_clients.yfilter)
	|| ydk::is_set(rib_waiting_clients.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iana";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iana' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_clients.is_set || is_set(bound_clients.yfilter)) leaf_name_data.push_back(bound_clients.get_name_leafdata());
    if (daps_waiting_clients.is_set || is_set(daps_waiting_clients.yfilter)) leaf_name_data.push_back(daps_waiting_clients.get_name_leafdata());
    if (dpm_waiting_clients.is_set || is_set(dpm_waiting_clients.yfilter)) leaf_name_data.push_back(dpm_waiting_clients.get_name_leafdata());
    if (iedge_waiting_clients.is_set || is_set(iedge_waiting_clients.yfilter)) leaf_name_data.push_back(iedge_waiting_clients.get_name_leafdata());
    if (initializing_clients.is_set || is_set(initializing_clients.yfilter)) leaf_name_data.push_back(initializing_clients.get_name_leafdata());
    if (msg_waiting_clients.is_set || is_set(msg_waiting_clients.yfilter)) leaf_name_data.push_back(msg_waiting_clients.get_name_leafdata());
    if (rib_waiting_clients.is_set || is_set(rib_waiting_clients.yfilter)) leaf_name_data.push_back(rib_waiting_clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-clients")
    {
        bound_clients = value;
        bound_clients.value_namespace = name_space;
        bound_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients = value;
        daps_waiting_clients.value_namespace = name_space;
        daps_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients = value;
        dpm_waiting_clients.value_namespace = name_space;
        dpm_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients = value;
        iedge_waiting_clients.value_namespace = name_space;
        iedge_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients = value;
        initializing_clients.value_namespace = name_space;
        initializing_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-waiting-clients")
    {
        msg_waiting_clients = value;
        msg_waiting_clients.value_namespace = name_space;
        msg_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients = value;
        rib_waiting_clients.value_namespace = name_space;
        rib_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-clients")
    {
        bound_clients.yfilter = yfilter;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients.yfilter = yfilter;
    }
    if(value_path == "msg-waiting-clients")
    {
        msg_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-clients" || name == "daps-waiting-clients" || name == "dpm-waiting-clients" || name == "iedge-waiting-clients" || name == "initializing-clients" || name == "msg-waiting-clients" || name == "rib-waiting-clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::Iapd()
    :
    bound_clients{YType::uint32, "bound-clients"},
    daps_waiting_clients{YType::uint32, "daps-waiting-clients"},
    dpm_waiting_clients{YType::uint32, "dpm-waiting-clients"},
    iedge_waiting_clients{YType::uint32, "iedge-waiting-clients"},
    initializing_clients{YType::uint32, "initializing-clients"},
    msg_waiting_clients{YType::uint32, "msg-waiting-clients"},
    rib_waiting_clients{YType::uint32, "rib-waiting-clients"}
{
    yang_name = "iapd"; yang_parent_name = "summary";
}

Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::~Iapd()
{
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::has_data() const
{
    return bound_clients.is_set
	|| daps_waiting_clients.is_set
	|| dpm_waiting_clients.is_set
	|| iedge_waiting_clients.is_set
	|| initializing_clients.is_set
	|| msg_waiting_clients.is_set
	|| rib_waiting_clients.is_set;
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_clients.yfilter)
	|| ydk::is_set(daps_waiting_clients.yfilter)
	|| ydk::is_set(dpm_waiting_clients.yfilter)
	|| ydk::is_set(iedge_waiting_clients.yfilter)
	|| ydk::is_set(initializing_clients.yfilter)
	|| ydk::is_set(msg_waiting_clients.yfilter)
	|| ydk::is_set(rib_waiting_clients.yfilter);
}

std::string Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iapd";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iapd' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_clients.is_set || is_set(bound_clients.yfilter)) leaf_name_data.push_back(bound_clients.get_name_leafdata());
    if (daps_waiting_clients.is_set || is_set(daps_waiting_clients.yfilter)) leaf_name_data.push_back(daps_waiting_clients.get_name_leafdata());
    if (dpm_waiting_clients.is_set || is_set(dpm_waiting_clients.yfilter)) leaf_name_data.push_back(dpm_waiting_clients.get_name_leafdata());
    if (iedge_waiting_clients.is_set || is_set(iedge_waiting_clients.yfilter)) leaf_name_data.push_back(iedge_waiting_clients.get_name_leafdata());
    if (initializing_clients.is_set || is_set(initializing_clients.yfilter)) leaf_name_data.push_back(initializing_clients.get_name_leafdata());
    if (msg_waiting_clients.is_set || is_set(msg_waiting_clients.yfilter)) leaf_name_data.push_back(msg_waiting_clients.get_name_leafdata());
    if (rib_waiting_clients.is_set || is_set(rib_waiting_clients.yfilter)) leaf_name_data.push_back(rib_waiting_clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-clients")
    {
        bound_clients = value;
        bound_clients.value_namespace = name_space;
        bound_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients = value;
        daps_waiting_clients.value_namespace = name_space;
        daps_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients = value;
        dpm_waiting_clients.value_namespace = name_space;
        dpm_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients = value;
        iedge_waiting_clients.value_namespace = name_space;
        iedge_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients = value;
        initializing_clients.value_namespace = name_space;
        initializing_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-waiting-clients")
    {
        msg_waiting_clients = value;
        msg_waiting_clients.value_namespace = name_space;
        msg_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients = value;
        rib_waiting_clients.value_namespace = name_space;
        rib_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-clients")
    {
        bound_clients.yfilter = yfilter;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients.yfilter = yfilter;
    }
    if(value_path == "msg-waiting-clients")
    {
        msg_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-clients" || name == "daps-waiting-clients" || name == "dpm-waiting-clients" || name == "iedge-waiting-clients" || name == "initializing-clients" || name == "msg-waiting-clients" || name == "rib-waiting-clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Base::Base()
    :
    addr_bindings(std::make_shared<Dhcpv6::Nodes::Node::Base::AddrBindings>())
	,database(std::make_shared<Dhcpv6::Nodes::Node::Base::Database>())
{
    addr_bindings->parent = this;

    database->parent = this;

    yang_name = "base"; yang_parent_name = "node";
}

Dhcpv6::Nodes::Node::Base::~Base()
{
}

bool Dhcpv6::Nodes::Node::Base::has_data() const
{
    return (addr_bindings !=  nullptr && addr_bindings->has_data())
	|| (database !=  nullptr && database->has_data());
}

bool Dhcpv6::Nodes::Node::Base::has_operation() const
{
    return is_set(yfilter)
	|| (addr_bindings !=  nullptr && addr_bindings->has_operation())
	|| (database !=  nullptr && database->has_operation());
}

std::string Dhcpv6::Nodes::Node::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-bindings")
    {
        if(addr_bindings == nullptr)
        {
            addr_bindings = std::make_shared<Dhcpv6::Nodes::Node::Base::AddrBindings>();
        }
        return addr_bindings;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Dhcpv6::Nodes::Node::Base::Database>();
        }
        return database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr_bindings != nullptr)
    {
        children["addr-bindings"] = addr_bindings;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-bindings" || name == "database")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Base::Database::Database()
    :
    configured{YType::boolean, "configured"},
    failed_full_file_write_count{YType::uint32, "failed-full-file-write-count"},
    failed_incremental_file_write_count{YType::uint32, "failed-incremental-file-write-count"},
    full_file_record_count{YType::uint32, "full-file-record-count"},
    full_file_write_count{YType::uint32, "full-file-write-count"},
    full_file_write_interval{YType::uint32, "full-file-write-interval"},
    incremental_file_record_count{YType::uint32, "incremental-file-record-count"},
    incremental_file_write_count{YType::uint32, "incremental-file-write-count"},
    incremental_file_write_interval{YType::uint32, "incremental-file-write-interval"},
    last_full_file_write_error_timestamp{YType::uint32, "last-full-file-write-error-timestamp"},
    last_full_write_file_name{YType::str, "last-full-write-file-name"},
    last_full_write_time{YType::uint32, "last-full-write-time"},
    last_incremental_file_write_error_timestamp{YType::uint32, "last-incremental-file-write-error-timestamp"},
    last_incremental_write_file_name{YType::str, "last-incremental-write-file-name"},
    last_incremental_write_time{YType::uint32, "last-incremental-write-time"},
    version{YType::uint32, "version"}
{
    yang_name = "database"; yang_parent_name = "base";
}

Dhcpv6::Nodes::Node::Base::Database::~Database()
{
}

bool Dhcpv6::Nodes::Node::Base::Database::has_data() const
{
    return configured.is_set
	|| failed_full_file_write_count.is_set
	|| failed_incremental_file_write_count.is_set
	|| full_file_record_count.is_set
	|| full_file_write_count.is_set
	|| full_file_write_interval.is_set
	|| incremental_file_record_count.is_set
	|| incremental_file_write_count.is_set
	|| incremental_file_write_interval.is_set
	|| last_full_file_write_error_timestamp.is_set
	|| last_full_write_file_name.is_set
	|| last_full_write_time.is_set
	|| last_incremental_file_write_error_timestamp.is_set
	|| last_incremental_write_file_name.is_set
	|| last_incremental_write_time.is_set
	|| version.is_set;
}

bool Dhcpv6::Nodes::Node::Base::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(failed_full_file_write_count.yfilter)
	|| ydk::is_set(failed_incremental_file_write_count.yfilter)
	|| ydk::is_set(full_file_record_count.yfilter)
	|| ydk::is_set(full_file_write_count.yfilter)
	|| ydk::is_set(full_file_write_interval.yfilter)
	|| ydk::is_set(incremental_file_record_count.yfilter)
	|| ydk::is_set(incremental_file_write_count.yfilter)
	|| ydk::is_set(incremental_file_write_interval.yfilter)
	|| ydk::is_set(last_full_file_write_error_timestamp.yfilter)
	|| ydk::is_set(last_full_write_file_name.yfilter)
	|| ydk::is_set(last_full_write_time.yfilter)
	|| ydk::is_set(last_incremental_file_write_error_timestamp.yfilter)
	|| ydk::is_set(last_incremental_write_file_name.yfilter)
	|| ydk::is_set(last_incremental_write_time.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Dhcpv6::Nodes::Node::Base::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Base::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Database' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (failed_full_file_write_count.is_set || is_set(failed_full_file_write_count.yfilter)) leaf_name_data.push_back(failed_full_file_write_count.get_name_leafdata());
    if (failed_incremental_file_write_count.is_set || is_set(failed_incremental_file_write_count.yfilter)) leaf_name_data.push_back(failed_incremental_file_write_count.get_name_leafdata());
    if (full_file_record_count.is_set || is_set(full_file_record_count.yfilter)) leaf_name_data.push_back(full_file_record_count.get_name_leafdata());
    if (full_file_write_count.is_set || is_set(full_file_write_count.yfilter)) leaf_name_data.push_back(full_file_write_count.get_name_leafdata());
    if (full_file_write_interval.is_set || is_set(full_file_write_interval.yfilter)) leaf_name_data.push_back(full_file_write_interval.get_name_leafdata());
    if (incremental_file_record_count.is_set || is_set(incremental_file_record_count.yfilter)) leaf_name_data.push_back(incremental_file_record_count.get_name_leafdata());
    if (incremental_file_write_count.is_set || is_set(incremental_file_write_count.yfilter)) leaf_name_data.push_back(incremental_file_write_count.get_name_leafdata());
    if (incremental_file_write_interval.is_set || is_set(incremental_file_write_interval.yfilter)) leaf_name_data.push_back(incremental_file_write_interval.get_name_leafdata());
    if (last_full_file_write_error_timestamp.is_set || is_set(last_full_file_write_error_timestamp.yfilter)) leaf_name_data.push_back(last_full_file_write_error_timestamp.get_name_leafdata());
    if (last_full_write_file_name.is_set || is_set(last_full_write_file_name.yfilter)) leaf_name_data.push_back(last_full_write_file_name.get_name_leafdata());
    if (last_full_write_time.is_set || is_set(last_full_write_time.yfilter)) leaf_name_data.push_back(last_full_write_time.get_name_leafdata());
    if (last_incremental_file_write_error_timestamp.is_set || is_set(last_incremental_file_write_error_timestamp.yfilter)) leaf_name_data.push_back(last_incremental_file_write_error_timestamp.get_name_leafdata());
    if (last_incremental_write_file_name.is_set || is_set(last_incremental_write_file_name.yfilter)) leaf_name_data.push_back(last_incremental_write_file_name.get_name_leafdata());
    if (last_incremental_write_time.is_set || is_set(last_incremental_write_time.yfilter)) leaf_name_data.push_back(last_incremental_write_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Base::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Base::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Base::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-full-file-write-count")
    {
        failed_full_file_write_count = value;
        failed_full_file_write_count.value_namespace = name_space;
        failed_full_file_write_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-incremental-file-write-count")
    {
        failed_incremental_file_write_count = value;
        failed_incremental_file_write_count.value_namespace = name_space;
        failed_incremental_file_write_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-file-record-count")
    {
        full_file_record_count = value;
        full_file_record_count.value_namespace = name_space;
        full_file_record_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-file-write-count")
    {
        full_file_write_count = value;
        full_file_write_count.value_namespace = name_space;
        full_file_write_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-file-write-interval")
    {
        full_file_write_interval = value;
        full_file_write_interval.value_namespace = name_space;
        full_file_write_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incremental-file-record-count")
    {
        incremental_file_record_count = value;
        incremental_file_record_count.value_namespace = name_space;
        incremental_file_record_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incremental-file-write-count")
    {
        incremental_file_write_count = value;
        incremental_file_write_count.value_namespace = name_space;
        incremental_file_write_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incremental-file-write-interval")
    {
        incremental_file_write_interval = value;
        incremental_file_write_interval.value_namespace = name_space;
        incremental_file_write_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-full-file-write-error-timestamp")
    {
        last_full_file_write_error_timestamp = value;
        last_full_file_write_error_timestamp.value_namespace = name_space;
        last_full_file_write_error_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-full-write-file-name")
    {
        last_full_write_file_name = value;
        last_full_write_file_name.value_namespace = name_space;
        last_full_write_file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-full-write-time")
    {
        last_full_write_time = value;
        last_full_write_time.value_namespace = name_space;
        last_full_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-incremental-file-write-error-timestamp")
    {
        last_incremental_file_write_error_timestamp = value;
        last_incremental_file_write_error_timestamp.value_namespace = name_space;
        last_incremental_file_write_error_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-incremental-write-file-name")
    {
        last_incremental_write_file_name = value;
        last_incremental_write_file_name.value_namespace = name_space;
        last_incremental_write_file_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-incremental-write-time")
    {
        last_incremental_write_time = value;
        last_incremental_write_time.value_namespace = name_space;
        last_incremental_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Base::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "failed-full-file-write-count")
    {
        failed_full_file_write_count.yfilter = yfilter;
    }
    if(value_path == "failed-incremental-file-write-count")
    {
        failed_incremental_file_write_count.yfilter = yfilter;
    }
    if(value_path == "full-file-record-count")
    {
        full_file_record_count.yfilter = yfilter;
    }
    if(value_path == "full-file-write-count")
    {
        full_file_write_count.yfilter = yfilter;
    }
    if(value_path == "full-file-write-interval")
    {
        full_file_write_interval.yfilter = yfilter;
    }
    if(value_path == "incremental-file-record-count")
    {
        incremental_file_record_count.yfilter = yfilter;
    }
    if(value_path == "incremental-file-write-count")
    {
        incremental_file_write_count.yfilter = yfilter;
    }
    if(value_path == "incremental-file-write-interval")
    {
        incremental_file_write_interval.yfilter = yfilter;
    }
    if(value_path == "last-full-file-write-error-timestamp")
    {
        last_full_file_write_error_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-full-write-file-name")
    {
        last_full_write_file_name.yfilter = yfilter;
    }
    if(value_path == "last-full-write-time")
    {
        last_full_write_time.yfilter = yfilter;
    }
    if(value_path == "last-incremental-file-write-error-timestamp")
    {
        last_incremental_file_write_error_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-incremental-write-file-name")
    {
        last_incremental_write_file_name.yfilter = yfilter;
    }
    if(value_path == "last-incremental-write-time")
    {
        last_incremental_write_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Base::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured" || name == "failed-full-file-write-count" || name == "failed-incremental-file-write-count" || name == "full-file-record-count" || name == "full-file-write-count" || name == "full-file-write-interval" || name == "incremental-file-record-count" || name == "incremental-file-write-count" || name == "incremental-file-write-interval" || name == "last-full-file-write-error-timestamp" || name == "last-full-write-file-name" || name == "last-full-write-time" || name == "last-incremental-file-write-error-timestamp" || name == "last-incremental-write-file-name" || name == "last-incremental-write-time" || name == "version")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBindings()
{
    yang_name = "addr-bindings"; yang_parent_name = "base";
}

Dhcpv6::Nodes::Node::Base::AddrBindings::~AddrBindings()
{
}

bool Dhcpv6::Nodes::Node::Base::AddrBindings::has_data() const
{
    for (std::size_t index=0; index<addr_binding.size(); index++)
    {
        if(addr_binding[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Base::AddrBindings::has_operation() const
{
    for (std::size_t index=0; index<addr_binding.size(); index++)
    {
        if(addr_binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Base::AddrBindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-bindings";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Base::AddrBindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddrBindings' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Base::AddrBindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-binding")
    {
        for(auto const & c : addr_binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding>();
        c->parent = this;
        addr_binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Base::AddrBindings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addr_binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Base::AddrBindings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Base::AddrBindings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Base::AddrBindings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-binding")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::AddrBinding()
    :
    addr_string{YType::str, "addr-string"},
    access_vrf_name{YType::str, "access-vrf-name"},
    base_binding_inner_tag{YType::uint32, "base-binding-inner-tag"},
    base_binding_outer_tag{YType::uint32, "base-binding-outer-tag"},
    base_binding_tags{YType::uint8, "base-binding-tags"},
    interface_name{YType::str, "interface-name"},
    ipv6_address{YType::str, "ipv6-address"},
    is_nak_next_renew{YType::boolean, "is-nak-next-renew"},
    lease_time{YType::uint32, "lease-time"},
    mac_address{YType::str, "mac-address"},
    old_subscriber_label{YType::uint32, "old-subscriber-label"},
    profile_name{YType::str, "profile-name"},
    remaining_lease_time{YType::uint32, "remaining-lease-time"},
    reply_server_ipv6_address{YType::str, "reply-server-ipv6-address"},
    rx_client_duid{YType::str, "rx-client-duid"},
    rx_interface_id{YType::str, "rx-interface-id"},
    rx_remote_id{YType::str, "rx-remote-id"},
    server_ipv6_address{YType::str, "server-ipv6-address"},
    server_vrf_name{YType::str, "server-vrf-name"},
    state{YType::enumeration, "state"},
    subscriber_label{YType::uint32, "subscriber-label"},
    tx_client_uid{YType::str, "tx-client-uid"},
    tx_interface_id{YType::str, "tx-interface-id"},
    tx_remote_id{YType::str, "tx-remote-id"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "addr-binding"; yang_parent_name = "addr-bindings";
}

Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::~AddrBinding()
{
}

bool Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::has_data() const
{
    return addr_string.is_set
	|| access_vrf_name.is_set
	|| base_binding_inner_tag.is_set
	|| base_binding_outer_tag.is_set
	|| base_binding_tags.is_set
	|| interface_name.is_set
	|| ipv6_address.is_set
	|| is_nak_next_renew.is_set
	|| lease_time.is_set
	|| mac_address.is_set
	|| old_subscriber_label.is_set
	|| profile_name.is_set
	|| remaining_lease_time.is_set
	|| reply_server_ipv6_address.is_set
	|| rx_client_duid.is_set
	|| rx_interface_id.is_set
	|| rx_remote_id.is_set
	|| server_ipv6_address.is_set
	|| server_vrf_name.is_set
	|| state.is_set
	|| subscriber_label.is_set
	|| tx_client_uid.is_set
	|| tx_interface_id.is_set
	|| tx_remote_id.is_set
	|| vrf_name.is_set;
}

bool Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_string.yfilter)
	|| ydk::is_set(access_vrf_name.yfilter)
	|| ydk::is_set(base_binding_inner_tag.yfilter)
	|| ydk::is_set(base_binding_outer_tag.yfilter)
	|| ydk::is_set(base_binding_tags.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(is_nak_next_renew.yfilter)
	|| ydk::is_set(lease_time.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(old_subscriber_label.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(remaining_lease_time.yfilter)
	|| ydk::is_set(reply_server_ipv6_address.yfilter)
	|| ydk::is_set(rx_client_duid.yfilter)
	|| ydk::is_set(rx_interface_id.yfilter)
	|| ydk::is_set(rx_remote_id.yfilter)
	|| ydk::is_set(server_ipv6_address.yfilter)
	|| ydk::is_set(server_vrf_name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(subscriber_label.yfilter)
	|| ydk::is_set(tx_client_uid.yfilter)
	|| ydk::is_set(tx_interface_id.yfilter)
	|| ydk::is_set(tx_remote_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-binding" <<"[addr-string='" <<addr_string <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddrBinding' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_string.is_set || is_set(addr_string.yfilter)) leaf_name_data.push_back(addr_string.get_name_leafdata());
    if (access_vrf_name.is_set || is_set(access_vrf_name.yfilter)) leaf_name_data.push_back(access_vrf_name.get_name_leafdata());
    if (base_binding_inner_tag.is_set || is_set(base_binding_inner_tag.yfilter)) leaf_name_data.push_back(base_binding_inner_tag.get_name_leafdata());
    if (base_binding_outer_tag.is_set || is_set(base_binding_outer_tag.yfilter)) leaf_name_data.push_back(base_binding_outer_tag.get_name_leafdata());
    if (base_binding_tags.is_set || is_set(base_binding_tags.yfilter)) leaf_name_data.push_back(base_binding_tags.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (is_nak_next_renew.is_set || is_set(is_nak_next_renew.yfilter)) leaf_name_data.push_back(is_nak_next_renew.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.yfilter)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (old_subscriber_label.is_set || is_set(old_subscriber_label.yfilter)) leaf_name_data.push_back(old_subscriber_label.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (remaining_lease_time.is_set || is_set(remaining_lease_time.yfilter)) leaf_name_data.push_back(remaining_lease_time.get_name_leafdata());
    if (reply_server_ipv6_address.is_set || is_set(reply_server_ipv6_address.yfilter)) leaf_name_data.push_back(reply_server_ipv6_address.get_name_leafdata());
    if (rx_client_duid.is_set || is_set(rx_client_duid.yfilter)) leaf_name_data.push_back(rx_client_duid.get_name_leafdata());
    if (rx_interface_id.is_set || is_set(rx_interface_id.yfilter)) leaf_name_data.push_back(rx_interface_id.get_name_leafdata());
    if (rx_remote_id.is_set || is_set(rx_remote_id.yfilter)) leaf_name_data.push_back(rx_remote_id.get_name_leafdata());
    if (server_ipv6_address.is_set || is_set(server_ipv6_address.yfilter)) leaf_name_data.push_back(server_ipv6_address.get_name_leafdata());
    if (server_vrf_name.is_set || is_set(server_vrf_name.yfilter)) leaf_name_data.push_back(server_vrf_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_label.is_set || is_set(subscriber_label.yfilter)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (tx_client_uid.is_set || is_set(tx_client_uid.yfilter)) leaf_name_data.push_back(tx_client_uid.get_name_leafdata());
    if (tx_interface_id.is_set || is_set(tx_interface_id.yfilter)) leaf_name_data.push_back(tx_interface_id.get_name_leafdata());
    if (tx_remote_id.is_set || is_set(tx_remote_id.yfilter)) leaf_name_data.push_back(tx_remote_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-string")
    {
        addr_string = value;
        addr_string.value_namespace = name_space;
        addr_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name = value;
        access_vrf_name.value_namespace = name_space;
        access_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-binding-inner-tag")
    {
        base_binding_inner_tag = value;
        base_binding_inner_tag.value_namespace = name_space;
        base_binding_inner_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-binding-outer-tag")
    {
        base_binding_outer_tag = value;
        base_binding_outer_tag.value_namespace = name_space;
        base_binding_outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-binding-tags")
    {
        base_binding_tags = value;
        base_binding_tags.value_namespace = name_space;
        base_binding_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew = value;
        is_nak_next_renew.value_namespace = name_space;
        is_nak_next_renew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
        lease_time.value_namespace = name_space;
        lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-subscriber-label")
    {
        old_subscriber_label = value;
        old_subscriber_label.value_namespace = name_space;
        old_subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time = value;
        remaining_lease_time.value_namespace = name_space;
        remaining_lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-server-ipv6-address")
    {
        reply_server_ipv6_address = value;
        reply_server_ipv6_address.value_namespace = name_space;
        reply_server_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-client-duid")
    {
        rx_client_duid = value;
        rx_client_duid.value_namespace = name_space;
        rx_client_duid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-interface-id")
    {
        rx_interface_id = value;
        rx_interface_id.value_namespace = name_space;
        rx_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id = value;
        rx_remote_id.value_namespace = name_space;
        rx_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-ipv6-address")
    {
        server_ipv6_address = value;
        server_ipv6_address.value_namespace = name_space;
        server_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-vrf-name")
    {
        server_vrf_name = value;
        server_vrf_name.value_namespace = name_space;
        server_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
        subscriber_label.value_namespace = name_space;
        subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-client-uid")
    {
        tx_client_uid = value;
        tx_client_uid.value_namespace = name_space;
        tx_client_uid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-interface-id")
    {
        tx_interface_id = value;
        tx_interface_id.value_namespace = name_space;
        tx_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-remote-id")
    {
        tx_remote_id = value;
        tx_remote_id.value_namespace = name_space;
        tx_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-string")
    {
        addr_string.yfilter = yfilter;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name.yfilter = yfilter;
    }
    if(value_path == "base-binding-inner-tag")
    {
        base_binding_inner_tag.yfilter = yfilter;
    }
    if(value_path == "base-binding-outer-tag")
    {
        base_binding_outer_tag.yfilter = yfilter;
    }
    if(value_path == "base-binding-tags")
    {
        base_binding_tags.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew.yfilter = yfilter;
    }
    if(value_path == "lease-time")
    {
        lease_time.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "old-subscriber-label")
    {
        old_subscriber_label.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time.yfilter = yfilter;
    }
    if(value_path == "reply-server-ipv6-address")
    {
        reply_server_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "rx-client-duid")
    {
        rx_client_duid.yfilter = yfilter;
    }
    if(value_path == "rx-interface-id")
    {
        rx_interface_id.yfilter = yfilter;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id.yfilter = yfilter;
    }
    if(value_path == "server-ipv6-address")
    {
        server_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "server-vrf-name")
    {
        server_vrf_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label.yfilter = yfilter;
    }
    if(value_path == "tx-client-uid")
    {
        tx_client_uid.yfilter = yfilter;
    }
    if(value_path == "tx-interface-id")
    {
        tx_interface_id.yfilter = yfilter;
    }
    if(value_path == "tx-remote-id")
    {
        tx_remote_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-string" || name == "access-vrf-name" || name == "base-binding-inner-tag" || name == "base-binding-outer-tag" || name == "base-binding-tags" || name == "interface-name" || name == "ipv6-address" || name == "is-nak-next-renew" || name == "lease-time" || name == "mac-address" || name == "old-subscriber-label" || name == "profile-name" || name == "remaining-lease-time" || name == "reply-server-ipv6-address" || name == "rx-client-duid" || name == "rx-interface-id" || name == "rx-remote-id" || name == "server-ipv6-address" || name == "server-vrf-name" || name == "state" || name == "subscriber-label" || name == "tx-client-uid" || name == "tx-interface-id" || name == "tx-remote-id" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Server()
    :
    binding(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding>())
	,binding_options(std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions>())
	,interfaces(std::make_shared<Dhcpv6::Nodes::Node::Server::Interfaces>())
	,profiles(std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles>())
	,statistics(std::make_shared<Dhcpv6::Nodes::Node::Server::Statistics>())
	,vrfs(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs>())
{
    binding->parent = this;

    binding_options->parent = this;

    interfaces->parent = this;

    profiles->parent = this;

    statistics->parent = this;

    vrfs->parent = this;

    yang_name = "server"; yang_parent_name = "node";
}

Dhcpv6::Nodes::Node::Server::~Server()
{
}

bool Dhcpv6::Nodes::Node::Server::has_data() const
{
    return (binding !=  nullptr && binding->has_data())
	|| (binding_options !=  nullptr && binding_options->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Dhcpv6::Nodes::Node::Server::has_operation() const
{
    return is_set(yfilter)
	|| (binding !=  nullptr && binding->has_operation())
	|| (binding_options !=  nullptr && binding_options->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding>();
        }
        return binding;
    }

    if(child_yang_name == "binding-options")
    {
        if(binding_options == nullptr)
        {
            binding_options = std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions>();
        }
        return binding_options;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Dhcpv6::Nodes::Node::Server::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Server::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    if(binding_options != nullptr)
    {
        children["binding-options"] = binding_options;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding" || name == "binding-options" || name == "interfaces" || name == "profiles" || name == "statistics" || name == "vrfs")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Binding()
    :
    clients(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients>())
	,summary(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Summary>())
{
    clients->parent = this;

    summary->parent = this;

    yang_name = "binding"; yang_parent_name = "server";
}

Dhcpv6::Nodes::Node::Server::Binding::~Binding()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Binding::has_operation() const
{
    return is_set(yfilter)
	|| (clients !=  nullptr && clients->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "summary")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Summary::Summary()
    :
    clients{YType::uint32, "clients"}
    	,
    iana(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana>())
	,iapd(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd>())
{
    iana->parent = this;

    iapd->parent = this;

    yang_name = "summary"; yang_parent_name = "binding";
}

Dhcpv6::Nodes::Node::Server::Binding::Summary::~Summary()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::has_data() const
{
    return clients.is_set
	|| (iana !=  nullptr && iana->has_data())
	|| (iapd !=  nullptr && iapd->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clients.yfilter)
	|| (iana !=  nullptr && iana->has_operation())
	|| (iapd !=  nullptr && iapd->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clients.is_set || is_set(clients.yfilter)) leaf_name_data.push_back(clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iana")
    {
        if(iana == nullptr)
        {
            iana = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana>();
        }
        return iana;
    }

    if(child_yang_name == "iapd")
    {
        if(iapd == nullptr)
        {
            iapd = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd>();
        }
        return iapd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iana != nullptr)
    {
        children["iana"] = iana;
    }

    if(iapd != nullptr)
    {
        children["iapd"] = iapd;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clients")
    {
        clients = value;
        clients.value_namespace = name_space;
        clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Binding::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iana" || name == "iapd" || name == "clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::Iana()
    :
    bound_clients{YType::uint32, "bound-clients"},
    daps_waiting_clients{YType::uint32, "daps-waiting-clients"},
    dpm_waiting_clients{YType::uint32, "dpm-waiting-clients"},
    iedge_waiting_clients{YType::uint32, "iedge-waiting-clients"},
    initializing_clients{YType::uint32, "initializing-clients"},
    request_waiting_clients{YType::uint32, "request-waiting-clients"},
    rib_waiting_clients{YType::uint32, "rib-waiting-clients"}
{
    yang_name = "iana"; yang_parent_name = "summary";
}

Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::~Iana()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::has_data() const
{
    return bound_clients.is_set
	|| daps_waiting_clients.is_set
	|| dpm_waiting_clients.is_set
	|| iedge_waiting_clients.is_set
	|| initializing_clients.is_set
	|| request_waiting_clients.is_set
	|| rib_waiting_clients.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_clients.yfilter)
	|| ydk::is_set(daps_waiting_clients.yfilter)
	|| ydk::is_set(dpm_waiting_clients.yfilter)
	|| ydk::is_set(iedge_waiting_clients.yfilter)
	|| ydk::is_set(initializing_clients.yfilter)
	|| ydk::is_set(request_waiting_clients.yfilter)
	|| ydk::is_set(rib_waiting_clients.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iana";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iana' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_clients.is_set || is_set(bound_clients.yfilter)) leaf_name_data.push_back(bound_clients.get_name_leafdata());
    if (daps_waiting_clients.is_set || is_set(daps_waiting_clients.yfilter)) leaf_name_data.push_back(daps_waiting_clients.get_name_leafdata());
    if (dpm_waiting_clients.is_set || is_set(dpm_waiting_clients.yfilter)) leaf_name_data.push_back(dpm_waiting_clients.get_name_leafdata());
    if (iedge_waiting_clients.is_set || is_set(iedge_waiting_clients.yfilter)) leaf_name_data.push_back(iedge_waiting_clients.get_name_leafdata());
    if (initializing_clients.is_set || is_set(initializing_clients.yfilter)) leaf_name_data.push_back(initializing_clients.get_name_leafdata());
    if (request_waiting_clients.is_set || is_set(request_waiting_clients.yfilter)) leaf_name_data.push_back(request_waiting_clients.get_name_leafdata());
    if (rib_waiting_clients.is_set || is_set(rib_waiting_clients.yfilter)) leaf_name_data.push_back(rib_waiting_clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-clients")
    {
        bound_clients = value;
        bound_clients.value_namespace = name_space;
        bound_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients = value;
        daps_waiting_clients.value_namespace = name_space;
        daps_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients = value;
        dpm_waiting_clients.value_namespace = name_space;
        dpm_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients = value;
        iedge_waiting_clients.value_namespace = name_space;
        iedge_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients = value;
        initializing_clients.value_namespace = name_space;
        initializing_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-waiting-clients")
    {
        request_waiting_clients = value;
        request_waiting_clients.value_namespace = name_space;
        request_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients = value;
        rib_waiting_clients.value_namespace = name_space;
        rib_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-clients")
    {
        bound_clients.yfilter = yfilter;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients.yfilter = yfilter;
    }
    if(value_path == "request-waiting-clients")
    {
        request_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-clients" || name == "daps-waiting-clients" || name == "dpm-waiting-clients" || name == "iedge-waiting-clients" || name == "initializing-clients" || name == "request-waiting-clients" || name == "rib-waiting-clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::Iapd()
    :
    bound_clients{YType::uint32, "bound-clients"},
    daps_waiting_clients{YType::uint32, "daps-waiting-clients"},
    dpm_waiting_clients{YType::uint32, "dpm-waiting-clients"},
    iedge_waiting_clients{YType::uint32, "iedge-waiting-clients"},
    initializing_clients{YType::uint32, "initializing-clients"},
    request_waiting_clients{YType::uint32, "request-waiting-clients"},
    rib_waiting_clients{YType::uint32, "rib-waiting-clients"}
{
    yang_name = "iapd"; yang_parent_name = "summary";
}

Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::~Iapd()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::has_data() const
{
    return bound_clients.is_set
	|| daps_waiting_clients.is_set
	|| dpm_waiting_clients.is_set
	|| iedge_waiting_clients.is_set
	|| initializing_clients.is_set
	|| request_waiting_clients.is_set
	|| rib_waiting_clients.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound_clients.yfilter)
	|| ydk::is_set(daps_waiting_clients.yfilter)
	|| ydk::is_set(dpm_waiting_clients.yfilter)
	|| ydk::is_set(iedge_waiting_clients.yfilter)
	|| ydk::is_set(initializing_clients.yfilter)
	|| ydk::is_set(request_waiting_clients.yfilter)
	|| ydk::is_set(rib_waiting_clients.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iapd";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iapd' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound_clients.is_set || is_set(bound_clients.yfilter)) leaf_name_data.push_back(bound_clients.get_name_leafdata());
    if (daps_waiting_clients.is_set || is_set(daps_waiting_clients.yfilter)) leaf_name_data.push_back(daps_waiting_clients.get_name_leafdata());
    if (dpm_waiting_clients.is_set || is_set(dpm_waiting_clients.yfilter)) leaf_name_data.push_back(dpm_waiting_clients.get_name_leafdata());
    if (iedge_waiting_clients.is_set || is_set(iedge_waiting_clients.yfilter)) leaf_name_data.push_back(iedge_waiting_clients.get_name_leafdata());
    if (initializing_clients.is_set || is_set(initializing_clients.yfilter)) leaf_name_data.push_back(initializing_clients.get_name_leafdata());
    if (request_waiting_clients.is_set || is_set(request_waiting_clients.yfilter)) leaf_name_data.push_back(request_waiting_clients.get_name_leafdata());
    if (rib_waiting_clients.is_set || is_set(rib_waiting_clients.yfilter)) leaf_name_data.push_back(rib_waiting_clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound-clients")
    {
        bound_clients = value;
        bound_clients.value_namespace = name_space;
        bound_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients = value;
        daps_waiting_clients.value_namespace = name_space;
        daps_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients = value;
        dpm_waiting_clients.value_namespace = name_space;
        dpm_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients = value;
        iedge_waiting_clients.value_namespace = name_space;
        iedge_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients = value;
        initializing_clients.value_namespace = name_space;
        initializing_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-waiting-clients")
    {
        request_waiting_clients = value;
        request_waiting_clients.value_namespace = name_space;
        request_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients = value;
        rib_waiting_clients.value_namespace = name_space;
        rib_waiting_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound-clients")
    {
        bound_clients.yfilter = yfilter;
    }
    if(value_path == "daps-waiting-clients")
    {
        daps_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "dpm-waiting-clients")
    {
        dpm_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "iedge-waiting-clients")
    {
        iedge_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients.yfilter = yfilter;
    }
    if(value_path == "request-waiting-clients")
    {
        request_waiting_clients.yfilter = yfilter;
    }
    if(value_path == "rib-waiting-clients")
    {
        rib_waiting_clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bound-clients" || name == "daps-waiting-clients" || name == "dpm-waiting-clients" || name == "iedge-waiting-clients" || name == "initializing-clients" || name == "request-waiting-clients" || name == "rib-waiting-clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "binding";
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::~Clients()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::Client()
    :
    client_id{YType::str, "client-id"},
    access_vrf_name{YType::str, "access-vrf-name"},
    address_pool_name{YType::str, "address-pool-name"},
    class_name{YType::str, "class-name"},
    client_flag{YType::uint32, "client-flag"},
    client_id_xr{YType::uint32, "client-id-xr"},
    dns_server_count{YType::uint32, "dns-server-count"},
    duid{YType::str, "duid"},
    framed_ipv6_prefix{YType::str, "framed-ipv6-prefix"},
    framed_prefix_length{YType::uint8, "framed-prefix-length"},
    ia_id_p_ds{YType::uint32, "ia-id-p-ds"},
    interface_name{YType::str, "interface-name"},
    is_nak_next_renew{YType::boolean, "is-nak-next-renew"},
    link_local_address{YType::str, "link-local-address"},
    mac_address{YType::str, "mac-address"},
    pool_name{YType::str, "pool-name"},
    prefix_pool_name{YType::str, "prefix-pool-name"},
    profile_name{YType::str, "profile-name"},
    rx_interface_id{YType::str, "rx-interface-id"},
    rx_remote_id{YType::str, "rx-remote-id"},
    serg_intf_role{YType::uint32, "serg-intf-role"},
    server_binding_inner_tag{YType::uint32, "server-binding-inner-tag"},
    server_binding_outer_tag{YType::uint32, "server-binding-outer-tag"},
    server_binding_tags{YType::uint8, "server-binding-tags"},
    sesrg_state{YType::uint32, "sesrg-state"},
    srg_intf_role{YType::uint32, "srg-intf-role"},
    srg_state{YType::uint32, "srg-state"},
    srg_vrf_name{YType::str, "srg-vrf-name"},
    srgp2p{YType::boolean, "srgp2p"},
    subscriber_label{YType::uint32, "subscriber-label"},
    vrf_name{YType::str, "vrf-name"}
    	,
    ia_id_pd(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd>())
{
    ia_id_pd->parent = this;

    yang_name = "client"; yang_parent_name = "clients";
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::~Client()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::has_data() const
{
    return client_id.is_set
	|| access_vrf_name.is_set
	|| address_pool_name.is_set
	|| class_name.is_set
	|| client_flag.is_set
	|| client_id_xr.is_set
	|| dns_server_count.is_set
	|| duid.is_set
	|| framed_ipv6_prefix.is_set
	|| framed_prefix_length.is_set
	|| ia_id_p_ds.is_set
	|| interface_name.is_set
	|| is_nak_next_renew.is_set
	|| link_local_address.is_set
	|| mac_address.is_set
	|| pool_name.is_set
	|| prefix_pool_name.is_set
	|| profile_name.is_set
	|| rx_interface_id.is_set
	|| rx_remote_id.is_set
	|| serg_intf_role.is_set
	|| server_binding_inner_tag.is_set
	|| server_binding_outer_tag.is_set
	|| server_binding_tags.is_set
	|| sesrg_state.is_set
	|| srg_intf_role.is_set
	|| srg_state.is_set
	|| srg_vrf_name.is_set
	|| srgp2p.is_set
	|| subscriber_label.is_set
	|| vrf_name.is_set
	|| (ia_id_pd !=  nullptr && ia_id_pd->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(access_vrf_name.yfilter)
	|| ydk::is_set(address_pool_name.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(client_flag.yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(dns_server_count.yfilter)
	|| ydk::is_set(duid.yfilter)
	|| ydk::is_set(framed_ipv6_prefix.yfilter)
	|| ydk::is_set(framed_prefix_length.yfilter)
	|| ydk::is_set(ia_id_p_ds.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_nak_next_renew.yfilter)
	|| ydk::is_set(link_local_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(prefix_pool_name.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(rx_interface_id.yfilter)
	|| ydk::is_set(rx_remote_id.yfilter)
	|| ydk::is_set(serg_intf_role.yfilter)
	|| ydk::is_set(server_binding_inner_tag.yfilter)
	|| ydk::is_set(server_binding_outer_tag.yfilter)
	|| ydk::is_set(server_binding_tags.yfilter)
	|| ydk::is_set(sesrg_state.yfilter)
	|| ydk::is_set(srg_intf_role.yfilter)
	|| ydk::is_set(srg_state.yfilter)
	|| ydk::is_set(srg_vrf_name.yfilter)
	|| ydk::is_set(srgp2p.yfilter)
	|| ydk::is_set(subscriber_label.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ia_id_pd !=  nullptr && ia_id_pd->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (access_vrf_name.is_set || is_set(access_vrf_name.yfilter)) leaf_name_data.push_back(access_vrf_name.get_name_leafdata());
    if (address_pool_name.is_set || is_set(address_pool_name.yfilter)) leaf_name_data.push_back(address_pool_name.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (client_flag.is_set || is_set(client_flag.yfilter)) leaf_name_data.push_back(client_flag.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (dns_server_count.is_set || is_set(dns_server_count.yfilter)) leaf_name_data.push_back(dns_server_count.get_name_leafdata());
    if (duid.is_set || is_set(duid.yfilter)) leaf_name_data.push_back(duid.get_name_leafdata());
    if (framed_ipv6_prefix.is_set || is_set(framed_ipv6_prefix.yfilter)) leaf_name_data.push_back(framed_ipv6_prefix.get_name_leafdata());
    if (framed_prefix_length.is_set || is_set(framed_prefix_length.yfilter)) leaf_name_data.push_back(framed_prefix_length.get_name_leafdata());
    if (ia_id_p_ds.is_set || is_set(ia_id_p_ds.yfilter)) leaf_name_data.push_back(ia_id_p_ds.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_nak_next_renew.is_set || is_set(is_nak_next_renew.yfilter)) leaf_name_data.push_back(is_nak_next_renew.get_name_leafdata());
    if (link_local_address.is_set || is_set(link_local_address.yfilter)) leaf_name_data.push_back(link_local_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (prefix_pool_name.is_set || is_set(prefix_pool_name.yfilter)) leaf_name_data.push_back(prefix_pool_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (rx_interface_id.is_set || is_set(rx_interface_id.yfilter)) leaf_name_data.push_back(rx_interface_id.get_name_leafdata());
    if (rx_remote_id.is_set || is_set(rx_remote_id.yfilter)) leaf_name_data.push_back(rx_remote_id.get_name_leafdata());
    if (serg_intf_role.is_set || is_set(serg_intf_role.yfilter)) leaf_name_data.push_back(serg_intf_role.get_name_leafdata());
    if (server_binding_inner_tag.is_set || is_set(server_binding_inner_tag.yfilter)) leaf_name_data.push_back(server_binding_inner_tag.get_name_leafdata());
    if (server_binding_outer_tag.is_set || is_set(server_binding_outer_tag.yfilter)) leaf_name_data.push_back(server_binding_outer_tag.get_name_leafdata());
    if (server_binding_tags.is_set || is_set(server_binding_tags.yfilter)) leaf_name_data.push_back(server_binding_tags.get_name_leafdata());
    if (sesrg_state.is_set || is_set(sesrg_state.yfilter)) leaf_name_data.push_back(sesrg_state.get_name_leafdata());
    if (srg_intf_role.is_set || is_set(srg_intf_role.yfilter)) leaf_name_data.push_back(srg_intf_role.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.yfilter)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (srg_vrf_name.is_set || is_set(srg_vrf_name.yfilter)) leaf_name_data.push_back(srg_vrf_name.get_name_leafdata());
    if (srgp2p.is_set || is_set(srgp2p.yfilter)) leaf_name_data.push_back(srgp2p.get_name_leafdata());
    if (subscriber_label.is_set || is_set(subscriber_label.yfilter)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ia-id-pd")
    {
        if(ia_id_pd == nullptr)
        {
            ia_id_pd = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd>();
        }
        return ia_id_pd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ia_id_pd != nullptr)
    {
        children["ia-id-pd"] = ia_id_pd;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name = value;
        access_vrf_name.value_namespace = name_space;
        access_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-pool-name")
    {
        address_pool_name = value;
        address_pool_name.value_namespace = name_space;
        address_pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-flag")
    {
        client_flag = value;
        client_flag.value_namespace = name_space;
        client_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
        client_id_xr.value_namespace = name_space;
        client_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-server-count")
    {
        dns_server_count = value;
        dns_server_count.value_namespace = name_space;
        dns_server_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duid")
    {
        duid = value;
        duid.value_namespace = name_space;
        duid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framed-ipv6-prefix")
    {
        framed_ipv6_prefix = value;
        framed_ipv6_prefix.value_namespace = name_space;
        framed_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framed-prefix-length")
    {
        framed_prefix_length = value;
        framed_prefix_length.value_namespace = name_space;
        framed_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-id-p-ds")
    {
        ia_id_p_ds = value;
        ia_id_p_ds.value_namespace = name_space;
        ia_id_p_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew = value;
        is_nak_next_renew.value_namespace = name_space;
        is_nak_next_renew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local-address")
    {
        link_local_address = value;
        link_local_address.value_namespace = name_space;
        link_local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-pool-name")
    {
        prefix_pool_name = value;
        prefix_pool_name.value_namespace = name_space;
        prefix_pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-interface-id")
    {
        rx_interface_id = value;
        rx_interface_id.value_namespace = name_space;
        rx_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id = value;
        rx_remote_id.value_namespace = name_space;
        rx_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-intf-role")
    {
        serg_intf_role = value;
        serg_intf_role.value_namespace = name_space;
        serg_intf_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-binding-inner-tag")
    {
        server_binding_inner_tag = value;
        server_binding_inner_tag.value_namespace = name_space;
        server_binding_inner_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-binding-outer-tag")
    {
        server_binding_outer_tag = value;
        server_binding_outer_tag.value_namespace = name_space;
        server_binding_outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-binding-tags")
    {
        server_binding_tags = value;
        server_binding_tags.value_namespace = name_space;
        server_binding_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sesrg-state")
    {
        sesrg_state = value;
        sesrg_state.value_namespace = name_space;
        sesrg_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-intf-role")
    {
        srg_intf_role = value;
        srg_intf_role.value_namespace = name_space;
        srg_intf_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
        srg_state.value_namespace = name_space;
        srg_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name = value;
        srg_vrf_name.value_namespace = name_space;
        srg_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgp2p")
    {
        srgp2p = value;
        srgp2p.value_namespace = name_space;
        srgp2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
        subscriber_label.value_namespace = name_space;
        subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name.yfilter = yfilter;
    }
    if(value_path == "address-pool-name")
    {
        address_pool_name.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "client-flag")
    {
        client_flag.yfilter = yfilter;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr.yfilter = yfilter;
    }
    if(value_path == "dns-server-count")
    {
        dns_server_count.yfilter = yfilter;
    }
    if(value_path == "duid")
    {
        duid.yfilter = yfilter;
    }
    if(value_path == "framed-ipv6-prefix")
    {
        framed_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "framed-prefix-length")
    {
        framed_prefix_length.yfilter = yfilter;
    }
    if(value_path == "ia-id-p-ds")
    {
        ia_id_p_ds.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew.yfilter = yfilter;
    }
    if(value_path == "link-local-address")
    {
        link_local_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "prefix-pool-name")
    {
        prefix_pool_name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "rx-interface-id")
    {
        rx_interface_id.yfilter = yfilter;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id.yfilter = yfilter;
    }
    if(value_path == "serg-intf-role")
    {
        serg_intf_role.yfilter = yfilter;
    }
    if(value_path == "server-binding-inner-tag")
    {
        server_binding_inner_tag.yfilter = yfilter;
    }
    if(value_path == "server-binding-outer-tag")
    {
        server_binding_outer_tag.yfilter = yfilter;
    }
    if(value_path == "server-binding-tags")
    {
        server_binding_tags.yfilter = yfilter;
    }
    if(value_path == "sesrg-state")
    {
        sesrg_state.yfilter = yfilter;
    }
    if(value_path == "srg-intf-role")
    {
        srg_intf_role.yfilter = yfilter;
    }
    if(value_path == "srg-state")
    {
        srg_state.yfilter = yfilter;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srgp2p")
    {
        srgp2p.yfilter = yfilter;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ia-id-pd" || name == "client-id" || name == "access-vrf-name" || name == "address-pool-name" || name == "class-name" || name == "client-flag" || name == "client-id-xr" || name == "dns-server-count" || name == "duid" || name == "framed-ipv6-prefix" || name == "framed-prefix-length" || name == "ia-id-p-ds" || name == "interface-name" || name == "is-nak-next-renew" || name == "link-local-address" || name == "mac-address" || name == "pool-name" || name == "prefix-pool-name" || name == "profile-name" || name == "rx-interface-id" || name == "rx-remote-id" || name == "serg-intf-role" || name == "server-binding-inner-tag" || name == "server-binding-outer-tag" || name == "server-binding-tags" || name == "sesrg-state" || name == "srg-intf-role" || name == "srg-state" || name == "srg-vrf-name" || name == "srgp2p" || name == "subscriber-label" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::IaIdPd()
{
    yang_name = "ia-id-pd"; yang_parent_name = "client";
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::~IaIdPd()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::has_data() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_ia_id_pd_info.size(); index++)
    {
        if(bag_dhcpv6d_ia_id_pd_info[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::has_operation() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_ia_id_pd_info.size(); index++)
    {
        if(bag_dhcpv6d_ia_id_pd_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-id-pd";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IaIdPd' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bag-dhcpv6d-ia-id-pd-info")
    {
        for(auto const & c : bag_dhcpv6d_ia_id_pd_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo>();
        c->parent = this;
        bag_dhcpv6d_ia_id_pd_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bag_dhcpv6d_ia_id_pd_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bag-dhcpv6d-ia-id-pd-info")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::BagDhcpv6DIaIdPdInfo()
    :
    flags{YType::uint32, "flags"},
    ia_id{YType::uint32, "ia-id"},
    ia_type{YType::enumeration, "ia-type"},
    state{YType::enumeration, "state"},
    total_address{YType::uint16, "total-address"}
    	,
    addresses(std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses>())
{
    addresses->parent = this;

    yang_name = "bag-dhcpv6d-ia-id-pd-info"; yang_parent_name = "ia-id-pd";
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::~BagDhcpv6DIaIdPdInfo()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::has_data() const
{
    return flags.is_set
	|| ia_id.is_set
	|| ia_type.is_set
	|| state.is_set
	|| total_address.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ia_id.yfilter)
	|| ydk::is_set(ia_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(total_address.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bag-dhcpv6d-ia-id-pd-info";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BagDhcpv6DIaIdPdInfo' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ia_id.is_set || is_set(ia_id.yfilter)) leaf_name_data.push_back(ia_id.get_name_leafdata());
    if (ia_type.is_set || is_set(ia_type.yfilter)) leaf_name_data.push_back(ia_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_address.is_set || is_set(total_address.yfilter)) leaf_name_data.push_back(total_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-id")
    {
        ia_id = value;
        ia_id.value_namespace = name_space;
        ia_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-type")
    {
        ia_type = value;
        ia_type.value_namespace = name_space;
        ia_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-address")
    {
        total_address = value;
        total_address.value_namespace = name_space;
        total_address.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ia-id")
    {
        ia_id.yfilter = yfilter;
    }
    if(value_path == "ia-type")
    {
        ia_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "total-address")
    {
        total_address.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "flags" || name == "ia-id" || name == "ia-type" || name == "state" || name == "total-address")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "bag-dhcpv6d-ia-id-pd-info";
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::~Addresses()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::has_data() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_addr_attrb.size(); index++)
    {
        if(bag_dhcpv6d_addr_attrb[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::has_operation() const
{
    for (std::size_t index=0; index<bag_dhcpv6d_addr_attrb.size(); index++)
    {
        if(bag_dhcpv6d_addr_attrb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bag-dhcpv6d-addr-attrb")
    {
        for(auto const & c : bag_dhcpv6d_addr_attrb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb>();
        c->parent = this;
        bag_dhcpv6d_addr_attrb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bag_dhcpv6d_addr_attrb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bag-dhcpv6d-addr-attrb")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::BagDhcpv6DAddrAttrb()
    :
    lease_time{YType::uint32, "lease-time"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    remaining_lease_time{YType::uint32, "remaining-lease-time"}
{
    yang_name = "bag-dhcpv6d-addr-attrb"; yang_parent_name = "addresses";
}

Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::~BagDhcpv6DAddrAttrb()
{
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::has_data() const
{
    return lease_time.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| remaining_lease_time.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lease_time.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(remaining_lease_time.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bag-dhcpv6d-addr-attrb";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BagDhcpv6DAddrAttrb' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lease_time.is_set || is_set(lease_time.yfilter)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (remaining_lease_time.is_set || is_set(remaining_lease_time.yfilter)) leaf_name_data.push_back(remaining_lease_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lease-time")
    {
        lease_time = value;
        lease_time.value_namespace = name_space;
        lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time = value;
        remaining_lease_time.value_namespace = name_space;
        remaining_lease_time.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lease-time")
    {
        lease_time.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lease-time" || name == "prefix" || name == "prefix-length" || name == "remaining-lease-time")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "server";
}

Dhcpv6::Nodes::Node::Server::Vrfs::~Vrfs()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics>())
{
    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::~Vrf()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Statistics()
    :
    advertise(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise>())
	,confirm(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm>())
	,decline(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline>())
	,inform(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform>())
	,lease_query(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery>())
	,lease_query_data(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData>())
	,lease_query_done(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone>())
	,lease_query_reply(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply>())
	,rebind(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind>())
	,reconfig(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig>())
	,relay_forward(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward>())
	,relay_reply(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply>())
	,release(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release>())
	,renew(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew>())
	,reply(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply>())
	,request(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request>())
	,solicit(std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit>())
{
    advertise->parent = this;

    confirm->parent = this;

    decline->parent = this;

    inform->parent = this;

    lease_query->parent = this;

    lease_query_data->parent = this;

    lease_query_done->parent = this;

    lease_query_reply->parent = this;

    rebind->parent = this;

    reconfig->parent = this;

    relay_forward->parent = this;

    relay_reply->parent = this;

    release->parent = this;

    renew->parent = this;

    reply->parent = this;

    request->parent = this;

    solicit->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (confirm !=  nullptr && confirm->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_query_data !=  nullptr && lease_query_data->has_data())
	|| (lease_query_done !=  nullptr && lease_query_done->has_data())
	|| (lease_query_reply !=  nullptr && lease_query_reply->has_data())
	|| (rebind !=  nullptr && rebind->has_data())
	|| (reconfig !=  nullptr && reconfig->has_data())
	|| (relay_forward !=  nullptr && relay_forward->has_data())
	|| (relay_reply !=  nullptr && relay_reply->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (renew !=  nullptr && renew->has_data())
	|| (reply !=  nullptr && reply->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (solicit !=  nullptr && solicit->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (confirm !=  nullptr && confirm->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_query_data !=  nullptr && lease_query_data->has_operation())
	|| (lease_query_done !=  nullptr && lease_query_done->has_operation())
	|| (lease_query_reply !=  nullptr && lease_query_reply->has_operation())
	|| (rebind !=  nullptr && rebind->has_operation())
	|| (reconfig !=  nullptr && reconfig->has_operation())
	|| (relay_forward !=  nullptr && relay_forward->has_operation())
	|| (relay_reply !=  nullptr && relay_reply->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (renew !=  nullptr && renew->has_operation())
	|| (reply !=  nullptr && reply->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (solicit !=  nullptr && solicit->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "confirm")
    {
        if(confirm == nullptr)
        {
            confirm = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm>();
        }
        return confirm;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-query-data")
    {
        if(lease_query_data == nullptr)
        {
            lease_query_data = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData>();
        }
        return lease_query_data;
    }

    if(child_yang_name == "lease-query-done")
    {
        if(lease_query_done == nullptr)
        {
            lease_query_done = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone>();
        }
        return lease_query_done;
    }

    if(child_yang_name == "lease-query-reply")
    {
        if(lease_query_reply == nullptr)
        {
            lease_query_reply = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply>();
        }
        return lease_query_reply;
    }

    if(child_yang_name == "rebind")
    {
        if(rebind == nullptr)
        {
            rebind = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind>();
        }
        return rebind;
    }

    if(child_yang_name == "reconfig")
    {
        if(reconfig == nullptr)
        {
            reconfig = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig>();
        }
        return reconfig;
    }

    if(child_yang_name == "relay-forward")
    {
        if(relay_forward == nullptr)
        {
            relay_forward = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward>();
        }
        return relay_forward;
    }

    if(child_yang_name == "relay-reply")
    {
        if(relay_reply == nullptr)
        {
            relay_reply = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply>();
        }
        return relay_reply;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "renew")
    {
        if(renew == nullptr)
        {
            renew = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew>();
        }
        return renew;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request>();
        }
        return request;
    }

    if(child_yang_name == "solicit")
    {
        if(solicit == nullptr)
        {
            solicit = std::make_shared<Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit>();
        }
        return solicit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(confirm != nullptr)
    {
        children["confirm"] = confirm;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_query_data != nullptr)
    {
        children["lease-query-data"] = lease_query_data;
    }

    if(lease_query_done != nullptr)
    {
        children["lease-query-done"] = lease_query_done;
    }

    if(lease_query_reply != nullptr)
    {
        children["lease-query-reply"] = lease_query_reply;
    }

    if(rebind != nullptr)
    {
        children["rebind"] = rebind;
    }

    if(reconfig != nullptr)
    {
        children["reconfig"] = reconfig;
    }

    if(relay_forward != nullptr)
    {
        children["relay-forward"] = relay_forward;
    }

    if(relay_reply != nullptr)
    {
        children["relay-reply"] = relay_reply;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(renew != nullptr)
    {
        children["renew"] = renew;
    }

    if(reply != nullptr)
    {
        children["reply"] = reply;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(solicit != nullptr)
    {
        children["solicit"] = solicit;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "confirm" || name == "decline" || name == "inform" || name == "lease-query" || name == "lease-query-data" || name == "lease-query-done" || name == "lease-query-reply" || name == "rebind" || name == "reconfig" || name == "relay-forward" || name == "relay-reply" || name == "release" || name == "renew" || name == "reply" || name == "request" || name == "solicit")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::Solicit()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "solicit"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::~Solicit()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Solicit' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::Advertise()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "advertise"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::~Advertise()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::~Request()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::Reply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::~Reply()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::Confirm()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "confirm"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::~Confirm()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confirm";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confirm' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::~Decline()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::Renew()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "renew"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::~Renew()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "renew";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Renew' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::Rebind()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "rebind"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::~Rebind()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rebind";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rebind' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::~Release()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::Reconfig()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "reconfig"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::~Reconfig()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconfig";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reconfig' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::~Inform()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::RelayForward()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "relay-forward"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::~RelayForward()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-forward";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayForward' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::RelayReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "relay-reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::~RelayReply()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayReply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::~LeaseQuery()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::LeaseQueryReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::~LeaseQueryReply()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryReply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::LeaseQueryDone()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-done"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::~LeaseQueryDone()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-done";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryDone' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::LeaseQueryData()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-data"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::~LeaseQueryData()
{
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-data";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryData' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "server";
}

Dhcpv6::Nodes::Node::Server::Profiles::~Profiles()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profiles' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"}
    	,
    info(std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info>())
	,throttle_infos(std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos>())
{
    info->parent = this;

    throttle_infos->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::~Profile()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| (info !=  nullptr && info->has_data())
	|| (throttle_infos !=  nullptr && throttle_infos->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (throttle_infos !=  nullptr && throttle_infos->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info>();
        }
        return info;
    }

    if(child_yang_name == "throttle-infos")
    {
        if(throttle_infos == nullptr)
        {
            throttle_infos = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos>();
        }
        return throttle_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(throttle_infos != nullptr)
    {
        children["throttle-infos"] = throttle_infos;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "throttle-infos" || name == "profile-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Info()
    :
    aftr_name{YType::str, "aftr-name"},
    delegated_prefix_pool_name{YType::str, "delegated-prefix-pool-name"},
    domain_name{YType::str, "domain-name"},
    framed_addr_pool_name{YType::str, "framed-addr-pool-name"},
    profile_dns{YType::uint8, "profile-dns"},
    profile_dns_address{YType::str, "profile-dns-address"},
    profile_name{YType::str, "profile-name"},
    rapid_commit{YType::boolean, "rapid-commit"}
    	,
    interface_references(std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences>())
	,lease(std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease>())
{
    interface_references->parent = this;

    lease->parent = this;

    yang_name = "info"; yang_parent_name = "profile";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::~Info()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::has_data() const
{
    for (auto const & leaf : profile_dns_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aftr_name.is_set
	|| delegated_prefix_pool_name.is_set
	|| domain_name.is_set
	|| framed_addr_pool_name.is_set
	|| profile_dns.is_set
	|| profile_name.is_set
	|| rapid_commit.is_set
	|| (interface_references !=  nullptr && interface_references->has_data())
	|| (lease !=  nullptr && lease->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::has_operation() const
{
    for (auto const & leaf : profile_dns_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aftr_name.yfilter)
	|| ydk::is_set(delegated_prefix_pool_name.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(framed_addr_pool_name.yfilter)
	|| ydk::is_set(profile_dns.yfilter)
	|| ydk::is_set(profile_dns_address.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(rapid_commit.yfilter)
	|| (interface_references !=  nullptr && interface_references->has_operation())
	|| (lease !=  nullptr && lease->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aftr_name.is_set || is_set(aftr_name.yfilter)) leaf_name_data.push_back(aftr_name.get_name_leafdata());
    if (delegated_prefix_pool_name.is_set || is_set(delegated_prefix_pool_name.yfilter)) leaf_name_data.push_back(delegated_prefix_pool_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (framed_addr_pool_name.is_set || is_set(framed_addr_pool_name.yfilter)) leaf_name_data.push_back(framed_addr_pool_name.get_name_leafdata());
    if (profile_dns.is_set || is_set(profile_dns.yfilter)) leaf_name_data.push_back(profile_dns.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    auto profile_dns_address_name_datas = profile_dns_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_dns_address_name_datas.begin(), profile_dns_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-references")
    {
        if(interface_references == nullptr)
        {
            interface_references = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences>();
        }
        return interface_references;
    }

    if(child_yang_name == "lease")
    {
        if(lease == nullptr)
        {
            lease = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease>();
        }
        return lease;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_references != nullptr)
    {
        children["interface-references"] = interface_references;
    }

    if(lease != nullptr)
    {
        children["lease"] = lease;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aftr-name")
    {
        aftr_name = value;
        aftr_name.value_namespace = name_space;
        aftr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegated-prefix-pool-name")
    {
        delegated_prefix_pool_name = value;
        delegated_prefix_pool_name.value_namespace = name_space;
        delegated_prefix_pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framed-addr-pool-name")
    {
        framed_addr_pool_name = value;
        framed_addr_pool_name.value_namespace = name_space;
        framed_addr_pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-dns")
    {
        profile_dns = value;
        profile_dns.value_namespace = name_space;
        profile_dns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-dns-address")
    {
        profile_dns_address.append(value);
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aftr-name")
    {
        aftr_name.yfilter = yfilter;
    }
    if(value_path == "delegated-prefix-pool-name")
    {
        delegated_prefix_pool_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "framed-addr-pool-name")
    {
        framed_addr_pool_name.yfilter = yfilter;
    }
    if(value_path == "profile-dns")
    {
        profile_dns.yfilter = yfilter;
    }
    if(value_path == "profile-dns-address")
    {
        profile_dns_address.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-references" || name == "lease" || name == "aftr-name" || name == "delegated-prefix-pool-name" || name == "domain-name" || name == "framed-addr-pool-name" || name == "profile-dns" || name == "profile-dns-address" || name == "profile-name" || name == "rapid-commit")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::Lease()
    :
    seconds{YType::uint32, "seconds"},
    time{YType::str, "time"}
{
    yang_name = "lease"; yang_parent_name = "info";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::~Lease()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::has_data() const
{
    return seconds.is_set
	|| time.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lease' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "time")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::InterfaceReferences()
{
    yang_name = "interface-references"; yang_parent_name = "info";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::~InterfaceReferences()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_server_interface_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_server_interface_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_server_interface_reference.size(); index++)
    {
        if(ipv6_dhcpv6d_server_interface_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-references";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceReferences' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-server-interface-reference")
    {
        for(auto const & c : ipv6_dhcpv6d_server_interface_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference>();
        c->parent = this;
        ipv6_dhcpv6d_server_interface_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_server_interface_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-server-interface-reference")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::Ipv6Dhcpv6DServerInterfaceReference()
    :
    server_reference_interface_name{YType::str, "server-reference-interface-name"}
{
    yang_name = "ipv6-dhcpv6d-server-interface-reference"; yang_parent_name = "interface-references";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::~Ipv6Dhcpv6DServerInterfaceReference()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::has_data() const
{
    return server_reference_interface_name.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_reference_interface_name.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-server-interface-reference";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DServerInterfaceReference' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_reference_interface_name.is_set || is_set(server_reference_interface_name.yfilter)) leaf_name_data.push_back(server_reference_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-reference-interface-name")
    {
        server_reference_interface_name = value;
        server_reference_interface_name.value_namespace = name_space;
        server_reference_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-reference-interface-name")
    {
        server_reference_interface_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-reference-interface-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfos()
{
    yang_name = "throttle-infos"; yang_parent_name = "profile";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::~ThrottleInfos()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::has_data() const
{
    for (std::size_t index=0; index<throttle_info.size(); index++)
    {
        if(throttle_info[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::has_operation() const
{
    for (std::size_t index=0; index<throttle_info.size(); index++)
    {
        if(throttle_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-infos";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThrottleInfos' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle-info")
    {
        for(auto const & c : throttle_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo>();
        c->parent = this;
        throttle_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : throttle_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle-info")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::ThrottleInfo()
    :
    mac_address{YType::str, "mac-address"},
    binding_chaddr{YType::str, "binding-chaddr"},
    ifname{YType::str, "ifname"},
    state{YType::uint32, "state"},
    time_left{YType::uint32, "time-left"}
{
    yang_name = "throttle-info"; yang_parent_name = "throttle-infos";
}

Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::~ThrottleInfo()
{
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::has_data() const
{
    return mac_address.is_set
	|| binding_chaddr.is_set
	|| ifname.is_set
	|| state.is_set
	|| time_left.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(binding_chaddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(time_left.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-info" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThrottleInfo' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (binding_chaddr.is_set || is_set(binding_chaddr.yfilter)) leaf_name_data.push_back(binding_chaddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-chaddr")
    {
        binding_chaddr = value;
        binding_chaddr.value_namespace = name_space;
        binding_chaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "binding-chaddr")
    {
        binding_chaddr.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "binding-chaddr" || name == "ifname" || name == "state" || name == "time-left")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "server";
}

Dhcpv6::Nodes::Node::Server::Interfaces::~Interfaces()
{
}

bool Dhcpv6::Nodes::Node::Server::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_server_interface_ambiguous{YType::uint32, "is-server-interface-ambiguous"},
    mac_throttle{YType::boolean, "mac-throttle"},
    serg_role{YType::enumeration, "serg-role"},
    server_interface_lease_limit_type{YType::enumeration, "server-interface-lease-limit-type"},
    server_interface_lease_limits{YType::uint32, "server-interface-lease-limits"},
    server_interface_mode{YType::enumeration, "server-interface-mode"},
    server_interface_profile_name{YType::str, "server-interface-profile-name"},
    server_vrf_name{YType::str, "server-vrf-name"},
    srg_role{YType::enumeration, "srg-role"},
    srg_vrf_name{YType::str, "srg-vrf-name"},
    srgp2p{YType::boolean, "srgp2p"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Dhcpv6::Nodes::Node::Server::Interfaces::Interface::~Interface()
{
}

bool Dhcpv6::Nodes::Node::Server::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| is_server_interface_ambiguous.is_set
	|| mac_throttle.is_set
	|| serg_role.is_set
	|| server_interface_lease_limit_type.is_set
	|| server_interface_lease_limits.is_set
	|| server_interface_mode.is_set
	|| server_interface_profile_name.is_set
	|| server_vrf_name.is_set
	|| srg_role.is_set
	|| srg_vrf_name.is_set
	|| srgp2p.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_server_interface_ambiguous.yfilter)
	|| ydk::is_set(mac_throttle.yfilter)
	|| ydk::is_set(serg_role.yfilter)
	|| ydk::is_set(server_interface_lease_limit_type.yfilter)
	|| ydk::is_set(server_interface_lease_limits.yfilter)
	|| ydk::is_set(server_interface_mode.yfilter)
	|| ydk::is_set(server_interface_profile_name.yfilter)
	|| ydk::is_set(server_vrf_name.yfilter)
	|| ydk::is_set(srg_role.yfilter)
	|| ydk::is_set(srg_vrf_name.yfilter)
	|| ydk::is_set(srgp2p.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_server_interface_ambiguous.is_set || is_set(is_server_interface_ambiguous.yfilter)) leaf_name_data.push_back(is_server_interface_ambiguous.get_name_leafdata());
    if (mac_throttle.is_set || is_set(mac_throttle.yfilter)) leaf_name_data.push_back(mac_throttle.get_name_leafdata());
    if (serg_role.is_set || is_set(serg_role.yfilter)) leaf_name_data.push_back(serg_role.get_name_leafdata());
    if (server_interface_lease_limit_type.is_set || is_set(server_interface_lease_limit_type.yfilter)) leaf_name_data.push_back(server_interface_lease_limit_type.get_name_leafdata());
    if (server_interface_lease_limits.is_set || is_set(server_interface_lease_limits.yfilter)) leaf_name_data.push_back(server_interface_lease_limits.get_name_leafdata());
    if (server_interface_mode.is_set || is_set(server_interface_mode.yfilter)) leaf_name_data.push_back(server_interface_mode.get_name_leafdata());
    if (server_interface_profile_name.is_set || is_set(server_interface_profile_name.yfilter)) leaf_name_data.push_back(server_interface_profile_name.get_name_leafdata());
    if (server_vrf_name.is_set || is_set(server_vrf_name.yfilter)) leaf_name_data.push_back(server_vrf_name.get_name_leafdata());
    if (srg_role.is_set || is_set(srg_role.yfilter)) leaf_name_data.push_back(srg_role.get_name_leafdata());
    if (srg_vrf_name.is_set || is_set(srg_vrf_name.yfilter)) leaf_name_data.push_back(srg_vrf_name.get_name_leafdata());
    if (srgp2p.is_set || is_set(srgp2p.yfilter)) leaf_name_data.push_back(srgp2p.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-server-interface-ambiguous")
    {
        is_server_interface_ambiguous = value;
        is_server_interface_ambiguous.value_namespace = name_space;
        is_server_interface_ambiguous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-throttle")
    {
        mac_throttle = value;
        mac_throttle.value_namespace = name_space;
        mac_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-role")
    {
        serg_role = value;
        serg_role.value_namespace = name_space;
        serg_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-interface-lease-limit-type")
    {
        server_interface_lease_limit_type = value;
        server_interface_lease_limit_type.value_namespace = name_space;
        server_interface_lease_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-interface-lease-limits")
    {
        server_interface_lease_limits = value;
        server_interface_lease_limits.value_namespace = name_space;
        server_interface_lease_limits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-interface-mode")
    {
        server_interface_mode = value;
        server_interface_mode.value_namespace = name_space;
        server_interface_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-interface-profile-name")
    {
        server_interface_profile_name = value;
        server_interface_profile_name.value_namespace = name_space;
        server_interface_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-vrf-name")
    {
        server_vrf_name = value;
        server_vrf_name.value_namespace = name_space;
        server_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-role")
    {
        srg_role = value;
        srg_role.value_namespace = name_space;
        srg_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name = value;
        srg_vrf_name.value_namespace = name_space;
        srg_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgp2p")
    {
        srgp2p = value;
        srgp2p.value_namespace = name_space;
        srgp2p.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-server-interface-ambiguous")
    {
        is_server_interface_ambiguous.yfilter = yfilter;
    }
    if(value_path == "mac-throttle")
    {
        mac_throttle.yfilter = yfilter;
    }
    if(value_path == "serg-role")
    {
        serg_role.yfilter = yfilter;
    }
    if(value_path == "server-interface-lease-limit-type")
    {
        server_interface_lease_limit_type.yfilter = yfilter;
    }
    if(value_path == "server-interface-lease-limits")
    {
        server_interface_lease_limits.yfilter = yfilter;
    }
    if(value_path == "server-interface-mode")
    {
        server_interface_mode.yfilter = yfilter;
    }
    if(value_path == "server-interface-profile-name")
    {
        server_interface_profile_name.yfilter = yfilter;
    }
    if(value_path == "server-vrf-name")
    {
        server_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srg-role")
    {
        srg_role.yfilter = yfilter;
    }
    if(value_path == "srg-vrf-name")
    {
        srg_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srgp2p")
    {
        srgp2p.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-server-interface-ambiguous" || name == "mac-throttle" || name == "serg-role" || name == "server-interface-lease-limit-type" || name == "server-interface-lease-limits" || name == "server-interface-mode" || name == "server-interface-profile-name" || name == "server-vrf-name" || name == "srg-role" || name == "srg-vrf-name" || name == "srgp2p")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "server";
}

Dhcpv6::Nodes::Node::Server::Statistics::~Statistics()
{
}

bool Dhcpv6::Nodes::Node::Server::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_server_stat.size(); index++)
    {
        if(ipv6_dhcpv6d_server_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_server_stat.size(); index++)
    {
        if(ipv6_dhcpv6d_server_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-server-stat")
    {
        for(auto const & c : ipv6_dhcpv6d_server_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat>();
        c->parent = this;
        ipv6_dhcpv6d_server_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_server_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-server-stat")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Ipv6Dhcpv6DServerStat()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv6-dhcpv6d-server-stat"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::~Ipv6Dhcpv6DServerStat()
{
}

bool Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-server-stat";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DServerStat' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv6-dhcpv6d-server-stat";
}

Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::~Statistics_()
{
}

bool Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::BindingOptions::BindingOptions()
    :
    duid_bind_options(std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions>())
	,mac_bind_options(std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions>())
{
    duid_bind_options->parent = this;

    mac_bind_options->parent = this;

    yang_name = "binding-options"; yang_parent_name = "server";
}

Dhcpv6::Nodes::Node::Server::BindingOptions::~BindingOptions()
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::has_data() const
{
    return (duid_bind_options !=  nullptr && duid_bind_options->has_data())
	|| (mac_bind_options !=  nullptr && mac_bind_options->has_data());
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::has_operation() const
{
    return is_set(yfilter)
	|| (duid_bind_options !=  nullptr && duid_bind_options->has_operation())
	|| (mac_bind_options !=  nullptr && mac_bind_options->has_operation());
}

std::string Dhcpv6::Nodes::Node::Server::BindingOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-options";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::BindingOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingOptions' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::BindingOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duid-bind-options")
    {
        if(duid_bind_options == nullptr)
        {
            duid_bind_options = std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions>();
        }
        return duid_bind_options;
    }

    if(child_yang_name == "mac-bind-options")
    {
        if(mac_bind_options == nullptr)
        {
            mac_bind_options = std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions>();
        }
        return mac_bind_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::BindingOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duid_bind_options != nullptr)
    {
        children["duid-bind-options"] = duid_bind_options;
    }

    if(mac_bind_options != nullptr)
    {
        children["mac-bind-options"] = mac_bind_options;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duid-bind-options" || name == "mac-bind-options")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOptions()
{
    yang_name = "mac-bind-options"; yang_parent_name = "binding-options";
}

Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::~MacBindOptions()
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::has_data() const
{
    for (std::size_t index=0; index<mac_bind_option.size(); index++)
    {
        if(mac_bind_option[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::has_operation() const
{
    for (std::size_t index=0; index<mac_bind_option.size(); index++)
    {
        if(mac_bind_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-bind-options";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacBindOptions' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-bind-option")
    {
        for(auto const & c : mac_bind_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption>();
        c->parent = this;
        mac_bind_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_bind_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-bind-option")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::MacBindOption()
    :
    mac_address{YType::str, "mac-address"},
    dns_address{YType::str, "dns-address"},
    dns_count{YType::uint8, "dns-count"},
    duid_xr{YType::str, "duid-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    opt17{YType::str, "opt17"}
{
    yang_name = "mac-bind-option"; yang_parent_name = "mac-bind-options";
}

Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::~MacBindOption()
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::has_data() const
{
    for (auto const & leaf : dns_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mac_address.is_set
	|| dns_count.is_set
	|| duid_xr.is_set
	|| mac_address_xr.is_set
	|| opt17.is_set;
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::has_operation() const
{
    for (auto const & leaf : dns_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(dns_address.yfilter)
	|| ydk::is_set(dns_count.yfilter)
	|| ydk::is_set(duid_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(opt17.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-bind-option" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacBindOption' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (dns_count.is_set || is_set(dns_count.yfilter)) leaf_name_data.push_back(dns_count.get_name_leafdata());
    if (duid_xr.is_set || is_set(duid_xr.yfilter)) leaf_name_data.push_back(duid_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (opt17.is_set || is_set(opt17.yfilter)) leaf_name_data.push_back(opt17.get_name_leafdata());

    auto dns_address_name_datas = dns_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_address_name_datas.begin(), dns_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-address")
    {
        dns_address.append(value);
    }
    if(value_path == "dns-count")
    {
        dns_count = value;
        dns_count.value_namespace = name_space;
        dns_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duid-xr")
    {
        duid_xr = value;
        duid_xr.value_namespace = name_space;
        duid_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opt17")
    {
        opt17 = value;
        opt17.value_namespace = name_space;
        opt17.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "dns-address")
    {
        dns_address.yfilter = yfilter;
    }
    if(value_path == "dns-count")
    {
        dns_count.yfilter = yfilter;
    }
    if(value_path == "duid-xr")
    {
        duid_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "opt17")
    {
        opt17.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "dns-address" || name == "dns-count" || name == "duid-xr" || name == "mac-address-xr" || name == "opt17")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOptions()
{
    yang_name = "duid-bind-options"; yang_parent_name = "binding-options";
}

Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::~DuidBindOptions()
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::has_data() const
{
    for (std::size_t index=0; index<duid_bind_option.size(); index++)
    {
        if(duid_bind_option[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::has_operation() const
{
    for (std::size_t index=0; index<duid_bind_option.size(); index++)
    {
        if(duid_bind_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duid-bind-options";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DuidBindOptions' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duid-bind-option")
    {
        for(auto const & c : duid_bind_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption>();
        c->parent = this;
        duid_bind_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : duid_bind_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duid-bind-option")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::DuidBindOption()
    :
    duid{YType::str, "duid"},
    dns_address{YType::str, "dns-address"},
    dns_count{YType::uint8, "dns-count"},
    duid_xr{YType::str, "duid-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    opt17{YType::str, "opt17"}
{
    yang_name = "duid-bind-option"; yang_parent_name = "duid-bind-options";
}

Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::~DuidBindOption()
{
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::has_data() const
{
    for (auto const & leaf : dns_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return duid.is_set
	|| dns_count.is_set
	|| duid_xr.is_set
	|| mac_address_xr.is_set
	|| opt17.is_set;
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::has_operation() const
{
    for (auto const & leaf : dns_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(duid.yfilter)
	|| ydk::is_set(dns_address.yfilter)
	|| ydk::is_set(dns_count.yfilter)
	|| ydk::is_set(duid_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(opt17.yfilter);
}

std::string Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duid-bind-option" <<"[duid='" <<duid <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DuidBindOption' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duid.is_set || is_set(duid.yfilter)) leaf_name_data.push_back(duid.get_name_leafdata());
    if (dns_count.is_set || is_set(dns_count.yfilter)) leaf_name_data.push_back(dns_count.get_name_leafdata());
    if (duid_xr.is_set || is_set(duid_xr.yfilter)) leaf_name_data.push_back(duid_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (opt17.is_set || is_set(opt17.yfilter)) leaf_name_data.push_back(opt17.get_name_leafdata());

    auto dns_address_name_datas = dns_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_address_name_datas.begin(), dns_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duid")
    {
        duid = value;
        duid.value_namespace = name_space;
        duid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-address")
    {
        dns_address.append(value);
    }
    if(value_path == "dns-count")
    {
        dns_count = value;
        dns_count.value_namespace = name_space;
        dns_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duid-xr")
    {
        duid_xr = value;
        duid_xr.value_namespace = name_space;
        duid_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opt17")
    {
        opt17 = value;
        opt17.value_namespace = name_space;
        opt17.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duid")
    {
        duid.yfilter = yfilter;
    }
    if(value_path == "dns-address")
    {
        dns_address.yfilter = yfilter;
    }
    if(value_path == "dns-count")
    {
        dns_count.yfilter = yfilter;
    }
    if(value_path == "duid-xr")
    {
        duid_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "opt17")
    {
        opt17.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duid" || name == "dns-address" || name == "dns-count" || name == "duid-xr" || name == "mac-address-xr" || name == "opt17")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Relay()
    :
    binding(std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding>())
	,statistics(std::make_shared<Dhcpv6::Nodes::Node::Relay::Statistics>())
	,vrfs(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs>())
{
    binding->parent = this;

    statistics->parent = this;

    vrfs->parent = this;

    yang_name = "relay"; yang_parent_name = "node";
}

Dhcpv6::Nodes::Node::Relay::~Relay()
{
}

bool Dhcpv6::Nodes::Node::Relay::has_data() const
{
    return (binding !=  nullptr && binding->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Dhcpv6::Nodes::Node::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (binding !=  nullptr && binding->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Dhcpv6::Nodes::Node::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding>();
        }
        return binding;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Relay::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding" || name == "statistics" || name == "vrfs")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "relay";
}

Dhcpv6::Nodes::Node::Relay::Statistics::~Statistics()
{
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_relay_stat.size(); index++)
    {
        if(ipv6_dhcpv6d_relay_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv6_dhcpv6d_relay_stat.size(); index++)
    {
        if(ipv6_dhcpv6d_relay_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-dhcpv6d-relay-stat")
    {
        for(auto const & c : ipv6_dhcpv6d_relay_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat>();
        c->parent = this;
        ipv6_dhcpv6d_relay_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_dhcpv6d_relay_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Relay::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-dhcpv6d-relay-stat")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Ipv6Dhcpv6DRelayStat()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv6-dhcpv6d-relay-stat"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::~Ipv6Dhcpv6DRelayStat()
{
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dhcpv6d-relay-stat";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dhcpv6DRelayStat' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv6-dhcpv6d-relay-stat";
}

Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::~Statistics_()
{
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Binding::Binding()
    :
    clients(std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding::Clients>())
	,summary(std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding::Summary>())
{
    clients->parent = this;

    summary->parent = this;

    yang_name = "binding"; yang_parent_name = "relay";
}

Dhcpv6::Nodes::Node::Relay::Binding::~Binding()
{
}

bool Dhcpv6::Nodes::Node::Relay::Binding::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Dhcpv6::Nodes::Node::Relay::Binding::has_operation() const
{
    return is_set(yfilter)
	|| (clients !=  nullptr && clients->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Dhcpv6::Nodes::Node::Relay::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Relay::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Relay::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "summary")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Binding::Summary::Summary()
    :
    clients{YType::uint32, "clients"}
{
    yang_name = "summary"; yang_parent_name = "binding";
}

Dhcpv6::Nodes::Node::Relay::Binding::Summary::~Summary()
{
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Summary::has_data() const
{
    return clients.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clients.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Binding::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Binding::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clients.is_set || is_set(clients.yfilter)) leaf_name_data.push_back(clients.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Binding::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Binding::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Binding::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clients")
    {
        clients = value;
        clients.value_namespace = name_space;
        clients.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Binding::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Binding::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "binding";
}

Dhcpv6::Nodes::Node::Relay::Binding::Clients::~Clients()
{
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Binding::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Binding::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Binding::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Binding::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Binding::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Relay::Binding::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::Client()
    :
    client_id{YType::str, "client-id"},
    client_id_xr{YType::uint32, "client-id-xr"},
    duid{YType::str, "duid"},
    ia_id{YType::uint32, "ia-id"},
    interface_name{YType::str, "interface-name"},
    lifetime{YType::uint32, "lifetime"},
    next_hop_addr{YType::str, "next-hop-addr"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    relay_profile_name{YType::str, "relay-profile-name"},
    rem_life_time{YType::uint32, "rem-life-time"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::~Client()
{
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::has_data() const
{
    return client_id.is_set
	|| client_id_xr.is_set
	|| duid.is_set
	|| ia_id.is_set
	|| interface_name.is_set
	|| lifetime.is_set
	|| next_hop_addr.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| relay_profile_name.is_set
	|| rem_life_time.is_set
	|| vrf_name.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(duid.yfilter)
	|| ydk::is_set(ia_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(next_hop_addr.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(relay_profile_name.yfilter)
	|| ydk::is_set(rem_life_time.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (duid.is_set || is_set(duid.yfilter)) leaf_name_data.push_back(duid.get_name_leafdata());
    if (ia_id.is_set || is_set(ia_id.yfilter)) leaf_name_data.push_back(ia_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (next_hop_addr.is_set || is_set(next_hop_addr.yfilter)) leaf_name_data.push_back(next_hop_addr.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (relay_profile_name.is_set || is_set(relay_profile_name.yfilter)) leaf_name_data.push_back(relay_profile_name.get_name_leafdata());
    if (rem_life_time.is_set || is_set(rem_life_time.yfilter)) leaf_name_data.push_back(rem_life_time.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
        client_id_xr.value_namespace = name_space;
        client_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duid")
    {
        duid = value;
        duid.value_namespace = name_space;
        duid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-id")
    {
        ia_id = value;
        ia_id.value_namespace = name_space;
        ia_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-addr")
    {
        next_hop_addr = value;
        next_hop_addr.value_namespace = name_space;
        next_hop_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay-profile-name")
    {
        relay_profile_name = value;
        relay_profile_name.value_namespace = name_space;
        relay_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-life-time")
    {
        rem_life_time = value;
        rem_life_time.value_namespace = name_space;
        rem_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr.yfilter = yfilter;
    }
    if(value_path == "duid")
    {
        duid.yfilter = yfilter;
    }
    if(value_path == "ia-id")
    {
        ia_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "next-hop-addr")
    {
        next_hop_addr.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "relay-profile-name")
    {
        relay_profile_name.yfilter = yfilter;
    }
    if(value_path == "rem-life-time")
    {
        rem_life_time.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "client-id-xr" || name == "duid" || name == "ia-id" || name == "interface-name" || name == "lifetime" || name == "next-hop-addr" || name == "prefix" || name == "prefix-length" || name == "relay-profile-name" || name == "rem-life-time" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "relay";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::~Vrfs()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics>())
{
    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::~Vrf()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-name")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Statistics()
    :
    advertise(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise>())
	,confirm(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm>())
	,decline(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline>())
	,inform(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform>())
	,lease_query(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery>())
	,lease_query_data(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData>())
	,lease_query_done(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone>())
	,lease_query_reply(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply>())
	,rebind(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind>())
	,reconfig(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig>())
	,relay_forward(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward>())
	,relay_reply(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply>())
	,release(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release>())
	,renew(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew>())
	,reply(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply>())
	,request(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request>())
	,solicit(std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit>())
{
    advertise->parent = this;

    confirm->parent = this;

    decline->parent = this;

    inform->parent = this;

    lease_query->parent = this;

    lease_query_data->parent = this;

    lease_query_done->parent = this;

    lease_query_reply->parent = this;

    rebind->parent = this;

    reconfig->parent = this;

    relay_forward->parent = this;

    relay_reply->parent = this;

    release->parent = this;

    renew->parent = this;

    reply->parent = this;

    request->parent = this;

    solicit->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (confirm !=  nullptr && confirm->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_query_data !=  nullptr && lease_query_data->has_data())
	|| (lease_query_done !=  nullptr && lease_query_done->has_data())
	|| (lease_query_reply !=  nullptr && lease_query_reply->has_data())
	|| (rebind !=  nullptr && rebind->has_data())
	|| (reconfig !=  nullptr && reconfig->has_data())
	|| (relay_forward !=  nullptr && relay_forward->has_data())
	|| (relay_reply !=  nullptr && relay_reply->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (renew !=  nullptr && renew->has_data())
	|| (reply !=  nullptr && reply->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (solicit !=  nullptr && solicit->has_data());
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (confirm !=  nullptr && confirm->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_query_data !=  nullptr && lease_query_data->has_operation())
	|| (lease_query_done !=  nullptr && lease_query_done->has_operation())
	|| (lease_query_reply !=  nullptr && lease_query_reply->has_operation())
	|| (rebind !=  nullptr && rebind->has_operation())
	|| (reconfig !=  nullptr && reconfig->has_operation())
	|| (relay_forward !=  nullptr && relay_forward->has_operation())
	|| (relay_reply !=  nullptr && relay_reply->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (renew !=  nullptr && renew->has_operation())
	|| (reply !=  nullptr && reply->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (solicit !=  nullptr && solicit->has_operation());
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "confirm")
    {
        if(confirm == nullptr)
        {
            confirm = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm>();
        }
        return confirm;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-query-data")
    {
        if(lease_query_data == nullptr)
        {
            lease_query_data = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData>();
        }
        return lease_query_data;
    }

    if(child_yang_name == "lease-query-done")
    {
        if(lease_query_done == nullptr)
        {
            lease_query_done = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone>();
        }
        return lease_query_done;
    }

    if(child_yang_name == "lease-query-reply")
    {
        if(lease_query_reply == nullptr)
        {
            lease_query_reply = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply>();
        }
        return lease_query_reply;
    }

    if(child_yang_name == "rebind")
    {
        if(rebind == nullptr)
        {
            rebind = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind>();
        }
        return rebind;
    }

    if(child_yang_name == "reconfig")
    {
        if(reconfig == nullptr)
        {
            reconfig = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig>();
        }
        return reconfig;
    }

    if(child_yang_name == "relay-forward")
    {
        if(relay_forward == nullptr)
        {
            relay_forward = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward>();
        }
        return relay_forward;
    }

    if(child_yang_name == "relay-reply")
    {
        if(relay_reply == nullptr)
        {
            relay_reply = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply>();
        }
        return relay_reply;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "renew")
    {
        if(renew == nullptr)
        {
            renew = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew>();
        }
        return renew;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request>();
        }
        return request;
    }

    if(child_yang_name == "solicit")
    {
        if(solicit == nullptr)
        {
            solicit = std::make_shared<Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit>();
        }
        return solicit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(confirm != nullptr)
    {
        children["confirm"] = confirm;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_query_data != nullptr)
    {
        children["lease-query-data"] = lease_query_data;
    }

    if(lease_query_done != nullptr)
    {
        children["lease-query-done"] = lease_query_done;
    }

    if(lease_query_reply != nullptr)
    {
        children["lease-query-reply"] = lease_query_reply;
    }

    if(rebind != nullptr)
    {
        children["rebind"] = rebind;
    }

    if(reconfig != nullptr)
    {
        children["reconfig"] = reconfig;
    }

    if(relay_forward != nullptr)
    {
        children["relay-forward"] = relay_forward;
    }

    if(relay_reply != nullptr)
    {
        children["relay-reply"] = relay_reply;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(renew != nullptr)
    {
        children["renew"] = renew;
    }

    if(reply != nullptr)
    {
        children["reply"] = reply;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(solicit != nullptr)
    {
        children["solicit"] = solicit;
    }

    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "confirm" || name == "decline" || name == "inform" || name == "lease-query" || name == "lease-query-data" || name == "lease-query-done" || name == "lease-query-reply" || name == "rebind" || name == "reconfig" || name == "relay-forward" || name == "relay-reply" || name == "release" || name == "renew" || name == "reply" || name == "request" || name == "solicit")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::Solicit()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "solicit"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::~Solicit()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Solicit' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::Advertise()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "advertise"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::~Advertise()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::~Request()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::Reply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::~Reply()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::Confirm()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "confirm"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::~Confirm()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confirm";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confirm' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::~Decline()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::Renew()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "renew"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::~Renew()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "renew";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Renew' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::Rebind()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "rebind"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::~Rebind()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rebind";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rebind' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::~Release()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::Reconfig()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "reconfig"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::~Reconfig()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reconfig";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reconfig' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::~Inform()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::RelayForward()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "relay-forward"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::~RelayForward()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-forward";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayForward' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::RelayReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "relay-reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::~RelayReply()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RelayReply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::~LeaseQuery()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::LeaseQueryReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-reply"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::~LeaseQueryReply()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-reply";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryReply' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::LeaseQueryDone()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-done"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::~LeaseQueryDone()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-done";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryDone' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::LeaseQueryData()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query-data"; yang_parent_name = "statistics";
}

Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::~LeaseQueryData()
{
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter);
}

std::string Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query-data";

    return path_buffer.str();

}

const EntityPath Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQueryData' in Cisco_IOS_XR_ipv6_new_dhcpv6d_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
}

bool Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-packets" || name == "received-packets" || name == "transmitted-packets")
        return true;
    return false;
}

const Enum::YLeaf Dhcpv6IssuRole::role_primary {0, "role-primary"};
const Enum::YLeaf Dhcpv6IssuRole::role_secondary {1, "role-secondary"};

const Enum::YLeaf BagDhcpv6DIaId::iana {0, "iana"};
const Enum::YLeaf BagDhcpv6DIaId::iapd {1, "iapd"};
const Enum::YLeaf BagDhcpv6DIaId::iata {2, "iata"};

const Enum::YLeaf Dhcpv6IssuVersion::version1 {0, "version1"};
const Enum::YLeaf Dhcpv6IssuVersion::version2 {1, "version2"};

const Enum::YLeaf BagDhcpv6DIntfSrgRole::none {0, "none"};
const Enum::YLeaf BagDhcpv6DIntfSrgRole::master {1, "master"};
const Enum::YLeaf BagDhcpv6DIntfSrgRole::slave {2, "slave"};

const Enum::YLeaf BagDhcpv6DSubMode::base {0, "base"};
const Enum::YLeaf BagDhcpv6DSubMode::server {1, "server"};
const Enum::YLeaf BagDhcpv6DSubMode::proxy {2, "proxy"};

const Enum::YLeaf LeaseLimit::none {0, "none"};
const Enum::YLeaf LeaseLimit::interface {1, "interface"};
const Enum::YLeaf LeaseLimit::circuit_id {2, "circuit-id"};
const Enum::YLeaf LeaseLimit::remote_id {3, "remote-id"};

const Enum::YLeaf BagDhcpv6DIntfSergRole::none {0, "none"};
const Enum::YLeaf BagDhcpv6DIntfSergRole::master {1, "master"};
const Enum::YLeaf BagDhcpv6DIntfSergRole::slave {2, "slave"};

const Enum::YLeaf DhcpIssuPhase::phase_not_started {0, "phase-not-started"};
const Enum::YLeaf DhcpIssuPhase::phase_load {1, "phase-load"};
const Enum::YLeaf DhcpIssuPhase::phase_run {2, "phase-run"};
const Enum::YLeaf DhcpIssuPhase::phase_completed {3, "phase-completed"};
const Enum::YLeaf DhcpIssuPhase::phase_aborted {4, "phase-aborted"};

const Enum::YLeaf BagDhcpv6DFsmState::server_initializing {0, "server-initializing"};
const Enum::YLeaf BagDhcpv6DFsmState::server_waiting_dpm {1, "server-waiting-dpm"};
const Enum::YLeaf BagDhcpv6DFsmState::server_waiting_daps {2, "server-waiting-daps"};
const Enum::YLeaf BagDhcpv6DFsmState::server_waiting_client {3, "server-waiting-client"};
const Enum::YLeaf BagDhcpv6DFsmState::server_waiting_subscriber {4, "server-waiting-subscriber"};
const Enum::YLeaf BagDhcpv6DFsmState::server_waiting_rib {5, "server-waiting-rib"};
const Enum::YLeaf BagDhcpv6DFsmState::server_bound_client {6, "server-bound-client"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_initializing {10, "proxy-initializing"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_waiting_dpm {11, "proxy-waiting-dpm"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_waiting_daps {12, "proxy-waiting-daps"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_waiting_client_server {13, "proxy-waiting-client-server"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_waiting_subscriber {14, "proxy-waiting-subscriber"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_waiting_rib {15, "proxy-waiting-rib"};
const Enum::YLeaf BagDhcpv6DFsmState::proxy_bound_client {16, "proxy-bound-client"};


}
}

