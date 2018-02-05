
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

MplsForwarding::Nodes::Node::FrrDatabase::FrrDatabase()
    :
    frrdb_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>())
	,frrdb_protected_interface_table_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>())
	,frrdb_tunnel_midpoint_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>())
	,frrdb_tunnel_midpoints(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>())
	,frrdb_tunnel_heads(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>())
	,frrdb_tunnel_head_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>())
	,frrdb_backup_interface_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>())
{
    frrdb_summary->parent = this;
    frrdb_protected_interface_table_summaries->parent = this;
    frrdb_tunnel_midpoint_summary->parent = this;
    frrdb_tunnel_midpoints->parent = this;
    frrdb_tunnel_heads->parent = this;
    frrdb_tunnel_head_summary->parent = this;
    frrdb_backup_interface_summaries->parent = this;

    yang_name = "frr-database"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::~FrrDatabase()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_data() const
{
    return (frrdb_summary !=  nullptr && frrdb_summary->has_data())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_data())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_data())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_data())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_data())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_data())
	|| (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_operation() const
{
    return is_set(yfilter)
	|| (frrdb_summary !=  nullptr && frrdb_summary->has_operation())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_operation())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_operation())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_operation())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_operation())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_operation())
	|| (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-summary")
    {
        if(frrdb_summary == nullptr)
        {
            frrdb_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>();
        }
        return frrdb_summary;
    }

    if(child_yang_name == "frrdb-protected-interface-table-summaries")
    {
        if(frrdb_protected_interface_table_summaries == nullptr)
        {
            frrdb_protected_interface_table_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>();
        }
        return frrdb_protected_interface_table_summaries;
    }

    if(child_yang_name == "frrdb-tunnel-midpoint-summary")
    {
        if(frrdb_tunnel_midpoint_summary == nullptr)
        {
            frrdb_tunnel_midpoint_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>();
        }
        return frrdb_tunnel_midpoint_summary;
    }

    if(child_yang_name == "frrdb-tunnel-midpoints")
    {
        if(frrdb_tunnel_midpoints == nullptr)
        {
            frrdb_tunnel_midpoints = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>();
        }
        return frrdb_tunnel_midpoints;
    }

    if(child_yang_name == "frrdb-tunnel-heads")
    {
        if(frrdb_tunnel_heads == nullptr)
        {
            frrdb_tunnel_heads = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>();
        }
        return frrdb_tunnel_heads;
    }

    if(child_yang_name == "frrdb-tunnel-head-summary")
    {
        if(frrdb_tunnel_head_summary == nullptr)
        {
            frrdb_tunnel_head_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>();
        }
        return frrdb_tunnel_head_summary;
    }

    if(child_yang_name == "frrdb-backup-interface-summaries")
    {
        if(frrdb_backup_interface_summaries == nullptr)
        {
            frrdb_backup_interface_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>();
        }
        return frrdb_backup_interface_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frrdb_summary != nullptr)
    {
        children["frrdb-summary"] = frrdb_summary;
    }

    if(frrdb_protected_interface_table_summaries != nullptr)
    {
        children["frrdb-protected-interface-table-summaries"] = frrdb_protected_interface_table_summaries;
    }

    if(frrdb_tunnel_midpoint_summary != nullptr)
    {
        children["frrdb-tunnel-midpoint-summary"] = frrdb_tunnel_midpoint_summary;
    }

    if(frrdb_tunnel_midpoints != nullptr)
    {
        children["frrdb-tunnel-midpoints"] = frrdb_tunnel_midpoints;
    }

    if(frrdb_tunnel_heads != nullptr)
    {
        children["frrdb-tunnel-heads"] = frrdb_tunnel_heads;
    }

    if(frrdb_tunnel_head_summary != nullptr)
    {
        children["frrdb-tunnel-head-summary"] = frrdb_tunnel_head_summary;
    }

    if(frrdb_backup_interface_summaries != nullptr)
    {
        children["frrdb-backup-interface-summaries"] = frrdb_backup_interface_summaries;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-summary" || name == "frrdb-protected-interface-table-summaries" || name == "frrdb-tunnel-midpoint-summary" || name == "frrdb-tunnel-midpoints" || name == "frrdb-tunnel-heads" || name == "frrdb-tunnel-head-summary" || name == "frrdb-backup-interface-summaries")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::FrrdbSummary()
    :
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::~FrrdbSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_data() const
{
    return active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummaries()
{

    yang_name = "frrdb-protected-interface-table-summaries"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::~FrrdbProtectedInterfaceTableSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_data() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.size(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.size(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-protected-interface-table-summary")
    {
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary>();
        c->parent = this;
        frrdb_protected_interface_table_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : frrdb_protected_interface_table_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-protected-interface-table-summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::FrrdbProtectedInterfaceTableSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-protected-interface-table-summary"; yang_parent_name = "frrdb-protected-interface-table-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::~FrrdbProtectedInterfaceTableSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::FrrdbTunnelMidpointSummary()
    :
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-tunnel-midpoint-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::~FrrdbTunnelMidpointSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_data() const
{
    return active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoints()
{

    yang_name = "frrdb-tunnel-midpoints"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::~FrrdbTunnelMidpoints()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_data() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.size(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.size(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-midpoint")
    {
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint>();
        c->parent = this;
        frrdb_tunnel_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : frrdb_tunnel_midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-tunnel-midpoint")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrdbTunnelMidpoint()
    :
    local_label{YType::uint32, "local-label"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"},
    frr_lable_string{YType::str, "frr-lable-string"}
    	,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-midpoint"; yang_parent_name = "frrdb-tunnel-midpoints"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::~FrrdbTunnelMidpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_data() const
{
    return local_label.is_set
	|| outgoing_lable_string.is_set
	|| frr_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_lable_string.yfilter)
	|| ydk::is_set(frr_lable_string.yfilter)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint" <<"[local-label='" <<local_label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.yfilter)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.yfilter)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_db != nullptr)
    {
        children["frr-db"] = frr_db;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
        outgoing_lable_string.value_namespace = name_space;
        outgoing_lable_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
        frr_lable_string.value_namespace = name_space;
        frr_lable_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string.yfilter = yfilter;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-db" || name == "local-label" || name == "outgoing-lable-string" || name == "frr-lable-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrDb()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_data() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(is_multicast_tunnel.yfilter)
	|| ydk::is_set(multicast_tunnel_legs.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.yfilter)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.yfilter)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg>();
        c->parent = this;
        multicast_leg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    count = 0;
    for (auto const & c : multicast_leg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
        is_multicast_tunnel.value_namespace = name_space;
        is_multicast_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
        multicast_tunnel_legs.value_namespace = name_space;
        multicast_tunnel_legs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "multicast-leg" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp" || name == "is-multicast-tunnel" || name == "multicast-tunnel-legs")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::MulticastLeg()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_data() const
{
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHeads()
{

    yang_name = "frrdb-tunnel-heads"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::~FrrdbTunnelHeads()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_data() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.size(); index++)
    {
        if(frrdb_tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.size(); index++)
    {
        if(frrdb_tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-heads";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-head")
    {
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead>();
        c->parent = this;
        frrdb_tunnel_head.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : frrdb_tunnel_head)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-tunnel-head")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrdbTunnelHead()
    :
    interface_name{YType::str, "interface-name"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"},
    frr_lable_string{YType::str, "frr-lable-string"}
    	,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-head"; yang_parent_name = "frrdb-tunnel-heads"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::~FrrdbTunnelHead()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_data() const
{
    return interface_name.is_set
	|| outgoing_lable_string.is_set
	|| frr_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(outgoing_lable_string.yfilter)
	|| ydk::is_set(frr_lable_string.yfilter)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.yfilter)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.yfilter)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_db != nullptr)
    {
        children["frr-db"] = frr_db;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
        outgoing_lable_string.value_namespace = name_space;
        outgoing_lable_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
        frr_lable_string.value_namespace = name_space;
        frr_lable_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string.yfilter = yfilter;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-db" || name == "interface-name" || name == "outgoing-lable-string" || name == "frr-lable-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrDb()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_data() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(is_multicast_tunnel.yfilter)
	|| ydk::is_set(multicast_tunnel_legs.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.yfilter)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.yfilter)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg>();
        c->parent = this;
        multicast_leg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    count = 0;
    for (auto const & c : multicast_leg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
        is_multicast_tunnel.value_namespace = name_space;
        is_multicast_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
        multicast_tunnel_legs.value_namespace = name_space;
        multicast_tunnel_legs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "multicast-leg" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp" || name == "is-multicast-tunnel" || name == "multicast-tunnel-legs")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::MulticastLeg()
    :
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    input_label{YType::uint32, "input-label"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_data() const
{
    return tunnel_interface_name.is_set
	|| input_label.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| entry_frr_state.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| is_mldp_lsp.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "tunnel-interface-name" || name == "input-label" || name == "outgoing-interface" || name == "outgoing-label" || name == "frr-interface-name" || name == "frr-label" || name == "entry-frr-state" || name == "frr-next-hop-ipv4-address" || name == "is-mldp-lsp")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;
    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{

    yang_name = "head"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    source_address{YType::str, "source-address"},
    lspid{YType::uint32, "lspid"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "midpoint"; yang_parent_name = "frr-entry-id"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    return source_address.is_set
	|| lspid.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "lspid" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::FrrdbTunnelHeadSummary()
    :
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-tunnel-head-summary"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::~FrrdbTunnelHeadSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_data() const
{
    return active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummaries()
{

    yang_name = "frrdb-backup-interface-summaries"; yang_parent_name = "frr-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::~FrrdbBackupInterfaceSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.size(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.size(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-backup-interface-summary")
    {
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary>();
        c->parent = this;
        frrdb_backup_interface_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : frrdb_backup_interface_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-backup-interface-summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::FrrdbBackupInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    ready{YType::uint32, "ready"},
    partial{YType::uint32, "partial"},
    other{YType::uint32, "other"}
{

    yang_name = "frrdb-backup-interface-summary"; yang_parent_name = "frrdb-backup-interface-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::~FrrdbBackupInterfaceSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| ready.is_set
	|| partial.is_set
	|| other.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(other.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "ready" || name == "partial" || name == "other")
        return true;
    return false;
}


}
}

