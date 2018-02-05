
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_lpts_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lpts_oper {

PlatformLptspIfibStatic::PlatformLptspIfibStatic()
    :
    node_statics(std::make_shared<PlatformLptspIfibStatic::NodeStatics>())
{
    node_statics->parent = this;

    yang_name = "platform-lptsp-ifib-static"; yang_parent_name = "Cisco-IOS-XR-asr9k-lpts-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformLptspIfibStatic::~PlatformLptspIfibStatic()
{
}

bool PlatformLptspIfibStatic::has_data() const
{
    return (node_statics !=  nullptr && node_statics->has_data());
}

bool PlatformLptspIfibStatic::has_operation() const
{
    return is_set(yfilter)
	|| (node_statics !=  nullptr && node_statics->has_operation());
}

std::string PlatformLptspIfibStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-statics")
    {
        if(node_statics == nullptr)
        {
            node_statics = std::make_shared<PlatformLptspIfibStatic::NodeStatics>();
        }
        return node_statics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_statics != nullptr)
    {
        children["node-statics"] = node_statics;
    }

    return children;
}

void PlatformLptspIfibStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformLptspIfibStatic::clone_ptr() const
{
    return std::make_shared<PlatformLptspIfibStatic>();
}

std::string PlatformLptspIfibStatic::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformLptspIfibStatic::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformLptspIfibStatic::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformLptspIfibStatic::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformLptspIfibStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-statics")
        return true;
    return false;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatics()
{

    yang_name = "node-statics"; yang_parent_name = "platform-lptsp-ifib-static"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformLptspIfibStatic::NodeStatics::~NodeStatics()
{
}

bool PlatformLptspIfibStatic::NodeStatics::has_data() const
{
    for (std::size_t index=0; index<node_static.size(); index++)
    {
        if(node_static[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfibStatic::NodeStatics::has_operation() const
{
    for (std::size_t index=0; index<node_static.size(); index++)
    {
        if(node_static[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfibStatic::NodeStatics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib-static/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformLptspIfibStatic::NodeStatics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-statics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibStatic::NodeStatics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibStatic::NodeStatics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-static")
    {
        auto c = std::make_shared<PlatformLptspIfibStatic::NodeStatics::NodeStatic>();
        c->parent = this;
        node_static.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibStatic::NodeStatics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node_static)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfibStatic::NodeStatics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibStatic::NodeStatics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfibStatic::NodeStatics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-static")
        return true;
    return false;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::NodeStatic()
    :
    node_name{YType::str, "node-name"}
    	,
    police(std::make_shared<PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police>())
	,stats(std::make_shared<PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats>())
{
    police->parent = this;
    stats->parent = this;

    yang_name = "node-static"; yang_parent_name = "node-statics"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::~NodeStatic()
{
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::has_data() const
{
    return node_name.is_set
	|| (police !=  nullptr && police->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (police !=  nullptr && police->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string PlatformLptspIfibStatic::NodeStatics::NodeStatic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib-static/node-statics/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformLptspIfibStatic::NodeStatics::NodeStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-static" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibStatic::NodeStatics::NodeStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibStatic::NodeStatics::NodeStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police>();
        }
        return police;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibStatic::NodeStatics::NodeStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police" || name == "stats" || name == "node-name")
        return true;
    return false;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::Police()
{

    yang_name = "police"; yang_parent_name = "node-static"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::~Police()
{
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::has_data() const
{
    for (std::size_t index=0; index<static_info.size(); index++)
    {
        if(static_info[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::has_operation() const
{
    for (std::size_t index=0; index<static_info.size(); index++)
    {
        if(static_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-info")
    {
        auto c = std::make_shared<PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo>();
        c->parent = this;
        static_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-info")
        return true;
    return false;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::StaticInfo()
    :
    punt_reason{YType::uint32, "punt-reason"},
    sid{YType::uint32, "sid"},
    flow_rate{YType::uint32, "flow-rate"},
    burst_rate{YType::uint32, "burst-rate"},
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    punt_reason_string{YType::str, "punt-reason-string"},
    change_type{YType::uint8, "change-type"}
{

    yang_name = "static-info"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::~StaticInfo()
{
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::has_data() const
{
    return punt_reason.is_set
	|| sid.is_set
	|| flow_rate.is_set
	|| burst_rate.is_set
	|| accepted.is_set
	|| dropped.is_set
	|| punt_reason_string.is_set
	|| change_type.is_set;
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(punt_reason.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(flow_rate.yfilter)
	|| ydk::is_set(burst_rate.yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(punt_reason_string.yfilter)
	|| ydk::is_set(change_type.yfilter);
}

std::string PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (punt_reason.is_set || is_set(punt_reason.yfilter)) leaf_name_data.push_back(punt_reason.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (flow_rate.is_set || is_set(flow_rate.yfilter)) leaf_name_data.push_back(flow_rate.get_name_leafdata());
    if (burst_rate.is_set || is_set(burst_rate.yfilter)) leaf_name_data.push_back(burst_rate.get_name_leafdata());
    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (punt_reason_string.is_set || is_set(punt_reason_string.yfilter)) leaf_name_data.push_back(punt_reason_string.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "punt-reason")
    {
        punt_reason = value;
        punt_reason.value_namespace = name_space;
        punt_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-rate")
    {
        flow_rate = value;
        flow_rate.value_namespace = name_space;
        flow_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-rate")
    {
        burst_rate = value;
        burst_rate.value_namespace = name_space;
        burst_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-reason-string")
    {
        punt_reason_string = value;
        punt_reason_string.value_namespace = name_space;
        punt_reason_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "punt-reason")
    {
        punt_reason.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "flow-rate")
    {
        flow_rate.yfilter = yfilter;
    }
    if(value_path == "burst-rate")
    {
        burst_rate.yfilter = yfilter;
    }
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "punt-reason-string")
    {
        punt_reason_string.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "punt-reason" || name == "sid" || name == "flow-rate" || name == "burst-rate" || name == "accepted" || name == "dropped" || name == "punt-reason-string" || name == "change-type")
        return true;
    return false;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::Stats()
    :
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    clear_ts{YType::uint64, "clear-ts"},
    no_stats_mem_err{YType::uint64, "no-stats-mem-err"}
{

    yang_name = "stats"; yang_parent_name = "node-static"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::~Stats()
{
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::has_data() const
{
    return accepted.is_set
	|| dropped.is_set
	|| clear_ts.is_set
	|| no_stats_mem_err.is_set;
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(clear_ts.yfilter)
	|| ydk::is_set(no_stats_mem_err.yfilter);
}

std::string PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (clear_ts.is_set || is_set(clear_ts.yfilter)) leaf_name_data.push_back(clear_ts.get_name_leafdata());
    if (no_stats_mem_err.is_set || is_set(no_stats_mem_err.yfilter)) leaf_name_data.push_back(no_stats_mem_err.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-ts")
    {
        clear_ts = value;
        clear_ts.value_namespace = name_space;
        clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err = value;
        no_stats_mem_err.value_namespace = name_space;
        no_stats_mem_err.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "clear-ts")
    {
        clear_ts.yfilter = yfilter;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err.yfilter = yfilter;
    }
}

bool PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted" || name == "dropped" || name == "clear-ts" || name == "no-stats-mem-err")
        return true;
    return false;
}

PlatformLptspIfib::PlatformLptspIfib()
    :
    nodes(std::make_shared<PlatformLptspIfib::Nodes>())
{
    nodes->parent = this;

    yang_name = "platform-lptsp-ifib"; yang_parent_name = "Cisco-IOS-XR-asr9k-lpts-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformLptspIfib::~PlatformLptspIfib()
{
}

bool PlatformLptspIfib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformLptspIfib::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PlatformLptspIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PlatformLptspIfib::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PlatformLptspIfib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformLptspIfib::clone_ptr() const
{
    return std::make_shared<PlatformLptspIfib>();
}

std::string PlatformLptspIfib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformLptspIfib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformLptspIfib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformLptspIfib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformLptspIfib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PlatformLptspIfib::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "platform-lptsp-ifib"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformLptspIfib::Nodes::~Nodes()
{
}

bool PlatformLptspIfib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfib::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformLptspIfib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfib::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PlatformLptspIfib::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfib::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfib::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfib::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfib::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PlatformLptspIfib::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    police(std::make_shared<PlatformLptspIfib::Nodes::Node::Police>())
	,stats(std::make_shared<PlatformLptspIfib::Nodes::Node::Stats>())
{
    police->parent = this;
    stats->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformLptspIfib::Nodes::Node::~Node()
{
}

bool PlatformLptspIfib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (police !=  nullptr && police->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool PlatformLptspIfib::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (police !=  nullptr && police->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string PlatformLptspIfib::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformLptspIfib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfib::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformLptspIfib::Nodes::Node::Police>();
        }
        return police;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<PlatformLptspIfib::Nodes::Node::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfib::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void PlatformLptspIfib::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfib::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PlatformLptspIfib::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police" || name == "stats" || name == "node-name")
        return true;
    return false;
}

PlatformLptspIfib::Nodes::Node::Police::Police()
{

    yang_name = "police"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfib::Nodes::Node::Police::~Police()
{
}

bool PlatformLptspIfib::Nodes::Node::Police::has_data() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfib::Nodes::Node::Police::has_operation() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfib::Nodes::Node::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfib::Nodes::Node::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfib::Nodes::Node::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police-info")
    {
        auto c = std::make_shared<PlatformLptspIfib::Nodes::Node::Police::PoliceInfo>();
        c->parent = this;
        police_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfib::Nodes::Node::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : police_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfib::Nodes::Node::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfib::Nodes::Node::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfib::Nodes::Node::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police-info")
        return true;
    return false;
}

PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::PoliceInfo()
    :
    avgrate{YType::uint32, "avgrate"},
    burst{YType::uint32, "burst"},
    static_avgrate{YType::uint32, "static-avgrate"},
    avgrate_type{YType::str, "avgrate-type"},
    flow_type{YType::str, "flow-type"},
    accepted_stats{YType::uint64, "accepted-stats"},
    dropped_stats{YType::uint64, "dropped-stats"},
    policer{YType::uint32, "policer"},
    str_iptos_val{YType::str, "str-iptos-val"},
    change_type{YType::uint8, "change-type"},
    acl_config{YType::uint8, "acl-config"},
    acl_str{YType::str, "acl-str"}
{

    yang_name = "police-info"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::~PoliceInfo()
{
}

bool PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::has_data() const
{
    return avgrate.is_set
	|| burst.is_set
	|| static_avgrate.is_set
	|| avgrate_type.is_set
	|| flow_type.is_set
	|| accepted_stats.is_set
	|| dropped_stats.is_set
	|| policer.is_set
	|| str_iptos_val.is_set
	|| change_type.is_set
	|| acl_config.is_set
	|| acl_str.is_set;
}

bool PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avgrate.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(static_avgrate.yfilter)
	|| ydk::is_set(avgrate_type.yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(accepted_stats.yfilter)
	|| ydk::is_set(dropped_stats.yfilter)
	|| ydk::is_set(policer.yfilter)
	|| ydk::is_set(str_iptos_val.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(acl_config.yfilter)
	|| ydk::is_set(acl_str.yfilter);
}

std::string PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avgrate.is_set || is_set(avgrate.yfilter)) leaf_name_data.push_back(avgrate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (static_avgrate.is_set || is_set(static_avgrate.yfilter)) leaf_name_data.push_back(static_avgrate.get_name_leafdata());
    if (avgrate_type.is_set || is_set(avgrate_type.yfilter)) leaf_name_data.push_back(avgrate_type.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (accepted_stats.is_set || is_set(accepted_stats.yfilter)) leaf_name_data.push_back(accepted_stats.get_name_leafdata());
    if (dropped_stats.is_set || is_set(dropped_stats.yfilter)) leaf_name_data.push_back(dropped_stats.get_name_leafdata());
    if (policer.is_set || is_set(policer.yfilter)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (str_iptos_val.is_set || is_set(str_iptos_val.yfilter)) leaf_name_data.push_back(str_iptos_val.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (acl_config.is_set || is_set(acl_config.yfilter)) leaf_name_data.push_back(acl_config.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.yfilter)) leaf_name_data.push_back(acl_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avgrate")
    {
        avgrate = value;
        avgrate.value_namespace = name_space;
        avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate = value;
        static_avgrate.value_namespace = name_space;
        static_avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type = value;
        avgrate_type.value_namespace = name_space;
        avgrate_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-stats")
    {
        accepted_stats = value;
        accepted_stats.value_namespace = name_space;
        accepted_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats = value;
        dropped_stats.value_namespace = name_space;
        dropped_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer")
    {
        policer = value;
        policer.value_namespace = name_space;
        policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "str-iptos-val")
    {
        str_iptos_val = value;
        str_iptos_val.value_namespace = name_space;
        str_iptos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-config")
    {
        acl_config = value;
        acl_config.value_namespace = name_space;
        acl_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
        acl_str.value_namespace = name_space;
        acl_str.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avgrate")
    {
        avgrate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate.yfilter = yfilter;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type.yfilter = yfilter;
    }
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "accepted-stats")
    {
        accepted_stats.yfilter = yfilter;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats.yfilter = yfilter;
    }
    if(value_path == "policer")
    {
        policer.yfilter = yfilter;
    }
    if(value_path == "str-iptos-val")
    {
        str_iptos_val.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "acl-config")
    {
        acl_config.yfilter = yfilter;
    }
    if(value_path == "acl-str")
    {
        acl_str.yfilter = yfilter;
    }
}

bool PlatformLptspIfib::Nodes::Node::Police::PoliceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avgrate" || name == "burst" || name == "static-avgrate" || name == "avgrate-type" || name == "flow-type" || name == "accepted-stats" || name == "dropped-stats" || name == "policer" || name == "str-iptos-val" || name == "change-type" || name == "acl-config" || name == "acl-str")
        return true;
    return false;
}

PlatformLptspIfib::Nodes::Node::Stats::Stats()
    :
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    clear_ts{YType::uint64, "clear-ts"},
    no_stats_mem_err{YType::uint64, "no-stats-mem-err"}
{

    yang_name = "stats"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfib::Nodes::Node::Stats::~Stats()
{
}

bool PlatformLptspIfib::Nodes::Node::Stats::has_data() const
{
    return accepted.is_set
	|| dropped.is_set
	|| clear_ts.is_set
	|| no_stats_mem_err.is_set;
}

bool PlatformLptspIfib::Nodes::Node::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(clear_ts.yfilter)
	|| ydk::is_set(no_stats_mem_err.yfilter);
}

std::string PlatformLptspIfib::Nodes::Node::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfib::Nodes::Node::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (clear_ts.is_set || is_set(clear_ts.yfilter)) leaf_name_data.push_back(clear_ts.get_name_leafdata());
    if (no_stats_mem_err.is_set || is_set(no_stats_mem_err.yfilter)) leaf_name_data.push_back(no_stats_mem_err.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfib::Nodes::Node::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfib::Nodes::Node::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformLptspIfib::Nodes::Node::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-ts")
    {
        clear_ts = value;
        clear_ts.value_namespace = name_space;
        clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err = value;
        no_stats_mem_err.value_namespace = name_space;
        no_stats_mem_err.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfib::Nodes::Node::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "clear-ts")
    {
        clear_ts.yfilter = yfilter;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err.yfilter = yfilter;
    }
}

bool PlatformLptspIfib::Nodes::Node::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted" || name == "dropped" || name == "clear-ts" || name == "no-stats-mem-err")
        return true;
    return false;
}

PlatformLptspIfibNpStats::PlatformLptspIfibNpStats()
    :
    node_np_stats(std::make_shared<PlatformLptspIfibNpStats::NodeNpStats>())
{
    node_np_stats->parent = this;

    yang_name = "platform-lptsp-ifib-np-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-lpts-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformLptspIfibNpStats::~PlatformLptspIfibNpStats()
{
}

bool PlatformLptspIfibNpStats::has_data() const
{
    return (node_np_stats !=  nullptr && node_np_stats->has_data());
}

bool PlatformLptspIfibNpStats::has_operation() const
{
    return is_set(yfilter)
	|| (node_np_stats !=  nullptr && node_np_stats->has_operation());
}

std::string PlatformLptspIfibNpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib-np-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-np-stats")
    {
        if(node_np_stats == nullptr)
        {
            node_np_stats = std::make_shared<PlatformLptspIfibNpStats::NodeNpStats>();
        }
        return node_np_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_np_stats != nullptr)
    {
        children["node-np-stats"] = node_np_stats;
    }

    return children;
}

void PlatformLptspIfibNpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibNpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::clone_ptr() const
{
    return std::make_shared<PlatformLptspIfibNpStats>();
}

std::string PlatformLptspIfibNpStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformLptspIfibNpStats::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformLptspIfibNpStats::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformLptspIfibNpStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformLptspIfibNpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-np-stats")
        return true;
    return false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStats()
{

    yang_name = "node-np-stats"; yang_parent_name = "platform-lptsp-ifib-np-stats"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformLptspIfibNpStats::NodeNpStats::~NodeNpStats()
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::has_data() const
{
    for (std::size_t index=0; index<node_np_stat.size(); index++)
    {
        if(node_np_stat[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfibNpStats::NodeNpStats::has_operation() const
{
    for (std::size_t index=0; index<node_np_stat.size(); index++)
    {
        if(node_np_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfibNpStats::NodeNpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib-np-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformLptspIfibNpStats::NodeNpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-np-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::NodeNpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::NodeNpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-np-stat")
    {
        auto c = std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat>();
        c->parent = this;
        node_np_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::NodeNpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node_np_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfibNpStats::NodeNpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibNpStats::NodeNpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-np-stat")
        return true;
    return false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::NodeNpStat()
    :
    node_name{YType::str, "node-name"}
    	,
    nps(std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps>())
{
    nps->parent = this;

    yang_name = "node-np-stat"; yang_parent_name = "node-np-stats"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::~NodeNpStat()
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::has_data() const
{
    return node_name.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib-np-stats/node-np-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-np-stat" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nps")
    {
        if(nps == nullptr)
        {
            nps = std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps>();
        }
        return nps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nps != nullptr)
    {
        children["nps"] = nps;
    }

    return children;
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nps" || name == "node-name")
        return true;
    return false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Nps()
{

    yang_name = "nps"; yang_parent_name = "node-np-stat"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::~Nps()
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        auto c = std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np>();
        c->parent = this;
        np.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : np)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np")
        return true;
    return false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::Np()
    :
    np_name{YType::str, "np-name"}
    	,
    np_police(std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice>())
{
    np_police->parent = this;

    yang_name = "np"; yang_parent_name = "nps"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::~Np()
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::has_data() const
{
    return np_name.is_set
	|| (np_police !=  nullptr && np_police->has_data());
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(np_name.yfilter)
	|| (np_police !=  nullptr && np_police->has_operation());
}

std::string PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[np-name='" <<np_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (np_name.is_set || is_set(np_name.yfilter)) leaf_name_data.push_back(np_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np-police")
    {
        if(np_police == nullptr)
        {
            np_police = std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice>();
        }
        return np_police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(np_police != nullptr)
    {
        children["np-police"] = np_police;
    }

    return children;
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "np-name")
    {
        np_name = value;
        np_name.value_namespace = name_space;
        np_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "np-name")
    {
        np_name.yfilter = yfilter;
    }
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-police" || name == "np-name")
        return true;
    return false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::NpPolice()
{

    yang_name = "np-police"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::~NpPolice()
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::has_data() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::has_operation() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police-info")
    {
        auto c = std::make_shared<PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo>();
        c->parent = this;
        police_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : police_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police-info")
        return true;
    return false;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::PoliceInfo()
    :
    avgrate{YType::uint32, "avgrate"},
    burst{YType::uint32, "burst"},
    static_avgrate{YType::uint32, "static-avgrate"},
    avgrate_type{YType::str, "avgrate-type"},
    flow_type{YType::str, "flow-type"},
    accepted_stats{YType::uint64, "accepted-stats"},
    dropped_stats{YType::uint64, "dropped-stats"},
    policer{YType::uint32, "policer"},
    str_iptos_val{YType::str, "str-iptos-val"},
    change_type{YType::uint8, "change-type"},
    acl_config{YType::uint8, "acl-config"},
    acl_str{YType::str, "acl-str"}
{

    yang_name = "police-info"; yang_parent_name = "np-police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::~PoliceInfo()
{
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::has_data() const
{
    return avgrate.is_set
	|| burst.is_set
	|| static_avgrate.is_set
	|| avgrate_type.is_set
	|| flow_type.is_set
	|| accepted_stats.is_set
	|| dropped_stats.is_set
	|| policer.is_set
	|| str_iptos_val.is_set
	|| change_type.is_set
	|| acl_config.is_set
	|| acl_str.is_set;
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avgrate.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(static_avgrate.yfilter)
	|| ydk::is_set(avgrate_type.yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(accepted_stats.yfilter)
	|| ydk::is_set(dropped_stats.yfilter)
	|| ydk::is_set(policer.yfilter)
	|| ydk::is_set(str_iptos_val.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(acl_config.yfilter)
	|| ydk::is_set(acl_str.yfilter);
}

std::string PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avgrate.is_set || is_set(avgrate.yfilter)) leaf_name_data.push_back(avgrate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (static_avgrate.is_set || is_set(static_avgrate.yfilter)) leaf_name_data.push_back(static_avgrate.get_name_leafdata());
    if (avgrate_type.is_set || is_set(avgrate_type.yfilter)) leaf_name_data.push_back(avgrate_type.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (accepted_stats.is_set || is_set(accepted_stats.yfilter)) leaf_name_data.push_back(accepted_stats.get_name_leafdata());
    if (dropped_stats.is_set || is_set(dropped_stats.yfilter)) leaf_name_data.push_back(dropped_stats.get_name_leafdata());
    if (policer.is_set || is_set(policer.yfilter)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (str_iptos_val.is_set || is_set(str_iptos_val.yfilter)) leaf_name_data.push_back(str_iptos_val.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (acl_config.is_set || is_set(acl_config.yfilter)) leaf_name_data.push_back(acl_config.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.yfilter)) leaf_name_data.push_back(acl_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avgrate")
    {
        avgrate = value;
        avgrate.value_namespace = name_space;
        avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate = value;
        static_avgrate.value_namespace = name_space;
        static_avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type = value;
        avgrate_type.value_namespace = name_space;
        avgrate_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-stats")
    {
        accepted_stats = value;
        accepted_stats.value_namespace = name_space;
        accepted_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats = value;
        dropped_stats.value_namespace = name_space;
        dropped_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer")
    {
        policer = value;
        policer.value_namespace = name_space;
        policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "str-iptos-val")
    {
        str_iptos_val = value;
        str_iptos_val.value_namespace = name_space;
        str_iptos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-config")
    {
        acl_config = value;
        acl_config.value_namespace = name_space;
        acl_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
        acl_str.value_namespace = name_space;
        acl_str.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avgrate")
    {
        avgrate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate.yfilter = yfilter;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type.yfilter = yfilter;
    }
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "accepted-stats")
    {
        accepted_stats.yfilter = yfilter;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats.yfilter = yfilter;
    }
    if(value_path == "policer")
    {
        policer.yfilter = yfilter;
    }
    if(value_path == "str-iptos-val")
    {
        str_iptos_val.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "acl-config")
    {
        acl_config.yfilter = yfilter;
    }
    if(value_path == "acl-str")
    {
        acl_str.yfilter = yfilter;
    }
}

bool PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avgrate" || name == "burst" || name == "static-avgrate" || name == "avgrate-type" || name == "flow-type" || name == "accepted-stats" || name == "dropped-stats" || name == "policer" || name == "str-iptos-val" || name == "change-type" || name == "acl-config" || name == "acl-str")
        return true;
    return false;
}


}
}

