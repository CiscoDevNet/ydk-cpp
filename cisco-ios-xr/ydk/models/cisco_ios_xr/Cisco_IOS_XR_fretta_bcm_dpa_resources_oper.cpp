
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_resources_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_resources_oper {

Dpa::Dpa()
    :
    stats(std::make_shared<Dpa::Stats>())
    , resources(std::make_shared<Dpa::Resources>())
{
    stats->parent = this;
    resources->parent = this;

    yang_name = "dpa"; yang_parent_name = "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Dpa::~Dpa()
{
}

bool Dpa::has_data() const
{
    if (is_presence_container) return true;
    return (stats !=  nullptr && stats->has_data())
	|| (resources !=  nullptr && resources->has_data());
}

bool Dpa::has_operation() const
{
    return is_set(yfilter)
	|| (stats !=  nullptr && stats->has_operation())
	|| (resources !=  nullptr && resources->has_operation());
}

std::string Dpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Dpa::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Dpa::Resources>();
        }
        return resources;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    if(resources != nullptr)
    {
        _children["resources"] = resources;
    }

    return _children;
}

void Dpa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Dpa::clone_ptr() const
{
    return std::make_shared<Dpa>();
}

std::string Dpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dpa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Dpa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "resources")
        return true;
    return false;
}

Dpa::Stats::Stats()
    :
    nodes(std::make_shared<Dpa::Stats::Nodes>())
{
    nodes->parent = this;

    yang_name = "stats"; yang_parent_name = "dpa"; is_top_level_class = false; has_list_ancestor = false; 
}

Dpa::Stats::~Stats()
{
}

bool Dpa::Stats::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Dpa::Stats::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Dpa::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Dpa::Stats::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Dpa::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Dpa::Stats::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false; 
}

Dpa::Stats::Nodes::~Nodes()
{
}

bool Dpa::Stats::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Stats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::get_children() const
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

void Dpa::Stats::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    asic_statistics(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics>())
    , npu_numbers(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers>())
{
    asic_statistics->parent = this;
    npu_numbers->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Dpa::Stats::Nodes::Node::~Node()
{
}

bool Dpa::Stats::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (asic_statistics !=  nullptr && asic_statistics->has_data())
	|| (npu_numbers !=  nullptr && npu_numbers->has_data());
}

bool Dpa::Stats::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (asic_statistics !=  nullptr && asic_statistics->has_operation())
	|| (npu_numbers !=  nullptr && npu_numbers->has_operation());
}

