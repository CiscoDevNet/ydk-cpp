
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper {

Drop::Drop()
    :
    nodes(std::make_shared<Drop::Nodes>())
{
    nodes->parent = this;

    yang_name = "drop"; yang_parent_name = "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Drop::~Drop()
{
}

bool Drop::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Drop::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Drop::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Drop::clone_ptr() const
{
    return std::make_shared<Drop>();
}

std::string Drop::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Drop::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Drop::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Drop::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Drop::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "drop"; is_top_level_class = false; has_list_ancestor = false; 
}

Drop::Nodes::~Nodes()
{
}

bool Drop::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Drop::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Drop::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop/" << get_segment_path();
    return path_buffer.str();
}

std::string Drop::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Drop::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Drop::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Drop::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Drop::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Drop::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Drop::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Drop::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Drop::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    npu_number_for_drop_stats(std::make_shared<Drop::Nodes::Node::NpuNumberForDropStats>())
{
    npu_number_for_drop_stats->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Drop::Nodes::Node::~Node()
{
}

bool Drop::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (npu_number_for_drop_stats !=  nullptr && npu_number_for_drop_stats->has_data());
}

bool Drop::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (npu_number_for_drop_stats !=  nullptr && npu_number_for_drop_stats->has_operation());
}

std::string Drop::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Drop::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Drop::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Drop::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-number-for-drop-stats")
    {
        if(npu_number_for_drop_stats == nullptr)
        {
            npu_number_for_drop_stats = std::make_shared<Drop::Nodes::Node::NpuNumberForDropStats>();
        }
        return npu_number_for_drop_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Drop::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(npu_number_for_drop_stats != nullptr)
    {
        _children["npu-number-for-drop-stats"] = npu_number_for_drop_stats;
    }

    return _children;
}

void Drop::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Drop::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Drop::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-number-for-drop-stats" || name == "node-name")
        return true;
    return false;
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStats()
    :
    npu_number_for_drop_stat(this, {"npu_id"})
{

    yang_name = "npu-number-for-drop-stats"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Drop::Nodes::Node::NpuNumberForDropStats::~NpuNumberForDropStats()
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<npu_number_for_drop_stat.len(); index++)
    {
        if(npu_number_for_drop_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Drop::Nodes::Node::NpuNumberForDropStats::has_operation() const
{
    for (std::size_t index=0; index<npu_number_for_drop_stat.len(); index++)
    {
        if(npu_number_for_drop_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Drop::Nodes::Node::NpuNumberForDropStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-drop-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Drop::Nodes::Node::NpuNumberForDropStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Drop::Nodes::Node::NpuNumberForDropStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-number-for-drop-stat")
    {
        auto ent_ = std::make_shared<Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat>();
        ent_->parent = this;
        npu_number_for_drop_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Drop::Nodes::Node::NpuNumberForDropStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : npu_number_for_drop_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Drop::Nodes::Node::NpuNumberForDropStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Drop::Nodes::Node::NpuNumberForDropStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-number-for-drop-stat")
        return true;
    return false;
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::NpuNumberForDropStat()
    :
    npu_id{YType::uint32, "npu-id"}
        ,
    drop_specific_stats_data(this, {"drop_data"})
{

    yang_name = "npu-number-for-drop-stat"; yang_parent_name = "npu-number-for-drop-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::~NpuNumberForDropStat()
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<drop_specific_stats_data.len(); index++)
    {
        if(drop_specific_stats_data[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::has_operation() const
{
    for (std::size_t index=0; index<drop_specific_stats_data.len(); index++)
    {
        if(drop_specific_stats_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter);
}

std::string Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-drop-stat";
    ADD_KEY_TOKEN(npu_id, "npu-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-specific-stats-data")
    {
        auto ent_ = std::make_shared<Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData>();
        ent_->parent = this;
        drop_specific_stats_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : drop_specific_stats_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
}

void Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-specific-stats-data" || name == "npu-id")
        return true;
    return false;
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::DropSpecificStatsData()
    :
    drop_data{YType::uint32, "drop-data"},
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    count{YType::uint64, "count"}
{

    yang_name = "drop-specific-stats-data"; yang_parent_name = "npu-number-for-drop-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::~DropSpecificStatsData()
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::has_data() const
{
    if (is_presence_container) return true;
    return drop_data.is_set
	|| id.is_set
	|| name.is_set
	|| count.is_set;
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_data.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-specific-stats-data";
    ADD_KEY_TOKEN(drop_data, "drop-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_data.is_set || is_set(drop_data.yfilter)) leaf_name_data.push_back(drop_data.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-data")
    {
        drop_data = value;
        drop_data.value_namespace = name_space;
        drop_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-data")
    {
        drop_data.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-data" || name == "id" || name == "name" || name == "count")
        return true;
    return false;
}


}
}

