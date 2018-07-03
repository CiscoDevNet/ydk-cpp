
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_67.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_68.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::AutoTunnel::Mesh::Statistics::Statistics()
    :
    created{YType::uint32, "created"},
    connected{YType::uint32, "connected"},
    removed_unused{YType::uint32, "removed-unused"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    last_cleared_time{YType::uint32, "last-cleared-time"}
{

    yang_name = "statistics"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return created.is_set
	|| connected.is_set
	|| removed_unused.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| last_cleared_time.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(removed_unused.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
        removed_in_use.value_namespace = name_space;
        removed_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
        removed_range_exceeded.value_namespace = name_space;
        removed_range_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "created" || name == "connected" || name == "removed-unused" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Summary::Summary()
    :
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"}
{

    yang_name = "summary"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_data() const
{
    if (is_presence_container) return true;
    return auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_destinations.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_groups.yfilter)
	|| ydk::is_set(auto_mesh_destinations.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.yfilter)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
        down_auto_mesh_tunnels.value_namespace = name_space;
        down_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
        auto_mesh_groups.value_namespace = name_space;
        auto_mesh_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
        auto_mesh_destinations.value_namespace = name_space;
        auto_mesh_destinations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-tunnels" || name == "up-auto-mesh-tunnels" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-groups" || name == "auto-mesh-destinations")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"}
{

    yang_name = "config"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_data() const
{
    if (is_presence_container) return true;
    return is_configured.is_set
	|| unused_removal_timeout_configured.is_set
	|| min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "unused-removal-timeout-configured" || name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::OneHop()
    :
    interfaces(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>())
    , statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>())
    , summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>())
{
    interfaces->parent = this;
    statistics->parent = this;
    summary->parent = this;

    yang_name = "one-hop"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::~OneHop()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "statistics" || name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::~Interfaces()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
        ,
    tunnel(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::~Interface()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::Tunnel()
    :
    tunnel_id{YType::uint16, "tunnel-id"},
    destination_address{YType::str, "destination-address"},
    tunnel_lspid{YType::uint16, "tunnel-lspid"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnel"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| destination_address.is_set
	|| tunnel_lspid.is_set
	|| mesh_group_id.is_set
	|| tunnel_state.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_lspid.yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_lspid.is_set || is_set(tunnel_lspid.yfilter)) leaf_name_data.push_back(tunnel_lspid.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid = value;
        tunnel_lspid.value_namespace = name_space;
        tunnel_lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "destination-address" || name == "tunnel-lspid" || name == "mesh-group-id" || name == "tunnel-state")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::Statistics()
    :
    created{YType::uint32, "created"},
    connected{YType::uint32, "connected"},
    removed_unused{YType::uint32, "removed-unused"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    last_cleared_time{YType::uint32, "last-cleared-time"}
{

    yang_name = "statistics"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return created.is_set
	|| connected.is_set
	|| removed_unused.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| last_cleared_time.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(removed_unused.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
        removed_in_use.value_namespace = name_space;
        removed_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
        removed_range_exceeded.value_namespace = name_space;
        removed_range_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "created" || name == "connected" || name == "removed-unused" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::Summary()
    :
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"}
{

    yang_name = "summary"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_data() const
{
    if (is_presence_container) return true;
    return auto_mesh_one_hop_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_destinations.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_groups.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_destinations.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
        auto_mesh_one_hop_tunnels.value_namespace = name_space;
        auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
        up_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        up_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
        down_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        down_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
        auto_mesh_one_hop_groups.value_namespace = name_space;
        auto_mesh_one_hop_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
        auto_mesh_one_hop_destinations.value_namespace = name_space;
        auto_mesh_one_hop_destinations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-one-hop-tunnels" || name == "up-auto-mesh-one-hop-tunnels" || name == "down-auto-mesh-one-hop-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-one-hop-groups" || name == "auto-mesh-one-hop-destinations")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Backup()
    :
    tunnels(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>())
    , statistics(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>())
    , summary(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>())
    , config(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>())
{
    tunnels->parent = this;
    statistics->parent = this;
    summary->parent = this;
    config->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::~Backup()
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (tunnels !=  nullptr && tunnels->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (config !=  nullptr && config->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (config !=  nullptr && config->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnels" || name == "statistics" || name == "summary" || name == "config")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnels()
    :
    tunnel(this, {"backup_tunnel_name"})
{

    yang_name = "tunnels"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::~Tunnels()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::Tunnel()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    tunnel_name{YType::str, "tunnel-name"},
    operational_status{YType::enumeration, "operational-status"},
    srlg_mode{YType::enumeration, "srlg-mode"},
    atb_protection_type{YType::enumeration, "atb-protection-type"},
    protected_flows{YType::uint32, "protected-flows"},
    protected_interface_name{YType::str, "protected-interface-name"},
    protected_router_id{YType::str, "protected-router-id"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return backup_tunnel_name.is_set
	|| tunnel_name.is_set
	|| operational_status.is_set
	|| srlg_mode.is_set
	|| atb_protection_type.is_set
	|| protected_flows.is_set
	|| protected_interface_name.is_set
	|| protected_router_id.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(srlg_mode.yfilter)
	|| ydk::is_set(atb_protection_type.yfilter)
	|| ydk::is_set(protected_flows.yfilter)
	|| ydk::is_set(protected_interface_name.yfilter)
	|| ydk::is_set(protected_router_id.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(backup_tunnel_name, "backup-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (srlg_mode.is_set || is_set(srlg_mode.yfilter)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());
    if (atb_protection_type.is_set || is_set(atb_protection_type.yfilter)) leaf_name_data.push_back(atb_protection_type.get_name_leafdata());
    if (protected_flows.is_set || is_set(protected_flows.yfilter)) leaf_name_data.push_back(protected_flows.get_name_leafdata());
    if (protected_interface_name.is_set || is_set(protected_interface_name.yfilter)) leaf_name_data.push_back(protected_interface_name.get_name_leafdata());
    if (protected_router_id.is_set || is_set(protected_router_id.yfilter)) leaf_name_data.push_back(protected_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
        operational_status.value_namespace = name_space;
        operational_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
        srlg_mode.value_namespace = name_space;
        srlg_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type = value;
        atb_protection_type.value_namespace = name_space;
        atb_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-flows")
    {
        protected_flows = value;
        protected_flows.value_namespace = name_space;
        protected_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-name")
    {
        protected_interface_name = value;
        protected_interface_name.value_namespace = name_space;
        protected_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-router-id")
    {
        protected_router_id = value;
        protected_router_id.value_namespace = name_space;
        protected_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode.yfilter = yfilter;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type.yfilter = yfilter;
    }
    if(value_path == "protected-flows")
    {
        protected_flows.yfilter = yfilter;
    }
    if(value_path == "protected-interface-name")
    {
        protected_interface_name.yfilter = yfilter;
    }
    if(value_path == "protected-router-id")
    {
        protected_router_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-name" || name == "tunnel-name" || name == "operational-status" || name == "srlg-mode" || name == "atb-protection-type" || name == "protected-flows" || name == "protected-interface-name" || name == "protected-router-id")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Statistics()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"}
        ,
    created(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Created>())
    , connected(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Connected>())
    , removed_down(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown>())
    , removed_unused(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused>())
    , removed_in_use(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse>())
    , removed_range_exceeded(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>())
{
    created->parent = this;
    connected->parent = this;
    removed_down->parent = this;
    removed_unused->parent = this;
    removed_in_use->parent = this;
    removed_range_exceeded->parent = this;

    yang_name = "statistics"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_time.is_set
	|| (created !=  nullptr && created->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (removed_down !=  nullptr && removed_down->has_data())
	|| (removed_unused !=  nullptr && removed_unused->has_data())
	|| (removed_in_use !=  nullptr && removed_in_use->has_data())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| (created !=  nullptr && created->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (removed_down !=  nullptr && removed_down->has_operation())
	|| (removed_unused !=  nullptr && removed_unused->has_operation())
	|| (removed_in_use !=  nullptr && removed_in_use->has_operation())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "created")
    {
        if(created == nullptr)
        {
            created = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Created>();
        }
        return created;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "removed-down")
    {
        if(removed_down == nullptr)
        {
            removed_down = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown>();
        }
        return removed_down;
    }

    if(child_yang_name == "removed-unused")
    {
        if(removed_unused == nullptr)
        {
            removed_unused = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused>();
        }
        return removed_unused;
    }

    if(child_yang_name == "removed-in-use")
    {
        if(removed_in_use == nullptr)
        {
            removed_in_use = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse>();
        }
        return removed_in_use;
    }

    if(child_yang_name == "removed-range-exceeded")
    {
        if(removed_range_exceeded == nullptr)
        {
            removed_range_exceeded = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>();
        }
        return removed_range_exceeded;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(created != nullptr)
    {
        children["created"] = created;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(removed_down != nullptr)
    {
        children["removed-down"] = removed_down;
    }

    if(removed_unused != nullptr)
    {
        children["removed-unused"] = removed_unused;
    }

    if(removed_in_use != nullptr)
    {
        children["removed-in-use"] = removed_in_use;
    }

    if(removed_range_exceeded != nullptr)
    {
        children["removed-range-exceeded"] = removed_range_exceeded;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "created" || name == "connected" || name == "removed-down" || name == "removed-unused" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Created::Created()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "created"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Created::~Created()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "created";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Created::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Created::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::Connected()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "connected"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::~Connected()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::RemovedDown()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-down"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::~RemovedDown()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::RemovedUnused()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-unused"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::~RemovedUnused()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::RemovedInUse()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-in-use"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::~RemovedInUse()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-in-use";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::RemovedRangeExceeded()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-range-exceeded"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::~RemovedRangeExceeded()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-range-exceeded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Summary::Summary()
    :
    autobackups{YType::uint32, "autobackups"},
    up_autobackups{YType::uint32, "up-autobackups"},
    down_autobackups{YType::uint32, "down-autobackups"},
    unused_autobackups{YType::uint32, "unused-autobackups"},
    next_hop_autobackups{YType::uint32, "next-hop-autobackups"},
    next_next_hop_autobackups{YType::uint32, "next-next-hop-autobackups"},
    srlg_strict_autobackups{YType::uint32, "srlg-strict-autobackups"},
    srlg_preferred_autobackups{YType::uint32, "srlg-preferred-autobackups"},
    srlg_weighted_autobackups{YType::uint32, "srlg-weighted-autobackups"},
    next_hop_autobackup_protected_ls_ps{YType::uint32, "next-hop-autobackup-protected-ls-ps"},
    next_next_hop_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-autobackup-protected-ls-ps"},
    next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-hop-srlg-autobackup-protected-ls-ps"},
    next_next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-srlg-autobackup-protected-ls-ps"},
    next_hop_autobackup_protected_s2l_families{YType::uint32, "next-hop-autobackup-protected-s2l-families"},
    next_next_hop_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-autobackup-protected-s2l-families"},
    next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-hop-srlg-autobackup-protected-s2l-families"},
    next_next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2l-families"},
    next_hop_autobackup_protected_s2_ls{YType::uint32, "next-hop-autobackup-protected-s2-ls"},
    next_next_hop_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-autobackup-protected-s2-ls"},
    next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-hop-srlg-autobackup-protected-s2-ls"},
    next_next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2-ls"}
{

    yang_name = "summary"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_data() const
{
    if (is_presence_container) return true;
    return autobackups.is_set
	|| up_autobackups.is_set
	|| down_autobackups.is_set
	|| unused_autobackups.is_set
	|| next_hop_autobackups.is_set
	|| next_next_hop_autobackups.is_set
	|| srlg_strict_autobackups.is_set
	|| srlg_preferred_autobackups.is_set
	|| srlg_weighted_autobackups.is_set
	|| next_hop_autobackup_protected_ls_ps.is_set
	|| next_next_hop_autobackup_protected_ls_ps.is_set
	|| next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_hop_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackup_protected_s2l_families.is_set
	|| next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_hop_autobackup_protected_s2_ls.is_set
	|| next_next_hop_autobackup_protected_s2_ls.is_set
	|| next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_next_hop_srlg_autobackup_protected_s2_ls.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autobackups.yfilter)
	|| ydk::is_set(up_autobackups.yfilter)
	|| ydk::is_set(down_autobackups.yfilter)
	|| ydk::is_set(unused_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackups.yfilter)
	|| ydk::is_set(next_next_hop_autobackups.yfilter)
	|| ydk::is_set(srlg_strict_autobackups.yfilter)
	|| ydk::is_set(srlg_preferred_autobackups.yfilter)
	|| ydk::is_set(srlg_weighted_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.yfilter)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.yfilter)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.yfilter)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.yfilter)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.yfilter)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.yfilter)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.yfilter)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
        autobackups.value_namespace = name_space;
        autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
        up_autobackups.value_namespace = name_space;
        up_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
        down_autobackups.value_namespace = name_space;
        down_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
        unused_autobackups.value_namespace = name_space;
        unused_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
        next_hop_autobackups.value_namespace = name_space;
        next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
        next_next_hop_autobackups.value_namespace = name_space;
        next_next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
        srlg_strict_autobackups.value_namespace = name_space;
        srlg_strict_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
        srlg_preferred_autobackups.value_namespace = name_space;
        srlg_preferred_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
        srlg_weighted_autobackups.value_namespace = name_space;
        srlg_weighted_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
        next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
        next_next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
        next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
        next_next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
        next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
        next_next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autobackups")
    {
        autobackups.yfilter = yfilter;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups.yfilter = yfilter;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups.yfilter = yfilter;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autobackups" || name == "up-autobackups" || name == "down-autobackups" || name == "unused-autobackups" || name == "next-hop-autobackups" || name == "next-next-hop-autobackups" || name == "srlg-strict-autobackups" || name == "srlg-preferred-autobackups" || name == "srlg-weighted-autobackups" || name == "next-hop-autobackup-protected-ls-ps" || name == "next-next-hop-autobackup-protected-ls-ps" || name == "next-hop-srlg-autobackup-protected-ls-ps" || name == "next-next-hop-srlg-autobackup-protected-ls-ps" || name == "next-hop-autobackup-protected-s2l-families" || name == "next-next-hop-autobackup-protected-s2l-families" || name == "next-hop-srlg-autobackup-protected-s2l-families" || name == "next-next-hop-srlg-autobackup-protected-s2l-families" || name == "next-hop-autobackup-protected-s2-ls" || name == "next-next-hop-autobackup-protected-s2-ls" || name == "next-hop-srlg-autobackup-protected-s2-ls" || name == "next-next-hop-srlg-autobackup-protected-s2-ls")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    interface_count{YType::uint32, "interface-count"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"}
{

    yang_name = "config"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoTunnel::Backup::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_data() const
{
    if (is_presence_container) return true;
    return is_configured.is_set
	|| interface_count.is_set
	|| unused_removal_timeout_configured.is_set
	|| min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "interface-count" || name == "unused-removal-timeout-configured" || name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTeStandby::SoftPreemption::SoftPreemption()
    :
    statistics(std::make_shared<MplsTeStandby::SoftPreemption::Statistics>())
{
    statistics->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SoftPreemption::~SoftPreemption()
{
}

bool MplsTeStandby::SoftPreemption::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SoftPreemption::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

MplsTeStandby::SoftPreemption::Statistics::Statistics()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    soft_preempted_ls_ps{YType::uint32, "soft-preempted-ls-ps"},
    timed_out_soft_preempted_lsp_ss{YType::uint32, "timed-out-soft-preempted-lsp-ss"},
    torn_down_soft_preempted_ls_ps{YType::uint32, "torn-down-soft-preempted-ls-ps"},
    frr_triggered_soft_preempted_lsp_ss{YType::uint32, "frr-triggered-soft-preempted-lsp-ss"},
    minimum_time_in_soft_preempted_state{YType::uint16, "minimum-time-in-soft-preempted-state"},
    time_in_soft_preempted_state_max{YType::uint16, "time-in-soft-preempted-state-max"},
    time_in_soft_preempted_state_avg{YType::uint16, "time-in-soft-preempted-state-avg"},
    soft_preempted_head_ls_ps{YType::uint32, "soft-preempted-head-ls-ps"},
    reoptimized_soft_preempted_ls_ps{YType::uint32, "reoptimized-soft-preempted-ls-ps"},
    torndown_soft_preempted_ls_ps{YType::uint32, "torndown-soft-preempted-ls-ps"},
    path_protected_switchover_soft_preempted_ls_ps{YType::uint32, "path-protected-switchover-soft-preempted-ls-ps"}
{

    yang_name = "statistics"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SoftPreemption::Statistics::~Statistics()
{
}

bool MplsTeStandby::SoftPreemption::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| soft_preemption_events.is_set
	|| soft_preempted_ls_ps.is_set
	|| timed_out_soft_preempted_lsp_ss.is_set
	|| torn_down_soft_preempted_ls_ps.is_set
	|| frr_triggered_soft_preempted_lsp_ss.is_set
	|| minimum_time_in_soft_preempted_state.is_set
	|| time_in_soft_preempted_state_max.is_set
	|| time_in_soft_preempted_state_avg.is_set
	|| soft_preempted_head_ls_ps.is_set
	|| reoptimized_soft_preempted_ls_ps.is_set
	|| torndown_soft_preempted_ls_ps.is_set
	|| path_protected_switchover_soft_preempted_ls_ps.is_set;
}

bool MplsTeStandby::SoftPreemption::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(soft_preemption_events.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(timed_out_soft_preempted_lsp_ss.yfilter)
	|| ydk::is_set(torn_down_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(frr_triggered_soft_preempted_lsp_ss.yfilter)
	|| ydk::is_set(minimum_time_in_soft_preempted_state.yfilter)
	|| ydk::is_set(time_in_soft_preempted_state_max.yfilter)
	|| ydk::is_set(time_in_soft_preempted_state_avg.yfilter)
	|| ydk::is_set(soft_preempted_head_ls_ps.yfilter)
	|| ydk::is_set(reoptimized_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(torndown_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(path_protected_switchover_soft_preempted_ls_ps.yfilter);
}

std::string MplsTeStandby::SoftPreemption::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/soft-preemption/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SoftPreemption::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SoftPreemption::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.yfilter)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (timed_out_soft_preempted_lsp_ss.is_set || is_set(timed_out_soft_preempted_lsp_ss.yfilter)) leaf_name_data.push_back(timed_out_soft_preempted_lsp_ss.get_name_leafdata());
    if (torn_down_soft_preempted_ls_ps.is_set || is_set(torn_down_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(torn_down_soft_preempted_ls_ps.get_name_leafdata());
    if (frr_triggered_soft_preempted_lsp_ss.is_set || is_set(frr_triggered_soft_preempted_lsp_ss.yfilter)) leaf_name_data.push_back(frr_triggered_soft_preempted_lsp_ss.get_name_leafdata());
    if (minimum_time_in_soft_preempted_state.is_set || is_set(minimum_time_in_soft_preempted_state.yfilter)) leaf_name_data.push_back(minimum_time_in_soft_preempted_state.get_name_leafdata());
    if (time_in_soft_preempted_state_max.is_set || is_set(time_in_soft_preempted_state_max.yfilter)) leaf_name_data.push_back(time_in_soft_preempted_state_max.get_name_leafdata());
    if (time_in_soft_preempted_state_avg.is_set || is_set(time_in_soft_preempted_state_avg.yfilter)) leaf_name_data.push_back(time_in_soft_preempted_state_avg.get_name_leafdata());
    if (soft_preempted_head_ls_ps.is_set || is_set(soft_preempted_head_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_head_ls_ps.get_name_leafdata());
    if (reoptimized_soft_preempted_ls_ps.is_set || is_set(reoptimized_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(reoptimized_soft_preempted_ls_ps.get_name_leafdata());
    if (torndown_soft_preempted_ls_ps.is_set || is_set(torndown_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(torndown_soft_preempted_ls_ps.get_name_leafdata());
    if (path_protected_switchover_soft_preempted_ls_ps.is_set || is_set(path_protected_switchover_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(path_protected_switchover_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SoftPreemption::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SoftPreemption::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SoftPreemption::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
        soft_preemption_events.value_namespace = name_space;
        soft_preemption_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss = value;
        timed_out_soft_preempted_lsp_ss.value_namespace = name_space;
        timed_out_soft_preempted_lsp_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps = value;
        torn_down_soft_preempted_ls_ps.value_namespace = name_space;
        torn_down_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss = value;
        frr_triggered_soft_preempted_lsp_ss.value_namespace = name_space;
        frr_triggered_soft_preempted_lsp_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state = value;
        minimum_time_in_soft_preempted_state.value_namespace = name_space;
        minimum_time_in_soft_preempted_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max = value;
        time_in_soft_preempted_state_max.value_namespace = name_space;
        time_in_soft_preempted_state_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg = value;
        time_in_soft_preempted_state_avg.value_namespace = name_space;
        time_in_soft_preempted_state_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps = value;
        soft_preempted_head_ls_ps.value_namespace = name_space;
        soft_preempted_head_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps = value;
        reoptimized_soft_preempted_ls_ps.value_namespace = name_space;
        reoptimized_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps = value;
        torndown_soft_preempted_ls_ps.value_namespace = name_space;
        torndown_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps = value;
        path_protected_switchover_soft_preempted_ls_ps.value_namespace = name_space;
        path_protected_switchover_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SoftPreemption::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss.yfilter = yfilter;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss.yfilter = yfilter;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state.yfilter = yfilter;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max.yfilter = yfilter;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps.yfilter = yfilter;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::SoftPreemption::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "soft-preemption-events" || name == "soft-preempted-ls-ps" || name == "timed-out-soft-preempted-lsp-ss" || name == "torn-down-soft-preempted-ls-ps" || name == "frr-triggered-soft-preempted-lsp-ss" || name == "minimum-time-in-soft-preempted-state" || name == "time-in-soft-preempted-state-max" || name == "time-in-soft-preempted-state-avg" || name == "soft-preempted-head-ls-ps" || name == "reoptimized-soft-preempted-ls-ps" || name == "torndown-soft-preempted-ls-ps" || name == "path-protected-switchover-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestinations()
    :
    forwarding_adjacency_destination(this, {"destination_address"})
{

    yang_name = "forwarding-adjacency-destinations"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::ForwardingAdjacencyDestinations::~ForwardingAdjacencyDestinations()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_adjacency_destination.len(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_operation() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.len(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-adjacency-destination")
    {
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination>();
        c->parent = this;
        forwarding_adjacency_destination.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forwarding_adjacency_destination.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::ForwardingAdjacencyDestinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-adjacency-destination")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardingAdjacencyDestination()
    :
    destination_address{YType::str, "destination-address"},
    adjacencies{YType::uint32, "adjacencies"},
    ipv6_adjacencies{YType::uint32, "ipv6-adjacencies"},
    destination_address_xr{YType::str, "destination-address-xr"}
        ,
    forward_adjacency(this, {})
{

    yang_name = "forwarding-adjacency-destination"; yang_parent_name = "forwarding-adjacency-destinations"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::~ForwardingAdjacencyDestination()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forward_adjacency.len(); index++)
    {
        if(forward_adjacency[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| adjacencies.is_set
	|| ipv6_adjacencies.is_set
	|| destination_address_xr.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_operation() const
{
    for (std::size_t index=0; index<forward_adjacency.len(); index++)
    {
        if(forward_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(adjacencies.yfilter)
	|| ydk::is_set(ipv6_adjacencies.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/forwarding-adjacency-destinations/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destination";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (adjacencies.is_set || is_set(adjacencies.yfilter)) leaf_name_data.push_back(adjacencies.get_name_leafdata());
    if (ipv6_adjacencies.is_set || is_set(ipv6_adjacencies.yfilter)) leaf_name_data.push_back(ipv6_adjacencies.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-adjacency")
    {
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency>();
        c->parent = this;
        forward_adjacency.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forward_adjacency.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacencies")
    {
        adjacencies = value;
        adjacencies.value_namespace = name_space;
        adjacencies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies = value;
        ipv6_adjacencies.value_namespace = name_space;
        ipv6_adjacencies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "adjacencies")
    {
        adjacencies.yfilter = yfilter;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-adjacency" || name == "destination-address" || name == "adjacencies" || name == "ipv6-adjacencies" || name == "destination-address-xr")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::ForwardAdjacency()
    :
    tunnel_name{YType::str, "tunnel-name"},
    traffic_share{YType::uint32, "traffic-share"},
    hold_time{YType::uint32, "hold-time"},
    is_adjacency_up{YType::boolean, "is-adjacency-up"}
        ,
    ig_ps(this, {})
{

    yang_name = "forward-adjacency"; yang_parent_name = "forwarding-adjacency-destination"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::~ForwardAdjacency()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| traffic_share.is_set
	|| hold_time.is_set
	|| is_adjacency_up.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(traffic_share.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(is_adjacency_up.yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (traffic_share.is_set || is_set(traffic_share.yfilter)) leaf_name_data.push_back(traffic_share.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_adjacency_up.is_set || is_set(is_adjacency_up.yfilter)) leaf_name_data.push_back(is_adjacency_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs>();
        c->parent = this;
        ig_ps.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ig_ps.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-share")
    {
        traffic_share = value;
        traffic_share.value_namespace = name_space;
        traffic_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up = value;
        is_adjacency_up.value_namespace = name_space;
        is_adjacency_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "traffic-share")
    {
        traffic_share.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up.yfilter = yfilter;
    }
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "tunnel-name" || name == "traffic-share" || name == "hold-time" || name == "is-adjacency-up")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::IgPs()
    :
    igp_area_id{YType::str, "igp-area-id"},
    afi{YType::enumeration, "afi"}
{

    yang_name = "ig-ps"; yang_parent_name = "forward-adjacency"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::~IgPs()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_data() const
{
    if (is_presence_container) return true;
    return igp_area_id.is_set
	|| afi.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(afi.yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-id" || name == "afi")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpAreas()
    :
    igp_area(this, {"protocol", "process_tag"})
{

    yang_name = "igp-areas"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::IgpAreas::~IgpAreas()
{
}

bool MplsTeStandby::IgpAreas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_area.len(); index++)
    {
        if(igp_area[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::IgpAreas::has_operation() const
{
    for (std::size_t index=0; index<igp_area.len(); index++)
    {
        if(igp_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::IgpAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area")
    {
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea>();
        c->parent = this;
        igp_area.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : igp_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::IgpAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::IgpAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::IgpArea()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    igp_type{YType::enumeration, "igp-type"},
    instance_name{YType::str, "instance-name"},
    igp_system_id{YType::str, "igp-system-id"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    is_connection_up{YType::boolean, "is-connection-up"},
    connection_up_count{YType::uint32, "connection-up-count"},
    connection_down_count{YType::uint32, "connection-down-count"}
        ,
    secondary_router_id(this, {})
    , area(this, {})
{

    yang_name = "igp-area"; yang_parent_name = "igp-areas"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::IgpAreas::IgpArea::~IgpArea()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
	|| igp_type.is_set
	|| instance_name.is_set
	|| igp_system_id.is_set
	|| configured_te_router_id.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| in_use_te_router_id.is_set
	|| is_connection_up.is_set
	|| connection_up_count.is_set
	|| connection_down_count.is_set;
}

bool MplsTeStandby::IgpAreas::IgpArea::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(connection_down_count.yfilter);
}

std::string MplsTeStandby::IgpAreas::IgpArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/igp-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreas::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(process_tag, "process-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-router-id")
    {
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.append(c);
        return c;
    }

    if(child_yang_name == "area")
    {
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area>();
        c->parent = this;
        area.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : secondary_router_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-tag")
    {
        process_tag = value;
        process_tag.value_namespace = name_space;
        process_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
        global_router_id.value_namespace = name_space;
        global_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
        globall_router_id_optical.value_namespace = name_space;
        globall_router_id_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id" || name == "area" || name == "protocol" || name == "process-tag" || name == "igp-type" || name == "instance-name" || name == "igp-system-id" || name == "configured-te-router-id" || name == "global-router-id" || name == "globall-router-id-optical" || name == "in-use-te-router-id" || name == "is-connection-up" || name == "connection-up-count" || name == "connection-down-count")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::Area::Area()
    :
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    area_format{YType::enumeration, "area-format"},
    is_config_ready{YType::boolean, "is-config-ready"}
        ,
    active_data(std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreas::IgpArea::Area::~Area()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_data() const
{
    if (is_presence_container) return true;
    return area_index.is_set
	|| area_number.is_set
	|| area_format.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-index")
    {
        area_index = value;
        area_index.value_namespace = name_space;
        area_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-number")
    {
        area_number = value;
        area_number.value_namespace = name_space;
        area_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-index" || name == "area-number" || name == "area-format" || name == "is-config-ready")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    sr_strict{YType::boolean, "sr-strict"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
        ,
    area_statistics(std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::~ActiveData()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_data() const
{
    if (is_presence_container) return true;
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| topology_idt_received.is_set
	|| sr_strict.is_set
	|| p2p_heads_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2mp_destination_count.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
        interfaces_count.value_namespace = name_space;
        interfaces_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
        link_idt_received.value_namespace = name_space;
        link_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
        p2p_autoroute_announced_count.value_namespace = name_space;
        p2p_autoroute_announced_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
        p2p_forwarding_adjacency_count.value_namespace = name_space;
        p2p_forwarding_adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "topology-idt-received" || name == "sr-strict" || name == "p2p-heads-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2mp-destination-count" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return area_adjacency_request_messages.is_set
	|| area_adjacency_announce_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
        area_flood_messages.value_namespace = name_space;
        area_flood_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
        area_lsa_announce_messages.value_namespace = name_space;
        area_lsa_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
        area_lsa_fragment_delete_messages.value_namespace = name_space;
        area_lsa_fragment_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
        area_tunnel_announce_messages.value_namespace = name_space;
        area_tunnel_announce_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-request-messages" || name == "area-adjacency-announce-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTeStandby::WrapProtection::WrapProtection()
    :
    protected_lsps(std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps>())
{
    protected_lsps->parent = this;

    yang_name = "wrap-protection"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::WrapProtection::~WrapProtection()
{
}

bool MplsTeStandby::WrapProtection::has_data() const
{
    if (is_presence_container) return true;
    return (protected_lsps !=  nullptr && protected_lsps->has_data());
}

bool MplsTeStandby::WrapProtection::has_operation() const
{
    return is_set(yfilter)
	|| (protected_lsps !=  nullptr && protected_lsps->has_operation());
}

std::string MplsTeStandby::WrapProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::WrapProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wrap-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::WrapProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::WrapProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-lsps")
    {
        if(protected_lsps == nullptr)
        {
            protected_lsps = std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps>();
        }
        return protected_lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::WrapProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protected_lsps != nullptr)
    {
        children["protected-lsps"] = protected_lsps;
    }

    return children;
}

void MplsTeStandby::WrapProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::WrapProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::WrapProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-lsps")
        return true;
    return false;
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsps()
    :
    protected_lsp(this, {"source_address", "destination_address", "tunnel_id", "extended_tunnel_id", "lsp_id", "sub_group_id", "sub_group_originator", "p2mp_id", "session_type"})
{

    yang_name = "protected-lsps"; yang_parent_name = "wrap-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::WrapProtection::ProtectedLsps::~ProtectedLsps()
{
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_lsp.len(); index++)
    {
        if(protected_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::has_operation() const
{
    for (std::size_t index=0; index<protected_lsp.len(); index++)
    {
        if(protected_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/wrap-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::WrapProtection::ProtectedLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::WrapProtection::ProtectedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-lsp")
    {
        auto c = std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp>();
        c->parent = this;
        protected_lsp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::WrapProtection::ProtectedLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protected_lsp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::WrapProtection::ProtectedLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::WrapProtection::ProtectedLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-lsp")
        return true;
    return false;
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::ProtectedLsp()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    sub_group_id{YType::uint32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::uint32, "p2mp-id"},
    session_type{YType::enumeration, "session-type"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"}
{

    yang_name = "protected-lsp"; yang_parent_name = "protected-lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::~ProtectedLsp()
{
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| tunnel_id_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| tunnel_instance.is_set
	|| lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set
	|| lsp_wrap_protection_state.is_set
	|| sub_group_original_id.is_set
	|| sub_group_id_xr.is_set
	|| p2mp_id_xr.is_set;
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(lsp_wrap_protection_enable.yfilter)
	|| ydk::is_set(lsp_wrap_protection_label.yfilter)
	|| ydk::is_set(reverse_egress_interface.yfilter)
	|| ydk::is_set(reverse_lsp_label.yfilter)
	|| ydk::is_set(lsp_wrap_protection_state.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter);
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/wrap-protection/protected-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsp";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(session_type, "session-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.yfilter)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.yfilter)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
        lsp_wrap_protection_enable.value_namespace = name_space;
        lsp_wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
        lsp_wrap_protection_label.value_namespace = name_space;
        lsp_wrap_protection_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
        reverse_egress_interface.value_namespace = name_space;
        reverse_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
        reverse_lsp_label.value_namespace = name_space;
        reverse_lsp_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
        lsp_wrap_protection_state.value_namespace = name_space;
        lsp_wrap_protection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label.yfilter = yfilter;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "source-address-xr" || name == "destination-address-xr" || name == "tunnel-id-xr" || name == "extended-tunnel-id-xr" || name == "tunnel-name" || name == "tunnel-instance" || name == "lsp-wrap-protection-enable" || name == "lsp-wrap-protection-label" || name == "reverse-egress-interface" || name == "reverse-lsp-label" || name == "lsp-wrap-protection-state" || name == "sub-group-original-id" || name == "sub-group-id-xr" || name == "p2mp-id-xr")
        return true;
    return false;
}

MplsTeStandby::Topology::Topology()
    :
    global(std::make_shared<MplsTeStandby::Topology::Global>())
    , destination_paths(std::make_shared<MplsTeStandby::Topology::DestinationPaths>())
    , configured_srlgs(std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs>())
    , srlgs(std::make_shared<MplsTeStandby::Topology::Srlgs>())
    , path_tunnels(std::make_shared<MplsTeStandby::Topology::PathTunnels>())
{
    global->parent = this;
    destination_paths->parent = this;
    configured_srlgs->parent = this;
    srlgs->parent = this;
    path_tunnels->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::~Topology()
{
}

bool MplsTeStandby::Topology::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (destination_paths !=  nullptr && destination_paths->has_data())
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data())
	|| (path_tunnels !=  nullptr && path_tunnels->has_data());
}

bool MplsTeStandby::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (destination_paths !=  nullptr && destination_paths->has_operation())
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (path_tunnels !=  nullptr && path_tunnels->has_operation());
}

std::string MplsTeStandby::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsTeStandby::Topology::Global>();
        }
        return global;
    }

    if(child_yang_name == "destination-paths")
    {
        if(destination_paths == nullptr)
        {
            destination_paths = std::make_shared<MplsTeStandby::Topology::DestinationPaths>();
        }
        return destination_paths;
    }

    if(child_yang_name == "configured-srlgs")
    {
        if(configured_srlgs == nullptr)
        {
            configured_srlgs = std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs>();
        }
        return configured_srlgs;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTeStandby::Topology::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "path-tunnels")
    {
        if(path_tunnels == nullptr)
        {
            path_tunnels = std::make_shared<MplsTeStandby::Topology::PathTunnels>();
        }
        return path_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(destination_paths != nullptr)
    {
        children["destination-paths"] = destination_paths;
    }

    if(configured_srlgs != nullptr)
    {
        children["configured-srlgs"] = configured_srlgs;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    if(path_tunnels != nullptr)
    {
        children["path-tunnels"] = path_tunnels;
    }

    return children;
}

void MplsTeStandby::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "destination-paths" || name == "configured-srlgs" || name == "srlgs" || name == "path-tunnels")
        return true;
    return false;
}

MplsTeStandby::Topology::Global::Global()
    :
    hold_down_interval{YType::uint32, "hold-down-interval"},
    link_add_remove_count{YType::uint32, "link-add-remove-count"},
    local_model_id{YType::uint32, "local-model-id"}
        ,
    areas(this, {})
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::Global::~Global()
{
}

bool MplsTeStandby::Topology::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<areas.len(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    return hold_down_interval.is_set
	|| link_add_remove_count.is_set
	|| local_model_id.is_set;
}

bool MplsTeStandby::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<areas.len(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hold_down_interval.yfilter)
	|| ydk::is_set(link_add_remove_count.yfilter)
	|| ydk::is_set(local_model_id.yfilter);
}

std::string MplsTeStandby::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_down_interval.is_set || is_set(hold_down_interval.yfilter)) leaf_name_data.push_back(hold_down_interval.get_name_leafdata());
    if (link_add_remove_count.is_set || is_set(link_add_remove_count.yfilter)) leaf_name_data.push_back(link_add_remove_count.get_name_leafdata());
    if (local_model_id.is_set || is_set(local_model_id.yfilter)) leaf_name_data.push_back(local_model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areas")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::Global::Areas>();
        c->parent = this;
        areas.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : areas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval = value;
        hold_down_interval.value_namespace = name_space;
        hold_down_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count = value;
        link_add_remove_count.value_namespace = name_space;
        link_add_remove_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-model-id")
    {
        local_model_id = value;
        local_model_id.value_namespace = name_space;
        local_model_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval.yfilter = yfilter;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count.yfilter = yfilter;
    }
    if(value_path == "local-model-id")
    {
        local_model_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areas" || name == "hold-down-interval" || name == "link-add-remove-count" || name == "local-model-id")
        return true;
    return false;
}

MplsTeStandby::Topology::Global::Areas::Areas()
    :
    protocol{YType::enumeration, "protocol"},
    node_id{YType::str, "node-id"},
    area_id{YType::str, "area-id"}
        ,
    local_sid_and_srbg(std::make_shared<MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg>())
{
    local_sid_and_srbg->parent = this;

    yang_name = "areas"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::Global::Areas::~Areas()
{
}

bool MplsTeStandby::Topology::Global::Areas::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| node_id.is_set
	|| area_id.is_set
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_data());
}

bool MplsTeStandby::Topology::Global::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_operation());
}

std::string MplsTeStandby::Topology::Global::Areas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::Global::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Global::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Global::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-sid-and-srbg")
    {
        if(local_sid_and_srbg == nullptr)
        {
            local_sid_and_srbg = std::make_shared<MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg>();
        }
        return local_sid_and_srbg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Global::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_sid_and_srbg != nullptr)
    {
        children["local-sid-and-srbg"] = local_sid_and_srbg;
    }

    return children;
}

void MplsTeStandby::Topology::Global::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Global::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Global::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-sid-and-srbg" || name == "protocol" || name == "node-id" || name == "area-id")
        return true;
    return false;
}

MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::LocalSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_size{YType::uint32, "srgb-size"}
{

    yang_name = "local-sid-and-srbg"; yang_parent_name = "areas"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::~LocalSidAndSrbg()
{
}

bool MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::has_data() const
{
    if (is_presence_container) return true;
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_start.is_set
	|| srgb_size.is_set;
}

bool MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_size.yfilter);
}

std::string MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/global/areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-sid-and-srbg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
        segment_id_local_absolute_value.value_namespace = name_space;
        segment_id_local_absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
        srgb_size.value_namespace = name_space;
        srgb_size.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-size")
    {
        srgb_size.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-start" || name == "srgb-size")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPaths()
    :
    destination_path(this, {})
{

    yang_name = "destination-paths"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::~DestinationPaths()
{
}

bool MplsTeStandby::Topology::DestinationPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_path.len(); index++)
    {
        if(destination_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::DestinationPaths::has_operation() const
{
    for (std::size_t index=0; index<destination_path.len(); index++)
    {
        if(destination_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-path")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath>();
        c->parent = this;
        destination_path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : destination_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Topology::DestinationPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Topology::DestinationPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-path")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::DestinationPath()
    :
    destination_address{YType::str, "destination-address"},
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"},
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"},
    bandwidth{YType::uint32, "bandwidth"},
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    hop_limit{YType::uint32, "hop-limit"},
    exclude_srlg_ip_address{YType::str, "exclude-srlg-ip-address"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    cost_limit{YType::uint32, "cost-limit"},
    metric_type{YType::enumeration, "metric-type"},
    delay_limit{YType::uint32, "delay-limit"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_full_path{YType::boolean, "is-full-path"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    node_hop_count{YType::uint8, "node-hop-count"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"}
        ,
    affinity(std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity>())
    , hop(this, {})
    , shared_risk_link_group(this, {})
    , sr_segment(this, {})
{
    affinity->parent = this;

    yang_name = "destination-path"; yang_parent_name = "destination-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::~DestinationPath()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| affinity_bits.is_set
	|| affinity_mask.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth.is_set
	|| igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| hop_limit.is_set
	|| exclude_srlg_ip_address.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| cost_limit.is_set
	|| metric_type.is_set
	|| delay_limit.is_set
	|| tunnel_id_xr.is_set
	|| destination_address_xr.is_set
	|| is_partial_path.is_set
	|| is_full_path.is_set
	|| is_topology_checked.is_set
	|| is_segment_routing_db_checked.is_set
	|| requested_bandwidth.is_set
	|| bandwidth_type.is_set
	|| mininum_bandwidth.is_set
	|| accumulated_admin_weight.is_set
	|| setup_priority_xr.is_set
	|| hold_priority_xr.is_set
	|| node_hop_count.is_set
	|| exclude_srlg_address.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(exclude_srlg_ip_address.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (exclude_srlg_ip_address.is_set || is_set(exclude_srlg_ip_address.yfilter)) leaf_name_data.push_back(exclude_srlg_ip_address.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop>();
        c->parent = this;
        hop.append(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.append(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment>();
        c->parent = this;
        sr_segment.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    count = 0;
    for (auto c : hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : shared_risk_link_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : sr_segment.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address = value;
        exclude_srlg_ip_address.value_namespace = name_space;
        exclude_srlg_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "destination-address" || name == "affinity-bits" || name == "affinity-mask" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "hop-limit" || name == "exclude-srlg-ip-address" || name == "path-type" || name == "path-id" || name == "path-name" || name == "cost-limit" || name == "metric-type" || name == "delay-limit" || name == "tunnel-id-xr" || name == "destination-address-xr" || name == "is-partial-path" || name == "is-full-path" || name == "is-topology-checked" || name == "is-segment-routing-db-checked" || name == "requested-bandwidth" || name == "bandwidth-type" || name == "mininum-bandwidth" || name == "accumulated-admin-weight" || name == "setup-priority-xr" || name == "hold-priority-xr" || name == "node-hop-count" || name == "exclude-srlg-address")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::~Affinity()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::~Hop()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::SrSegment()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "sr-segment"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::~SrSegment()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlgs()
    :
    configured_srlg(this, {"srlg_number"})
{

    yang_name = "configured-srlgs"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::ConfiguredSrlgs::~ConfiguredSrlgs()
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configured_srlg.len(); index++)
    {
        if(configured_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::has_operation() const
{
    for (std::size_t index=0; index<configured_srlg.len(); index++)
    {
        if(configured_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::ConfiguredSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::ConfiguredSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-srlg")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg>();
        c->parent = this;
        configured_srlg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::ConfiguredSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : configured_srlg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::ConfiguredSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Topology::ConfiguredSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-srlg")
        return true;
    return false;
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::ConfiguredSrlg()
    :
    srlg_number{YType::uint32, "srlg-number"},
    srlg_number_xr{YType::uint32, "srlg-number-xr"},
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"},
    is_admin_weight_configured{YType::boolean, "is-admin-weight-configured"}
        ,
    srlg_link(this, {})
{

    yang_name = "configured-srlg"; yang_parent_name = "configured-srlgs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::~ConfiguredSrlg()
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| srlg_number_xr.is_set
	|| srlg_name.is_set
	|| admin_weight.is_set
	|| is_admin_weight_configured.is_set;
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter)
	|| ydk::is_set(srlg_number_xr.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(is_admin_weight_configured.yfilter);
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/configured-srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlg";
    ADD_KEY_TOKEN(srlg_number, "srlg-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (srlg_number_xr.is_set || is_set(srlg_number_xr.yfilter)) leaf_name_data.push_back(srlg_number_xr.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (is_admin_weight_configured.is_set || is_set(is_admin_weight_configured.yfilter)) leaf_name_data.push_back(is_admin_weight_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink>();
        c->parent = this;
        srlg_link.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr = value;
        srlg_number_xr.value_namespace = name_space;
        srlg_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured = value;
        is_admin_weight_configured.value_namespace = name_space;
        is_admin_weight_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-link" || name == "srlg-number" || name == "srlg-number-xr" || name == "srlg-name" || name == "admin-weight" || name == "is-admin-weight-configured")
        return true;
    return false;
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::SrlgLink()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "srlg-link"; yang_parent_name = "configured-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::~SrlgLink()
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_data() const
{
    if (is_presence_container) return true;
    return local_address.is_set
	|| remote_address.is_set;
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlgs()
    :
    srlg(this, {"srlg_number"})
{

    yang_name = "srlgs"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::Srlgs::~Srlgs()
{
}

bool MplsTeStandby::Topology::Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Topology::Srlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg>();
        c->parent = this;
        srlg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Topology::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Topology::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::uint32, "srlg-number"},
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"}
        ,
    srlg_areas(this, {})
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::Srlgs::Srlg::~Srlg()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_areas.len(); index++)
    {
        if(srlg_areas[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| srlg_name.is_set
	|| admin_weight.is_set;
}

bool MplsTeStandby::Topology::Srlgs::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_areas.len(); index++)
    {
        if(srlg_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter);
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    ADD_KEY_TOKEN(srlg_number, "srlg-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-areas")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas>();
        c->parent = this;
        srlg_areas.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_areas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-areas" || name == "srlg-number" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgAreas()
    :
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"}
        ,
    srlg_link(this, {})
{

    yang_name = "srlg-areas"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::~SrlgAreas()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| igp_area_format.is_set;
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_format.yfilter);
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink>();
        c->parent = this;
        srlg_link.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-link" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "igp-area-format")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::SrlgLink()
    :
    link_address{YType::str, "link-address"},
    te_router_id{YType::str, "te-router-id"}
        ,
    link_address_generic(std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>())
{
    link_address_generic->parent = this;

    yang_name = "srlg-link"; yang_parent_name = "srlg-areas"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::~SrlgLink()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_data() const
{
    if (is_presence_container) return true;
    return link_address.is_set
	|| te_router_id.is_set
	|| (link_address_generic !=  nullptr && link_address_generic->has_data());
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| (link_address_generic !=  nullptr && link_address_generic->has_operation());
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-address-generic")
    {
        if(link_address_generic == nullptr)
        {
            link_address_generic = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>();
        }
        return link_address_generic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_address_generic != nullptr)
    {
        children["link-address-generic"] = link_address_generic;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-address-generic" || name == "link-address" || name == "te-router-id")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::LinkAddressGeneric()
    :
    te_addr(std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "link-address-generic"; yang_parent_name = "srlg-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::~LinkAddressGeneric()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_data() const
{
    if (is_presence_container) return true;
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    ipv4_unnumbered_address(std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "link-address-generic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnels()
    :
    path_tunnel(this, {})
{

    yang_name = "path-tunnels"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::~PathTunnels()
{
}

bool MplsTeStandby::Topology::PathTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_tunnel.len(); index++)
    {
        if(path_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::PathTunnels::has_operation() const
{
    for (std::size_t index=0; index<path_tunnel.len(); index++)
    {
        if(path_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-tunnel")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel>();
        c->parent = this;
        path_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Topology::PathTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Topology::PathTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-tunnel")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::PathTunnel()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_full_path{YType::boolean, "is-full-path"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    node_hop_count{YType::uint8, "node-hop-count"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"}
        ,
    affinity(std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity>())
    , hop(this, {})
    , shared_risk_link_group(this, {})
    , sr_segment(this, {})
{
    affinity->parent = this;

    yang_name = "path-tunnel"; yang_parent_name = "path-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::~PathTunnel()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_name.is_set
	|| tunnel_id_xr.is_set
	|| destination_address_xr.is_set
	|| is_partial_path.is_set
	|| is_full_path.is_set
	|| is_topology_checked.is_set
	|| is_segment_routing_db_checked.is_set
	|| requested_bandwidth.is_set
	|| bandwidth_type.is_set
	|| mininum_bandwidth.is_set
	|| accumulated_admin_weight.is_set
	|| setup_priority_xr.is_set
	|| hold_priority_xr.is_set
	|| node_hop_count.is_set
	|| exclude_srlg_address.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop>();
        c->parent = this;
        hop.append(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.append(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment>();
        c->parent = this;
        sr_segment.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    count = 0;
    for (auto c : hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : shared_risk_link_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : sr_segment.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-id-xr" || name == "destination-address-xr" || name == "is-partial-path" || name == "is-full-path" || name == "is-topology-checked" || name == "is-segment-routing-db-checked" || name == "requested-bandwidth" || name == "bandwidth-type" || name == "mininum-bandwidth" || name == "accumulated-admin-weight" || name == "setup-priority-xr" || name == "hold-priority-xr" || name == "node-hop-count" || name == "exclude-srlg-address")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::~Affinity()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::~Hop()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::SrSegment()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "sr-segment"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::~SrSegment()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::SignallingCounters()
    :
    issu(std::make_shared<MplsTeStandby::SignallingCounters::Issu>())
    , head_signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters>())
    , remote_signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters>())
    , signallings(std::make_shared<MplsTeStandby::SignallingCounters::Signallings>())
    , signalling_summary(std::make_shared<MplsTeStandby::SignallingCounters::SignallingSummary>())
{
    issu->parent = this;
    head_signalling_counters->parent = this;
    remote_signalling_counters->parent = this;
    signallings->parent = this;
    signalling_summary->parent = this;

    yang_name = "signalling-counters"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::~SignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    return (issu !=  nullptr && issu->has_data())
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_data())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_data())
	|| (signallings !=  nullptr && signallings->has_data())
	|| (signalling_summary !=  nullptr && signalling_summary->has_data());
}

bool MplsTeStandby::SignallingCounters::has_operation() const
{
    return is_set(yfilter)
	|| (issu !=  nullptr && issu->has_operation())
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_operation())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_operation())
	|| (signallings !=  nullptr && signallings->has_operation())
	|| (signalling_summary !=  nullptr && signalling_summary->has_operation());
}

std::string MplsTeStandby::SignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTeStandby::SignallingCounters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "head-signalling-counters")
    {
        if(head_signalling_counters == nullptr)
        {
            head_signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters>();
        }
        return head_signalling_counters;
    }

    if(child_yang_name == "remote-signalling-counters")
    {
        if(remote_signalling_counters == nullptr)
        {
            remote_signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters>();
        }
        return remote_signalling_counters;
    }

    if(child_yang_name == "signallings")
    {
        if(signallings == nullptr)
        {
            signallings = std::make_shared<MplsTeStandby::SignallingCounters::Signallings>();
        }
        return signallings;
    }

    if(child_yang_name == "signalling-summary")
    {
        if(signalling_summary == nullptr)
        {
            signalling_summary = std::make_shared<MplsTeStandby::SignallingCounters::SignallingSummary>();
        }
        return signalling_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(head_signalling_counters != nullptr)
    {
        children["head-signalling-counters"] = head_signalling_counters;
    }

    if(remote_signalling_counters != nullptr)
    {
        children["remote-signalling-counters"] = remote_signalling_counters;
    }

    if(signallings != nullptr)
    {
        children["signallings"] = signallings;
    }

    if(signalling_summary != nullptr)
    {
        children["signalling-summary"] = signalling_summary;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issu" || name == "head-signalling-counters" || name == "remote-signalling-counters" || name == "signallings" || name == "signalling-summary")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    role{YType::enumeration, "role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nac_ks{YType::uint64, "total-nac-ks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "issu"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::Issu::~Issu()
{
}

bool MplsTeStandby::SignallingCounters::Issu::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nac_ks.is_set
	|| total_id_ts.is_set;
}

bool MplsTeStandby::SignallingCounters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nac_ks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nac_ks.is_set || is_set(total_nac_ks.yfilter)) leaf_name_data.push_back(total_nac_ks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks = value;
        total_nac_ks.value_namespace = name_space;
        total_nac_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nac-ks" || name == "total-id-ts")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounters()
    :
    head_signalling_counter(this, {"ctype", "tunnel_id"})
{

    yang_name = "head-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::~HeadSignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<head_signalling_counter.len(); index++)
    {
        if(head_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<head_signalling_counter.len(); index++)
    {
        if(head_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counter")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter>();
        c->parent = this;
        head_signalling_counter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : head_signalling_counter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-signalling-counter")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::HeadSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    lsp_id{YType::uint16, "lsp-id"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>())
    , destination_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "head-signalling-counter"; yang_parent_name = "head-signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::~HeadSignallingCounter()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| lsp_id.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/head-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counter";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "destination-statistic")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : destination_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-statistic" || name == "ctype" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounters()
    :
    remote_signalling_counter(this, {"ctype", "tunnel_id", "extended_tunnel_id", "p2mp_id", "lsp_id", "source_address", "destination_address", "sub_group_originator", "sub_group_id"})
{

    yang_name = "remote-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::~RemoteSignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_signalling_counter.len(); index++)
    {
        if(remote_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<remote_signalling_counter.len(); index++)
    {
        if(remote_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-signalling-counter")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter>();
        c->parent = this;
        remote_signalling_counter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remote_signalling_counter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-signalling-counter")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::RemoteSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint32, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "remote-signalling-counter"; yang_parent_name = "remote-signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::~RemoteSignallingCounter()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/remote-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counter";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signallings()
    :
    signalling(this, {"ctype", "tunnel_id", "extended_tunnel_id", "p2mp_id", "lsp_id", "source_address", "destination_address", "sub_group_originator", "sub_group_id"})
{

    yang_name = "signallings"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::Signallings::~Signallings()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signalling.len(); index++)
    {
        if(signalling[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::Signallings::has_operation() const
{
    for (std::size_t index=0; index<signalling.len(); index++)
    {
        if(signalling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::Signallings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signallings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling>();
        c->parent = this;
        signalling.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : signalling.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::Signallings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::Signallings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::Signalling()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint32, "sub-group-id"}
        ,
    te_signalling_filter_data(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>())
{
    te_signalling_filter_data->parent = this;

    yang_name = "signalling"; yang_parent_name = "signallings"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::~Signalling()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/signallings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-data")
    {
        if(te_signalling_filter_data == nullptr)
        {
            te_signalling_filter_data = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>();
        }
        return te_signalling_filter_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_signalling_filter_data != nullptr)
    {
        children["te-signalling-filter-data"] = te_signalling_filter_data;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-data" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterData()
    :
    statistics_filter{YType::enumeration, "statistics-filter"}
        ,
    te_signalling_filter_vif(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>())
    , te_signalling_filter_lsp(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>())
{
    te_signalling_filter_vif->parent = this;
    te_signalling_filter_lsp->parent = this;

    yang_name = "te-signalling-filter-data"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::~TeSignallingFilterData()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_data() const
{
    if (is_presence_container) return true;
    return statistics_filter.is_set
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_data())
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics_filter.yfilter)
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_operation())
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_filter.is_set || is_set(statistics_filter.yfilter)) leaf_name_data.push_back(statistics_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-vif")
    {
        if(te_signalling_filter_vif == nullptr)
        {
            te_signalling_filter_vif = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>();
        }
        return te_signalling_filter_vif;
    }

    if(child_yang_name == "te-signalling-filter-lsp")
    {
        if(te_signalling_filter_lsp == nullptr)
        {
            te_signalling_filter_lsp = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>();
        }
        return te_signalling_filter_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_signalling_filter_vif != nullptr)
    {
        children["te-signalling-filter-vif"] = te_signalling_filter_vif;
    }

    if(te_signalling_filter_lsp != nullptr)
    {
        children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter = value;
        statistics_filter.value_namespace = name_space;
        statistics_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-vif" || name == "te-signalling-filter-lsp" || name == "statistics-filter")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::TeSignallingFilterVif()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    lsp_id{YType::uint16, "lsp-id"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>())
    , destination_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-vif"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::~TeSignallingFilterVif()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| lsp_id.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-vif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "destination-statistic")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic>();
        c->parent = this;
        destination_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : destination_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-statistic" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::TeSignallingFilterLsp()
    :
    tunnel_name{YType::str, "tunnel-name"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-lsp"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::~TeSignallingFilterLsp()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::SignallingSummary::SignallingSummary()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "signalling-summary"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::SignallingSummary::~SignallingSummary()
{
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::SignallingSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::SignallingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::SignallingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::SignallingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::SignallingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::SignallingCounters::SignallingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::SignallingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::DiffServTeClasses::DiffServTeClasses()
    :
    te_class(this, {})
{

    yang_name = "diff-serv-te-classes"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::DiffServTeClasses::~DiffServTeClasses()
{
}

bool MplsTeStandby::DiffServTeClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::DiffServTeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::DiffServTeClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::DiffServTeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-te-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::DiffServTeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::DiffServTeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        auto c = std::make_shared<MplsTeStandby::DiffServTeClasses::TeClass>();
        c->parent = this;
        te_class.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::DiffServTeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : te_class.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::DiffServTeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::DiffServTeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::DiffServTeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

MplsTeStandby::DiffServTeClasses::TeClass::TeClass()
    :
    class_number{YType::uint8, "class-number"},
    class_type{YType::uint8, "class-type"},
    priority{YType::uint8, "priority"},
    class_status{YType::enumeration, "class-status"}
{

    yang_name = "te-class"; yang_parent_name = "diff-serv-te-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::DiffServTeClasses::TeClass::~TeClass()
{
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_data() const
{
    if (is_presence_container) return true;
    return class_number.is_set
	|| class_type.is_set
	|| priority.is_set
	|| class_status.is_set;
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_number.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(class_status.yfilter);
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/diff-serv-te-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::DiffServTeClasses::TeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.yfilter)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (class_status.is_set || is_set(class_status.yfilter)) leaf_name_data.push_back(class_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::DiffServTeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::DiffServTeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-number")
    {
        class_number = value;
        class_number.value_namespace = name_space;
        class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-status")
    {
        class_status = value;
        class_status.value_namespace = name_space;
        class_status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-number")
    {
        class_number.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "class-status")
    {
        class_status.yfilter = yfilter;
    }
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "class-type" || name == "priority" || name == "class-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Issu()
    :
    status(std::make_shared<MplsTeStandby::Issu::Status>())
    , detail(std::make_shared<MplsTeStandby::Issu::Detail>())
{
    status->parent = this;
    detail->parent = this;

    yang_name = "issu"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::~Issu()
{
}

bool MplsTeStandby::Issu::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool MplsTeStandby::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string MplsTeStandby::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTeStandby::Issu::Status>();
        }
        return status;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTeStandby::Issu::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void MplsTeStandby::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "detail")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
        ,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::~Status()
{
}

bool MplsTeStandby::Issu::Status::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTeStandby::Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
        ,
    slave_sync_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto c = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.append(c);
        return c;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto c = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        c->parent = this;
        s2l_pending.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    count = 0;
    for (auto c : vif_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : s2l_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
        ,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::~Detail()
{
}

bool MplsTeStandby::Issu::Detail::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
        ,
    slave_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto c = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.append(c);
        return c;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto c = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        c->parent = this;
        s2l_pending.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    count = 0;
    for (auto c : vif_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : s2l_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntries()
    :
    auto_route_destination_entry(this, {"tunnel_id"})
{

    yang_name = "auto-route-destination-entries"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoRouteDestinationEntries::~AutoRouteDestinationEntries()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auto_route_destination_entry.len(); index++)
    {
        if(auto_route_destination_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_operation() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.len(); index++)
    {
        if(auto_route_destination_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoRouteDestinationEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoRouteDestinationEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-destination-entry")
    {
        auto c = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry>();
        c->parent = this;
        auto_route_destination_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoRouteDestinationEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : auto_route_destination_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AutoRouteDestinationEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoRouteDestinationEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-destination-entry")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::AutoRouteDestinationEntry()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"}
        ,
    tunnel_autoroute_dest(this, {})
{

    yang_name = "auto-route-destination-entry"; yang_parent_name = "auto-route-destination-entries"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::~AutoRouteDestinationEntry()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_autoroute_dest.len(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_id_xr.is_set;
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_operation() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.len(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-route-destination-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entry";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-autoroute-dest")
    {
        auto c = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest>();
        c->parent = this;
        tunnel_autoroute_dest.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel_autoroute_dest.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-autoroute-dest" || name == "tunnel-id" || name == "tunnel-id-xr")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::TunnelAutorouteDest()
    :
    prefix_address{YType::str, "prefix-address"},
    prefix_length{YType::uint32, "prefix-length"},
    metric{YType::uint32, "metric"},
    install_time{YType::uint32, "install-time"},
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "tunnel-autoroute-dest"; yang_parent_name = "auto-route-destination-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::~TunnelAutorouteDest()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_data() const
{
    if (is_presence_container) return true;
    return prefix_address.is_set
	|| prefix_length.is_set
	|| metric.is_set
	|| install_time.is_set
	|| interface_handle.is_set;
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(install_time.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-autoroute-dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (install_time.is_set || is_set(install_time.yfilter)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-time")
    {
        install_time = value;
        install_time.value_namespace = name_space;
        install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "install-time")
    {
        install_time.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-address" || name == "prefix-length" || name == "metric" || name == "install-time" || name == "interface-handle")
        return true;
    return false;
}

MplsTeStandby::FastReroute::FastReroute()
    :
    backup_tunnels(std::make_shared<MplsTeStandby::FastReroute::BackupTunnels>())
    , protected_interfaces(std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces>())
    , protections(std::make_shared<MplsTeStandby::FastReroute::Protections>())
    , promotion(std::make_shared<MplsTeStandby::FastReroute::Promotion>())
{
    backup_tunnels->parent = this;
    protected_interfaces->parent = this;
    protections->parent = this;
    promotion->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::~FastReroute()
{
}

bool MplsTeStandby::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (backup_tunnels !=  nullptr && backup_tunnels->has_data())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_data())
	|| (protections !=  nullptr && protections->has_data())
	|| (promotion !=  nullptr && promotion->has_data());
}

bool MplsTeStandby::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_operation())
	|| (protections !=  nullptr && protections->has_operation())
	|| (promotion !=  nullptr && promotion->has_operation());
}

std::string MplsTeStandby::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels == nullptr)
        {
            backup_tunnels = std::make_shared<MplsTeStandby::FastReroute::BackupTunnels>();
        }
        return backup_tunnels;
    }

    if(child_yang_name == "protected-interfaces")
    {
        if(protected_interfaces == nullptr)
        {
            protected_interfaces = std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces>();
        }
        return protected_interfaces;
    }

    if(child_yang_name == "protections")
    {
        if(protections == nullptr)
        {
            protections = std::make_shared<MplsTeStandby::FastReroute::Protections>();
        }
        return protections;
    }

    if(child_yang_name == "promotion")
    {
        if(promotion == nullptr)
        {
            promotion = std::make_shared<MplsTeStandby::FastReroute::Promotion>();
        }
        return promotion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_tunnels != nullptr)
    {
        children["backup-tunnels"] = backup_tunnels;
    }

    if(protected_interfaces != nullptr)
    {
        children["protected-interfaces"] = protected_interfaces;
    }

    if(protections != nullptr)
    {
        children["protections"] = protections;
    }

    if(promotion != nullptr)
    {
        children["promotion"] = promotion;
    }

    return children;
}

void MplsTeStandby::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnels" || name == "protected-interfaces" || name == "protections" || name == "promotion")
        return true;
    return false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnels()
    :
    backup_tunnel(this, {"tunnel_name", "interface_name"})
{

    yang_name = "backup-tunnels"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::BackupTunnels::~BackupTunnels()
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_tunnel.len(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.len(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::BackupTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::BackupTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel")
    {
        auto c = std::make_shared<MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::BackupTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : backup_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::FastReroute::BackupTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::BackupTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel")
        return true;
    return false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    interface_name{YType::str, "interface-name"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_status{YType::enumeration, "backup-status"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    general_status{YType::enumeration, "general-status"},
    connection_status{YType::enumeration, "connection-status"},
    output_interface_name{YType::str, "output-interface-name"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth{YType::uint32, "bandwidth"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    ls_ps{YType::uint32, "ls-ps"},
    s2l_families{YType::uint32, "s2l-families"},
    s2_ls{YType::uint32, "s2-ls"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"}
{

    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| interface_name.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_status.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| tunnel_attribute_set_name.is_set
	|| has_attribute_set.is_set
	|| is_attribute_set_in_db.is_set
	|| recreate_timer_is_running.is_set
	|| recreate_remaining_time.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| general_status.is_set
	|| connection_status.is_set
	|| output_interface_name.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth.is_set
	|| tunnel_instance.is_set
	|| in_use_bandwidth.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| ls_ps.is_set
	|| s2l_families.is_set
	|| s2_ls.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set;
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter);
}

std::string MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/backup-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "interface-name" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-status" || name == "backup-type" || name == "backup-usage" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "tunnel-attribute-set-name" || name == "has-attribute-set" || name == "is-attribute-set-in-db" || name == "recreate-timer-is-running" || name == "recreate-remaining-time" || name == "source-address" || name == "destination-address" || name == "general-status" || name == "connection-status" || name == "output-interface-name" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "bandwidth" || name == "tunnel-instance" || name == "in-use-bandwidth" || name == "soft-preempted-in-use-bandwidth" || name == "ls-ps" || name == "s2l-families" || name == "s2-ls" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterfaces()
    :
    protected_interface(this, {"interface_name", "backup_tunnel_name"})
{

    yang_name = "protected-interfaces"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::ProtectedInterfaces::~ProtectedInterfaces()
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::ProtectedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::ProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface")
    {
        auto c = std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface>();
        c->parent = this;
        protected_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::ProtectedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protected_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::ProtectedInterface()
    :
    interface_name{YType::str, "interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_status{YType::enumeration, "backup-status"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    general_status{YType::enumeration, "general-status"},
    connection_status{YType::enumeration, "connection-status"},
    output_interface_name{YType::str, "output-interface-name"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth{YType::uint32, "bandwidth"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    ls_ps{YType::uint32, "ls-ps"},
    s2l_families{YType::uint32, "s2l-families"},
    s2_ls{YType::uint32, "s2-ls"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"}
{

    yang_name = "protected-interface"; yang_parent_name = "protected-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| backup_tunnel_name.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_status.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| tunnel_attribute_set_name.is_set
	|| has_attribute_set.is_set
	|| is_attribute_set_in_db.is_set
	|| recreate_timer_is_running.is_set
	|| recreate_remaining_time.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| general_status.is_set
	|| connection_status.is_set
	|| output_interface_name.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth.is_set
	|| tunnel_instance.is_set
	|| in_use_bandwidth.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| ls_ps.is_set
	|| s2l_families.is_set
	|| s2_ls.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set;
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter);
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/protected-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(backup_tunnel_name, "backup-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "backup-tunnel-name" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-status" || name == "backup-type" || name == "backup-usage" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "tunnel-attribute-set-name" || name == "has-attribute-set" || name == "is-attribute-set-in-db" || name == "recreate-timer-is-running" || name == "recreate-remaining-time" || name == "source-address" || name == "destination-address" || name == "general-status" || name == "connection-status" || name == "output-interface-name" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "bandwidth" || name == "tunnel-instance" || name == "in-use-bandwidth" || name == "soft-preempted-in-use-bandwidth" || name == "ls-ps" || name == "s2l-families" || name == "s2-ls" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Protections::Protections()
    :
    protection(this, {"source_address", "destination_address", "tunnel_id", "extended_tunnel_id", "lsp_id", "sub_group_id", "sub_group_originator", "p2mp_id", "session_type"})
{

    yang_name = "protections"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::Protections::~Protections()
{
}

bool MplsTeStandby::FastReroute::Protections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protection.len(); index++)
    {
        if(protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::Protections::has_operation() const
{
    for (std::size_t index=0; index<protection.len(); index++)
    {
        if(protection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::Protections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Protections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Protections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::Protections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        auto c = std::make_shared<MplsTeStandby::FastReroute::Protections::Protection>();
        c->parent = this;
        protection.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::Protections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protection.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::FastReroute::Protections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::Protections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::Protections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Protections::Protection::Protection()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    sub_group_id{YType::uint32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::uint32, "p2mp-id"},
    session_type{YType::uint32, "session-type"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    role{YType::enumeration, "role"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    is_signalled{YType::boolean, "is-signalled"},
    is_frr_requested{YType::boolean, "is-frr-requested"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    inbound_frr_state{YType::enumeration, "inbound-frr-state"},
    output_interface_lsp{YType::str, "output-interface-lsp"},
    output_label{YType::uint32, "output-label"},
    next_hop_address{YType::str, "next-hop-address"},
    frr_output_tunnel_interface{YType::str, "frr-output-tunnel-interface"},
    frr_output_label{YType::uint32, "frr-output-label"},
    backup_status{YType::enumeration, "backup-status"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    original_input_interface{YType::str, "original-input-interface"},
    input_label{YType::uint32, "input-label"},
    previous_hop_address{YType::str, "previous-hop-address"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    frr_output_interface{YType::str, "frr-output-interface"},
    backup_next_hop_address{YType::str, "backup-next-hop-address"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    sharing_type{YType::enumeration, "sharing-type"},
    is_p2mp_tunnel{YType::boolean, "is-p2mp-tunnel"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"}
{

    yang_name = "protection"; yang_parent_name = "protections"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::Protections::Protection::~Protection()
{
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| tunnel_id_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| tunnel_instance.is_set
	|| role.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| is_signalled.is_set
	|| is_frr_requested.is_set
	|| outbound_frr_state.is_set
	|| inbound_frr_state.is_set
	|| output_interface_lsp.is_set
	|| output_label.is_set
	|| next_hop_address.is_set
	|| frr_output_tunnel_interface.is_set
	|| frr_output_label.is_set
	|| backup_status.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| original_input_interface.is_set
	|| input_label.is_set
	|| previous_hop_address.is_set
	|| backup_bandwidth.is_set
	|| frr_output_interface.is_set
	|| backup_next_hop_address.is_set
	|| lsp_bandwidth_type.is_set
	|| sharing_type.is_set
	|| is_p2mp_tunnel.is_set
	|| sub_group_original_id.is_set
	|| sub_group_id_xr.is_set
	|| p2mp_id_xr.is_set;
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(is_signalled.yfilter)
	|| ydk::is_set(is_frr_requested.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(inbound_frr_state.yfilter)
	|| ydk::is_set(output_interface_lsp.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(frr_output_tunnel_interface.yfilter)
	|| ydk::is_set(frr_output_label.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter)
	|| ydk::is_set(frr_output_interface.yfilter)
	|| ydk::is_set(backup_next_hop_address.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(sharing_type.yfilter)
	|| ydk::is_set(is_p2mp_tunnel.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter);
}

std::string MplsTeStandby::FastReroute::Protections::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/protections/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Protections::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(session_type, "session-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Protections::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (is_signalled.is_set || is_set(is_signalled.yfilter)) leaf_name_data.push_back(is_signalled.get_name_leafdata());
    if (is_frr_requested.is_set || is_set(is_frr_requested.yfilter)) leaf_name_data.push_back(is_frr_requested.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (inbound_frr_state.is_set || is_set(inbound_frr_state.yfilter)) leaf_name_data.push_back(inbound_frr_state.get_name_leafdata());
    if (output_interface_lsp.is_set || is_set(output_interface_lsp.yfilter)) leaf_name_data.push_back(output_interface_lsp.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (frr_output_tunnel_interface.is_set || is_set(frr_output_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_output_tunnel_interface.get_name_leafdata());
    if (frr_output_label.is_set || is_set(frr_output_label.yfilter)) leaf_name_data.push_back(frr_output_label.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (frr_output_interface.is_set || is_set(frr_output_interface.yfilter)) leaf_name_data.push_back(frr_output_interface.get_name_leafdata());
    if (backup_next_hop_address.is_set || is_set(backup_next_hop_address.yfilter)) leaf_name_data.push_back(backup_next_hop_address.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (sharing_type.is_set || is_set(sharing_type.yfilter)) leaf_name_data.push_back(sharing_type.get_name_leafdata());
    if (is_p2mp_tunnel.is_set || is_set(is_p2mp_tunnel.yfilter)) leaf_name_data.push_back(is_p2mp_tunnel.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::Protections::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::Protections::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::FastReroute::Protections::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-signalled")
    {
        is_signalled = value;
        is_signalled.value_namespace = name_space;
        is_signalled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested = value;
        is_frr_requested.value_namespace = name_space;
        is_frr_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state = value;
        inbound_frr_state.value_namespace = name_space;
        inbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp = value;
        output_interface_lsp.value_namespace = name_space;
        output_interface_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface = value;
        frr_output_tunnel_interface.value_namespace = name_space;
        frr_output_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label = value;
        frr_output_label.value_namespace = name_space;
        frr_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface = value;
        frr_output_interface.value_namespace = name_space;
        frr_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address = value;
        backup_next_hop_address.value_namespace = name_space;
        backup_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-type")
    {
        sharing_type = value;
        sharing_type.value_namespace = name_space;
        sharing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel = value;
        is_p2mp_tunnel.value_namespace = name_space;
        is_p2mp_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::Protections::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "is-signalled")
    {
        is_signalled.yfilter = yfilter;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "sharing-type")
    {
        sharing_type.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "source-address-xr" || name == "destination-address-xr" || name == "tunnel-id-xr" || name == "extended-tunnel-id-xr" || name == "tunnel-name" || name == "tunnel-instance" || name == "role" || name == "admin-status" || name == "operation-status" || name == "is-signalled" || name == "is-frr-requested" || name == "outbound-frr-state" || name == "inbound-frr-state" || name == "output-interface-lsp" || name == "output-label" || name == "next-hop-address" || name == "frr-output-tunnel-interface" || name == "frr-output-label" || name == "backup-status" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "original-input-interface" || name == "input-label" || name == "previous-hop-address" || name == "backup-bandwidth" || name == "frr-output-interface" || name == "backup-next-hop-address" || name == "lsp-bandwidth-type" || name == "sharing-type" || name == "is-p2mp-tunnel" || name == "sub-group-original-id" || name == "sub-group-id-xr" || name == "p2mp-id-xr")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Promotion::Promotion()
    :
    promotion_period{YType::uint32, "promotion-period"},
    remaining_time{YType::uint32, "remaining-time"},
    is_configured{YType::boolean, "is-configured"}
{

    yang_name = "promotion"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::Promotion::~Promotion()
{
}

bool MplsTeStandby::FastReroute::Promotion::has_data() const
{
    if (is_presence_container) return true;
    return promotion_period.is_set
	|| remaining_time.is_set
	|| is_configured.is_set;
}

bool MplsTeStandby::FastReroute::Promotion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(promotion_period.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(is_configured.yfilter);
}

std::string MplsTeStandby::FastReroute::Promotion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Promotion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "promotion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Promotion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion_period.is_set || is_set(promotion_period.yfilter)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::Promotion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::Promotion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::FastReroute::Promotion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "promotion-period")
    {
        promotion_period = value;
        promotion_period.value_namespace = name_space;
        promotion_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::Promotion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "promotion-period")
    {
        promotion_period.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::Promotion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "promotion-period" || name == "remaining-time" || name == "is-configured")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSets()
    :
    attribute_set(this, {"attribute_set_type", "attribute_set_name"})
{

    yang_name = "attribute-sets"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AttributeSets::~AttributeSets()
{
}

bool MplsTeStandby::AttributeSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AttributeSets::has_operation() const
{
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AttributeSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AttributeSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet>();
        c->parent = this;
        attribute_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : attribute_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AttributeSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AttributeSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSet()
    :
    attribute_set_type{YType::enumeration, "attribute-set-type"},
    attribute_set_name{YType::str, "attribute-set-name"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
        ,
    attribute_set_union(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "attribute-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AttributeSets::AttributeSet::~AttributeSet()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set_type.is_set
	|| attribute_set_name.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_type.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/attribute-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AttributeSets::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    ADD_KEY_TOKEN(attribute_set_type, "attribute-set-type");
    ADD_KEY_TOKEN(attribute_set_name, "attribute-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_type.is_set || is_set(attribute_set_type.yfilter)) leaf_name_data.push_back(attribute_set_type.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-type")
    {
        attribute_set_type = value;
        attribute_set_type.value_namespace = name_space;
        attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-type")
    {
        attribute_set_type.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "attribute-set-type" || name == "attribute-set-name" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
        ,
    attribute_set_path_option(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
    , attribute_set_autobackup(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
    , attribute_set_automesh(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
    , attribute_set_xro(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>())
    , attribute_set_p2mpte(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>())
    , attribute_set_aps_pp(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
    , attribute_set_p2p_te(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_delay_limit_configured{YType::boolean, "is-delay-limit-configured"},
    delay_limit{YType::uint32, "delay-limit"}
        ,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
    , bfd_reverse_path(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
    , tunnel_id(this, {})
    , version_info(this, {})
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_delay_limit_configured.is_set
	|| delay_limit.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_delay_limit_configured.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_delay_limit_configured.is_set || is_set(is_delay_limit_configured.yfilter)) leaf_name_data.push_back(is_delay_limit_configured.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    if(child_yang_name == "version-info")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : version_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured = value;
        is_delay_limit_configured.value_namespace = name_space;
        is_delay_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured" || name == "is-delay-limit-configured" || name == "delay-limit")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
        ,
    signalled_name(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
    , affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
    , logging(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
    , policy_class_entry(this, {})
    , tunnel_id(this, {})
    , protected_interface(this, {})
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.append(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    if(child_yang_name == "protected-interface")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    count = 0;
    for (auto c : policy_class_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : protected_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