std::string Dpa::Stats::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/stats/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Stats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics")
    {
        if(asic_statistics == nullptr)
        {
            asic_statistics = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics>();
        }
        return asic_statistics;
    }

    if(child_yang_name == "npu-numbers")
    {
        if(npu_numbers == nullptr)
        {
            npu_numbers = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers>();
        }
        return npu_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asic_statistics != nullptr)
    {
        _children["asic-statistics"] = asic_statistics;
    }

    if(npu_numbers != nullptr)
    {
        _children["npu-numbers"] = npu_numbers;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics" || name == "npu-numbers" || name == "node-name")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatistics()
    :
    asic_statistics_detail_for_npu_ids(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds>())
    , asic_statistics_for_npu_ids(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds>())
{
    asic_statistics_detail_for_npu_ids->parent = this;
    asic_statistics_for_npu_ids->parent = this;

    yang_name = "asic-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::~AsicStatistics()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (asic_statistics_detail_for_npu_ids !=  nullptr && asic_statistics_detail_for_npu_ids->has_data())
	|| (asic_statistics_for_npu_ids !=  nullptr && asic_statistics_for_npu_ids->has_data());
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (asic_statistics_detail_for_npu_ids !=  nullptr && asic_statistics_detail_for_npu_ids->has_operation())
	|| (asic_statistics_for_npu_ids !=  nullptr && asic_statistics_for_npu_ids->has_operation());
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics-detail-for-npu-ids")
    {
        if(asic_statistics_detail_for_npu_ids == nullptr)
        {
            asic_statistics_detail_for_npu_ids = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds>();
        }
        return asic_statistics_detail_for_npu_ids;
    }

    if(child_yang_name == "asic-statistics-for-npu-ids")
    {
        if(asic_statistics_for_npu_ids == nullptr)
        {
            asic_statistics_for_npu_ids = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds>();
        }
        return asic_statistics_for_npu_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(asic_statistics_detail_for_npu_ids != nullptr)
    {
        _children["asic-statistics-detail-for-npu-ids"] = asic_statistics_detail_for_npu_ids;
    }

    if(asic_statistics_for_npu_ids != nullptr)
    {
        _children["asic-statistics-for-npu-ids"] = asic_statistics_for_npu_ids;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::AsicStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics-detail-for-npu-ids" || name == "asic-statistics-for-npu-ids")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuIds()
    :
    asic_statistics_detail_for_npu_id(this, {"npu_id"})
{

    yang_name = "asic-statistics-detail-for-npu-ids"; yang_parent_name = "asic-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::~AsicStatisticsDetailForNpuIds()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_statistics_detail_for_npu_id.len(); index++)
    {
        if(asic_statistics_detail_for_npu_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::has_operation() const
{
    for (std::size_t index=0; index<asic_statistics_detail_for_npu_id.len(); index++)
    {
        if(asic_statistics_detail_for_npu_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-detail-for-npu-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics-detail-for-npu-id")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId>();
        ent_->parent = this;
        asic_statistics_detail_for_npu_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_statistics_detail_for_npu_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics-detail-for-npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::AsicStatisticsDetailForNpuId()
    :
    npu_id{YType::uint32, "npu-id"},
    valid{YType::boolean, "valid"},
    rack_number{YType::uint32, "rack-number"},
    slot_number{YType::uint32, "slot-number"},
    asic_instance{YType::uint32, "asic-instance"},
    chip_version{YType::uint16, "chip-version"}
        ,
    statistics(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics>())
{
    statistics->parent = this;

    yang_name = "asic-statistics-detail-for-npu-id"; yang_parent_name = "asic-statistics-detail-for-npu-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::~AsicStatisticsDetailForNpuId()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::has_data() const
{
    if (is_presence_container) return true;
    return npu_id.is_set
	|| valid.is_set
	|| rack_number.is_set
	|| slot_number.is_set
	|| asic_instance.is_set
	|| chip_version.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(chip_version.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-detail-for-npu-id";
    ADD_KEY_TOKEN(npu_id, "npu-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (chip_version.is_set || is_set(chip_version.yfilter)) leaf_name_data.push_back(chip_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-version")
    {
        chip_version = value;
        chip_version.value_namespace = name_space;
        chip_version.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rack-number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "chip-version")
    {
        chip_version.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "npu-id" || name == "valid" || name == "rack-number" || name == "slot-number" || name == "asic-instance" || name == "chip-version")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::Statistics()
    :
    num_blocks{YType::uint8, "num-blocks"}
        ,
    block_info(this, {})
{

    yang_name = "statistics"; yang_parent_name = "asic-statistics-detail-for-npu-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::~Statistics()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_info.len(); index++)
    {
        if(block_info[index]->has_data())
            return true;
    }
    return num_blocks.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::has_operation() const
{
    for (std::size_t index=0; index<block_info.len(); index++)
    {
        if(block_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_blocks.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_blocks.is_set || is_set(num_blocks.yfilter)) leaf_name_data.push_back(num_blocks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-info")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo>();
        ent_->parent = this;
        block_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : block_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-blocks")
    {
        num_blocks = value;
        num_blocks.value_namespace = name_space;
        num_blocks.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-blocks")
    {
        num_blocks.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-info" || name == "num-blocks")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::BlockInfo()
    :
    block_name{YType::str, "block-name"},
    num_fields{YType::uint8, "num-fields"}
        ,
    field_info(this, {})
{

    yang_name = "block-info"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::~BlockInfo()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<field_info.len(); index++)
    {
        if(field_info[index]->has_data())
            return true;
    }
    return block_name.is_set
	|| num_fields.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::has_operation() const
{
    for (std::size_t index=0; index<field_info.len(); index++)
    {
        if(field_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| ydk::is_set(num_fields.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());
    if (num_fields.is_set || is_set(num_fields.yfilter)) leaf_name_data.push_back(num_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "field-info")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo>();
        ent_->parent = this;
        field_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : field_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fields")
    {
        num_fields = value;
        num_fields.value_namespace = name_space;
        num_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
    if(value_path == "num-fields")
    {
        num_fields.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-info" || name == "block-name" || name == "num-fields")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::FieldInfo()
    :
    field_name{YType::str, "field-name"},
    field_value{YType::uint64, "field-value"},
    is_overflow{YType::boolean, "is-overflow"}
{

    yang_name = "field-info"; yang_parent_name = "block-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::~FieldInfo()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::has_data() const
{
    if (is_presence_container) return true;
    return field_name.is_set
	|| field_value.is_set
	|| is_overflow.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_name.yfilter)
	|| ydk::is_set(field_value.yfilter)
	|| ydk::is_set(is_overflow.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "field-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_name.is_set || is_set(field_name.yfilter)) leaf_name_data.push_back(field_name.get_name_leafdata());
    if (field_value.is_set || is_set(field_value.yfilter)) leaf_name_data.push_back(field_value.get_name_leafdata());
    if (is_overflow.is_set || is_set(is_overflow.yfilter)) leaf_name_data.push_back(is_overflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-name")
    {
        field_name = value;
        field_name.value_namespace = name_space;
        field_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "field-value")
    {
        field_value = value;
        field_value.value_namespace = name_space;
        field_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-overflow")
    {
        is_overflow = value;
        is_overflow.value_namespace = name_space;
        is_overflow.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-name")
    {
        field_name.yfilter = yfilter;
    }
    if(value_path == "field-value")
    {
        field_value.yfilter = yfilter;
    }
    if(value_path == "is-overflow")
    {
        is_overflow.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-name" || name == "field-value" || name == "is-overflow")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuIds()
    :
    asic_statistics_for_npu_id(this, {"npu_id"})
{

    yang_name = "asic-statistics-for-npu-ids"; yang_parent_name = "asic-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::~AsicStatisticsForNpuIds()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_statistics_for_npu_id.len(); index++)
    {
        if(asic_statistics_for_npu_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::has_operation() const
{
    for (std::size_t index=0; index<asic_statistics_for_npu_id.len(); index++)
    {
        if(asic_statistics_for_npu_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-for-npu-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics-for-npu-id")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId>();
        ent_->parent = this;
        asic_statistics_for_npu_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_statistics_for_npu_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics-for-npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::AsicStatisticsForNpuId()
    :
    npu_id{YType::uint32, "npu-id"},
    valid{YType::boolean, "valid"},
    rack_number{YType::uint32, "rack-number"},
    slot_number{YType::uint32, "slot-number"},
    asic_instance{YType::uint32, "asic-instance"},
    chip_version{YType::uint16, "chip-version"}
        ,
    statistics(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics>())
{
    statistics->parent = this;

    yang_name = "asic-statistics-for-npu-id"; yang_parent_name = "asic-statistics-for-npu-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::~AsicStatisticsForNpuId()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::has_data() const
{
    if (is_presence_container) return true;
    return npu_id.is_set
	|| valid.is_set
	|| rack_number.is_set
	|| slot_number.is_set
	|| asic_instance.is_set
	|| chip_version.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(chip_version.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-for-npu-id";
    ADD_KEY_TOKEN(npu_id, "npu-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (chip_version.is_set || is_set(chip_version.yfilter)) leaf_name_data.push_back(chip_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-version")
    {
        chip_version = value;
        chip_version.value_namespace = name_space;
        chip_version.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rack-number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "chip-version")
    {
        chip_version.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "npu-id" || name == "valid" || name == "rack-number" || name == "slot-number" || name == "asic-instance" || name == "chip-version")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::Statistics()
    :
    nbi_rx_total_byte_cnt{YType::uint64, "nbi-rx-total-byte-cnt"},
    nbi_rx_total_pkt_cnt{YType::uint64, "nbi-rx-total-pkt-cnt"},
    ire_cpu_pkt_cnt{YType::uint64, "ire-cpu-pkt-cnt"},
    ire_nif_pkt_cnt{YType::uint64, "ire-nif-pkt-cnt"},
    ire_oamp_pkt_cnt{YType::uint64, "ire-oamp-pkt-cnt"},
    ire_olp_pkt_cnt{YType::uint64, "ire-olp-pkt-cnt"},
    ire_rcy_pkt_cnt{YType::uint64, "ire-rcy-pkt-cnt"},
    ire_fdt_if_cnt{YType::uint64, "ire-fdt-if-cnt"},
    idr_mmu_if_cnt{YType::uint64, "idr-mmu-if-cnt"},
    idr_ocb_if_cnt{YType::uint64, "idr-ocb-if-cnt"},
    iqm_enqueue_pkt_cnt{YType::uint64, "iqm-enqueue-pkt-cnt"},
    iqm_dequeue_pkt_cnt{YType::uint64, "iqm-dequeue-pkt-cnt"},
    iqm_deleted_pkt_cnt{YType::uint64, "iqm-deleted-pkt-cnt"},
    iqm_enq_discarded_pkt_cnt{YType::uint64, "iqm-enq-discarded-pkt-cnt"},
    ipt_egq_pkt_cnt{YType::uint64, "ipt-egq-pkt-cnt"},
    ipt_enq_pkt_cnt{YType::uint64, "ipt-enq-pkt-cnt"},
    ipt_fdt_pkt_cnt{YType::uint64, "ipt-fdt-pkt-cnt"},
    ipt_cfg_event_cnt{YType::uint64, "ipt-cfg-event-cnt"},
    ipt_cfg_byte_cnt{YType::uint64, "ipt-cfg-byte-cnt"},
    fdt_ipt_desc_cell_cnt{YType::uint64, "fdt-ipt-desc-cell-cnt"},
    fdt_ire_desc_cell_cnt{YType::uint64, "fdt-ire-desc-cell-cnt"},
    fdt_transmitted_data_cells_cnt{YType::uint64, "fdt-transmitted-data-cells-cnt"},
    fdr_p1_cell_in_cnt{YType::uint64, "fdr-p1-cell-in-cnt"},
    fdr_p2_cell_in_cnt{YType::uint64, "fdr-p2-cell-in-cnt"},
    fdr_p3_cell_in_cnt{YType::uint64, "fdr-p3-cell-in-cnt"},
    fdr_cell_in_cnt_total{YType::uint64, "fdr-cell-in-cnt-total"},
    fda_cells_in_cnt_p1{YType::uint64, "fda-cells-in-cnt-p1"},
    fda_cells_in_cnt_p2{YType::uint64, "fda-cells-in-cnt-p2"},
    fda_cells_in_cnt_p3{YType::uint64, "fda-cells-in-cnt-p3"},
    fda_cells_in_tdm_cnt{YType::uint64, "fda-cells-in-tdm-cnt"},
    fda_cells_in_meshmc_cnt{YType::uint64, "fda-cells-in-meshmc-cnt"},
    fda_cells_in_ipt_cnt{YType::uint64, "fda-cells-in-ipt-cnt"},
    fda_cells_out_cnt_p1{YType::uint64, "fda-cells-out-cnt-p1"},
    fda_cells_out_cnt_p2{YType::uint64, "fda-cells-out-cnt-p2"},
    fda_cells_out_cnt_p3{YType::uint64, "fda-cells-out-cnt-p3"},
    fda_cells_out_tdm_cnt{YType::uint64, "fda-cells-out-tdm-cnt"},
    fda_cells_out_meshmc_cnt{YType::uint64, "fda-cells-out-meshmc-cnt"},
    fda_cells_out_ipt_cnt{YType::uint64, "fda-cells-out-ipt-cnt"},
    fda_egq_drop_cnt{YType::uint64, "fda-egq-drop-cnt"},
    fda_egq_meshmc_drop_cnt{YType::uint64, "fda-egq-meshmc-drop-cnt"},
    egq_fqp_pkt_cnt{YType::uint64, "egq-fqp-pkt-cnt"},
    egq_pqp_uc_pkt_cnt{YType::uint64, "egq-pqp-uc-pkt-cnt"},
    egq_pqp_discard_uc_pkt_cnt{YType::uint64, "egq-pqp-discard-uc-pkt-cnt"},
    egq_pqp_uc_bytes_cnt{YType::uint64, "egq-pqp-uc-bytes-cnt"},
    egq_pqp_mc_pkt_cnt{YType::uint64, "egq-pqp-mc-pkt-cnt"},
    egq_pqp_discard_mc_pkt_cnt{YType::uint64, "egq-pqp-discard-mc-pkt-cnt"},
    egq_pqp_mc_bytes_cnt{YType::uint64, "egq-pqp-mc-bytes-cnt"},
    egq_ehp_uc_pkt_cnt{YType::uint64, "egq-ehp-uc-pkt-cnt"},
    egq_ehp_mc_high_pkt_cnt{YType::uint64, "egq-ehp-mc-high-pkt-cnt"},
    egq_ehp_mc_low_pkt_cnt{YType::uint64, "egq-ehp-mc-low-pkt-cnt"},
    egq_deleted_pkt_cnt{YType::uint64, "egq-deleted-pkt-cnt"},
    egq_ehp_mc_high_discard_cnt{YType::uint64, "egq-ehp-mc-high-discard-cnt"},
    egq_ehp_mc_low_discard_cnt{YType::uint64, "egq-ehp-mc-low-discard-cnt"},
    egq_erpp_lag_pruning_discard_cnt{YType::uint64, "egq-erpp-lag-pruning-discard-cnt"},
    egq_erpp_pmf_discard_cnt{YType::uint64, "egq-erpp-pmf-discard-cnt"},
    egq_erpp_vlan_mbr_discard_cnt{YType::uint64, "egq-erpp-vlan-mbr-discard-cnt"},
    epni_epe_byte_cnt{YType::uint64, "epni-epe-byte-cnt"},
    epni_epe_pkt_cnt{YType::uint64, "epni-epe-pkt-cnt"},
    epni_epe_discard_cnt{YType::uint64, "epni-epe-discard-cnt"},
    nbi_tx_total_byte_cnt{YType::uint64, "nbi-tx-total-byte-cnt"},
    nbi_tx_total_pkt_cnt{YType::uint64, "nbi-tx-total-pkt-cnt"}
{

    yang_name = "statistics"; yang_parent_name = "asic-statistics-for-npu-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::~Statistics()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return nbi_rx_total_byte_cnt.is_set
	|| nbi_rx_total_pkt_cnt.is_set
	|| ire_cpu_pkt_cnt.is_set
	|| ire_nif_pkt_cnt.is_set
	|| ire_oamp_pkt_cnt.is_set
	|| ire_olp_pkt_cnt.is_set
	|| ire_rcy_pkt_cnt.is_set
	|| ire_fdt_if_cnt.is_set
	|| idr_mmu_if_cnt.is_set
	|| idr_ocb_if_cnt.is_set
	|| iqm_enqueue_pkt_cnt.is_set
	|| iqm_dequeue_pkt_cnt.is_set
	|| iqm_deleted_pkt_cnt.is_set
	|| iqm_enq_discarded_pkt_cnt.is_set
	|| ipt_egq_pkt_cnt.is_set
	|| ipt_enq_pkt_cnt.is_set
	|| ipt_fdt_pkt_cnt.is_set
	|| ipt_cfg_event_cnt.is_set
	|| ipt_cfg_byte_cnt.is_set
	|| fdt_ipt_desc_cell_cnt.is_set
	|| fdt_ire_desc_cell_cnt.is_set
	|| fdt_transmitted_data_cells_cnt.is_set
	|| fdr_p1_cell_in_cnt.is_set
	|| fdr_p2_cell_in_cnt.is_set
	|| fdr_p3_cell_in_cnt.is_set
	|| fdr_cell_in_cnt_total.is_set
	|| fda_cells_in_cnt_p1.is_set
	|| fda_cells_in_cnt_p2.is_set
	|| fda_cells_in_cnt_p3.is_set
	|| fda_cells_in_tdm_cnt.is_set
	|| fda_cells_in_meshmc_cnt.is_set
	|| fda_cells_in_ipt_cnt.is_set
	|| fda_cells_out_cnt_p1.is_set
	|| fda_cells_out_cnt_p2.is_set
	|| fda_cells_out_cnt_p3.is_set
	|| fda_cells_out_tdm_cnt.is_set
	|| fda_cells_out_meshmc_cnt.is_set
	|| fda_cells_out_ipt_cnt.is_set
	|| fda_egq_drop_cnt.is_set
	|| fda_egq_meshmc_drop_cnt.is_set
	|| egq_fqp_pkt_cnt.is_set
	|| egq_pqp_uc_pkt_cnt.is_set
	|| egq_pqp_discard_uc_pkt_cnt.is_set
	|| egq_pqp_uc_bytes_cnt.is_set
	|| egq_pqp_mc_pkt_cnt.is_set
	|| egq_pqp_discard_mc_pkt_cnt.is_set
	|| egq_pqp_mc_bytes_cnt.is_set
	|| egq_ehp_uc_pkt_cnt.is_set
	|| egq_ehp_mc_high_pkt_cnt.is_set
	|| egq_ehp_mc_low_pkt_cnt.is_set
	|| egq_deleted_pkt_cnt.is_set
	|| egq_ehp_mc_high_discard_cnt.is_set
	|| egq_ehp_mc_low_discard_cnt.is_set
	|| egq_erpp_lag_pruning_discard_cnt.is_set
	|| egq_erpp_pmf_discard_cnt.is_set
	|| egq_erpp_vlan_mbr_discard_cnt.is_set
	|| epni_epe_byte_cnt.is_set
	|| epni_epe_pkt_cnt.is_set
	|| epni_epe_discard_cnt.is_set
	|| nbi_tx_total_byte_cnt.is_set
	|| nbi_tx_total_pkt_cnt.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbi_rx_total_byte_cnt.yfilter)
	|| ydk::is_set(nbi_rx_total_pkt_cnt.yfilter)
	|| ydk::is_set(ire_cpu_pkt_cnt.yfilter)
	|| ydk::is_set(ire_nif_pkt_cnt.yfilter)
	|| ydk::is_set(ire_oamp_pkt_cnt.yfilter)
	|| ydk::is_set(ire_olp_pkt_cnt.yfilter)
	|| ydk::is_set(ire_rcy_pkt_cnt.yfilter)
	|| ydk::is_set(ire_fdt_if_cnt.yfilter)
	|| ydk::is_set(idr_mmu_if_cnt.yfilter)
	|| ydk::is_set(idr_ocb_if_cnt.yfilter)
	|| ydk::is_set(iqm_enqueue_pkt_cnt.yfilter)
	|| ydk::is_set(iqm_dequeue_pkt_cnt.yfilter)
	|| ydk::is_set(iqm_deleted_pkt_cnt.yfilter)
	|| ydk::is_set(iqm_enq_discarded_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_egq_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_enq_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_fdt_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_cfg_event_cnt.yfilter)
	|| ydk::is_set(ipt_cfg_byte_cnt.yfilter)
	|| ydk::is_set(fdt_ipt_desc_cell_cnt.yfilter)
	|| ydk::is_set(fdt_ire_desc_cell_cnt.yfilter)
	|| ydk::is_set(fdt_transmitted_data_cells_cnt.yfilter)
	|| ydk::is_set(fdr_p1_cell_in_cnt.yfilter)
	|| ydk::is_set(fdr_p2_cell_in_cnt.yfilter)
	|| ydk::is_set(fdr_p3_cell_in_cnt.yfilter)
	|| ydk::is_set(fdr_cell_in_cnt_total.yfilter)
	|| ydk::is_set(fda_cells_in_cnt_p1.yfilter)
	|| ydk::is_set(fda_cells_in_cnt_p2.yfilter)
	|| ydk::is_set(fda_cells_in_cnt_p3.yfilter)
	|| ydk::is_set(fda_cells_in_tdm_cnt.yfilter)
	|| ydk::is_set(fda_cells_in_meshmc_cnt.yfilter)
	|| ydk::is_set(fda_cells_in_ipt_cnt.yfilter)
	|| ydk::is_set(fda_cells_out_cnt_p1.yfilter)
	|| ydk::is_set(fda_cells_out_cnt_p2.yfilter)
	|| ydk::is_set(fda_cells_out_cnt_p3.yfilter)
	|| ydk::is_set(fda_cells_out_tdm_cnt.yfilter)
	|| ydk::is_set(fda_cells_out_meshmc_cnt.yfilter)
	|| ydk::is_set(fda_cells_out_ipt_cnt.yfilter)
	|| ydk::is_set(fda_egq_drop_cnt.yfilter)
	|| ydk::is_set(fda_egq_meshmc_drop_cnt.yfilter)
	|| ydk::is_set(egq_fqp_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_uc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_discard_uc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_uc_bytes_cnt.yfilter)
	|| ydk::is_set(egq_pqp_mc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_discard_mc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_mc_bytes_cnt.yfilter)
	|| ydk::is_set(egq_ehp_uc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_high_pkt_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_low_pkt_cnt.yfilter)
	|| ydk::is_set(egq_deleted_pkt_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_high_discard_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_low_discard_cnt.yfilter)
	|| ydk::is_set(egq_erpp_lag_pruning_discard_cnt.yfilter)
	|| ydk::is_set(egq_erpp_pmf_discard_cnt.yfilter)
	|| ydk::is_set(egq_erpp_vlan_mbr_discard_cnt.yfilter)
	|| ydk::is_set(epni_epe_byte_cnt.yfilter)
	|| ydk::is_set(epni_epe_pkt_cnt.yfilter)
	|| ydk::is_set(epni_epe_discard_cnt.yfilter)
	|| ydk::is_set(nbi_tx_total_byte_cnt.yfilter)
	|| ydk::is_set(nbi_tx_total_pkt_cnt.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbi_rx_total_byte_cnt.is_set || is_set(nbi_rx_total_byte_cnt.yfilter)) leaf_name_data.push_back(nbi_rx_total_byte_cnt.get_name_leafdata());
    if (nbi_rx_total_pkt_cnt.is_set || is_set(nbi_rx_total_pkt_cnt.yfilter)) leaf_name_data.push_back(nbi_rx_total_pkt_cnt.get_name_leafdata());
    if (ire_cpu_pkt_cnt.is_set || is_set(ire_cpu_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_cpu_pkt_cnt.get_name_leafdata());
    if (ire_nif_pkt_cnt.is_set || is_set(ire_nif_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_nif_pkt_cnt.get_name_leafdata());
    if (ire_oamp_pkt_cnt.is_set || is_set(ire_oamp_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_oamp_pkt_cnt.get_name_leafdata());
    if (ire_olp_pkt_cnt.is_set || is_set(ire_olp_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_olp_pkt_cnt.get_name_leafdata());
    if (ire_rcy_pkt_cnt.is_set || is_set(ire_rcy_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_rcy_pkt_cnt.get_name_leafdata());
    if (ire_fdt_if_cnt.is_set || is_set(ire_fdt_if_cnt.yfilter)) leaf_name_data.push_back(ire_fdt_if_cnt.get_name_leafdata());
    if (idr_mmu_if_cnt.is_set || is_set(idr_mmu_if_cnt.yfilter)) leaf_name_data.push_back(idr_mmu_if_cnt.get_name_leafdata());
    if (idr_ocb_if_cnt.is_set || is_set(idr_ocb_if_cnt.yfilter)) leaf_name_data.push_back(idr_ocb_if_cnt.get_name_leafdata());
    if (iqm_enqueue_pkt_cnt.is_set || is_set(iqm_enqueue_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_enqueue_pkt_cnt.get_name_leafdata());
    if (iqm_dequeue_pkt_cnt.is_set || is_set(iqm_dequeue_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_dequeue_pkt_cnt.get_name_leafdata());
    if (iqm_deleted_pkt_cnt.is_set || is_set(iqm_deleted_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_deleted_pkt_cnt.get_name_leafdata());
    if (iqm_enq_discarded_pkt_cnt.is_set || is_set(iqm_enq_discarded_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_enq_discarded_pkt_cnt.get_name_leafdata());
    if (ipt_egq_pkt_cnt.is_set || is_set(ipt_egq_pkt_cnt.yfilter)) leaf_name_data.push_back(ipt_egq_pkt_cnt.get_name_leafdata());
    if (ipt_enq_pkt_cnt.is_set || is_set(ipt_enq_pkt_cnt.yfilter)) leaf_name_data.push_back(ipt_enq_pkt_cnt.get_name_leafdata());
    if (ipt_fdt_pkt_cnt.is_set || is_set(ipt_fdt_pkt_cnt.yfilter)) leaf_name_data.push_back(ipt_fdt_pkt_cnt.get_name_leafdata());
    if (ipt_cfg_event_cnt.is_set || is_set(ipt_cfg_event_cnt.yfilter)) leaf_name_data.push_back(ipt_cfg_event_cnt.get_name_leafdata());
    if (ipt_cfg_byte_cnt.is_set || is_set(ipt_cfg_byte_cnt.yfilter)) leaf_name_data.push_back(ipt_cfg_byte_cnt.get_name_leafdata());
    if (fdt_ipt_desc_cell_cnt.is_set || is_set(fdt_ipt_desc_cell_cnt.yfilter)) leaf_name_data.push_back(fdt_ipt_desc_cell_cnt.get_name_leafdata());
    if (fdt_ire_desc_cell_cnt.is_set || is_set(fdt_ire_desc_cell_cnt.yfilter)) leaf_name_data.push_back(fdt_ire_desc_cell_cnt.get_name_leafdata());
    if (fdt_transmitted_data_cells_cnt.is_set || is_set(fdt_transmitted_data_cells_cnt.yfilter)) leaf_name_data.push_back(fdt_transmitted_data_cells_cnt.get_name_leafdata());
    if (fdr_p1_cell_in_cnt.is_set || is_set(fdr_p1_cell_in_cnt.yfilter)) leaf_name_data.push_back(fdr_p1_cell_in_cnt.get_name_leafdata());
    if (fdr_p2_cell_in_cnt.is_set || is_set(fdr_p2_cell_in_cnt.yfilter)) leaf_name_data.push_back(fdr_p2_cell_in_cnt.get_name_leafdata());
    if (fdr_p3_cell_in_cnt.is_set || is_set(fdr_p3_cell_in_cnt.yfilter)) leaf_name_data.push_back(fdr_p3_cell_in_cnt.get_name_leafdata());
    if (fdr_cell_in_cnt_total.is_set || is_set(fdr_cell_in_cnt_total.yfilter)) leaf_name_data.push_back(fdr_cell_in_cnt_total.get_name_leafdata());
    if (fda_cells_in_cnt_p1.is_set || is_set(fda_cells_in_cnt_p1.yfilter)) leaf_name_data.push_back(fda_cells_in_cnt_p1.get_name_leafdata());
    if (fda_cells_in_cnt_p2.is_set || is_set(fda_cells_in_cnt_p2.yfilter)) leaf_name_data.push_back(fda_cells_in_cnt_p2.get_name_leafdata());
    if (fda_cells_in_cnt_p3.is_set || is_set(fda_cells_in_cnt_p3.yfilter)) leaf_name_data.push_back(fda_cells_in_cnt_p3.get_name_leafdata());
    if (fda_cells_in_tdm_cnt.is_set || is_set(fda_cells_in_tdm_cnt.yfilter)) leaf_name_data.push_back(fda_cells_in_tdm_cnt.get_name_leafdata());
    if (fda_cells_in_meshmc_cnt.is_set || is_set(fda_cells_in_meshmc_cnt.yfilter)) leaf_name_data.push_back(fda_cells_in_meshmc_cnt.get_name_leafdata());
    if (fda_cells_in_ipt_cnt.is_set || is_set(fda_cells_in_ipt_cnt.yfilter)) leaf_name_data.push_back(fda_cells_in_ipt_cnt.get_name_leafdata());
    if (fda_cells_out_cnt_p1.is_set || is_set(fda_cells_out_cnt_p1.yfilter)) leaf_name_data.push_back(fda_cells_out_cnt_p1.get_name_leafdata());
    if (fda_cells_out_cnt_p2.is_set || is_set(fda_cells_out_cnt_p2.yfilter)) leaf_name_data.push_back(fda_cells_out_cnt_p2.get_name_leafdata());
    if (fda_cells_out_cnt_p3.is_set || is_set(fda_cells_out_cnt_p3.yfilter)) leaf_name_data.push_back(fda_cells_out_cnt_p3.get_name_leafdata());
    if (fda_cells_out_tdm_cnt.is_set || is_set(fda_cells_out_tdm_cnt.yfilter)) leaf_name_data.push_back(fda_cells_out_tdm_cnt.get_name_leafdata());
    if (fda_cells_out_meshmc_cnt.is_set || is_set(fda_cells_out_meshmc_cnt.yfilter)) leaf_name_data.push_back(fda_cells_out_meshmc_cnt.get_name_leafdata());
    if (fda_cells_out_ipt_cnt.is_set || is_set(fda_cells_out_ipt_cnt.yfilter)) leaf_name_data.push_back(fda_cells_out_ipt_cnt.get_name_leafdata());
    if (fda_egq_drop_cnt.is_set || is_set(fda_egq_drop_cnt.yfilter)) leaf_name_data.push_back(fda_egq_drop_cnt.get_name_leafdata());
    if (fda_egq_meshmc_drop_cnt.is_set || is_set(fda_egq_meshmc_drop_cnt.yfilter)) leaf_name_data.push_back(fda_egq_meshmc_drop_cnt.get_name_leafdata());
    if (egq_fqp_pkt_cnt.is_set || is_set(egq_fqp_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_fqp_pkt_cnt.get_name_leafdata());
    if (egq_pqp_uc_pkt_cnt.is_set || is_set(egq_pqp_uc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_uc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_discard_uc_pkt_cnt.is_set || is_set(egq_pqp_discard_uc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_discard_uc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_uc_bytes_cnt.is_set || is_set(egq_pqp_uc_bytes_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_uc_bytes_cnt.get_name_leafdata());
    if (egq_pqp_mc_pkt_cnt.is_set || is_set(egq_pqp_mc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_mc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_discard_mc_pkt_cnt.is_set || is_set(egq_pqp_discard_mc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_discard_mc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_mc_bytes_cnt.is_set || is_set(egq_pqp_mc_bytes_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_mc_bytes_cnt.get_name_leafdata());
    if (egq_ehp_uc_pkt_cnt.is_set || is_set(egq_ehp_uc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_uc_pkt_cnt.get_name_leafdata());
    if (egq_ehp_mc_high_pkt_cnt.is_set || is_set(egq_ehp_mc_high_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_high_pkt_cnt.get_name_leafdata());
    if (egq_ehp_mc_low_pkt_cnt.is_set || is_set(egq_ehp_mc_low_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_low_pkt_cnt.get_name_leafdata());
    if (egq_deleted_pkt_cnt.is_set || is_set(egq_deleted_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_deleted_pkt_cnt.get_name_leafdata());
    if (egq_ehp_mc_high_discard_cnt.is_set || is_set(egq_ehp_mc_high_discard_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_high_discard_cnt.get_name_leafdata());
    if (egq_ehp_mc_low_discard_cnt.is_set || is_set(egq_ehp_mc_low_discard_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_low_discard_cnt.get_name_leafdata());
    if (egq_erpp_lag_pruning_discard_cnt.is_set || is_set(egq_erpp_lag_pruning_discard_cnt.yfilter)) leaf_name_data.push_back(egq_erpp_lag_pruning_discard_cnt.get_name_leafdata());
    if (egq_erpp_pmf_discard_cnt.is_set || is_set(egq_erpp_pmf_discard_cnt.yfilter)) leaf_name_data.push_back(egq_erpp_pmf_discard_cnt.get_name_leafdata());
    if (egq_erpp_vlan_mbr_discard_cnt.is_set || is_set(egq_erpp_vlan_mbr_discard_cnt.yfilter)) leaf_name_data.push_back(egq_erpp_vlan_mbr_discard_cnt.get_name_leafdata());
    if (epni_epe_byte_cnt.is_set || is_set(epni_epe_byte_cnt.yfilter)) leaf_name_data.push_back(epni_epe_byte_cnt.get_name_leafdata());
    if (epni_epe_pkt_cnt.is_set || is_set(epni_epe_pkt_cnt.yfilter)) leaf_name_data.push_back(epni_epe_pkt_cnt.get_name_leafdata());
    if (epni_epe_discard_cnt.is_set || is_set(epni_epe_discard_cnt.yfilter)) leaf_name_data.push_back(epni_epe_discard_cnt.get_name_leafdata());
    if (nbi_tx_total_byte_cnt.is_set || is_set(nbi_tx_total_byte_cnt.yfilter)) leaf_name_data.push_back(nbi_tx_total_byte_cnt.get_name_leafdata());
    if (nbi_tx_total_pkt_cnt.is_set || is_set(nbi_tx_total_pkt_cnt.yfilter)) leaf_name_data.push_back(nbi_tx_total_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbi-rx-total-byte-cnt")
    {
        nbi_rx_total_byte_cnt = value;
        nbi_rx_total_byte_cnt.value_namespace = name_space;
        nbi_rx_total_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbi-rx-total-pkt-cnt")
    {
        nbi_rx_total_pkt_cnt = value;
        nbi_rx_total_pkt_cnt.value_namespace = name_space;
        nbi_rx_total_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-cpu-pkt-cnt")
    {
        ire_cpu_pkt_cnt = value;
        ire_cpu_pkt_cnt.value_namespace = name_space;
        ire_cpu_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-nif-pkt-cnt")
    {
        ire_nif_pkt_cnt = value;
        ire_nif_pkt_cnt.value_namespace = name_space;
        ire_nif_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-oamp-pkt-cnt")
    {
        ire_oamp_pkt_cnt = value;
        ire_oamp_pkt_cnt.value_namespace = name_space;
        ire_oamp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-olp-pkt-cnt")
    {
        ire_olp_pkt_cnt = value;
        ire_olp_pkt_cnt.value_namespace = name_space;
        ire_olp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-rcy-pkt-cnt")
    {
        ire_rcy_pkt_cnt = value;
        ire_rcy_pkt_cnt.value_namespace = name_space;
        ire_rcy_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-fdt-if-cnt")
    {
        ire_fdt_if_cnt = value;
        ire_fdt_if_cnt.value_namespace = name_space;
        ire_fdt_if_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idr-mmu-if-cnt")
    {
        idr_mmu_if_cnt = value;
        idr_mmu_if_cnt.value_namespace = name_space;
        idr_mmu_if_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idr-ocb-if-cnt")
    {
        idr_ocb_if_cnt = value;
        idr_ocb_if_cnt.value_namespace = name_space;
        idr_ocb_if_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-enqueue-pkt-cnt")
    {
        iqm_enqueue_pkt_cnt = value;
        iqm_enqueue_pkt_cnt.value_namespace = name_space;
        iqm_enqueue_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-dequeue-pkt-cnt")
    {
        iqm_dequeue_pkt_cnt = value;
        iqm_dequeue_pkt_cnt.value_namespace = name_space;
        iqm_dequeue_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-deleted-pkt-cnt")
    {
        iqm_deleted_pkt_cnt = value;
        iqm_deleted_pkt_cnt.value_namespace = name_space;
        iqm_deleted_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-enq-discarded-pkt-cnt")
    {
        iqm_enq_discarded_pkt_cnt = value;
        iqm_enq_discarded_pkt_cnt.value_namespace = name_space;
        iqm_enq_discarded_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-egq-pkt-cnt")
    {
        ipt_egq_pkt_cnt = value;
        ipt_egq_pkt_cnt.value_namespace = name_space;
        ipt_egq_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-enq-pkt-cnt")
    {
        ipt_enq_pkt_cnt = value;
        ipt_enq_pkt_cnt.value_namespace = name_space;
        ipt_enq_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-fdt-pkt-cnt")
    {
        ipt_fdt_pkt_cnt = value;
        ipt_fdt_pkt_cnt.value_namespace = name_space;
        ipt_fdt_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-cfg-event-cnt")
    {
        ipt_cfg_event_cnt = value;
        ipt_cfg_event_cnt.value_namespace = name_space;
        ipt_cfg_event_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-cfg-byte-cnt")
    {
        ipt_cfg_byte_cnt = value;
        ipt_cfg_byte_cnt.value_namespace = name_space;
        ipt_cfg_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdt-ipt-desc-cell-cnt")
    {
        fdt_ipt_desc_cell_cnt = value;
        fdt_ipt_desc_cell_cnt.value_namespace = name_space;
        fdt_ipt_desc_cell_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdt-ire-desc-cell-cnt")
    {
        fdt_ire_desc_cell_cnt = value;
        fdt_ire_desc_cell_cnt.value_namespace = name_space;
        fdt_ire_desc_cell_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdt-transmitted-data-cells-cnt")
    {
        fdt_transmitted_data_cells_cnt = value;
        fdt_transmitted_data_cells_cnt.value_namespace = name_space;
        fdt_transmitted_data_cells_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-p1-cell-in-cnt")
    {
        fdr_p1_cell_in_cnt = value;
        fdr_p1_cell_in_cnt.value_namespace = name_space;
        fdr_p1_cell_in_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-p2-cell-in-cnt")
    {
        fdr_p2_cell_in_cnt = value;
        fdr_p2_cell_in_cnt.value_namespace = name_space;
        fdr_p2_cell_in_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-p3-cell-in-cnt")
    {
        fdr_p3_cell_in_cnt = value;
        fdr_p3_cell_in_cnt.value_namespace = name_space;
        fdr_p3_cell_in_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-cell-in-cnt-total")
    {
        fdr_cell_in_cnt_total = value;
        fdr_cell_in_cnt_total.value_namespace = name_space;
        fdr_cell_in_cnt_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-cnt-p1")
    {
        fda_cells_in_cnt_p1 = value;
        fda_cells_in_cnt_p1.value_namespace = name_space;
        fda_cells_in_cnt_p1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-cnt-p2")
    {
        fda_cells_in_cnt_p2 = value;
        fda_cells_in_cnt_p2.value_namespace = name_space;
        fda_cells_in_cnt_p2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-cnt-p3")
    {
        fda_cells_in_cnt_p3 = value;
        fda_cells_in_cnt_p3.value_namespace = name_space;
        fda_cells_in_cnt_p3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-tdm-cnt")
    {
        fda_cells_in_tdm_cnt = value;
        fda_cells_in_tdm_cnt.value_namespace = name_space;
        fda_cells_in_tdm_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-meshmc-cnt")
    {
        fda_cells_in_meshmc_cnt = value;
        fda_cells_in_meshmc_cnt.value_namespace = name_space;
        fda_cells_in_meshmc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-ipt-cnt")
    {
        fda_cells_in_ipt_cnt = value;
        fda_cells_in_ipt_cnt.value_namespace = name_space;
        fda_cells_in_ipt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-cnt-p1")
    {
        fda_cells_out_cnt_p1 = value;
        fda_cells_out_cnt_p1.value_namespace = name_space;
        fda_cells_out_cnt_p1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-cnt-p2")
    {
        fda_cells_out_cnt_p2 = value;
        fda_cells_out_cnt_p2.value_namespace = name_space;
        fda_cells_out_cnt_p2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-cnt-p3")
    {
        fda_cells_out_cnt_p3 = value;
        fda_cells_out_cnt_p3.value_namespace = name_space;
        fda_cells_out_cnt_p3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-tdm-cnt")
    {
        fda_cells_out_tdm_cnt = value;
        fda_cells_out_tdm_cnt.value_namespace = name_space;
        fda_cells_out_tdm_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-meshmc-cnt")
    {
        fda_cells_out_meshmc_cnt = value;
        fda_cells_out_meshmc_cnt.value_namespace = name_space;
        fda_cells_out_meshmc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-ipt-cnt")
    {
        fda_cells_out_ipt_cnt = value;
        fda_cells_out_ipt_cnt.value_namespace = name_space;
        fda_cells_out_ipt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-egq-drop-cnt")
    {
        fda_egq_drop_cnt = value;
        fda_egq_drop_cnt.value_namespace = name_space;
        fda_egq_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-egq-meshmc-drop-cnt")
    {
        fda_egq_meshmc_drop_cnt = value;
        fda_egq_meshmc_drop_cnt.value_namespace = name_space;
        fda_egq_meshmc_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-fqp-pkt-cnt")
    {
        egq_fqp_pkt_cnt = value;
        egq_fqp_pkt_cnt.value_namespace = name_space;
        egq_fqp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-uc-pkt-cnt")
    {
        egq_pqp_uc_pkt_cnt = value;
        egq_pqp_uc_pkt_cnt.value_namespace = name_space;
        egq_pqp_uc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-discard-uc-pkt-cnt")
    {
        egq_pqp_discard_uc_pkt_cnt = value;
        egq_pqp_discard_uc_pkt_cnt.value_namespace = name_space;
        egq_pqp_discard_uc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-uc-bytes-cnt")
    {
        egq_pqp_uc_bytes_cnt = value;
        egq_pqp_uc_bytes_cnt.value_namespace = name_space;
        egq_pqp_uc_bytes_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-mc-pkt-cnt")
    {
        egq_pqp_mc_pkt_cnt = value;
        egq_pqp_mc_pkt_cnt.value_namespace = name_space;
        egq_pqp_mc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-discard-mc-pkt-cnt")
    {
        egq_pqp_discard_mc_pkt_cnt = value;
        egq_pqp_discard_mc_pkt_cnt.value_namespace = name_space;
        egq_pqp_discard_mc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-mc-bytes-cnt")
    {
        egq_pqp_mc_bytes_cnt = value;
        egq_pqp_mc_bytes_cnt.value_namespace = name_space;
        egq_pqp_mc_bytes_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-uc-pkt-cnt")
    {
        egq_ehp_uc_pkt_cnt = value;
        egq_ehp_uc_pkt_cnt.value_namespace = name_space;
        egq_ehp_uc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-high-pkt-cnt")
    {
        egq_ehp_mc_high_pkt_cnt = value;
        egq_ehp_mc_high_pkt_cnt.value_namespace = name_space;
        egq_ehp_mc_high_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-low-pkt-cnt")
    {
        egq_ehp_mc_low_pkt_cnt = value;
        egq_ehp_mc_low_pkt_cnt.value_namespace = name_space;
        egq_ehp_mc_low_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-deleted-pkt-cnt")
    {
        egq_deleted_pkt_cnt = value;
        egq_deleted_pkt_cnt.value_namespace = name_space;
        egq_deleted_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-high-discard-cnt")
    {
        egq_ehp_mc_high_discard_cnt = value;
        egq_ehp_mc_high_discard_cnt.value_namespace = name_space;
        egq_ehp_mc_high_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-low-discard-cnt")
    {
        egq_ehp_mc_low_discard_cnt = value;
        egq_ehp_mc_low_discard_cnt.value_namespace = name_space;
        egq_ehp_mc_low_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-erpp-lag-pruning-discard-cnt")
    {
        egq_erpp_lag_pruning_discard_cnt = value;
        egq_erpp_lag_pruning_discard_cnt.value_namespace = name_space;
        egq_erpp_lag_pruning_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-erpp-pmf-discard-cnt")
    {
        egq_erpp_pmf_discard_cnt = value;
        egq_erpp_pmf_discard_cnt.value_namespace = name_space;
        egq_erpp_pmf_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-erpp-vlan-mbr-discard-cnt")
    {
        egq_erpp_vlan_mbr_discard_cnt = value;
        egq_erpp_vlan_mbr_discard_cnt.value_namespace = name_space;
        egq_erpp_vlan_mbr_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epni-epe-byte-cnt")
    {
        epni_epe_byte_cnt = value;
        epni_epe_byte_cnt.value_namespace = name_space;
        epni_epe_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epni-epe-pkt-cnt")
    {
        epni_epe_pkt_cnt = value;
        epni_epe_pkt_cnt.value_namespace = name_space;
        epni_epe_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epni-epe-discard-cnt")
    {
        epni_epe_discard_cnt = value;
        epni_epe_discard_cnt.value_namespace = name_space;
        epni_epe_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbi-tx-total-byte-cnt")
    {
        nbi_tx_total_byte_cnt = value;
        nbi_tx_total_byte_cnt.value_namespace = name_space;
        nbi_tx_total_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbi-tx-total-pkt-cnt")
    {
        nbi_tx_total_pkt_cnt = value;
        nbi_tx_total_pkt_cnt.value_namespace = name_space;
        nbi_tx_total_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbi-rx-total-byte-cnt")
    {
        nbi_rx_total_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "nbi-rx-total-pkt-cnt")
    {
        nbi_rx_total_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-cpu-pkt-cnt")
    {
        ire_cpu_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-nif-pkt-cnt")
    {
        ire_nif_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-oamp-pkt-cnt")
    {
        ire_oamp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-olp-pkt-cnt")
    {
        ire_olp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-rcy-pkt-cnt")
    {
        ire_rcy_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-fdt-if-cnt")
    {
        ire_fdt_if_cnt.yfilter = yfilter;
    }
    if(value_path == "idr-mmu-if-cnt")
    {
        idr_mmu_if_cnt.yfilter = yfilter;
    }
    if(value_path == "idr-ocb-if-cnt")
    {
        idr_ocb_if_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-enqueue-pkt-cnt")
    {
        iqm_enqueue_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-dequeue-pkt-cnt")
    {
        iqm_dequeue_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-deleted-pkt-cnt")
    {
        iqm_deleted_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-enq-discarded-pkt-cnt")
    {
        iqm_enq_discarded_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-egq-pkt-cnt")
    {
        ipt_egq_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-enq-pkt-cnt")
    {
        ipt_enq_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-fdt-pkt-cnt")
    {
        ipt_fdt_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-cfg-event-cnt")
    {
        ipt_cfg_event_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-cfg-byte-cnt")
    {
        ipt_cfg_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "fdt-ipt-desc-cell-cnt")
    {
        fdt_ipt_desc_cell_cnt.yfilter = yfilter;
    }
    if(value_path == "fdt-ire-desc-cell-cnt")
    {
        fdt_ire_desc_cell_cnt.yfilter = yfilter;
    }
    if(value_path == "fdt-transmitted-data-cells-cnt")
    {
        fdt_transmitted_data_cells_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-p1-cell-in-cnt")
    {
        fdr_p1_cell_in_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-p2-cell-in-cnt")
    {
        fdr_p2_cell_in_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-p3-cell-in-cnt")
    {
        fdr_p3_cell_in_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-cell-in-cnt-total")
    {
        fdr_cell_in_cnt_total.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-cnt-p1")
    {
        fda_cells_in_cnt_p1.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-cnt-p2")
    {
        fda_cells_in_cnt_p2.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-cnt-p3")
    {
        fda_cells_in_cnt_p3.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-tdm-cnt")
    {
        fda_cells_in_tdm_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-meshmc-cnt")
    {
        fda_cells_in_meshmc_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-ipt-cnt")
    {
        fda_cells_in_ipt_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-cnt-p1")
    {
        fda_cells_out_cnt_p1.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-cnt-p2")
    {
        fda_cells_out_cnt_p2.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-cnt-p3")
    {
        fda_cells_out_cnt_p3.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-tdm-cnt")
    {
        fda_cells_out_tdm_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-meshmc-cnt")
    {
        fda_cells_out_meshmc_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-ipt-cnt")
    {
        fda_cells_out_ipt_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-egq-drop-cnt")
    {
        fda_egq_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-egq-meshmc-drop-cnt")
    {
        fda_egq_meshmc_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-fqp-pkt-cnt")
    {
        egq_fqp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-uc-pkt-cnt")
    {
        egq_pqp_uc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-discard-uc-pkt-cnt")
    {
        egq_pqp_discard_uc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-uc-bytes-cnt")
    {
        egq_pqp_uc_bytes_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-mc-pkt-cnt")
    {
        egq_pqp_mc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-discard-mc-pkt-cnt")
    {
        egq_pqp_discard_mc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-mc-bytes-cnt")
    {
        egq_pqp_mc_bytes_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-uc-pkt-cnt")
    {
        egq_ehp_uc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-high-pkt-cnt")
    {
        egq_ehp_mc_high_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-low-pkt-cnt")
    {
        egq_ehp_mc_low_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-deleted-pkt-cnt")
    {
        egq_deleted_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-high-discard-cnt")
    {
        egq_ehp_mc_high_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-low-discard-cnt")
    {
        egq_ehp_mc_low_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-erpp-lag-pruning-discard-cnt")
    {
        egq_erpp_lag_pruning_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-erpp-pmf-discard-cnt")
    {
        egq_erpp_pmf_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-erpp-vlan-mbr-discard-cnt")
    {
        egq_erpp_vlan_mbr_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "epni-epe-byte-cnt")
    {
        epni_epe_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "epni-epe-pkt-cnt")
    {
        epni_epe_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "epni-epe-discard-cnt")
    {
        epni_epe_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "nbi-tx-total-byte-cnt")
    {
        nbi_tx_total_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "nbi-tx-total-pkt-cnt")
    {
        nbi_tx_total_pkt_cnt.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbi-rx-total-byte-cnt" || name == "nbi-rx-total-pkt-cnt" || name == "ire-cpu-pkt-cnt" || name == "ire-nif-pkt-cnt" || name == "ire-oamp-pkt-cnt" || name == "ire-olp-pkt-cnt" || name == "ire-rcy-pkt-cnt" || name == "ire-fdt-if-cnt" || name == "idr-mmu-if-cnt" || name == "idr-ocb-if-cnt" || name == "iqm-enqueue-pkt-cnt" || name == "iqm-dequeue-pkt-cnt" || name == "iqm-deleted-pkt-cnt" || name == "iqm-enq-discarded-pkt-cnt" || name == "ipt-egq-pkt-cnt" || name == "ipt-enq-pkt-cnt" || name == "ipt-fdt-pkt-cnt" || name == "ipt-cfg-event-cnt" || name == "ipt-cfg-byte-cnt" || name == "fdt-ipt-desc-cell-cnt" || name == "fdt-ire-desc-cell-cnt" || name == "fdt-transmitted-data-cells-cnt" || name == "fdr-p1-cell-in-cnt" || name == "fdr-p2-cell-in-cnt" || name == "fdr-p3-cell-in-cnt" || name == "fdr-cell-in-cnt-total" || name == "fda-cells-in-cnt-p1" || name == "fda-cells-in-cnt-p2" || name == "fda-cells-in-cnt-p3" || name == "fda-cells-in-tdm-cnt" || name == "fda-cells-in-meshmc-cnt" || name == "fda-cells-in-ipt-cnt" || name == "fda-cells-out-cnt-p1" || name == "fda-cells-out-cnt-p2" || name == "fda-cells-out-cnt-p3" || name == "fda-cells-out-tdm-cnt" || name == "fda-cells-out-meshmc-cnt" || name == "fda-cells-out-ipt-cnt" || name == "fda-egq-drop-cnt" || name == "fda-egq-meshmc-drop-cnt" || name == "egq-fqp-pkt-cnt" || name == "egq-pqp-uc-pkt-cnt" || name == "egq-pqp-discard-uc-pkt-cnt" || name == "egq-pqp-uc-bytes-cnt" || name == "egq-pqp-mc-pkt-cnt" || name == "egq-pqp-discard-mc-pkt-cnt" || name == "egq-pqp-mc-bytes-cnt" || name == "egq-ehp-uc-pkt-cnt" || name == "egq-ehp-mc-high-pkt-cnt" || name == "egq-ehp-mc-low-pkt-cnt" || name == "egq-deleted-pkt-cnt" || name == "egq-ehp-mc-high-discard-cnt" || name == "egq-ehp-mc-low-discard-cnt" || name == "egq-erpp-lag-pruning-discard-cnt" || name == "egq-erpp-pmf-discard-cnt" || name == "egq-erpp-vlan-mbr-discard-cnt" || name == "epni-epe-byte-cnt" || name == "epni-epe-pkt-cnt" || name == "epni-epe-discard-cnt" || name == "nbi-tx-total-byte-cnt" || name == "nbi-tx-total-pkt-cnt")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumbers()
    :
    npu_number(this, {"npu_id"})
{

    yang_name = "npu-numbers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::~NpuNumbers()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<npu_number.len(); index++)
    {
        if(npu_number[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::has_operation() const
{
    for (std::size_t index=0; index<npu_number.len(); index++)
    {
        if(npu_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-number")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber>();
        ent_->parent = this;
        npu_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : npu_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-number")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::NpuNumber()
    :
    npu_id{YType::uint32, "npu-id"}
        ,
    display(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display>())
{
    display->parent = this;

    yang_name = "npu-number"; yang_parent_name = "npu-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::~NpuNumber()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::has_data() const
{
    if (is_presence_container) return true;
    return npu_id.is_set
	|| (display !=  nullptr && display->has_data());
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| (display !=  nullptr && display->has_operation());
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number";
    ADD_KEY_TOKEN(npu_id, "npu-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "display")
    {
        if(display == nullptr)
        {
            display = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display>();
        }
        return display;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(display != nullptr)
    {
        _children["display"] = display;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display" || name == "npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::Display()
    :
    trap_ids(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds>())
    , interface_handles(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles>())
    , base_numbers(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers>())
{
    trap_ids->parent = this;
    interface_handles->parent = this;
    base_numbers->parent = this;

    yang_name = "display"; yang_parent_name = "npu-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::~Display()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::has_data() const
{
    if (is_presence_container) return true;
    return (trap_ids !=  nullptr && trap_ids->has_data())
	|| (interface_handles !=  nullptr && interface_handles->has_data())
	|| (base_numbers !=  nullptr && base_numbers->has_data());
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::has_operation() const
{
    return is_set(yfilter)
	|| (trap_ids !=  nullptr && trap_ids->has_operation())
	|| (interface_handles !=  nullptr && interface_handles->has_operation())
	|| (base_numbers !=  nullptr && base_numbers->has_operation());
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-ids")
    {
        if(trap_ids == nullptr)
        {
            trap_ids = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds>();
        }
        return trap_ids;
    }

    if(child_yang_name == "interface-handles")
    {
        if(interface_handles == nullptr)
        {
            interface_handles = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles>();
        }
        return interface_handles;
    }

    if(child_yang_name == "base-numbers")
    {
        if(base_numbers == nullptr)
        {
            base_numbers = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers>();
        }
        return base_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap_ids != nullptr)
    {
        _children["trap-ids"] = trap_ids;
    }

    if(interface_handles != nullptr)
    {
        _children["interface-handles"] = interface_handles;
    }

    if(base_numbers != nullptr)
    {
        _children["base-numbers"] = base_numbers;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-ids" || name == "interface-handles" || name == "base-numbers")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapIds()
    :
    trap_id(this, {"trap_id"})
{

    yang_name = "trap-ids"; yang_parent_name = "display"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::~TrapIds()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_id.len(); index++)
    {
        if(trap_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::has_operation() const
{
    for (std::size_t index=0; index<trap_id.len(); index++)
    {
        if(trap_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-id")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId>();
        ent_->parent = this;
        trap_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::TrapId()
    :
    trap_id{YType::uint32, "trap-id"},
    trap_strength{YType::uint32, "trap-strength"},
    priority{YType::uint32, "priority"},
    trap_id_xr{YType::uint32, "trap-id-xr"},
    gport{YType::uint32, "gport"},
    fec_id{YType::uint32, "fec-id"},
    policer_id{YType::uint32, "policer-id"},
    stats_id{YType::uint32, "stats-id"},
    encap_id{YType::uint32, "encap-id"},
    mc_group{YType::uint32, "mc-group"},
    trap_string{YType::str, "trap-string"},
    id{YType::uint32, "id"},
    offset{YType::uint64, "offset"},
    npu_id{YType::uint64, "npu-id"},
    packet_dropped{YType::uint64, "packet-dropped"},
    packet_accepted{YType::uint64, "packet-accepted"}
{

    yang_name = "trap-id"; yang_parent_name = "trap-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::~TrapId()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::has_data() const
{
    if (is_presence_container) return true;
    return trap_id.is_set
	|| trap_strength.is_set
	|| priority.is_set
	|| trap_id_xr.is_set
	|| gport.is_set
	|| fec_id.is_set
	|| policer_id.is_set
	|| stats_id.is_set
	|| encap_id.is_set
	|| mc_group.is_set
	|| trap_string.is_set
	|| id.is_set
	|| offset.is_set
	|| npu_id.is_set
	|| packet_dropped.is_set
	|| packet_accepted.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_id.yfilter)
	|| ydk::is_set(trap_strength.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(trap_id_xr.yfilter)
	|| ydk::is_set(gport.yfilter)
	|| ydk::is_set(fec_id.yfilter)
	|| ydk::is_set(policer_id.yfilter)
	|| ydk::is_set(stats_id.yfilter)
	|| ydk::is_set(encap_id.yfilter)
	|| ydk::is_set(mc_group.yfilter)
	|| ydk::is_set(trap_string.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(packet_dropped.yfilter)
	|| ydk::is_set(packet_accepted.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-id";
    ADD_KEY_TOKEN(trap_id, "trap-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_id.is_set || is_set(trap_id.yfilter)) leaf_name_data.push_back(trap_id.get_name_leafdata());
    if (trap_strength.is_set || is_set(trap_strength.yfilter)) leaf_name_data.push_back(trap_strength.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (trap_id_xr.is_set || is_set(trap_id_xr.yfilter)) leaf_name_data.push_back(trap_id_xr.get_name_leafdata());
    if (gport.is_set || is_set(gport.yfilter)) leaf_name_data.push_back(gport.get_name_leafdata());
    if (fec_id.is_set || is_set(fec_id.yfilter)) leaf_name_data.push_back(fec_id.get_name_leafdata());
    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (stats_id.is_set || is_set(stats_id.yfilter)) leaf_name_data.push_back(stats_id.get_name_leafdata());
    if (encap_id.is_set || is_set(encap_id.yfilter)) leaf_name_data.push_back(encap_id.get_name_leafdata());
    if (mc_group.is_set || is_set(mc_group.yfilter)) leaf_name_data.push_back(mc_group.get_name_leafdata());
    if (trap_string.is_set || is_set(trap_string.yfilter)) leaf_name_data.push_back(trap_string.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (packet_dropped.is_set || is_set(packet_dropped.yfilter)) leaf_name_data.push_back(packet_dropped.get_name_leafdata());
    if (packet_accepted.is_set || is_set(packet_accepted.yfilter)) leaf_name_data.push_back(packet_accepted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-id")
    {
        trap_id = value;
        trap_id.value_namespace = name_space;
        trap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-strength")
    {
        trap_strength = value;
        trap_strength.value_namespace = name_space;
        trap_strength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-id-xr")
    {
        trap_id_xr = value;
        trap_id_xr.value_namespace = name_space;
        trap_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gport")
    {
        gport = value;
        gport.value_namespace = name_space;
        gport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-id")
    {
        fec_id = value;
        fec_id.value_namespace = name_space;
        fec_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-id")
    {
        stats_id = value;
        stats_id.value_namespace = name_space;
        stats_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-id")
    {
        encap_id = value;
        encap_id.value_namespace = name_space;
        encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mc-group")
    {
        mc_group = value;
        mc_group.value_namespace = name_space;
        mc_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-string")
    {
        trap_string = value;
        trap_string.value_namespace = name_space;
        trap_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-dropped")
    {
        packet_dropped = value;
        packet_dropped.value_namespace = name_space;
        packet_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-accepted")
    {
        packet_accepted = value;
        packet_accepted.value_namespace = name_space;
        packet_accepted.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-id")
    {
        trap_id.yfilter = yfilter;
    }
    if(value_path == "trap-strength")
    {
        trap_strength.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "trap-id-xr")
    {
        trap_id_xr.yfilter = yfilter;
    }
    if(value_path == "gport")
    {
        gport.yfilter = yfilter;
    }
    if(value_path == "fec-id")
    {
        fec_id.yfilter = yfilter;
    }
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
    if(value_path == "stats-id")
    {
        stats_id.yfilter = yfilter;
    }
    if(value_path == "encap-id")
    {
        encap_id.yfilter = yfilter;
    }
    if(value_path == "mc-group")
    {
        mc_group.yfilter = yfilter;
    }
    if(value_path == "trap-string")
    {
        trap_string.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "packet-dropped")
    {
        packet_dropped.yfilter = yfilter;
    }
    if(value_path == "packet-accepted")
    {
        packet_accepted.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-id" || name == "trap-strength" || name == "priority" || name == "trap-id-xr" || name == "gport" || name == "fec-id" || name == "policer-id" || name == "stats-id" || name == "encap-id" || name == "mc-group" || name == "trap-string" || name == "id" || name == "offset" || name == "npu-id" || name == "packet-dropped" || name == "packet-accepted")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandles()
    :
    interface_handle(this, {"interface_handle"})
{

    yang_name = "interface-handles"; yang_parent_name = "display"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::~InterfaceHandles()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_handle.len(); index++)
    {
        if(interface_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_handle.len(); index++)
    {
        if(interface_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-handle")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle>();
        ent_->parent = this;
        interface_handle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_handle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::InterfaceHandle()
    :
    interface_handle{YType::uint32, "interface-handle"},
    in_use{YType::boolean, "in-use"},
    rack_num{YType::uint8, "rack-num"},
    slot_num{YType::uint8, "slot-num"},
    npu_num{YType::uint8, "npu-num"},
    npu_core{YType::uint8, "npu-core"},
    port_num{YType::uint8, "port-num"},
    if_handle{YType::uint32, "if-handle"},
    sys_port{YType::uint32, "sys-port"},
    pp_port{YType::uint32, "pp-port"},
    port_speed{YType::uint32, "port-speed"},
    voq_base{YType::uint32, "voq-base"},
    connector_id{YType::uint32, "connector-id"},
    is_local_port{YType::boolean, "is-local-port"}
        ,
    voq_stat(this, {})
{

    yang_name = "interface-handle"; yang_parent_name = "interface-handles"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::~InterfaceHandle()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<voq_stat.len(); index++)
    {
        if(voq_stat[index]->has_data())
            return true;
    }
    return interface_handle.is_set
	|| in_use.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| npu_num.is_set
	|| npu_core.is_set
	|| port_num.is_set
	|| if_handle.is_set
	|| sys_port.is_set
	|| pp_port.is_set
	|| port_speed.is_set
	|| voq_base.is_set
	|| connector_id.is_set
	|| is_local_port.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::has_operation() const
{
    for (std::size_t index=0; index<voq_stat.len(); index++)
    {
        if(voq_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(npu_num.yfilter)
	|| ydk::is_set(npu_core.yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(sys_port.yfilter)
	|| ydk::is_set(pp_port.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(voq_base.yfilter)
	|| ydk::is_set(connector_id.yfilter)
	|| ydk::is_set(is_local_port.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-handle";
    ADD_KEY_TOKEN(interface_handle, "interface-handle");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (npu_num.is_set || is_set(npu_num.yfilter)) leaf_name_data.push_back(npu_num.get_name_leafdata());
    if (npu_core.is_set || is_set(npu_core.yfilter)) leaf_name_data.push_back(npu_core.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (sys_port.is_set || is_set(sys_port.yfilter)) leaf_name_data.push_back(sys_port.get_name_leafdata());
    if (pp_port.is_set || is_set(pp_port.yfilter)) leaf_name_data.push_back(pp_port.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (voq_base.is_set || is_set(voq_base.yfilter)) leaf_name_data.push_back(voq_base.get_name_leafdata());
    if (connector_id.is_set || is_set(connector_id.yfilter)) leaf_name_data.push_back(connector_id.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.yfilter)) leaf_name_data.push_back(is_local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "voq-stat")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat>();
        ent_->parent = this;
        voq_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : voq_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-num")
    {
        npu_num = value;
        npu_num.value_namespace = name_space;
        npu_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-core")
    {
        npu_core = value;
        npu_core.value_namespace = name_space;
        npu_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-port")
    {
        sys_port = value;
        sys_port.value_namespace = name_space;
        sys_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pp-port")
    {
        pp_port = value;
        pp_port.value_namespace = name_space;
        pp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base")
    {
        voq_base = value;
        voq_base.value_namespace = name_space;
        voq_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-id")
    {
        connector_id = value;
        connector_id.value_namespace = name_space;
        connector_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
        is_local_port.value_namespace = name_space;
        is_local_port.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "npu-num")
    {
        npu_num.yfilter = yfilter;
    }
    if(value_path == "npu-core")
    {
        npu_core.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "sys-port")
    {
        sys_port.yfilter = yfilter;
    }
    if(value_path == "pp-port")
    {
        pp_port.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "voq-base")
    {
        voq_base.yfilter = yfilter;
    }
    if(value_path == "connector-id")
    {
        connector_id.yfilter = yfilter;
    }
    if(value_path == "is-local-port")
    {
        is_local_port.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "voq-stat" || name == "interface-handle" || name == "in-use" || name == "rack-num" || name == "slot-num" || name == "npu-num" || name == "npu-core" || name == "port-num" || name == "if-handle" || name == "sys-port" || name == "pp-port" || name == "port-speed" || name == "voq-base" || name == "connector-id" || name == "is-local-port")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::VoqStat()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"}
{

    yang_name = "voq-stat"; yang_parent_name = "interface-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::~VoqStat()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::has_data() const
{
    if (is_presence_container) return true;
    return received_bytes.is_set
	|| received_packets.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_bytes.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-bytes" || name == "received-packets" || name == "dropped-bytes" || name == "dropped-packets")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumbers()
    :
    base_number(this, {"base_number"})
{

    yang_name = "base-numbers"; yang_parent_name = "display"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::~BaseNumbers()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<base_number.len(); index++)
    {
        if(base_number[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::has_operation() const
{
    for (std::size_t index=0; index<base_number.len(); index++)
    {
        if(base_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-number")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber>();
        ent_->parent = this;
        base_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : base_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-number")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::BaseNumber()
    :
    base_number{YType::uint32, "base-number"},
    in_use{YType::boolean, "in-use"},
    rack_num{YType::uint8, "rack-num"},
    slot_num{YType::uint8, "slot-num"},
    npu_num{YType::uint8, "npu-num"},
    npu_core{YType::uint8, "npu-core"},
    port_num{YType::uint8, "port-num"},
    if_handle{YType::uint32, "if-handle"},
    sys_port{YType::uint32, "sys-port"},
    pp_port{YType::uint32, "pp-port"},
    port_speed{YType::uint32, "port-speed"},
    voq_base{YType::uint32, "voq-base"},
    connector_id{YType::uint32, "connector-id"},
    is_local_port{YType::boolean, "is-local-port"}
        ,
    voq_stat(this, {})
{

    yang_name = "base-number"; yang_parent_name = "base-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::~BaseNumber()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<voq_stat.len(); index++)
    {
        if(voq_stat[index]->has_data())
            return true;
    }
    return base_number.is_set
	|| in_use.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| npu_num.is_set
	|| npu_core.is_set
	|| port_num.is_set
	|| if_handle.is_set
	|| sys_port.is_set
	|| pp_port.is_set
	|| port_speed.is_set
	|| voq_base.is_set
	|| connector_id.is_set
	|| is_local_port.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::has_operation() const
{
    for (std::size_t index=0; index<voq_stat.len(); index++)
    {
        if(voq_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(base_number.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(npu_num.yfilter)
	|| ydk::is_set(npu_core.yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(sys_port.yfilter)
	|| ydk::is_set(pp_port.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(voq_base.yfilter)
	|| ydk::is_set(connector_id.yfilter)
	|| ydk::is_set(is_local_port.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-number";
    ADD_KEY_TOKEN(base_number, "base-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_number.is_set || is_set(base_number.yfilter)) leaf_name_data.push_back(base_number.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (npu_num.is_set || is_set(npu_num.yfilter)) leaf_name_data.push_back(npu_num.get_name_leafdata());
    if (npu_core.is_set || is_set(npu_core.yfilter)) leaf_name_data.push_back(npu_core.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (sys_port.is_set || is_set(sys_port.yfilter)) leaf_name_data.push_back(sys_port.get_name_leafdata());
    if (pp_port.is_set || is_set(pp_port.yfilter)) leaf_name_data.push_back(pp_port.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (voq_base.is_set || is_set(voq_base.yfilter)) leaf_name_data.push_back(voq_base.get_name_leafdata());
    if (connector_id.is_set || is_set(connector_id.yfilter)) leaf_name_data.push_back(connector_id.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.yfilter)) leaf_name_data.push_back(is_local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "voq-stat")
    {
        auto ent_ = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat>();
        ent_->parent = this;
        voq_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : voq_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "base-number")
    {
        base_number = value;
        base_number.value_namespace = name_space;
        base_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-num")
    {
        npu_num = value;
        npu_num.value_namespace = name_space;
        npu_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-core")
    {
        npu_core = value;
        npu_core.value_namespace = name_space;
        npu_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-port")
    {
        sys_port = value;
        sys_port.value_namespace = name_space;
        sys_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pp-port")
    {
        pp_port = value;
        pp_port.value_namespace = name_space;
        pp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base")
    {
        voq_base = value;
        voq_base.value_namespace = name_space;
        voq_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-id")
    {
        connector_id = value;
        connector_id.value_namespace = name_space;
        connector_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
        is_local_port.value_namespace = name_space;
        is_local_port.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "base-number")
    {
        base_number.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "npu-num")
    {
        npu_num.yfilter = yfilter;
    }
    if(value_path == "npu-core")
    {
        npu_core.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "sys-port")
    {
        sys_port.yfilter = yfilter;
    }
    if(value_path == "pp-port")
    {
        pp_port.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "voq-base")
    {
        voq_base.yfilter = yfilter;
    }
    if(value_path == "connector-id")
    {
        connector_id.yfilter = yfilter;
    }
    if(value_path == "is-local-port")
    {
        is_local_port.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "voq-stat" || name == "base-number" || name == "in-use" || name == "rack-num" || name == "slot-num" || name == "npu-num" || name == "npu-core" || name == "port-num" || name == "if-handle" || name == "sys-port" || name == "pp-port" || name == "port-speed" || name == "voq-base" || name == "connector-id" || name == "is-local-port")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::VoqStat()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"}
{

    yang_name = "voq-stat"; yang_parent_name = "base-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::~VoqStat()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::has_data() const
{
    if (is_presence_container) return true;
    return received_bytes.is_set
	|| received_packets.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_bytes.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-bytes" || name == "received-packets" || name == "dropped-bytes" || name == "dropped-packets")
        return true;
    return false;
}

Dpa::Resources::Resources()
    :
    nodes(std::make_shared<Dpa::Resources::Nodes>())
{
    nodes->parent = this;

    yang_name = "resources"; yang_parent_name = "dpa"; is_top_level_class = false; has_list_ancestor = false; 
}

Dpa::Resources::~Resources()
{
}

bool Dpa::Resources::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Dpa::Resources::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Dpa::Resources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Dpa::Resources::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Dpa::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Dpa::Resources::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "resources"; is_top_level_class = false; has_list_ancestor = false; 
}

Dpa::Resources::Nodes::~Nodes()
{
}

bool Dpa::Resources::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Resources::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Resources::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/resources/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Resources::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Resources::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Resources::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Dpa::Resources::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Resources::Nodes::get_children() const
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

void Dpa::Resources::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Resources::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Resources::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Dpa::Resources::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    table_datas(std::make_shared<Dpa::Resources::Nodes::Node::TableDatas>())
{
    table_datas->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Dpa::Resources::Nodes::Node::~Node()
{
}

bool Dpa::Resources::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (table_datas !=  nullptr && table_datas->has_data());
}

bool Dpa::Resources::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (table_datas !=  nullptr && table_datas->has_operation());
}

std::string Dpa::Resources::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/resources/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Resources::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Resources::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Resources::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-datas")
    {
        if(table_datas == nullptr)
        {
            table_datas = std::make_shared<Dpa::Resources::Nodes::Node::TableDatas>();
        }
        return table_datas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Resources::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(table_datas != nullptr)
    {
        _children["table-datas"] = table_datas;
    }

    return _children;
}

void Dpa::Resources::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Resources::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Dpa::Resources::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-datas" || name == "node-name")
        return true;
    return false;
}

Dpa::Resources::Nodes::Node::TableDatas::TableDatas()
    :
    table_data(this, {"resource"})
{

    yang_name = "table-datas"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Resources::Nodes::Node::TableDatas::~TableDatas()
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table_data.len(); index++)
    {
        if(table_data[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Resources::Nodes::Node::TableDatas::has_operation() const
{
    for (std::size_t index=0; index<table_data.len(); index++)
    {
        if(table_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Resources::Nodes::Node::TableDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-datas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Resources::Nodes::Node::TableDatas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Resources::Nodes::Node::TableDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-data")
    {
        auto ent_ = std::make_shared<Dpa::Resources::Nodes::Node::TableDatas::TableData>();
        ent_->parent = this;
        table_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Resources::Nodes::Node::TableDatas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : table_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Resources::Nodes::Node::TableDatas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Resources::Nodes::Node::TableDatas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-data")
        return true;
    return false;
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::TableData()
    :
    resource{YType::enumeration, "resource"},
    sysdb_avail_npu_mask{YType::uint64, "sysdb-avail-npu-mask"},
    table_id{YType::uint32, "table-id"},
    name{YType::str, "name"},
    is_global{YType::boolean, "is-global"},
    num_npus{YType::uint32, "num-npus"},
    table_specific_list{YType::str, "table-specific-list"}
        ,
    npu_tblr(this, {})
{

    yang_name = "table-data"; yang_parent_name = "table-datas"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::~TableData()
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<npu_tblr.len(); index++)
    {
        if(npu_tblr[index]->has_data())
            return true;
    }
    return resource.is_set
	|| sysdb_avail_npu_mask.is_set
	|| table_id.is_set
	|| name.is_set
	|| is_global.is_set
	|| num_npus.is_set
	|| table_specific_list.is_set;
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::has_operation() const
{
    for (std::size_t index=0; index<npu_tblr.len(); index++)
    {
        if(npu_tblr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(resource.yfilter)
	|| ydk::is_set(sysdb_avail_npu_mask.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(is_global.yfilter)
	|| ydk::is_set(num_npus.yfilter)
	|| ydk::is_set(table_specific_list.yfilter);
}

std::string Dpa::Resources::Nodes::Node::TableDatas::TableData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-data";
    ADD_KEY_TOKEN(resource, "resource");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Resources::Nodes::Node::TableDatas::TableData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource.is_set || is_set(resource.yfilter)) leaf_name_data.push_back(resource.get_name_leafdata());
    if (sysdb_avail_npu_mask.is_set || is_set(sysdb_avail_npu_mask.yfilter)) leaf_name_data.push_back(sysdb_avail_npu_mask.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (is_global.is_set || is_set(is_global.yfilter)) leaf_name_data.push_back(is_global.get_name_leafdata());
    if (num_npus.is_set || is_set(num_npus.yfilter)) leaf_name_data.push_back(num_npus.get_name_leafdata());
    if (table_specific_list.is_set || is_set(table_specific_list.yfilter)) leaf_name_data.push_back(table_specific_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Resources::Nodes::Node::TableDatas::TableData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-tblr")
    {
        auto ent_ = std::make_shared<Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr>();
        ent_->parent = this;
        npu_tblr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Resources::Nodes::Node::TableDatas::TableData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : npu_tblr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Dpa::Resources::Nodes::Node::TableDatas::TableData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resource")
    {
        resource = value;
        resource.value_namespace = name_space;
        resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysdb-avail-npu-mask")
    {
        sysdb_avail_npu_mask = value;
        sysdb_avail_npu_mask.value_namespace = name_space;
        sysdb_avail_npu_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global")
    {
        is_global = value;
        is_global.value_namespace = name_space;
        is_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-npus")
    {
        num_npus = value;
        num_npus.value_namespace = name_space;
        num_npus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-specific-list")
    {
        table_specific_list = value;
        table_specific_list.value_namespace = name_space;
        table_specific_list.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Resources::Nodes::Node::TableDatas::TableData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resource")
    {
        resource.yfilter = yfilter;
    }
    if(value_path == "sysdb-avail-npu-mask")
    {
        sysdb_avail_npu_mask.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "is-global")
    {
        is_global.yfilter = yfilter;
    }
    if(value_path == "num-npus")
    {
        num_npus.yfilter = yfilter;
    }
    if(value_path == "table-specific-list")
    {
        table_specific_list.yfilter = yfilter;
    }
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-tblr" || name == "resource" || name == "sysdb-avail-npu-mask" || name == "table-id" || name == "name" || name == "is-global" || name == "num-npus" || name == "table-specific-list")
        return true;
    return false;
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::NpuTblr()
    :
    npu_id{YType::uint32, "npu-id"},
    num_objs{YType::uint32, "num-objs"},
    create_req{YType::uint32, "create-req"},
    create_ok{YType::uint32, "create-ok"},
    delete_req{YType::uint32, "delete-req"},
    delete_ok{YType::uint32, "delete-ok"},
    update_req{YType::uint32, "update-req"},
    update_ok{YType::uint32, "update-ok"},
    eod_req{YType::uint32, "eod-req"},
    eod_ok{YType::uint32, "eod-ok"},
    err_hw_fail{YType::uint32, "err-hw-fail"},
    err_ref_resolve{YType::uint32, "err-ref-resolve"},
    err_db_notfound{YType::uint32, "err-db-notfound"},
    err_db_exists{YType::uint32, "err-db-exists"},
    err_db_nomem{YType::uint32, "err-db-nomem"},
    err_id_reserve{YType::uint32, "err-id-reserve"},
    err_id_release{YType::uint32, "err-id-release"},
    err_id_update{YType::uint32, "err-id-update"}
{

    yang_name = "npu-tblr"; yang_parent_name = "table-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::~NpuTblr()
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::has_data() const
{
    if (is_presence_container) return true;
    return npu_id.is_set
	|| num_objs.is_set
	|| create_req.is_set
	|| create_ok.is_set
	|| delete_req.is_set
	|| delete_ok.is_set
	|| update_req.is_set
	|| update_ok.is_set
	|| eod_req.is_set
	|| eod_ok.is_set
	|| err_hw_fail.is_set
	|| err_ref_resolve.is_set
	|| err_db_notfound.is_set
	|| err_db_exists.is_set
	|| err_db_nomem.is_set
	|| err_id_reserve.is_set
	|| err_id_release.is_set
	|| err_id_update.is_set;
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(num_objs.yfilter)
	|| ydk::is_set(create_req.yfilter)
	|| ydk::is_set(create_ok.yfilter)
	|| ydk::is_set(delete_req.yfilter)
	|| ydk::is_set(delete_ok.yfilter)
	|| ydk::is_set(update_req.yfilter)
	|| ydk::is_set(update_ok.yfilter)
	|| ydk::is_set(eod_req.yfilter)
	|| ydk::is_set(eod_ok.yfilter)
	|| ydk::is_set(err_hw_fail.yfilter)
	|| ydk::is_set(err_ref_resolve.yfilter)
	|| ydk::is_set(err_db_notfound.yfilter)
	|| ydk::is_set(err_db_exists.yfilter)
	|| ydk::is_set(err_db_nomem.yfilter)
	|| ydk::is_set(err_id_reserve.yfilter)
	|| ydk::is_set(err_id_release.yfilter)
	|| ydk::is_set(err_id_update.yfilter);
}

std::string Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-tblr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (num_objs.is_set || is_set(num_objs.yfilter)) leaf_name_data.push_back(num_objs.get_name_leafdata());
    if (create_req.is_set || is_set(create_req.yfilter)) leaf_name_data.push_back(create_req.get_name_leafdata());
    if (create_ok.is_set || is_set(create_ok.yfilter)) leaf_name_data.push_back(create_ok.get_name_leafdata());
    if (delete_req.is_set || is_set(delete_req.yfilter)) leaf_name_data.push_back(delete_req.get_name_leafdata());
    if (delete_ok.is_set || is_set(delete_ok.yfilter)) leaf_name_data.push_back(delete_ok.get_name_leafdata());
    if (update_req.is_set || is_set(update_req.yfilter)) leaf_name_data.push_back(update_req.get_name_leafdata());
    if (update_ok.is_set || is_set(update_ok.yfilter)) leaf_name_data.push_back(update_ok.get_name_leafdata());
    if (eod_req.is_set || is_set(eod_req.yfilter)) leaf_name_data.push_back(eod_req.get_name_leafdata());
    if (eod_ok.is_set || is_set(eod_ok.yfilter)) leaf_name_data.push_back(eod_ok.get_name_leafdata());
    if (err_hw_fail.is_set || is_set(err_hw_fail.yfilter)) leaf_name_data.push_back(err_hw_fail.get_name_leafdata());
    if (err_ref_resolve.is_set || is_set(err_ref_resolve.yfilter)) leaf_name_data.push_back(err_ref_resolve.get_name_leafdata());
    if (err_db_notfound.is_set || is_set(err_db_notfound.yfilter)) leaf_name_data.push_back(err_db_notfound.get_name_leafdata());
    if (err_db_exists.is_set || is_set(err_db_exists.yfilter)) leaf_name_data.push_back(err_db_exists.get_name_leafdata());
    if (err_db_nomem.is_set || is_set(err_db_nomem.yfilter)) leaf_name_data.push_back(err_db_nomem.get_name_leafdata());
    if (err_id_reserve.is_set || is_set(err_id_reserve.yfilter)) leaf_name_data.push_back(err_id_reserve.get_name_leafdata());
    if (err_id_release.is_set || is_set(err_id_release.yfilter)) leaf_name_data.push_back(err_id_release.get_name_leafdata());
    if (err_id_update.is_set || is_set(err_id_update.yfilter)) leaf_name_data.push_back(err_id_update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-objs")
    {
        num_objs = value;
        num_objs.value_namespace = name_space;
        num_objs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-req")
    {
        create_req = value;
        create_req.value_namespace = name_space;
        create_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-ok")
    {
        create_ok = value;
        create_ok.value_namespace = name_space;
        create_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-req")
    {
        delete_req = value;
        delete_req.value_namespace = name_space;
        delete_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-ok")
    {
        delete_ok = value;
        delete_ok.value_namespace = name_space;
        delete_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-req")
    {
        update_req = value;
        update_req.value_namespace = name_space;
        update_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-ok")
    {
        update_ok = value;
        update_ok.value_namespace = name_space;
        update_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-req")
    {
        eod_req = value;
        eod_req.value_namespace = name_space;
        eod_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-ok")
    {
        eod_ok = value;
        eod_ok.value_namespace = name_space;
        eod_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-hw-fail")
    {
        err_hw_fail = value;
        err_hw_fail.value_namespace = name_space;
        err_hw_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-ref-resolve")
    {
        err_ref_resolve = value;
        err_ref_resolve.value_namespace = name_space;
        err_ref_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-db-notfound")
    {
        err_db_notfound = value;
        err_db_notfound.value_namespace = name_space;
        err_db_notfound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-db-exists")
    {
        err_db_exists = value;
        err_db_exists.value_namespace = name_space;
        err_db_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-db-nomem")
    {
        err_db_nomem = value;
        err_db_nomem.value_namespace = name_space;
        err_db_nomem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-id-reserve")
    {
        err_id_reserve = value;
        err_id_reserve.value_namespace = name_space;
        err_id_reserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-id-release")
    {
        err_id_release = value;
        err_id_release.value_namespace = name_space;
        err_id_release.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-id-update")
    {
        err_id_update = value;
        err_id_update.value_namespace = name_space;
        err_id_update.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "num-objs")
    {
        num_objs.yfilter = yfilter;
    }
    if(value_path == "create-req")
    {
        create_req.yfilter = yfilter;
    }
    if(value_path == "create-ok")
    {
        create_ok.yfilter = yfilter;
    }
    if(value_path == "delete-req")
    {
        delete_req.yfilter = yfilter;
    }
    if(value_path == "delete-ok")
    {
        delete_ok.yfilter = yfilter;
    }
    if(value_path == "update-req")
    {
        update_req.yfilter = yfilter;
    }
    if(value_path == "update-ok")
    {
        update_ok.yfilter = yfilter;
    }
    if(value_path == "eod-req")
    {
        eod_req.yfilter = yfilter;
    }
    if(value_path == "eod-ok")
    {
        eod_ok.yfilter = yfilter;
    }
    if(value_path == "err-hw-fail")
    {
        err_hw_fail.yfilter = yfilter;
    }
    if(value_path == "err-ref-resolve")
    {
        err_ref_resolve.yfilter = yfilter;
    }
    if(value_path == "err-db-notfound")
    {
        err_db_notfound.yfilter = yfilter;
    }
    if(value_path == "err-db-exists")
    {
        err_db_exists.yfilter = yfilter;
    }
    if(value_path == "err-db-nomem")
    {
        err_db_nomem.yfilter = yfilter;
    }
    if(value_path == "err-id-reserve")
    {
        err_id_reserve.yfilter = yfilter;
    }
    if(value_path == "err-id-release")
    {
        err_id_release.yfilter = yfilter;
    }
    if(value_path == "err-id-update")
    {
        err_id_update.yfilter = yfilter;
    }
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id" || name == "num-objs" || name == "create-req" || name == "create-ok" || name == "delete-req" || name == "delete-ok" || name == "update-req" || name == "update-ok" || name == "eod-req" || name == "eod-ok" || name == "err-hw-fail" || name == "err-ref-resolve" || name == "err-db-notfound" || name == "err-db-exists" || name == "err-db-nomem" || name == "err-id-reserve" || name == "err-id-release" || name == "err-id-update")
        return true;
    return false;
}

const Enum::YLeaf DpaTable::test_if {0, "test-if"};
const Enum::YLeaf DpaTable::test_nhg {1, "test-nhg"};
const Enum::YLeaf DpaTable::test_nh {2, "test-nh"};
const Enum::YLeaf DpaTable::test_rt {3, "test-rt"};
const Enum::YLeaf DpaTable::test_dynhg {4, "test-dynhg"};
const Enum::YLeaf DpaTable::test_ip_punt_policy {5, "test-ip-punt-policy"};
const Enum::YLeaf DpaTable::test_punt {6, "test-punt"};
const Enum::YLeaf DpaTable::test_punt_policy_stats {7, "test-punt-policy-stats"};
const Enum::YLeaf DpaTable::test_async_update {8, "test-async-update"};
const Enum::YLeaf DpaTable::test_ddel_q {9, "test-ddel-q"};
const Enum::YLeaf DpaTable::bdbvi {10, "bdbvi"};
const Enum::YLeaf DpaTable::sys {11, "sys"};
const Enum::YLeaf DpaTable::npu {12, "npu"};
const Enum::YLeaf DpaTable::npuhwid {13, "npuhwid"};
const Enum::YLeaf DpaTable::l1_port {14, "l1-port"};
const Enum::YLeaf DpaTable::l2_port {15, "l2-port"};
const Enum::YLeaf DpaTable::l2intf {16, "l2intf"};
const Enum::YLeaf DpaTable::mplspwe_port_o_list {17, "mplspwe-port-o-list"};
const Enum::YLeaf DpaTable::mplspwe_port {18, "mplspwe-port"};
const Enum::YLeaf DpaTable::mhpwe_port {19, "mhpwe-port"};
const Enum::YLeaf DpaTable::l2xc {20, "l2xc"};
const Enum::YLeaf DpaTable::l2vpnstats {21, "l2vpnstats"};
const Enum::YLeaf DpaTable::l1_ports_tats {22, "l1-ports-tats"};
const Enum::YLeaf DpaTable::l3intf {23, "l3intf"};
const Enum::YLeaf DpaTable::l3intfrxstats {24, "l3intfrxstats"};
const Enum::YLeaf DpaTable::ip_route {25, "ip-route"};
const Enum::YLeaf DpaTable::ip6_route {26, "ip6-route"};
const Enum::YLeaf DpaTable::punt_policy_stats {27, "punt-policy-stats"};
const Enum::YLeaf DpaTable::tep {28, "tep"};
const Enum::YLeaf DpaTable::ip_punt_policy {29, "ip-punt-policy"};
const Enum::YLeaf DpaTable::ip6_punt_policy {30, "ip6-punt-policy"};
const Enum::YLeaf DpaTable::isis_punt_policy {31, "isis-punt-policy"};
const Enum::YLeaf DpaTable::ipnh_group {32, "ipnh-group"};
const Enum::YLeaf DpaTable::ip6nh_group {33, "ip6nh-group"};
const Enum::YLeaf DpaTable::ipnh {34, "ipnh"};
const Enum::YLeaf DpaTable::ip6nh {35, "ip6nh"};
const Enum::YLeaf DpaTable::ipvrf {36, "ipvrf"};
const Enum::YLeaf DpaTable::mplsnh {37, "mplsnh"};
const Enum::YLeaf DpaTable::mpls_label {38, "mpls-label"};
const Enum::YLeaf DpaTable::dnx_trap {39, "dnx-trap"};
const Enum::YLeaf DpaTable::punt {40, "punt"};
const Enum::YLeaf DpaTable::punt_police_r {41, "punt-police-r"};
const Enum::YLeaf DpaTable::punt_lpts_police_r {42, "punt-lpts-police-r"};
const Enum::YLeaf DpaTable::punt_stats {43, "punt-stats"};
const Enum::YLeaf DpaTable::tm_port {44, "tm-port"};
const Enum::YLeaf DpaTable::span_session {45, "span-session"};
const Enum::YLeaf DpaTable::police_rstats {46, "police-rstats"};
const Enum::YLeaf DpaTable::tm_ports_tats {47, "tm-ports-tats"};
const Enum::YLeaf DpaTable::l3intftxstats {48, "l3intftxstats"};
const Enum::YLeaf DpaTable::mplstetxstats {49, "mplstetxstats"};
const Enum::YLeaf DpaTable::mplslblstats {50, "mplslblstats"};
const Enum::YLeaf DpaTable::police_r {51, "police-r"};
const Enum::YLeaf DpaTable::l2intfrxstats {52, "l2intfrxstats"};
const Enum::YLeaf DpaTable::l2intftxstats {53, "l2intftxstats"};
const Enum::YLeaf DpaTable::dnx_pbr_tt_ipv4 {54, "dnx-pbr-tt-ipv4"};
const Enum::YLeaf DpaTable::dnx_pbr_tt_ipv6 {55, "dnx-pbr-tt-ipv6"};
const Enum::YLeaf DpaTable::bfdhwoff {56, "bfdhwoff"};
const Enum::YLeaf DpaTable::global {57, "global"};
const Enum::YLeaf DpaTable::lag_port {58, "lag-port"};
const Enum::YLeaf DpaTable::qos_profile {59, "qos-profile"};
const Enum::YLeaf DpaTable::tmrate_profile {60, "tmrate-profile"};
const Enum::YLeaf DpaTable::dnx_port_range {61, "dnx-port-range"};
const Enum::YLeaf DpaTable::ipacl {62, "ipacl"};
const Enum::YLeaf DpaTable::ip6acl {63, "ip6acl"};
const Enum::YLeaf DpaTable::sched_tree {64, "sched-tree"};
const Enum::YLeaf DpaTable::tmcos {65, "tmcos"};
const Enum::YLeaf DpaTable::statsagg {66, "statsagg"};
const Enum::YLeaf DpaTable::nhprotect {67, "nhprotect"};
const Enum::YLeaf DpaTable::sampler {68, "sampler"};
const Enum::YLeaf DpaTable::l2qos {69, "l2qos"};
const Enum::YLeaf DpaTable::peer_qos {70, "peer-qos"};
const Enum::YLeaf DpaTable::ipqos {71, "ipqos"};
const Enum::YLeaf DpaTable::ip6qos {72, "ip6qos"};
const Enum::YLeaf DpaTable::mplsqos {73, "mplsqos"};
const Enum::YLeaf DpaTable::qosid {74, "qosid"};
const Enum::YLeaf DpaTable::extlif {75, "extlif"};
const Enum::YLeaf DpaTable::elif {76, "elif"};
const Enum::YLeaf DpaTable::ingaclstats {77, "ingaclstats"};
const Enum::YLeaf DpaTable::egraclstats {78, "egraclstats"};
const Enum::YLeaf DpaTable::edpl {79, "edpl"};
const Enum::YLeaf DpaTable::erp {80, "erp"};
const Enum::YLeaf DpaTable::cfmmaid {81, "cfmmaid"};
const Enum::YLeaf DpaTable::cfmdefmps {82, "cfmdefmps"};
const Enum::YLeaf DpaTable::cfmofflmep {83, "cfmofflmep"};
const Enum::YLeaf DpaTable::cfmoffrmep {84, "cfmoffrmep"};
const Enum::YLeaf DpaTable::cfmnonoff {85, "cfmnonoff"};
const Enum::YLeaf DpaTable::cfmhwoffrxstats {86, "cfmhwoffrxstats"};
const Enum::YLeaf DpaTable::ipmc_route {87, "ipmc-route"};
const Enum::YLeaf DpaTable::l2ipmc_route {88, "l2ipmc-route"};
const Enum::YLeaf DpaTable::ipmco_list {89, "ipmco-list"};
const Enum::YLeaf DpaTable::l2mco_list {90, "l2mco-list"};
const Enum::YLeaf DpaTable::ipmc_merge_do_list {91, "ipmc-merge-do-list"};
const Enum::YLeaf DpaTable::sgfgid_list {92, "sgfgid-list"};
const Enum::YLeaf DpaTable::meshmc {93, "meshmc"};
const Enum::YLeaf DpaTable::l2_bridge {94, "l2-bridge"};
const Enum::YLeaf DpaTable::l2_bridge_port {95, "l2-bridge-port"};
const Enum::YLeaf DpaTable::l2_bridge_vni {96, "l2-bridge-vni"};
const Enum::YLeaf DpaTable::l2_bridge_vnidecap {97, "l2-bridge-vnidecap"};
const Enum::YLeaf DpaTable::l2_bridge_mac {98, "l2-bridge-mac"};
const Enum::YLeaf DpaTable::l2brmac {99, "l2brmac"};
const Enum::YLeaf DpaTable::ip_tunnel_decap {100, "ip-tunnel-decap"};
const Enum::YLeaf DpaTable::l2vlan_range {101, "l2vlan-range"};
const Enum::YLeaf DpaTable::ip_tunnel_encap {102, "ip-tunnel-encap"};
const Enum::YLeaf DpaTable::rawget {103, "rawget"};
const Enum::YLeaf DpaTable::ip6mc_route {104, "ip6mc-route"};
const Enum::YLeaf DpaTable::l2evpnact_remote_peer_id {105, "l2evpnact-remote-peer-id"};
const Enum::YLeaf DpaTable::l2evpnact_local_shl {106, "l2evpnact-local-shl"};
const Enum::YLeaf DpaTable::l2evpnact_remote_shl {107, "l2evpnact-remote-shl"};
const Enum::YLeaf DpaTable::evpn_iml_range {108, "evpn-iml-range"};
const Enum::YLeaf DpaTable::l2_bridge_o_list {109, "l2-bridge-o-list"};
const Enum::YLeaf DpaTable::l2_bridge_vnio_list {110, "l2-bridge-vnio-list"};
const Enum::YLeaf DpaTable::l2acl {111, "l2acl"};
const Enum::YLeaf DpaTable::l2evpn_nh {112, "l2evpn-nh"};
const Enum::YLeaf DpaTable::l2_bridge_port_sc {113, "l2-bridge-port-sc"};
const Enum::YLeaf DpaTable::l3intfmctxstats {114, "l3intfmctxstats"};
const Enum::YLeaf DpaTable::tidl_sample {115, "tidl-sample"};
const Enum::YLeaf DpaTable::tidl_ref_sample {116, "tidl-ref-sample"};
const Enum::YLeaf DpaTable::ipacl_prefix {117, "ipacl-prefix"};
const Enum::YLeaf DpaTable::ip6acl_prefix {118, "ip6acl-prefix"};
const Enum::YLeaf DpaTable::ipacl_port {119, "ipacl-port"};
const Enum::YLeaf DpaTable::scaleacl {120, "scaleacl"};
const Enum::YLeaf DpaTable::ipmcf_hop {121, "ipmcf-hop"};
const Enum::YLeaf DpaTable::bundle_swoff {122, "bundle-swoff"};
const Enum::YLeaf DpaTable::mcidswoff {123, "mcidswoff"};
const Enum::YLeaf DpaTable::dest_map {124, "dest-map"};
const Enum::YLeaf DpaTable::l2_bridge_port_pw {125, "l2-bridge-port-pw"};
const Enum::YLeaf DpaTable::l2evpnact_local_shlstats {126, "l2evpnact-local-shlstats"};
const Enum::YLeaf DpaTable::test_hidden {127, "test-hidden"};
const Enum::YLeaf DpaTable::test_local {128, "test-local"};
const Enum::YLeaf DpaTable::test_repeated {129, "test-repeated"};
const Enum::YLeaf DpaTable::limd {130, "limd"};
const Enum::YLeaf DpaTable::litap {131, "litap"};
const Enum::YLeaf DpaTable::l3intf_proto_stats {132, "l3intf-proto-stats"};
const Enum::YLeaf DpaTable::srv6sid {133, "srv6sid"};
const Enum::YLeaf DpaTable::srv6nh {134, "srv6nh"};
const Enum::YLeaf DpaTable::redirect_vrf {135, "redirect-vrf"};
const Enum::YLeaf DpaTable::test_xtf {136, "test-xtf"};
const Enum::YLeaf DpaTable::ippbr {137, "ippbr"};
const Enum::YLeaf DpaTable::ippbrstats {138, "ippbrstats"};
const Enum::YLeaf DpaTable::l2_bridge_port_remote_lc {139, "l2-bridge-port-remote-lc"};
const Enum::YLeaf DpaTable::mpls_mdt_bud {140, "mpls-mdt-bud"};
const Enum::YLeaf DpaTable::l2mac_static {141, "l2mac-static"};
const Enum::YLeaf DpaTable::sr_label_rxstats {142, "sr-label-rxstats"};
const Enum::YLeaf DpaTable::l2vpnxid {143, "l2vpnxid"};
const Enum::YLeaf DpaTable::rpfif {144, "rpfif"};


}
}

