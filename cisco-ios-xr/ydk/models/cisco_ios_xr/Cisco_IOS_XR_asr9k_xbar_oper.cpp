
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_xbar_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_xbar_oper {

CrossBarStats::CrossBarStats()
    :
    nodes(std::make_shared<CrossBarStats::Nodes>())
{
    nodes->parent = this;

    yang_name = "cross-bar-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-xbar-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CrossBarStats::~CrossBarStats()
{
}

bool CrossBarStats::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool CrossBarStats::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string CrossBarStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<CrossBarStats::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void CrossBarStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CrossBarStats::clone_ptr() const
{
    return std::make_shared<CrossBarStats>();
}

std::string CrossBarStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CrossBarStats::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CrossBarStats::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CrossBarStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CrossBarStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

CrossBarStats::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "cross-bar-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

CrossBarStats::Nodes::~Nodes()
{
}

bool CrossBarStats::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string CrossBarStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<CrossBarStats::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::get_children() const
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

void CrossBarStats::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    cross_bar_table(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable>())
{
    cross_bar_table->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

CrossBarStats::Nodes::Node::~Node()
{
}

bool CrossBarStats::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (cross_bar_table !=  nullptr && cross_bar_table->has_data());
}

bool CrossBarStats::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (cross_bar_table !=  nullptr && cross_bar_table->has_operation());
}

std::string CrossBarStats::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string CrossBarStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cross-bar-table")
    {
        if(cross_bar_table == nullptr)
        {
            cross_bar_table = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable>();
        }
        return cross_bar_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cross_bar_table != nullptr)
    {
        _children["cross-bar-table"] = cross_bar_table;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cross-bar-table" || name == "node-name")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::CrossBarTable()
    :
    skb_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats>())
    , pkt_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats>())
    , sm15_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats>())
{
    skb_stats->parent = this;
    pkt_stats->parent = this;
    sm15_stats->parent = this;

    yang_name = "cross-bar-table"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::~CrossBarTable()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::has_data() const
{
    if (is_presence_container) return true;
    return (skb_stats !=  nullptr && skb_stats->has_data())
	|| (pkt_stats !=  nullptr && pkt_stats->has_data())
	|| (sm15_stats !=  nullptr && sm15_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::has_operation() const
{
    return is_set(yfilter)
	|| (skb_stats !=  nullptr && skb_stats->has_operation())
	|| (pkt_stats !=  nullptr && pkt_stats->has_operation())
	|| (sm15_stats !=  nullptr && sm15_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-bar-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "skb-stats")
    {
        if(skb_stats == nullptr)
        {
            skb_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats>();
        }
        return skb_stats;
    }

    if(child_yang_name == "pkt-stats")
    {
        if(pkt_stats == nullptr)
        {
            pkt_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats>();
        }
        return pkt_stats;
    }

    if(child_yang_name == "sm15-stats")
    {
        if(sm15_stats == nullptr)
        {
            sm15_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats>();
        }
        return sm15_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(skb_stats != nullptr)
    {
        _children["skb-stats"] = skb_stats;
    }

    if(pkt_stats != nullptr)
    {
        _children["pkt-stats"] = pkt_stats;
    }

    if(sm15_stats != nullptr)
    {
        _children["sm15-stats"] = sm15_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "skb-stats" || name == "pkt-stats" || name == "sm15-stats")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStats()
    :
    skb_stat(this, {})
{

    yang_name = "skb-stats"; yang_parent_name = "cross-bar-table"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::~SkbStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<skb_stat.len(); index++)
    {
        if(skb_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::has_operation() const
{
    for (std::size_t index=0; index<skb_stat.len(); index++)
    {
        if(skb_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skb-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "skb-stat")
    {
        auto ent_ = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat>();
        ent_->parent = this;
        skb_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : skb_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "skb-stat")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::SkbStat()
    :
    asic_id{YType::str, "asic-id"},
    port{YType::str, "port"},
    internal_err_cnt{YType::uint64, "internal-err-cnt"}
        ,
    in_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats>())
    , eg_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats>())
    , xps_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats>())
{
    in_stats->parent = this;
    eg_stats->parent = this;
    xps_stats->parent = this;

    yang_name = "skb-stat"; yang_parent_name = "skb-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::~SkbStat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::has_data() const
{
    if (is_presence_container) return true;
    return asic_id.is_set
	|| port.is_set
	|| internal_err_cnt.is_set
	|| (in_stats !=  nullptr && in_stats->has_data())
	|| (eg_stats !=  nullptr && eg_stats->has_data())
	|| (xps_stats !=  nullptr && xps_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_id.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(internal_err_cnt.yfilter)
	|| (in_stats !=  nullptr && in_stats->has_operation())
	|| (eg_stats !=  nullptr && eg_stats->has_operation())
	|| (xps_stats !=  nullptr && xps_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skb-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.yfilter)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (internal_err_cnt.is_set || is_set(internal_err_cnt.yfilter)) leaf_name_data.push_back(internal_err_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-stats")
    {
        if(in_stats == nullptr)
        {
            in_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats>();
        }
        return in_stats;
    }

    if(child_yang_name == "eg-stats")
    {
        if(eg_stats == nullptr)
        {
            eg_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats>();
        }
        return eg_stats;
    }

    if(child_yang_name == "xps-stats")
    {
        if(xps_stats == nullptr)
        {
            xps_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats>();
        }
        return xps_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in_stats != nullptr)
    {
        _children["in-stats"] = in_stats;
    }

    if(eg_stats != nullptr)
    {
        _children["eg-stats"] = eg_stats;
    }

    if(xps_stats != nullptr)
    {
        _children["xps-stats"] = xps_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
        asic_id.value_namespace = name_space;
        asic_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt = value;
        internal_err_cnt.value_namespace = name_space;
        internal_err_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-id")
    {
        asic_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-stats" || name == "eg-stats" || name == "xps-stats" || name == "asic-id" || name == "port" || name == "internal-err-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::InStats()
    :
    ibb_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats>())
    , ibf_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats>())
    , ibb_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats>())
    , ibf_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats>())
    , ibb_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats>())
    , ibf_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats>())
    , cfl_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats>())
{
    ibb_stats->parent = this;
    ibf_stats->parent = this;
    ibb_uc_stats->parent = this;
    ibf_uc_stats->parent = this;
    ibb_mc_stats->parent = this;
    ibf_mc_stats->parent = this;
    cfl_stats->parent = this;

    yang_name = "in-stats"; yang_parent_name = "skb-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::~InStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::has_data() const
{
    if (is_presence_container) return true;
    return (ibb_stats !=  nullptr && ibb_stats->has_data())
	|| (ibf_stats !=  nullptr && ibf_stats->has_data())
	|| (ibb_uc_stats !=  nullptr && ibb_uc_stats->has_data())
	|| (ibf_uc_stats !=  nullptr && ibf_uc_stats->has_data())
	|| (ibb_mc_stats !=  nullptr && ibb_mc_stats->has_data())
	|| (ibf_mc_stats !=  nullptr && ibf_mc_stats->has_data())
	|| (cfl_stats !=  nullptr && cfl_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::has_operation() const
{
    return is_set(yfilter)
	|| (ibb_stats !=  nullptr && ibb_stats->has_operation())
	|| (ibf_stats !=  nullptr && ibf_stats->has_operation())
	|| (ibb_uc_stats !=  nullptr && ibb_uc_stats->has_operation())
	|| (ibf_uc_stats !=  nullptr && ibf_uc_stats->has_operation())
	|| (ibb_mc_stats !=  nullptr && ibb_mc_stats->has_operation())
	|| (ibf_mc_stats !=  nullptr && ibf_mc_stats->has_operation())
	|| (cfl_stats !=  nullptr && cfl_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ibb-stats")
    {
        if(ibb_stats == nullptr)
        {
            ibb_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats>();
        }
        return ibb_stats;
    }

    if(child_yang_name == "ibf-stats")
    {
        if(ibf_stats == nullptr)
        {
            ibf_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats>();
        }
        return ibf_stats;
    }

    if(child_yang_name == "ibb-uc-stats")
    {
        if(ibb_uc_stats == nullptr)
        {
            ibb_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats>();
        }
        return ibb_uc_stats;
    }

    if(child_yang_name == "ibf-uc-stats")
    {
        if(ibf_uc_stats == nullptr)
        {
            ibf_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats>();
        }
        return ibf_uc_stats;
    }

    if(child_yang_name == "ibb-mc-stats")
    {
        if(ibb_mc_stats == nullptr)
        {
            ibb_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats>();
        }
        return ibb_mc_stats;
    }

    if(child_yang_name == "ibf-mc-stats")
    {
        if(ibf_mc_stats == nullptr)
        {
            ibf_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats>();
        }
        return ibf_mc_stats;
    }

    if(child_yang_name == "cfl-stats")
    {
        if(cfl_stats == nullptr)
        {
            cfl_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats>();
        }
        return cfl_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ibb_stats != nullptr)
    {
        _children["ibb-stats"] = ibb_stats;
    }

    if(ibf_stats != nullptr)
    {
        _children["ibf-stats"] = ibf_stats;
    }

    if(ibb_uc_stats != nullptr)
    {
        _children["ibb-uc-stats"] = ibb_uc_stats;
    }

    if(ibf_uc_stats != nullptr)
    {
        _children["ibf-uc-stats"] = ibf_uc_stats;
    }

    if(ibb_mc_stats != nullptr)
    {
        _children["ibb-mc-stats"] = ibb_mc_stats;
    }

    if(ibf_mc_stats != nullptr)
    {
        _children["ibf-mc-stats"] = ibf_mc_stats;
    }

    if(cfl_stats != nullptr)
    {
        _children["cfl-stats"] = cfl_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ibb-stats" || name == "ibf-stats" || name == "ibb-uc-stats" || name == "ibf-uc-stats" || name == "ibb-mc-stats" || name == "ibf-mc-stats" || name == "cfl-stats")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::IbbStats()
    :
    ipcicmtail_drop{YType::uint64, "ipcicmtail-drop"},
    dhe_diag_pkt{YType::uint64, "dhe-diag-pkt"},
    ibmdnouttot{YType::uint64, "ibmdnouttot"},
    icmdnenq{YType::uint64, "icmdnenq"},
    icmdndeq{YType::uint64, "icmdndeq"},
    ibmcsrccouttot{YType::uint64, "ibmcsrccouttot"}
{

    yang_name = "ibb-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::~IbbStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::has_data() const
{
    if (is_presence_container) return true;
    return ipcicmtail_drop.is_set
	|| dhe_diag_pkt.is_set
	|| ibmdnouttot.is_set
	|| icmdnenq.is_set
	|| icmdndeq.is_set
	|| ibmcsrccouttot.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipcicmtail_drop.yfilter)
	|| ydk::is_set(dhe_diag_pkt.yfilter)
	|| ydk::is_set(ibmdnouttot.yfilter)
	|| ydk::is_set(icmdnenq.yfilter)
	|| ydk::is_set(icmdndeq.yfilter)
	|| ydk::is_set(ibmcsrccouttot.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibb-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipcicmtail_drop.is_set || is_set(ipcicmtail_drop.yfilter)) leaf_name_data.push_back(ipcicmtail_drop.get_name_leafdata());
    if (dhe_diag_pkt.is_set || is_set(dhe_diag_pkt.yfilter)) leaf_name_data.push_back(dhe_diag_pkt.get_name_leafdata());
    if (ibmdnouttot.is_set || is_set(ibmdnouttot.yfilter)) leaf_name_data.push_back(ibmdnouttot.get_name_leafdata());
    if (icmdnenq.is_set || is_set(icmdnenq.yfilter)) leaf_name_data.push_back(icmdnenq.get_name_leafdata());
    if (icmdndeq.is_set || is_set(icmdndeq.yfilter)) leaf_name_data.push_back(icmdndeq.get_name_leafdata());
    if (ibmcsrccouttot.is_set || is_set(ibmcsrccouttot.yfilter)) leaf_name_data.push_back(ibmcsrccouttot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipcicmtail-drop")
    {
        ipcicmtail_drop = value;
        ipcicmtail_drop.value_namespace = name_space;
        ipcicmtail_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhe-diag-pkt")
    {
        dhe_diag_pkt = value;
        dhe_diag_pkt.value_namespace = name_space;
        dhe_diag_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmdnouttot")
    {
        ibmdnouttot = value;
        ibmdnouttot.value_namespace = name_space;
        ibmdnouttot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmdnenq")
    {
        icmdnenq = value;
        icmdnenq.value_namespace = name_space;
        icmdnenq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmdndeq")
    {
        icmdndeq = value;
        icmdndeq.value_namespace = name_space;
        icmdndeq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmcsrccouttot")
    {
        ibmcsrccouttot = value;
        ibmcsrccouttot.value_namespace = name_space;
        ibmcsrccouttot.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipcicmtail-drop")
    {
        ipcicmtail_drop.yfilter = yfilter;
    }
    if(value_path == "dhe-diag-pkt")
    {
        dhe_diag_pkt.yfilter = yfilter;
    }
    if(value_path == "ibmdnouttot")
    {
        ibmdnouttot.yfilter = yfilter;
    }
    if(value_path == "icmdnenq")
    {
        icmdnenq.yfilter = yfilter;
    }
    if(value_path == "icmdndeq")
    {
        icmdndeq.yfilter = yfilter;
    }
    if(value_path == "ibmcsrccouttot")
    {
        ibmcsrccouttot.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcicmtail-drop" || name == "dhe-diag-pkt" || name == "ibmdnouttot" || name == "icmdnenq" || name == "icmdndeq" || name == "ibmcsrccouttot")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::IbfStats()
    :
    unused{YType::uint64, "unused"}
{

    yang_name = "ibf-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::~IbfStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::has_data() const
{
    if (is_presence_container) return true;
    return unused.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibf-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::IbbUcStats()
    :
    ipc_data_tot{YType::uint64, "ipc-data-tot"},
    ipc_data_totsz{YType::uint64, "ipc-data-totsz"},
    ipcrunt{YType::uint64, "ipcrunt"},
    ipcgiant{YType::uint64, "ipcgiant"},
    ipc_data_err{YType::uint64, "ipc-data-err"},
    ipclinkerr{YType::uint64, "ipclinkerr"},
    ipcptcerr{YType::uint64, "ipcptcerr"},
    ipcpkt_drop{YType::uint64, "ipcpkt-drop"},
    ipcdes_drop{YType::uint64, "ipcdes-drop"},
    dhetail_drop{YType::uint64, "dhetail-drop"},
    ibmoutsop{YType::uint64, "ibmoutsop"},
    ibmouteop{YType::uint64, "ibmouteop"},
    ibmoutbyte{YType::uint64, "ibmoutbyte"},
    icmenq{YType::uint64, "icmenq"},
    icmdeq{YType::uint64, "icmdeq"},
    icmfcxoff{YType::uint64, "icmfcxoff"},
    icmfcxon{YType::uint64, "icmfcxon"}
{

    yang_name = "ibb-uc-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::~IbbUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::has_data() const
{
    if (is_presence_container) return true;
    return ipc_data_tot.is_set
	|| ipc_data_totsz.is_set
	|| ipcrunt.is_set
	|| ipcgiant.is_set
	|| ipc_data_err.is_set
	|| ipclinkerr.is_set
	|| ipcptcerr.is_set
	|| ipcpkt_drop.is_set
	|| ipcdes_drop.is_set
	|| dhetail_drop.is_set
	|| ibmoutsop.is_set
	|| ibmouteop.is_set
	|| ibmoutbyte.is_set
	|| icmenq.is_set
	|| icmdeq.is_set
	|| icmfcxoff.is_set
	|| icmfcxon.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipc_data_tot.yfilter)
	|| ydk::is_set(ipc_data_totsz.yfilter)
	|| ydk::is_set(ipcrunt.yfilter)
	|| ydk::is_set(ipcgiant.yfilter)
	|| ydk::is_set(ipc_data_err.yfilter)
	|| ydk::is_set(ipclinkerr.yfilter)
	|| ydk::is_set(ipcptcerr.yfilter)
	|| ydk::is_set(ipcpkt_drop.yfilter)
	|| ydk::is_set(ipcdes_drop.yfilter)
	|| ydk::is_set(dhetail_drop.yfilter)
	|| ydk::is_set(ibmoutsop.yfilter)
	|| ydk::is_set(ibmouteop.yfilter)
	|| ydk::is_set(ibmoutbyte.yfilter)
	|| ydk::is_set(icmenq.yfilter)
	|| ydk::is_set(icmdeq.yfilter)
	|| ydk::is_set(icmfcxoff.yfilter)
	|| ydk::is_set(icmfcxon.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibb-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipc_data_tot.is_set || is_set(ipc_data_tot.yfilter)) leaf_name_data.push_back(ipc_data_tot.get_name_leafdata());
    if (ipc_data_totsz.is_set || is_set(ipc_data_totsz.yfilter)) leaf_name_data.push_back(ipc_data_totsz.get_name_leafdata());
    if (ipcrunt.is_set || is_set(ipcrunt.yfilter)) leaf_name_data.push_back(ipcrunt.get_name_leafdata());
    if (ipcgiant.is_set || is_set(ipcgiant.yfilter)) leaf_name_data.push_back(ipcgiant.get_name_leafdata());
    if (ipc_data_err.is_set || is_set(ipc_data_err.yfilter)) leaf_name_data.push_back(ipc_data_err.get_name_leafdata());
    if (ipclinkerr.is_set || is_set(ipclinkerr.yfilter)) leaf_name_data.push_back(ipclinkerr.get_name_leafdata());
    if (ipcptcerr.is_set || is_set(ipcptcerr.yfilter)) leaf_name_data.push_back(ipcptcerr.get_name_leafdata());
    if (ipcpkt_drop.is_set || is_set(ipcpkt_drop.yfilter)) leaf_name_data.push_back(ipcpkt_drop.get_name_leafdata());
    if (ipcdes_drop.is_set || is_set(ipcdes_drop.yfilter)) leaf_name_data.push_back(ipcdes_drop.get_name_leafdata());
    if (dhetail_drop.is_set || is_set(dhetail_drop.yfilter)) leaf_name_data.push_back(dhetail_drop.get_name_leafdata());
    if (ibmoutsop.is_set || is_set(ibmoutsop.yfilter)) leaf_name_data.push_back(ibmoutsop.get_name_leafdata());
    if (ibmouteop.is_set || is_set(ibmouteop.yfilter)) leaf_name_data.push_back(ibmouteop.get_name_leafdata());
    if (ibmoutbyte.is_set || is_set(ibmoutbyte.yfilter)) leaf_name_data.push_back(ibmoutbyte.get_name_leafdata());
    if (icmenq.is_set || is_set(icmenq.yfilter)) leaf_name_data.push_back(icmenq.get_name_leafdata());
    if (icmdeq.is_set || is_set(icmdeq.yfilter)) leaf_name_data.push_back(icmdeq.get_name_leafdata());
    if (icmfcxoff.is_set || is_set(icmfcxoff.yfilter)) leaf_name_data.push_back(icmfcxoff.get_name_leafdata());
    if (icmfcxon.is_set || is_set(icmfcxon.yfilter)) leaf_name_data.push_back(icmfcxon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipc-data-tot")
    {
        ipc_data_tot = value;
        ipc_data_tot.value_namespace = name_space;
        ipc_data_tot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-data-totsz")
    {
        ipc_data_totsz = value;
        ipc_data_totsz.value_namespace = name_space;
        ipc_data_totsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcrunt")
    {
        ipcrunt = value;
        ipcrunt.value_namespace = name_space;
        ipcrunt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcgiant")
    {
        ipcgiant = value;
        ipcgiant.value_namespace = name_space;
        ipcgiant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-data-err")
    {
        ipc_data_err = value;
        ipc_data_err.value_namespace = name_space;
        ipc_data_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipclinkerr")
    {
        ipclinkerr = value;
        ipclinkerr.value_namespace = name_space;
        ipclinkerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcptcerr")
    {
        ipcptcerr = value;
        ipcptcerr.value_namespace = name_space;
        ipcptcerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcpkt-drop")
    {
        ipcpkt_drop = value;
        ipcpkt_drop.value_namespace = name_space;
        ipcpkt_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcdes-drop")
    {
        ipcdes_drop = value;
        ipcdes_drop.value_namespace = name_space;
        ipcdes_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhetail-drop")
    {
        dhetail_drop = value;
        dhetail_drop.value_namespace = name_space;
        dhetail_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmoutsop")
    {
        ibmoutsop = value;
        ibmoutsop.value_namespace = name_space;
        ibmoutsop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmouteop")
    {
        ibmouteop = value;
        ibmouteop.value_namespace = name_space;
        ibmouteop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmoutbyte")
    {
        ibmoutbyte = value;
        ibmoutbyte.value_namespace = name_space;
        ibmoutbyte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmenq")
    {
        icmenq = value;
        icmenq.value_namespace = name_space;
        icmenq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmdeq")
    {
        icmdeq = value;
        icmdeq.value_namespace = name_space;
        icmdeq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmfcxoff")
    {
        icmfcxoff = value;
        icmfcxoff.value_namespace = name_space;
        icmfcxoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmfcxon")
    {
        icmfcxon = value;
        icmfcxon.value_namespace = name_space;
        icmfcxon.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipc-data-tot")
    {
        ipc_data_tot.yfilter = yfilter;
    }
    if(value_path == "ipc-data-totsz")
    {
        ipc_data_totsz.yfilter = yfilter;
    }
    if(value_path == "ipcrunt")
    {
        ipcrunt.yfilter = yfilter;
    }
    if(value_path == "ipcgiant")
    {
        ipcgiant.yfilter = yfilter;
    }
    if(value_path == "ipc-data-err")
    {
        ipc_data_err.yfilter = yfilter;
    }
    if(value_path == "ipclinkerr")
    {
        ipclinkerr.yfilter = yfilter;
    }
    if(value_path == "ipcptcerr")
    {
        ipcptcerr.yfilter = yfilter;
    }
    if(value_path == "ipcpkt-drop")
    {
        ipcpkt_drop.yfilter = yfilter;
    }
    if(value_path == "ipcdes-drop")
    {
        ipcdes_drop.yfilter = yfilter;
    }
    if(value_path == "dhetail-drop")
    {
        dhetail_drop.yfilter = yfilter;
    }
    if(value_path == "ibmoutsop")
    {
        ibmoutsop.yfilter = yfilter;
    }
    if(value_path == "ibmouteop")
    {
        ibmouteop.yfilter = yfilter;
    }
    if(value_path == "ibmoutbyte")
    {
        ibmoutbyte.yfilter = yfilter;
    }
    if(value_path == "icmenq")
    {
        icmenq.yfilter = yfilter;
    }
    if(value_path == "icmdeq")
    {
        icmdeq.yfilter = yfilter;
    }
    if(value_path == "icmfcxoff")
    {
        icmfcxoff.yfilter = yfilter;
    }
    if(value_path == "icmfcxon")
    {
        icmfcxon.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipc-data-tot" || name == "ipc-data-totsz" || name == "ipcrunt" || name == "ipcgiant" || name == "ipc-data-err" || name == "ipclinkerr" || name == "ipcptcerr" || name == "ipcpkt-drop" || name == "ipcdes-drop" || name == "dhetail-drop" || name == "ibmoutsop" || name == "ibmouteop" || name == "ibmoutbyte" || name == "icmenq" || name == "icmdeq" || name == "icmfcxoff" || name == "icmfcxon")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::IbfUcStats()
    :
    pktcnt{YType::uint64, "pktcnt"},
    pktoutp0cnt{YType::uint64, "pktoutp0cnt"},
    pktoutp1cnt{YType::uint64, "pktoutp1cnt"},
    pkt_input_err_drop{YType::uint64, "pkt-input-err-drop"},
    pkthwerr_drop{YType::uint64, "pkthwerr-drop"},
    pkt_null_poe_drop{YType::uint64, "pkt-null-poe-drop"},
    pkt_disp_oe_drop{YType::uint64, "pkt-disp-oe-drop"}
{

    yang_name = "ibf-uc-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::~IbfUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::has_data() const
{
    if (is_presence_container) return true;
    return pktcnt.is_set
	|| pktoutp0cnt.is_set
	|| pktoutp1cnt.is_set
	|| pkt_input_err_drop.is_set
	|| pkthwerr_drop.is_set
	|| pkt_null_poe_drop.is_set
	|| pkt_disp_oe_drop.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktcnt.yfilter)
	|| ydk::is_set(pktoutp0cnt.yfilter)
	|| ydk::is_set(pktoutp1cnt.yfilter)
	|| ydk::is_set(pkt_input_err_drop.yfilter)
	|| ydk::is_set(pkthwerr_drop.yfilter)
	|| ydk::is_set(pkt_null_poe_drop.yfilter)
	|| ydk::is_set(pkt_disp_oe_drop.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibf-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktcnt.is_set || is_set(pktcnt.yfilter)) leaf_name_data.push_back(pktcnt.get_name_leafdata());
    if (pktoutp0cnt.is_set || is_set(pktoutp0cnt.yfilter)) leaf_name_data.push_back(pktoutp0cnt.get_name_leafdata());
    if (pktoutp1cnt.is_set || is_set(pktoutp1cnt.yfilter)) leaf_name_data.push_back(pktoutp1cnt.get_name_leafdata());
    if (pkt_input_err_drop.is_set || is_set(pkt_input_err_drop.yfilter)) leaf_name_data.push_back(pkt_input_err_drop.get_name_leafdata());
    if (pkthwerr_drop.is_set || is_set(pkthwerr_drop.yfilter)) leaf_name_data.push_back(pkthwerr_drop.get_name_leafdata());
    if (pkt_null_poe_drop.is_set || is_set(pkt_null_poe_drop.yfilter)) leaf_name_data.push_back(pkt_null_poe_drop.get_name_leafdata());
    if (pkt_disp_oe_drop.is_set || is_set(pkt_disp_oe_drop.yfilter)) leaf_name_data.push_back(pkt_disp_oe_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktcnt")
    {
        pktcnt = value;
        pktcnt.value_namespace = name_space;
        pktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktoutp0cnt")
    {
        pktoutp0cnt = value;
        pktoutp0cnt.value_namespace = name_space;
        pktoutp0cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktoutp1cnt")
    {
        pktoutp1cnt = value;
        pktoutp1cnt.value_namespace = name_space;
        pktoutp1cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-input-err-drop")
    {
        pkt_input_err_drop = value;
        pkt_input_err_drop.value_namespace = name_space;
        pkt_input_err_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkthwerr-drop")
    {
        pkthwerr_drop = value;
        pkthwerr_drop.value_namespace = name_space;
        pkthwerr_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-drop")
    {
        pkt_null_poe_drop = value;
        pkt_null_poe_drop.value_namespace = name_space;
        pkt_null_poe_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-disp-oe-drop")
    {
        pkt_disp_oe_drop = value;
        pkt_disp_oe_drop.value_namespace = name_space;
        pkt_disp_oe_drop.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktcnt")
    {
        pktcnt.yfilter = yfilter;
    }
    if(value_path == "pktoutp0cnt")
    {
        pktoutp0cnt.yfilter = yfilter;
    }
    if(value_path == "pktoutp1cnt")
    {
        pktoutp1cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-input-err-drop")
    {
        pkt_input_err_drop.yfilter = yfilter;
    }
    if(value_path == "pkthwerr-drop")
    {
        pkthwerr_drop.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-drop")
    {
        pkt_null_poe_drop.yfilter = yfilter;
    }
    if(value_path == "pkt-disp-oe-drop")
    {
        pkt_disp_oe_drop.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktcnt" || name == "pktoutp0cnt" || name == "pktoutp1cnt" || name == "pkt-input-err-drop" || name == "pkthwerr-drop" || name == "pkt-null-poe-drop" || name == "pkt-disp-oe-drop")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::IbbMcStats()
    :
    ipc_data_tot{YType::uint64, "ipc-data-tot"},
    ipc_data_totsz{YType::uint64, "ipc-data-totsz"},
    ipcrunt{YType::uint64, "ipcrunt"},
    ipcgiant{YType::uint64, "ipcgiant"},
    ipc_data_err{YType::uint64, "ipc-data-err"},
    ipclinkerr{YType::uint64, "ipclinkerr"},
    ipcptcerr{YType::uint64, "ipcptcerr"},
    ipcpkt_drop{YType::uint64, "ipcpkt-drop"},
    ipcdes_drop{YType::uint64, "ipcdes-drop"},
    dhehitail_drop{YType::uint64, "dhehitail-drop"},
    dhelotail_drop{YType::uint64, "dhelotail-drop"},
    ibmoutsop{YType::uint64, "ibmoutsop"},
    ibmouteop{YType::uint64, "ibmouteop"},
    ibmoutbyte{YType::uint64, "ibmoutbyte"},
    icmenq{YType::uint64, "icmenq"},
    icmdeq{YType::uint64, "icmdeq"},
    icmfcxoff{YType::uint64, "icmfcxoff"},
    icmfcxon{YType::uint64, "icmfcxon"}
{

    yang_name = "ibb-mc-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::~IbbMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::has_data() const
{
    if (is_presence_container) return true;
    return ipc_data_tot.is_set
	|| ipc_data_totsz.is_set
	|| ipcrunt.is_set
	|| ipcgiant.is_set
	|| ipc_data_err.is_set
	|| ipclinkerr.is_set
	|| ipcptcerr.is_set
	|| ipcpkt_drop.is_set
	|| ipcdes_drop.is_set
	|| dhehitail_drop.is_set
	|| dhelotail_drop.is_set
	|| ibmoutsop.is_set
	|| ibmouteop.is_set
	|| ibmoutbyte.is_set
	|| icmenq.is_set
	|| icmdeq.is_set
	|| icmfcxoff.is_set
	|| icmfcxon.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipc_data_tot.yfilter)
	|| ydk::is_set(ipc_data_totsz.yfilter)
	|| ydk::is_set(ipcrunt.yfilter)
	|| ydk::is_set(ipcgiant.yfilter)
	|| ydk::is_set(ipc_data_err.yfilter)
	|| ydk::is_set(ipclinkerr.yfilter)
	|| ydk::is_set(ipcptcerr.yfilter)
	|| ydk::is_set(ipcpkt_drop.yfilter)
	|| ydk::is_set(ipcdes_drop.yfilter)
	|| ydk::is_set(dhehitail_drop.yfilter)
	|| ydk::is_set(dhelotail_drop.yfilter)
	|| ydk::is_set(ibmoutsop.yfilter)
	|| ydk::is_set(ibmouteop.yfilter)
	|| ydk::is_set(ibmoutbyte.yfilter)
	|| ydk::is_set(icmenq.yfilter)
	|| ydk::is_set(icmdeq.yfilter)
	|| ydk::is_set(icmfcxoff.yfilter)
	|| ydk::is_set(icmfcxon.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibb-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipc_data_tot.is_set || is_set(ipc_data_tot.yfilter)) leaf_name_data.push_back(ipc_data_tot.get_name_leafdata());
    if (ipc_data_totsz.is_set || is_set(ipc_data_totsz.yfilter)) leaf_name_data.push_back(ipc_data_totsz.get_name_leafdata());
    if (ipcrunt.is_set || is_set(ipcrunt.yfilter)) leaf_name_data.push_back(ipcrunt.get_name_leafdata());
    if (ipcgiant.is_set || is_set(ipcgiant.yfilter)) leaf_name_data.push_back(ipcgiant.get_name_leafdata());
    if (ipc_data_err.is_set || is_set(ipc_data_err.yfilter)) leaf_name_data.push_back(ipc_data_err.get_name_leafdata());
    if (ipclinkerr.is_set || is_set(ipclinkerr.yfilter)) leaf_name_data.push_back(ipclinkerr.get_name_leafdata());
    if (ipcptcerr.is_set || is_set(ipcptcerr.yfilter)) leaf_name_data.push_back(ipcptcerr.get_name_leafdata());
    if (ipcpkt_drop.is_set || is_set(ipcpkt_drop.yfilter)) leaf_name_data.push_back(ipcpkt_drop.get_name_leafdata());
    if (ipcdes_drop.is_set || is_set(ipcdes_drop.yfilter)) leaf_name_data.push_back(ipcdes_drop.get_name_leafdata());
    if (dhehitail_drop.is_set || is_set(dhehitail_drop.yfilter)) leaf_name_data.push_back(dhehitail_drop.get_name_leafdata());
    if (dhelotail_drop.is_set || is_set(dhelotail_drop.yfilter)) leaf_name_data.push_back(dhelotail_drop.get_name_leafdata());
    if (ibmoutsop.is_set || is_set(ibmoutsop.yfilter)) leaf_name_data.push_back(ibmoutsop.get_name_leafdata());
    if (ibmouteop.is_set || is_set(ibmouteop.yfilter)) leaf_name_data.push_back(ibmouteop.get_name_leafdata());
    if (ibmoutbyte.is_set || is_set(ibmoutbyte.yfilter)) leaf_name_data.push_back(ibmoutbyte.get_name_leafdata());
    if (icmenq.is_set || is_set(icmenq.yfilter)) leaf_name_data.push_back(icmenq.get_name_leafdata());
    if (icmdeq.is_set || is_set(icmdeq.yfilter)) leaf_name_data.push_back(icmdeq.get_name_leafdata());
    if (icmfcxoff.is_set || is_set(icmfcxoff.yfilter)) leaf_name_data.push_back(icmfcxoff.get_name_leafdata());
    if (icmfcxon.is_set || is_set(icmfcxon.yfilter)) leaf_name_data.push_back(icmfcxon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipc-data-tot")
    {
        ipc_data_tot = value;
        ipc_data_tot.value_namespace = name_space;
        ipc_data_tot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-data-totsz")
    {
        ipc_data_totsz = value;
        ipc_data_totsz.value_namespace = name_space;
        ipc_data_totsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcrunt")
    {
        ipcrunt = value;
        ipcrunt.value_namespace = name_space;
        ipcrunt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcgiant")
    {
        ipcgiant = value;
        ipcgiant.value_namespace = name_space;
        ipcgiant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-data-err")
    {
        ipc_data_err = value;
        ipc_data_err.value_namespace = name_space;
        ipc_data_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipclinkerr")
    {
        ipclinkerr = value;
        ipclinkerr.value_namespace = name_space;
        ipclinkerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcptcerr")
    {
        ipcptcerr = value;
        ipcptcerr.value_namespace = name_space;
        ipcptcerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcpkt-drop")
    {
        ipcpkt_drop = value;
        ipcpkt_drop.value_namespace = name_space;
        ipcpkt_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcdes-drop")
    {
        ipcdes_drop = value;
        ipcdes_drop.value_namespace = name_space;
        ipcdes_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhehitail-drop")
    {
        dhehitail_drop = value;
        dhehitail_drop.value_namespace = name_space;
        dhehitail_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhelotail-drop")
    {
        dhelotail_drop = value;
        dhelotail_drop.value_namespace = name_space;
        dhelotail_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmoutsop")
    {
        ibmoutsop = value;
        ibmoutsop.value_namespace = name_space;
        ibmoutsop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmouteop")
    {
        ibmouteop = value;
        ibmouteop.value_namespace = name_space;
        ibmouteop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibmoutbyte")
    {
        ibmoutbyte = value;
        ibmoutbyte.value_namespace = name_space;
        ibmoutbyte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmenq")
    {
        icmenq = value;
        icmenq.value_namespace = name_space;
        icmenq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmdeq")
    {
        icmdeq = value;
        icmdeq.value_namespace = name_space;
        icmdeq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmfcxoff")
    {
        icmfcxoff = value;
        icmfcxoff.value_namespace = name_space;
        icmfcxoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmfcxon")
    {
        icmfcxon = value;
        icmfcxon.value_namespace = name_space;
        icmfcxon.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipc-data-tot")
    {
        ipc_data_tot.yfilter = yfilter;
    }
    if(value_path == "ipc-data-totsz")
    {
        ipc_data_totsz.yfilter = yfilter;
    }
    if(value_path == "ipcrunt")
    {
        ipcrunt.yfilter = yfilter;
    }
    if(value_path == "ipcgiant")
    {
        ipcgiant.yfilter = yfilter;
    }
    if(value_path == "ipc-data-err")
    {
        ipc_data_err.yfilter = yfilter;
    }
    if(value_path == "ipclinkerr")
    {
        ipclinkerr.yfilter = yfilter;
    }
    if(value_path == "ipcptcerr")
    {
        ipcptcerr.yfilter = yfilter;
    }
    if(value_path == "ipcpkt-drop")
    {
        ipcpkt_drop.yfilter = yfilter;
    }
    if(value_path == "ipcdes-drop")
    {
        ipcdes_drop.yfilter = yfilter;
    }
    if(value_path == "dhehitail-drop")
    {
        dhehitail_drop.yfilter = yfilter;
    }
    if(value_path == "dhelotail-drop")
    {
        dhelotail_drop.yfilter = yfilter;
    }
    if(value_path == "ibmoutsop")
    {
        ibmoutsop.yfilter = yfilter;
    }
    if(value_path == "ibmouteop")
    {
        ibmouteop.yfilter = yfilter;
    }
    if(value_path == "ibmoutbyte")
    {
        ibmoutbyte.yfilter = yfilter;
    }
    if(value_path == "icmenq")
    {
        icmenq.yfilter = yfilter;
    }
    if(value_path == "icmdeq")
    {
        icmdeq.yfilter = yfilter;
    }
    if(value_path == "icmfcxoff")
    {
        icmfcxoff.yfilter = yfilter;
    }
    if(value_path == "icmfcxon")
    {
        icmfcxon.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbbMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipc-data-tot" || name == "ipc-data-totsz" || name == "ipcrunt" || name == "ipcgiant" || name == "ipc-data-err" || name == "ipclinkerr" || name == "ipcptcerr" || name == "ipcpkt-drop" || name == "ipcdes-drop" || name == "dhehitail-drop" || name == "dhelotail-drop" || name == "ibmoutsop" || name == "ibmouteop" || name == "ibmoutbyte" || name == "icmenq" || name == "icmdeq" || name == "icmfcxoff" || name == "icmfcxon")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::IbfMcStats()
    :
    pktcnt{YType::uint64, "pktcnt"},
    pktoutcnt{YType::uint64, "pktoutcnt"},
    pkthi_copy_sup_event{YType::uint64, "pkthi-copy-sup-event"},
    pktlo_copy_sup_event{YType::uint64, "pktlo-copy-sup-event"},
    pkt_input_err_drop{YType::uint64, "pkt-input-err-drop"},
    pktfgid_addr_err_drop{YType::uint64, "pktfgid-addr-err-drop"},
    pktfgidlkuperr_drop{YType::uint64, "pktfgidlkuperr-drop"},
    pkt_null_poe_drop{YType::uint64, "pkt-null-poe-drop"},
    pkt_copy_sup_drop{YType::uint64, "pkt-copy-sup-drop"},
    pkt_disp_oe_drop{YType::uint64, "pkt-disp-oe-drop"},
    pktto_drop_cnt{YType::uint64, "pktto-drop-cnt"}
{

    yang_name = "ibf-mc-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::~IbfMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::has_data() const
{
    if (is_presence_container) return true;
    return pktcnt.is_set
	|| pktoutcnt.is_set
	|| pkthi_copy_sup_event.is_set
	|| pktlo_copy_sup_event.is_set
	|| pkt_input_err_drop.is_set
	|| pktfgid_addr_err_drop.is_set
	|| pktfgidlkuperr_drop.is_set
	|| pkt_null_poe_drop.is_set
	|| pkt_copy_sup_drop.is_set
	|| pkt_disp_oe_drop.is_set
	|| pktto_drop_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktcnt.yfilter)
	|| ydk::is_set(pktoutcnt.yfilter)
	|| ydk::is_set(pkthi_copy_sup_event.yfilter)
	|| ydk::is_set(pktlo_copy_sup_event.yfilter)
	|| ydk::is_set(pkt_input_err_drop.yfilter)
	|| ydk::is_set(pktfgid_addr_err_drop.yfilter)
	|| ydk::is_set(pktfgidlkuperr_drop.yfilter)
	|| ydk::is_set(pkt_null_poe_drop.yfilter)
	|| ydk::is_set(pkt_copy_sup_drop.yfilter)
	|| ydk::is_set(pkt_disp_oe_drop.yfilter)
	|| ydk::is_set(pktto_drop_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibf-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktcnt.is_set || is_set(pktcnt.yfilter)) leaf_name_data.push_back(pktcnt.get_name_leafdata());
    if (pktoutcnt.is_set || is_set(pktoutcnt.yfilter)) leaf_name_data.push_back(pktoutcnt.get_name_leafdata());
    if (pkthi_copy_sup_event.is_set || is_set(pkthi_copy_sup_event.yfilter)) leaf_name_data.push_back(pkthi_copy_sup_event.get_name_leafdata());
    if (pktlo_copy_sup_event.is_set || is_set(pktlo_copy_sup_event.yfilter)) leaf_name_data.push_back(pktlo_copy_sup_event.get_name_leafdata());
    if (pkt_input_err_drop.is_set || is_set(pkt_input_err_drop.yfilter)) leaf_name_data.push_back(pkt_input_err_drop.get_name_leafdata());
    if (pktfgid_addr_err_drop.is_set || is_set(pktfgid_addr_err_drop.yfilter)) leaf_name_data.push_back(pktfgid_addr_err_drop.get_name_leafdata());
    if (pktfgidlkuperr_drop.is_set || is_set(pktfgidlkuperr_drop.yfilter)) leaf_name_data.push_back(pktfgidlkuperr_drop.get_name_leafdata());
    if (pkt_null_poe_drop.is_set || is_set(pkt_null_poe_drop.yfilter)) leaf_name_data.push_back(pkt_null_poe_drop.get_name_leafdata());
    if (pkt_copy_sup_drop.is_set || is_set(pkt_copy_sup_drop.yfilter)) leaf_name_data.push_back(pkt_copy_sup_drop.get_name_leafdata());
    if (pkt_disp_oe_drop.is_set || is_set(pkt_disp_oe_drop.yfilter)) leaf_name_data.push_back(pkt_disp_oe_drop.get_name_leafdata());
    if (pktto_drop_cnt.is_set || is_set(pktto_drop_cnt.yfilter)) leaf_name_data.push_back(pktto_drop_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktcnt")
    {
        pktcnt = value;
        pktcnt.value_namespace = name_space;
        pktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktoutcnt")
    {
        pktoutcnt = value;
        pktoutcnt.value_namespace = name_space;
        pktoutcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkthi-copy-sup-event")
    {
        pkthi_copy_sup_event = value;
        pkthi_copy_sup_event.value_namespace = name_space;
        pkthi_copy_sup_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktlo-copy-sup-event")
    {
        pktlo_copy_sup_event = value;
        pktlo_copy_sup_event.value_namespace = name_space;
        pktlo_copy_sup_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-input-err-drop")
    {
        pkt_input_err_drop = value;
        pkt_input_err_drop.value_namespace = name_space;
        pkt_input_err_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktfgid-addr-err-drop")
    {
        pktfgid_addr_err_drop = value;
        pktfgid_addr_err_drop.value_namespace = name_space;
        pktfgid_addr_err_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktfgidlkuperr-drop")
    {
        pktfgidlkuperr_drop = value;
        pktfgidlkuperr_drop.value_namespace = name_space;
        pktfgidlkuperr_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-drop")
    {
        pkt_null_poe_drop = value;
        pkt_null_poe_drop.value_namespace = name_space;
        pkt_null_poe_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-copy-sup-drop")
    {
        pkt_copy_sup_drop = value;
        pkt_copy_sup_drop.value_namespace = name_space;
        pkt_copy_sup_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-disp-oe-drop")
    {
        pkt_disp_oe_drop = value;
        pkt_disp_oe_drop.value_namespace = name_space;
        pkt_disp_oe_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktto-drop-cnt")
    {
        pktto_drop_cnt = value;
        pktto_drop_cnt.value_namespace = name_space;
        pktto_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktcnt")
    {
        pktcnt.yfilter = yfilter;
    }
    if(value_path == "pktoutcnt")
    {
        pktoutcnt.yfilter = yfilter;
    }
    if(value_path == "pkthi-copy-sup-event")
    {
        pkthi_copy_sup_event.yfilter = yfilter;
    }
    if(value_path == "pktlo-copy-sup-event")
    {
        pktlo_copy_sup_event.yfilter = yfilter;
    }
    if(value_path == "pkt-input-err-drop")
    {
        pkt_input_err_drop.yfilter = yfilter;
    }
    if(value_path == "pktfgid-addr-err-drop")
    {
        pktfgid_addr_err_drop.yfilter = yfilter;
    }
    if(value_path == "pktfgidlkuperr-drop")
    {
        pktfgidlkuperr_drop.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-drop")
    {
        pkt_null_poe_drop.yfilter = yfilter;
    }
    if(value_path == "pkt-copy-sup-drop")
    {
        pkt_copy_sup_drop.yfilter = yfilter;
    }
    if(value_path == "pkt-disp-oe-drop")
    {
        pkt_disp_oe_drop.yfilter = yfilter;
    }
    if(value_path == "pktto-drop-cnt")
    {
        pktto_drop_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::IbfMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktcnt" || name == "pktoutcnt" || name == "pkthi-copy-sup-event" || name == "pktlo-copy-sup-event" || name == "pkt-input-err-drop" || name == "pktfgid-addr-err-drop" || name == "pktfgidlkuperr-drop" || name == "pkt-null-poe-drop" || name == "pkt-copy-sup-drop" || name == "pkt-disp-oe-drop" || name == "pktto-drop-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflStats()
    :
    cfl_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats>())
    , cfl_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats>())
    , cfl_misc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats>())
{
    cfl_uc_stats->parent = this;
    cfl_mc_stats->parent = this;
    cfl_misc_stats->parent = this;

    yang_name = "cfl-stats"; yang_parent_name = "in-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::~CflStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::has_data() const
{
    if (is_presence_container) return true;
    return (cfl_uc_stats !=  nullptr && cfl_uc_stats->has_data())
	|| (cfl_mc_stats !=  nullptr && cfl_mc_stats->has_data())
	|| (cfl_misc_stats !=  nullptr && cfl_misc_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::has_operation() const
{
    return is_set(yfilter)
	|| (cfl_uc_stats !=  nullptr && cfl_uc_stats->has_operation())
	|| (cfl_mc_stats !=  nullptr && cfl_mc_stats->has_operation())
	|| (cfl_misc_stats !=  nullptr && cfl_misc_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfl-uc-stats")
    {
        if(cfl_uc_stats == nullptr)
        {
            cfl_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats>();
        }
        return cfl_uc_stats;
    }

    if(child_yang_name == "cfl-mc-stats")
    {
        if(cfl_mc_stats == nullptr)
        {
            cfl_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats>();
        }
        return cfl_mc_stats;
    }

    if(child_yang_name == "cfl-misc-stats")
    {
        if(cfl_misc_stats == nullptr)
        {
            cfl_misc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats>();
        }
        return cfl_misc_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfl_uc_stats != nullptr)
    {
        _children["cfl-uc-stats"] = cfl_uc_stats;
    }

    if(cfl_mc_stats != nullptr)
    {
        _children["cfl-mc-stats"] = cfl_mc_stats;
    }

    if(cfl_misc_stats != nullptr)
    {
        _children["cfl-misc-stats"] = cfl_misc_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfl-uc-stats" || name == "cfl-mc-stats" || name == "cfl-misc-stats")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::CflUcStats()
    :
    crc_match_pattern{YType::uint64, "crc-match-pattern"},
    pkts_rcvd{YType::uint64, "pkts-rcvd"},
    packed_pkts_rcvd{YType::uint64, "packed-pkts-rcvd"},
    pkts_flushed{YType::uint64, "pkts-flushed"},
    runt_pkts_drop_ped{YType::uint64, "runt-pkts-drop-ped"},
    small_pkts_drop_ped{YType::uint64, "small-pkts-drop-ped"},
    pkts_to_ib_from_port{YType::uint64, "pkts-to-ib-from-port"},
    in_uc_rate{YType::uint64, "in-uc-rate"}
{

    yang_name = "cfl-uc-stats"; yang_parent_name = "cfl-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::~CflUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::has_data() const
{
    if (is_presence_container) return true;
    return crc_match_pattern.is_set
	|| pkts_rcvd.is_set
	|| packed_pkts_rcvd.is_set
	|| pkts_flushed.is_set
	|| runt_pkts_drop_ped.is_set
	|| small_pkts_drop_ped.is_set
	|| pkts_to_ib_from_port.is_set
	|| in_uc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_match_pattern.yfilter)
	|| ydk::is_set(pkts_rcvd.yfilter)
	|| ydk::is_set(packed_pkts_rcvd.yfilter)
	|| ydk::is_set(pkts_flushed.yfilter)
	|| ydk::is_set(runt_pkts_drop_ped.yfilter)
	|| ydk::is_set(small_pkts_drop_ped.yfilter)
	|| ydk::is_set(pkts_to_ib_from_port.yfilter)
	|| ydk::is_set(in_uc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_match_pattern.is_set || is_set(crc_match_pattern.yfilter)) leaf_name_data.push_back(crc_match_pattern.get_name_leafdata());
    if (pkts_rcvd.is_set || is_set(pkts_rcvd.yfilter)) leaf_name_data.push_back(pkts_rcvd.get_name_leafdata());
    if (packed_pkts_rcvd.is_set || is_set(packed_pkts_rcvd.yfilter)) leaf_name_data.push_back(packed_pkts_rcvd.get_name_leafdata());
    if (pkts_flushed.is_set || is_set(pkts_flushed.yfilter)) leaf_name_data.push_back(pkts_flushed.get_name_leafdata());
    if (runt_pkts_drop_ped.is_set || is_set(runt_pkts_drop_ped.yfilter)) leaf_name_data.push_back(runt_pkts_drop_ped.get_name_leafdata());
    if (small_pkts_drop_ped.is_set || is_set(small_pkts_drop_ped.yfilter)) leaf_name_data.push_back(small_pkts_drop_ped.get_name_leafdata());
    if (pkts_to_ib_from_port.is_set || is_set(pkts_to_ib_from_port.yfilter)) leaf_name_data.push_back(pkts_to_ib_from_port.get_name_leafdata());
    if (in_uc_rate.is_set || is_set(in_uc_rate.yfilter)) leaf_name_data.push_back(in_uc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-match-pattern")
    {
        crc_match_pattern = value;
        crc_match_pattern.value_namespace = name_space;
        crc_match_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-rcvd")
    {
        pkts_rcvd = value;
        pkts_rcvd.value_namespace = name_space;
        pkts_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packed-pkts-rcvd")
    {
        packed_pkts_rcvd = value;
        packed_pkts_rcvd.value_namespace = name_space;
        packed_pkts_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-flushed")
    {
        pkts_flushed = value;
        pkts_flushed.value_namespace = name_space;
        pkts_flushed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-pkts-drop-ped")
    {
        runt_pkts_drop_ped = value;
        runt_pkts_drop_ped.value_namespace = name_space;
        runt_pkts_drop_ped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-pkts-drop-ped")
    {
        small_pkts_drop_ped = value;
        small_pkts_drop_ped.value_namespace = name_space;
        small_pkts_drop_ped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-to-ib-from-port")
    {
        pkts_to_ib_from_port = value;
        pkts_to_ib_from_port.value_namespace = name_space;
        pkts_to_ib_from_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-uc-rate")
    {
        in_uc_rate = value;
        in_uc_rate.value_namespace = name_space;
        in_uc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-match-pattern")
    {
        crc_match_pattern.yfilter = yfilter;
    }
    if(value_path == "pkts-rcvd")
    {
        pkts_rcvd.yfilter = yfilter;
    }
    if(value_path == "packed-pkts-rcvd")
    {
        packed_pkts_rcvd.yfilter = yfilter;
    }
    if(value_path == "pkts-flushed")
    {
        pkts_flushed.yfilter = yfilter;
    }
    if(value_path == "runt-pkts-drop-ped")
    {
        runt_pkts_drop_ped.yfilter = yfilter;
    }
    if(value_path == "small-pkts-drop-ped")
    {
        small_pkts_drop_ped.yfilter = yfilter;
    }
    if(value_path == "pkts-to-ib-from-port")
    {
        pkts_to_ib_from_port.yfilter = yfilter;
    }
    if(value_path == "in-uc-rate")
    {
        in_uc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-match-pattern" || name == "pkts-rcvd" || name == "packed-pkts-rcvd" || name == "pkts-flushed" || name == "runt-pkts-drop-ped" || name == "small-pkts-drop-ped" || name == "pkts-to-ib-from-port" || name == "in-uc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::CflMcStats()
    :
    crc_match_pattern{YType::uint64, "crc-match-pattern"},
    pkts_rcvd{YType::uint64, "pkts-rcvd"},
    packed_pkts_rcvd{YType::uint64, "packed-pkts-rcvd"},
    pkts_flushed{YType::uint64, "pkts-flushed"},
    runt_pkts_drop_ped{YType::uint64, "runt-pkts-drop-ped"},
    small_pkts_drop_ped{YType::uint64, "small-pkts-drop-ped"},
    pkts_to_ib_from_port{YType::uint64, "pkts-to-ib-from-port"},
    in_mc_rate{YType::uint64, "in-mc-rate"}
{

    yang_name = "cfl-mc-stats"; yang_parent_name = "cfl-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::~CflMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::has_data() const
{
    if (is_presence_container) return true;
    return crc_match_pattern.is_set
	|| pkts_rcvd.is_set
	|| packed_pkts_rcvd.is_set
	|| pkts_flushed.is_set
	|| runt_pkts_drop_ped.is_set
	|| small_pkts_drop_ped.is_set
	|| pkts_to_ib_from_port.is_set
	|| in_mc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_match_pattern.yfilter)
	|| ydk::is_set(pkts_rcvd.yfilter)
	|| ydk::is_set(packed_pkts_rcvd.yfilter)
	|| ydk::is_set(pkts_flushed.yfilter)
	|| ydk::is_set(runt_pkts_drop_ped.yfilter)
	|| ydk::is_set(small_pkts_drop_ped.yfilter)
	|| ydk::is_set(pkts_to_ib_from_port.yfilter)
	|| ydk::is_set(in_mc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_match_pattern.is_set || is_set(crc_match_pattern.yfilter)) leaf_name_data.push_back(crc_match_pattern.get_name_leafdata());
    if (pkts_rcvd.is_set || is_set(pkts_rcvd.yfilter)) leaf_name_data.push_back(pkts_rcvd.get_name_leafdata());
    if (packed_pkts_rcvd.is_set || is_set(packed_pkts_rcvd.yfilter)) leaf_name_data.push_back(packed_pkts_rcvd.get_name_leafdata());
    if (pkts_flushed.is_set || is_set(pkts_flushed.yfilter)) leaf_name_data.push_back(pkts_flushed.get_name_leafdata());
    if (runt_pkts_drop_ped.is_set || is_set(runt_pkts_drop_ped.yfilter)) leaf_name_data.push_back(runt_pkts_drop_ped.get_name_leafdata());
    if (small_pkts_drop_ped.is_set || is_set(small_pkts_drop_ped.yfilter)) leaf_name_data.push_back(small_pkts_drop_ped.get_name_leafdata());
    if (pkts_to_ib_from_port.is_set || is_set(pkts_to_ib_from_port.yfilter)) leaf_name_data.push_back(pkts_to_ib_from_port.get_name_leafdata());
    if (in_mc_rate.is_set || is_set(in_mc_rate.yfilter)) leaf_name_data.push_back(in_mc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-match-pattern")
    {
        crc_match_pattern = value;
        crc_match_pattern.value_namespace = name_space;
        crc_match_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-rcvd")
    {
        pkts_rcvd = value;
        pkts_rcvd.value_namespace = name_space;
        pkts_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packed-pkts-rcvd")
    {
        packed_pkts_rcvd = value;
        packed_pkts_rcvd.value_namespace = name_space;
        packed_pkts_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-flushed")
    {
        pkts_flushed = value;
        pkts_flushed.value_namespace = name_space;
        pkts_flushed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-pkts-drop-ped")
    {
        runt_pkts_drop_ped = value;
        runt_pkts_drop_ped.value_namespace = name_space;
        runt_pkts_drop_ped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-pkts-drop-ped")
    {
        small_pkts_drop_ped = value;
        small_pkts_drop_ped.value_namespace = name_space;
        small_pkts_drop_ped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-to-ib-from-port")
    {
        pkts_to_ib_from_port = value;
        pkts_to_ib_from_port.value_namespace = name_space;
        pkts_to_ib_from_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mc-rate")
    {
        in_mc_rate = value;
        in_mc_rate.value_namespace = name_space;
        in_mc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-match-pattern")
    {
        crc_match_pattern.yfilter = yfilter;
    }
    if(value_path == "pkts-rcvd")
    {
        pkts_rcvd.yfilter = yfilter;
    }
    if(value_path == "packed-pkts-rcvd")
    {
        packed_pkts_rcvd.yfilter = yfilter;
    }
    if(value_path == "pkts-flushed")
    {
        pkts_flushed.yfilter = yfilter;
    }
    if(value_path == "runt-pkts-drop-ped")
    {
        runt_pkts_drop_ped.yfilter = yfilter;
    }
    if(value_path == "small-pkts-drop-ped")
    {
        small_pkts_drop_ped.yfilter = yfilter;
    }
    if(value_path == "pkts-to-ib-from-port")
    {
        pkts_to_ib_from_port.yfilter = yfilter;
    }
    if(value_path == "in-mc-rate")
    {
        in_mc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-match-pattern" || name == "pkts-rcvd" || name == "packed-pkts-rcvd" || name == "pkts-flushed" || name == "runt-pkts-drop-ped" || name == "small-pkts-drop-ped" || name == "pkts-to-ib-from-port" || name == "in-mc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::CflMiscStats()
    :
    crc_stomp{YType::uint64, "crc-stomp"},
    crc_new_err{YType::uint64, "crc-new-err"},
    in_total_rate{YType::uint64, "in-total-rate"}
{

    yang_name = "cfl-misc-stats"; yang_parent_name = "cfl-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::~CflMiscStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::has_data() const
{
    if (is_presence_container) return true;
    return crc_stomp.is_set
	|| crc_new_err.is_set
	|| in_total_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_stomp.yfilter)
	|| ydk::is_set(crc_new_err.yfilter)
	|| ydk::is_set(in_total_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-misc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_stomp.is_set || is_set(crc_stomp.yfilter)) leaf_name_data.push_back(crc_stomp.get_name_leafdata());
    if (crc_new_err.is_set || is_set(crc_new_err.yfilter)) leaf_name_data.push_back(crc_new_err.get_name_leafdata());
    if (in_total_rate.is_set || is_set(in_total_rate.yfilter)) leaf_name_data.push_back(in_total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-stomp")
    {
        crc_stomp = value;
        crc_stomp.value_namespace = name_space;
        crc_stomp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-new-err")
    {
        crc_new_err = value;
        crc_new_err.value_namespace = name_space;
        crc_new_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-total-rate")
    {
        in_total_rate = value;
        in_total_rate.value_namespace = name_space;
        in_total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-stomp")
    {
        crc_stomp.yfilter = yfilter;
    }
    if(value_path == "crc-new-err")
    {
        crc_new_err.yfilter = yfilter;
    }
    if(value_path == "in-total-rate")
    {
        in_total_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::InStats::CflStats::CflMiscStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-stomp" || name == "crc-new-err" || name == "in-total-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::EgStats()
    :
    obu_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats>())
    , obu_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats>())
    , obu_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats>())
    , cfl_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats>())
{
    obu_stats->parent = this;
    obu_uc_stats->parent = this;
    obu_mc_stats->parent = this;
    cfl_stats->parent = this;

    yang_name = "eg-stats"; yang_parent_name = "skb-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::~EgStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::has_data() const
{
    if (is_presence_container) return true;
    return (obu_stats !=  nullptr && obu_stats->has_data())
	|| (obu_uc_stats !=  nullptr && obu_uc_stats->has_data())
	|| (obu_mc_stats !=  nullptr && obu_mc_stats->has_data())
	|| (cfl_stats !=  nullptr && cfl_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::has_operation() const
{
    return is_set(yfilter)
	|| (obu_stats !=  nullptr && obu_stats->has_operation())
	|| (obu_uc_stats !=  nullptr && obu_uc_stats->has_operation())
	|| (obu_mc_stats !=  nullptr && obu_mc_stats->has_operation())
	|| (cfl_stats !=  nullptr && cfl_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eg-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obu-stats")
    {
        if(obu_stats == nullptr)
        {
            obu_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats>();
        }
        return obu_stats;
    }

    if(child_yang_name == "obu-uc-stats")
    {
        if(obu_uc_stats == nullptr)
        {
            obu_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats>();
        }
        return obu_uc_stats;
    }

    if(child_yang_name == "obu-mc-stats")
    {
        if(obu_mc_stats == nullptr)
        {
            obu_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats>();
        }
        return obu_mc_stats;
    }

    if(child_yang_name == "cfl-stats")
    {
        if(cfl_stats == nullptr)
        {
            cfl_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats>();
        }
        return cfl_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(obu_stats != nullptr)
    {
        _children["obu-stats"] = obu_stats;
    }

    if(obu_uc_stats != nullptr)
    {
        _children["obu-uc-stats"] = obu_uc_stats;
    }

    if(obu_mc_stats != nullptr)
    {
        _children["obu-mc-stats"] = obu_mc_stats;
    }

    if(cfl_stats != nullptr)
    {
        _children["cfl-stats"] = cfl_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obu-stats" || name == "obu-uc-stats" || name == "obu-mc-stats" || name == "cfl-stats")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::ObuStats()
    :
    data_queque(this, {})
{

    yang_name = "obu-stats"; yang_parent_name = "eg-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::~ObuStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_queque.len(); index++)
    {
        if(data_queque[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::has_operation() const
{
    for (std::size_t index=0; index<data_queque.len(); index++)
    {
        if(data_queque[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obu-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-queque")
    {
        auto ent_ = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque>();
        ent_->parent = this;
        data_queque.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_queque.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-queque")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::DataQueque()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "data-queque"; yang_parent_name = "obu-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::~DataQueque()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-queque";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuStats::DataQueque::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::ObuUcStats()
    :
    pktin{YType::uint64, "pktin"},
    pktout{YType::uint64, "pktout"},
    bytein{YType::uint64, "bytein"},
    byteout{YType::uint64, "byteout"},
    pkttrunc{YType::uint64, "pkttrunc"}
{

    yang_name = "obu-uc-stats"; yang_parent_name = "eg-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::~ObuUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::has_data() const
{
    if (is_presence_container) return true;
    return pktin.is_set
	|| pktout.is_set
	|| bytein.is_set
	|| byteout.is_set
	|| pkttrunc.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktin.yfilter)
	|| ydk::is_set(pktout.yfilter)
	|| ydk::is_set(bytein.yfilter)
	|| ydk::is_set(byteout.yfilter)
	|| ydk::is_set(pkttrunc.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obu-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktin.is_set || is_set(pktin.yfilter)) leaf_name_data.push_back(pktin.get_name_leafdata());
    if (pktout.is_set || is_set(pktout.yfilter)) leaf_name_data.push_back(pktout.get_name_leafdata());
    if (bytein.is_set || is_set(bytein.yfilter)) leaf_name_data.push_back(bytein.get_name_leafdata());
    if (byteout.is_set || is_set(byteout.yfilter)) leaf_name_data.push_back(byteout.get_name_leafdata());
    if (pkttrunc.is_set || is_set(pkttrunc.yfilter)) leaf_name_data.push_back(pkttrunc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktin")
    {
        pktin = value;
        pktin.value_namespace = name_space;
        pktin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktout")
    {
        pktout = value;
        pktout.value_namespace = name_space;
        pktout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytein")
    {
        bytein = value;
        bytein.value_namespace = name_space;
        bytein.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byteout")
    {
        byteout = value;
        byteout.value_namespace = name_space;
        byteout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkttrunc")
    {
        pkttrunc = value;
        pkttrunc.value_namespace = name_space;
        pkttrunc.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktin")
    {
        pktin.yfilter = yfilter;
    }
    if(value_path == "pktout")
    {
        pktout.yfilter = yfilter;
    }
    if(value_path == "bytein")
    {
        bytein.yfilter = yfilter;
    }
    if(value_path == "byteout")
    {
        byteout.yfilter = yfilter;
    }
    if(value_path == "pkttrunc")
    {
        pkttrunc.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktin" || name == "pktout" || name == "bytein" || name == "byteout" || name == "pkttrunc")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::ObuMcStats()
    :
    pktin{YType::uint64, "pktin"},
    pktout{YType::uint64, "pktout"},
    bytein{YType::uint64, "bytein"},
    byteout{YType::uint64, "byteout"},
    pkttrunc{YType::uint64, "pkttrunc"}
{

    yang_name = "obu-mc-stats"; yang_parent_name = "eg-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::~ObuMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::has_data() const
{
    if (is_presence_container) return true;
    return pktin.is_set
	|| pktout.is_set
	|| bytein.is_set
	|| byteout.is_set
	|| pkttrunc.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktin.yfilter)
	|| ydk::is_set(pktout.yfilter)
	|| ydk::is_set(bytein.yfilter)
	|| ydk::is_set(byteout.yfilter)
	|| ydk::is_set(pkttrunc.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obu-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktin.is_set || is_set(pktin.yfilter)) leaf_name_data.push_back(pktin.get_name_leafdata());
    if (pktout.is_set || is_set(pktout.yfilter)) leaf_name_data.push_back(pktout.get_name_leafdata());
    if (bytein.is_set || is_set(bytein.yfilter)) leaf_name_data.push_back(bytein.get_name_leafdata());
    if (byteout.is_set || is_set(byteout.yfilter)) leaf_name_data.push_back(byteout.get_name_leafdata());
    if (pkttrunc.is_set || is_set(pkttrunc.yfilter)) leaf_name_data.push_back(pkttrunc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktin")
    {
        pktin = value;
        pktin.value_namespace = name_space;
        pktin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktout")
    {
        pktout = value;
        pktout.value_namespace = name_space;
        pktout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytein")
    {
        bytein = value;
        bytein.value_namespace = name_space;
        bytein.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byteout")
    {
        byteout = value;
        byteout.value_namespace = name_space;
        byteout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkttrunc")
    {
        pkttrunc = value;
        pkttrunc.value_namespace = name_space;
        pkttrunc.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktin")
    {
        pktin.yfilter = yfilter;
    }
    if(value_path == "pktout")
    {
        pktout.yfilter = yfilter;
    }
    if(value_path == "bytein")
    {
        bytein.yfilter = yfilter;
    }
    if(value_path == "byteout")
    {
        byteout.yfilter = yfilter;
    }
    if(value_path == "pkttrunc")
    {
        pkttrunc.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::ObuMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktin" || name == "pktout" || name == "bytein" || name == "byteout" || name == "pkttrunc")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflStats()
    :
    cfl_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats>())
    , cfl_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats>())
    , cfl_misc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats>())
{
    cfl_uc_stats->parent = this;
    cfl_mc_stats->parent = this;
    cfl_misc_stats->parent = this;

    yang_name = "cfl-stats"; yang_parent_name = "eg-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::~CflStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::has_data() const
{
    if (is_presence_container) return true;
    return (cfl_uc_stats !=  nullptr && cfl_uc_stats->has_data())
	|| (cfl_mc_stats !=  nullptr && cfl_mc_stats->has_data())
	|| (cfl_misc_stats !=  nullptr && cfl_misc_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::has_operation() const
{
    return is_set(yfilter)
	|| (cfl_uc_stats !=  nullptr && cfl_uc_stats->has_operation())
	|| (cfl_mc_stats !=  nullptr && cfl_mc_stats->has_operation())
	|| (cfl_misc_stats !=  nullptr && cfl_misc_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfl-uc-stats")
    {
        if(cfl_uc_stats == nullptr)
        {
            cfl_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats>();
        }
        return cfl_uc_stats;
    }

    if(child_yang_name == "cfl-mc-stats")
    {
        if(cfl_mc_stats == nullptr)
        {
            cfl_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats>();
        }
        return cfl_mc_stats;
    }

    if(child_yang_name == "cfl-misc-stats")
    {
        if(cfl_misc_stats == nullptr)
        {
            cfl_misc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats>();
        }
        return cfl_misc_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfl_uc_stats != nullptr)
    {
        _children["cfl-uc-stats"] = cfl_uc_stats;
    }

    if(cfl_mc_stats != nullptr)
    {
        _children["cfl-mc-stats"] = cfl_mc_stats;
    }

    if(cfl_misc_stats != nullptr)
    {
        _children["cfl-misc-stats"] = cfl_misc_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfl-uc-stats" || name == "cfl-mc-stats" || name == "cfl-misc-stats")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::CflUcStats()
    :
    pkts_truncated{YType::uint64, "pkts-truncated"},
    pkts_from_ob_to_port{YType::uint64, "pkts-from-ob-to-port"},
    eg_uc_rate{YType::uint64, "eg-uc-rate"}
{

    yang_name = "cfl-uc-stats"; yang_parent_name = "cfl-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::~CflUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::has_data() const
{
    if (is_presence_container) return true;
    return pkts_truncated.is_set
	|| pkts_from_ob_to_port.is_set
	|| eg_uc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkts_truncated.yfilter)
	|| ydk::is_set(pkts_from_ob_to_port.yfilter)
	|| ydk::is_set(eg_uc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkts_truncated.is_set || is_set(pkts_truncated.yfilter)) leaf_name_data.push_back(pkts_truncated.get_name_leafdata());
    if (pkts_from_ob_to_port.is_set || is_set(pkts_from_ob_to_port.yfilter)) leaf_name_data.push_back(pkts_from_ob_to_port.get_name_leafdata());
    if (eg_uc_rate.is_set || is_set(eg_uc_rate.yfilter)) leaf_name_data.push_back(eg_uc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkts-truncated")
    {
        pkts_truncated = value;
        pkts_truncated.value_namespace = name_space;
        pkts_truncated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-from-ob-to-port")
    {
        pkts_from_ob_to_port = value;
        pkts_from_ob_to_port.value_namespace = name_space;
        pkts_from_ob_to_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eg-uc-rate")
    {
        eg_uc_rate = value;
        eg_uc_rate.value_namespace = name_space;
        eg_uc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkts-truncated")
    {
        pkts_truncated.yfilter = yfilter;
    }
    if(value_path == "pkts-from-ob-to-port")
    {
        pkts_from_ob_to_port.yfilter = yfilter;
    }
    if(value_path == "eg-uc-rate")
    {
        eg_uc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkts-truncated" || name == "pkts-from-ob-to-port" || name == "eg-uc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::CflMcStats()
    :
    pkts_truncated{YType::uint64, "pkts-truncated"},
    pkts_from_ob_to_port{YType::uint64, "pkts-from-ob-to-port"},
    eg_mc_rate{YType::uint64, "eg-mc-rate"}
{

    yang_name = "cfl-mc-stats"; yang_parent_name = "cfl-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::~CflMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::has_data() const
{
    if (is_presence_container) return true;
    return pkts_truncated.is_set
	|| pkts_from_ob_to_port.is_set
	|| eg_mc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkts_truncated.yfilter)
	|| ydk::is_set(pkts_from_ob_to_port.yfilter)
	|| ydk::is_set(eg_mc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkts_truncated.is_set || is_set(pkts_truncated.yfilter)) leaf_name_data.push_back(pkts_truncated.get_name_leafdata());
    if (pkts_from_ob_to_port.is_set || is_set(pkts_from_ob_to_port.yfilter)) leaf_name_data.push_back(pkts_from_ob_to_port.get_name_leafdata());
    if (eg_mc_rate.is_set || is_set(eg_mc_rate.yfilter)) leaf_name_data.push_back(eg_mc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkts-truncated")
    {
        pkts_truncated = value;
        pkts_truncated.value_namespace = name_space;
        pkts_truncated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-from-ob-to-port")
    {
        pkts_from_ob_to_port = value;
        pkts_from_ob_to_port.value_namespace = name_space;
        pkts_from_ob_to_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eg-mc-rate")
    {
        eg_mc_rate = value;
        eg_mc_rate.value_namespace = name_space;
        eg_mc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkts-truncated")
    {
        pkts_truncated.yfilter = yfilter;
    }
    if(value_path == "pkts-from-ob-to-port")
    {
        pkts_from_ob_to_port.yfilter = yfilter;
    }
    if(value_path == "eg-mc-rate")
    {
        eg_mc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkts-truncated" || name == "pkts-from-ob-to-port" || name == "eg-mc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::CflMiscStats()
    :
    ecc_corr_err{YType::uint64, "ecc-corr-err"},
    ecc_uncorr_err{YType::uint64, "ecc-uncorr-err"},
    ecc_raw_corr_err{YType::uint64, "ecc-raw-corr-err"},
    ecc_raw_uncorr_err{YType::uint64, "ecc-raw-uncorr-err"},
    eg_total_rate{YType::uint64, "eg-total-rate"}
{

    yang_name = "cfl-misc-stats"; yang_parent_name = "cfl-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::~CflMiscStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::has_data() const
{
    if (is_presence_container) return true;
    return ecc_corr_err.is_set
	|| ecc_uncorr_err.is_set
	|| ecc_raw_corr_err.is_set
	|| ecc_raw_uncorr_err.is_set
	|| eg_total_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecc_corr_err.yfilter)
	|| ydk::is_set(ecc_uncorr_err.yfilter)
	|| ydk::is_set(ecc_raw_corr_err.yfilter)
	|| ydk::is_set(ecc_raw_uncorr_err.yfilter)
	|| ydk::is_set(eg_total_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfl-misc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecc_corr_err.is_set || is_set(ecc_corr_err.yfilter)) leaf_name_data.push_back(ecc_corr_err.get_name_leafdata());
    if (ecc_uncorr_err.is_set || is_set(ecc_uncorr_err.yfilter)) leaf_name_data.push_back(ecc_uncorr_err.get_name_leafdata());
    if (ecc_raw_corr_err.is_set || is_set(ecc_raw_corr_err.yfilter)) leaf_name_data.push_back(ecc_raw_corr_err.get_name_leafdata());
    if (ecc_raw_uncorr_err.is_set || is_set(ecc_raw_uncorr_err.yfilter)) leaf_name_data.push_back(ecc_raw_uncorr_err.get_name_leafdata());
    if (eg_total_rate.is_set || is_set(eg_total_rate.yfilter)) leaf_name_data.push_back(eg_total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecc-corr-err")
    {
        ecc_corr_err = value;
        ecc_corr_err.value_namespace = name_space;
        ecc_corr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-uncorr-err")
    {
        ecc_uncorr_err = value;
        ecc_uncorr_err.value_namespace = name_space;
        ecc_uncorr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-raw-corr-err")
    {
        ecc_raw_corr_err = value;
        ecc_raw_corr_err.value_namespace = name_space;
        ecc_raw_corr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-raw-uncorr-err")
    {
        ecc_raw_uncorr_err = value;
        ecc_raw_uncorr_err.value_namespace = name_space;
        ecc_raw_uncorr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eg-total-rate")
    {
        eg_total_rate = value;
        eg_total_rate.value_namespace = name_space;
        eg_total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecc-corr-err")
    {
        ecc_corr_err.yfilter = yfilter;
    }
    if(value_path == "ecc-uncorr-err")
    {
        ecc_uncorr_err.yfilter = yfilter;
    }
    if(value_path == "ecc-raw-corr-err")
    {
        ecc_raw_corr_err.yfilter = yfilter;
    }
    if(value_path == "ecc-raw-uncorr-err")
    {
        ecc_raw_uncorr_err.yfilter = yfilter;
    }
    if(value_path == "eg-total-rate")
    {
        eg_total_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::EgStats::CflStats::CflMiscStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ecc-corr-err" || name == "ecc-uncorr-err" || name == "ecc-raw-corr-err" || name == "ecc-raw-uncorr-err" || name == "eg-total-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::XpsStats()
    :
    uc_timer_drop{YType::uint64, "uc-timer-drop"},
    uc_timer_truncate{YType::uint64, "uc-timer-truncate"},
    mc_timer_drop{YType::uint64, "mc-timer-drop"},
    mc_timer_truncate{YType::uint64, "mc-timer-truncate"}
{

    yang_name = "xps-stats"; yang_parent_name = "skb-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::~XpsStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::has_data() const
{
    if (is_presence_container) return true;
    return uc_timer_drop.is_set
	|| uc_timer_truncate.is_set
	|| mc_timer_drop.is_set
	|| mc_timer_truncate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uc_timer_drop.yfilter)
	|| ydk::is_set(uc_timer_truncate.yfilter)
	|| ydk::is_set(mc_timer_drop.yfilter)
	|| ydk::is_set(mc_timer_truncate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xps-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uc_timer_drop.is_set || is_set(uc_timer_drop.yfilter)) leaf_name_data.push_back(uc_timer_drop.get_name_leafdata());
    if (uc_timer_truncate.is_set || is_set(uc_timer_truncate.yfilter)) leaf_name_data.push_back(uc_timer_truncate.get_name_leafdata());
    if (mc_timer_drop.is_set || is_set(mc_timer_drop.yfilter)) leaf_name_data.push_back(mc_timer_drop.get_name_leafdata());
    if (mc_timer_truncate.is_set || is_set(mc_timer_truncate.yfilter)) leaf_name_data.push_back(mc_timer_truncate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uc-timer-drop")
    {
        uc_timer_drop = value;
        uc_timer_drop.value_namespace = name_space;
        uc_timer_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc-timer-truncate")
    {
        uc_timer_truncate = value;
        uc_timer_truncate.value_namespace = name_space;
        uc_timer_truncate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mc-timer-drop")
    {
        mc_timer_drop = value;
        mc_timer_drop.value_namespace = name_space;
        mc_timer_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mc-timer-truncate")
    {
        mc_timer_truncate = value;
        mc_timer_truncate.value_namespace = name_space;
        mc_timer_truncate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uc-timer-drop")
    {
        uc_timer_drop.yfilter = yfilter;
    }
    if(value_path == "uc-timer-truncate")
    {
        uc_timer_truncate.yfilter = yfilter;
    }
    if(value_path == "mc-timer-drop")
    {
        mc_timer_drop.yfilter = yfilter;
    }
    if(value_path == "mc-timer-truncate")
    {
        mc_timer_truncate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::SkbStats::SkbStat::XpsStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uc-timer-drop" || name == "uc-timer-truncate" || name == "mc-timer-drop" || name == "mc-timer-truncate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStats()
    :
    pkt_stat(this, {})
{

    yang_name = "pkt-stats"; yang_parent_name = "cross-bar-table"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::~PktStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pkt_stat.len(); index++)
    {
        if(pkt_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::has_operation() const
{
    for (std::size_t index=0; index<pkt_stat.len(); index++)
    {
        if(pkt_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-stat")
    {
        auto ent_ = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat>();
        ent_->parent = this;
        pkt_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pkt_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-stat")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::PktStat()
    :
    asic_id{YType::str, "asic-id"},
    port{YType::str, "port"},
    internal_error_count{YType::uint64, "internal-error-count"},
    input_buffer_queued_packet_count_high{YType::uint64, "input-buffer-queued-packet-count-high"},
    ingress_packet_count_since_last_read_high{YType::uint64, "ingress-packet-count-since-last-read-high"},
    ingress_channel_utilization_count_high{YType::uint64, "ingress-channel-utilization-count-high"},
    input_buffer_back_pressure_count_high{YType::uint64, "input-buffer-back-pressure-count-high"},
    xbar_timeout_drop_count_high{YType::uint64, "xbar-timeout-drop-count-high"},
    holdrop_count_high{YType::uint64, "holdrop-count-high"},
    null_fpoe_drop_count_high{YType::uint64, "null-fpoe-drop-count-high"},
    diagnostic_packet_count_high{YType::uint64, "diagnostic-packet-count-high"},
    input_buffer_correctable_ecc_error_count_high{YType::uint64, "input-buffer-correctable-ecc-error-count-high"},
    input_buffer_uncorrectable_ecc_error_count_high{YType::uint64, "input-buffer-uncorrectable-ecc-error-count-high"},
    header_crc_error_count_high{YType::uint64, "header-crc-error-count-high"},
    short_input_header_error_count_high{YType::uint64, "short-input-header-error-count-high"},
    packet_crc_error_count_high{YType::uint64, "packet-crc-error-count-high"},
    short_packet_error_count_high{YType::uint64, "short-packet-error-count-high"},
    output_buffer_queued_packet_count_high{YType::uint64, "output-buffer-queued-packet-count-high"},
    egress_packet_count_since_last_read_high{YType::uint64, "egress-packet-count-since-last-read-high"},
    egress_channel_utilization_count_high{YType::uint64, "egress-channel-utilization-count-high"},
    output_buffer_back_pressure_count_high{YType::uint64, "output-buffer-back-pressure-count-high"},
    output_buffer_correctable_ecc_error_count_high{YType::uint64, "output-buffer-correctable-ecc-error-count-high"},
    output_buffer_uncorrectable_ecc_error_count_high{YType::uint64, "output-buffer-uncorrectable-ecc-error-count-high"},
    fpoedb_correctable_ecc_error_count_high{YType::uint64, "fpoedb-correctable-ecc-error-count-high"},
    fpoedb_uncorrectable_ecc_error_count_high{YType::uint64, "fpoedb-uncorrectable-ecc-error-count-high"},
    input_buffer_queued_packet_count_low{YType::uint64, "input-buffer-queued-packet-count-low"},
    ingress_packet_count_since_last_read_low{YType::uint64, "ingress-packet-count-since-last-read-low"},
    ingress_channel_utilization_count_low{YType::uint64, "ingress-channel-utilization-count-low"},
    input_buffer_back_pressure_count_low{YType::uint64, "input-buffer-back-pressure-count-low"},
    xbar_timeout_drop_count_low{YType::uint64, "xbar-timeout-drop-count-low"},
    holdrop_count_low{YType::uint64, "holdrop-count-low"},
    null_fpoe_drop_count_low{YType::uint64, "null-fpoe-drop-count-low"},
    diagnostic_packet_count_low{YType::uint64, "diagnostic-packet-count-low"},
    input_buffer_correctable_ecc_error_count_low{YType::uint64, "input-buffer-correctable-ecc-error-count-low"},
    input_buffer_uncorrectable_ecc_error_count_low{YType::uint64, "input-buffer-uncorrectable-ecc-error-count-low"},
    header_crc_error_count_low{YType::uint64, "header-crc-error-count-low"},
    short_input_header_error_count_low{YType::uint64, "short-input-header-error-count-low"},
    packet_crc_error_count_low{YType::uint64, "packet-crc-error-count-low"},
    short_packet_error_count_low{YType::uint64, "short-packet-error-count-low"},
    output_buffer_queued_packet_count_low{YType::uint64, "output-buffer-queued-packet-count-low"},
    egress_packet_count_since_last_read_low{YType::uint64, "egress-packet-count-since-last-read-low"},
    egress_channel_utilization_count_low{YType::uint64, "egress-channel-utilization-count-low"},
    output_buffer_back_pressure_count_low{YType::uint64, "output-buffer-back-pressure-count-low"},
    output_buffer_correctable_ecc_error_count_low{YType::uint64, "output-buffer-correctable-ecc-error-count-low"},
    output_buffer_uncorrectable_ecc_error_count_low{YType::uint64, "output-buffer-uncorrectable-ecc-error-count-low"},
    fpoedb_correctable_ecc_error_count_low{YType::uint64, "fpoedb-correctable-ecc-error-count-low"},
    fpoedb_uncorrectable_ecc_error_count_low{YType::uint64, "fpoedb-uncorrectable-ecc-error-count-low"}
{

    yang_name = "pkt-stat"; yang_parent_name = "pkt-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::~PktStat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_data() const
{
    if (is_presence_container) return true;
    return asic_id.is_set
	|| port.is_set
	|| internal_error_count.is_set
	|| input_buffer_queued_packet_count_high.is_set
	|| ingress_packet_count_since_last_read_high.is_set
	|| ingress_channel_utilization_count_high.is_set
	|| input_buffer_back_pressure_count_high.is_set
	|| xbar_timeout_drop_count_high.is_set
	|| holdrop_count_high.is_set
	|| null_fpoe_drop_count_high.is_set
	|| diagnostic_packet_count_high.is_set
	|| input_buffer_correctable_ecc_error_count_high.is_set
	|| input_buffer_uncorrectable_ecc_error_count_high.is_set
	|| header_crc_error_count_high.is_set
	|| short_input_header_error_count_high.is_set
	|| packet_crc_error_count_high.is_set
	|| short_packet_error_count_high.is_set
	|| output_buffer_queued_packet_count_high.is_set
	|| egress_packet_count_since_last_read_high.is_set
	|| egress_channel_utilization_count_high.is_set
	|| output_buffer_back_pressure_count_high.is_set
	|| output_buffer_correctable_ecc_error_count_high.is_set
	|| output_buffer_uncorrectable_ecc_error_count_high.is_set
	|| fpoedb_correctable_ecc_error_count_high.is_set
	|| fpoedb_uncorrectable_ecc_error_count_high.is_set
	|| input_buffer_queued_packet_count_low.is_set
	|| ingress_packet_count_since_last_read_low.is_set
	|| ingress_channel_utilization_count_low.is_set
	|| input_buffer_back_pressure_count_low.is_set
	|| xbar_timeout_drop_count_low.is_set
	|| holdrop_count_low.is_set
	|| null_fpoe_drop_count_low.is_set
	|| diagnostic_packet_count_low.is_set
	|| input_buffer_correctable_ecc_error_count_low.is_set
	|| input_buffer_uncorrectable_ecc_error_count_low.is_set
	|| header_crc_error_count_low.is_set
	|| short_input_header_error_count_low.is_set
	|| packet_crc_error_count_low.is_set
	|| short_packet_error_count_low.is_set
	|| output_buffer_queued_packet_count_low.is_set
	|| egress_packet_count_since_last_read_low.is_set
	|| egress_channel_utilization_count_low.is_set
	|| output_buffer_back_pressure_count_low.is_set
	|| output_buffer_correctable_ecc_error_count_low.is_set
	|| output_buffer_uncorrectable_ecc_error_count_low.is_set
	|| fpoedb_correctable_ecc_error_count_low.is_set
	|| fpoedb_uncorrectable_ecc_error_count_low.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_id.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(input_buffer_queued_packet_count_high.yfilter)
	|| ydk::is_set(ingress_packet_count_since_last_read_high.yfilter)
	|| ydk::is_set(ingress_channel_utilization_count_high.yfilter)
	|| ydk::is_set(input_buffer_back_pressure_count_high.yfilter)
	|| ydk::is_set(xbar_timeout_drop_count_high.yfilter)
	|| ydk::is_set(holdrop_count_high.yfilter)
	|| ydk::is_set(null_fpoe_drop_count_high.yfilter)
	|| ydk::is_set(diagnostic_packet_count_high.yfilter)
	|| ydk::is_set(input_buffer_correctable_ecc_error_count_high.yfilter)
	|| ydk::is_set(input_buffer_uncorrectable_ecc_error_count_high.yfilter)
	|| ydk::is_set(header_crc_error_count_high.yfilter)
	|| ydk::is_set(short_input_header_error_count_high.yfilter)
	|| ydk::is_set(packet_crc_error_count_high.yfilter)
	|| ydk::is_set(short_packet_error_count_high.yfilter)
	|| ydk::is_set(output_buffer_queued_packet_count_high.yfilter)
	|| ydk::is_set(egress_packet_count_since_last_read_high.yfilter)
	|| ydk::is_set(egress_channel_utilization_count_high.yfilter)
	|| ydk::is_set(output_buffer_back_pressure_count_high.yfilter)
	|| ydk::is_set(output_buffer_correctable_ecc_error_count_high.yfilter)
	|| ydk::is_set(output_buffer_uncorrectable_ecc_error_count_high.yfilter)
	|| ydk::is_set(fpoedb_correctable_ecc_error_count_high.yfilter)
	|| ydk::is_set(fpoedb_uncorrectable_ecc_error_count_high.yfilter)
	|| ydk::is_set(input_buffer_queued_packet_count_low.yfilter)
	|| ydk::is_set(ingress_packet_count_since_last_read_low.yfilter)
	|| ydk::is_set(ingress_channel_utilization_count_low.yfilter)
	|| ydk::is_set(input_buffer_back_pressure_count_low.yfilter)
	|| ydk::is_set(xbar_timeout_drop_count_low.yfilter)
	|| ydk::is_set(holdrop_count_low.yfilter)
	|| ydk::is_set(null_fpoe_drop_count_low.yfilter)
	|| ydk::is_set(diagnostic_packet_count_low.yfilter)
	|| ydk::is_set(input_buffer_correctable_ecc_error_count_low.yfilter)
	|| ydk::is_set(input_buffer_uncorrectable_ecc_error_count_low.yfilter)
	|| ydk::is_set(header_crc_error_count_low.yfilter)
	|| ydk::is_set(short_input_header_error_count_low.yfilter)
	|| ydk::is_set(packet_crc_error_count_low.yfilter)
	|| ydk::is_set(short_packet_error_count_low.yfilter)
	|| ydk::is_set(output_buffer_queued_packet_count_low.yfilter)
	|| ydk::is_set(egress_packet_count_since_last_read_low.yfilter)
	|| ydk::is_set(egress_channel_utilization_count_low.yfilter)
	|| ydk::is_set(output_buffer_back_pressure_count_low.yfilter)
	|| ydk::is_set(output_buffer_correctable_ecc_error_count_low.yfilter)
	|| ydk::is_set(output_buffer_uncorrectable_ecc_error_count_low.yfilter)
	|| ydk::is_set(fpoedb_correctable_ecc_error_count_low.yfilter)
	|| ydk::is_set(fpoedb_uncorrectable_ecc_error_count_low.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.yfilter)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (input_buffer_queued_packet_count_high.is_set || is_set(input_buffer_queued_packet_count_high.yfilter)) leaf_name_data.push_back(input_buffer_queued_packet_count_high.get_name_leafdata());
    if (ingress_packet_count_since_last_read_high.is_set || is_set(ingress_packet_count_since_last_read_high.yfilter)) leaf_name_data.push_back(ingress_packet_count_since_last_read_high.get_name_leafdata());
    if (ingress_channel_utilization_count_high.is_set || is_set(ingress_channel_utilization_count_high.yfilter)) leaf_name_data.push_back(ingress_channel_utilization_count_high.get_name_leafdata());
    if (input_buffer_back_pressure_count_high.is_set || is_set(input_buffer_back_pressure_count_high.yfilter)) leaf_name_data.push_back(input_buffer_back_pressure_count_high.get_name_leafdata());
    if (xbar_timeout_drop_count_high.is_set || is_set(xbar_timeout_drop_count_high.yfilter)) leaf_name_data.push_back(xbar_timeout_drop_count_high.get_name_leafdata());
    if (holdrop_count_high.is_set || is_set(holdrop_count_high.yfilter)) leaf_name_data.push_back(holdrop_count_high.get_name_leafdata());
    if (null_fpoe_drop_count_high.is_set || is_set(null_fpoe_drop_count_high.yfilter)) leaf_name_data.push_back(null_fpoe_drop_count_high.get_name_leafdata());
    if (diagnostic_packet_count_high.is_set || is_set(diagnostic_packet_count_high.yfilter)) leaf_name_data.push_back(diagnostic_packet_count_high.get_name_leafdata());
    if (input_buffer_correctable_ecc_error_count_high.is_set || is_set(input_buffer_correctable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(input_buffer_correctable_ecc_error_count_high.get_name_leafdata());
    if (input_buffer_uncorrectable_ecc_error_count_high.is_set || is_set(input_buffer_uncorrectable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(input_buffer_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (header_crc_error_count_high.is_set || is_set(header_crc_error_count_high.yfilter)) leaf_name_data.push_back(header_crc_error_count_high.get_name_leafdata());
    if (short_input_header_error_count_high.is_set || is_set(short_input_header_error_count_high.yfilter)) leaf_name_data.push_back(short_input_header_error_count_high.get_name_leafdata());
    if (packet_crc_error_count_high.is_set || is_set(packet_crc_error_count_high.yfilter)) leaf_name_data.push_back(packet_crc_error_count_high.get_name_leafdata());
    if (short_packet_error_count_high.is_set || is_set(short_packet_error_count_high.yfilter)) leaf_name_data.push_back(short_packet_error_count_high.get_name_leafdata());
    if (output_buffer_queued_packet_count_high.is_set || is_set(output_buffer_queued_packet_count_high.yfilter)) leaf_name_data.push_back(output_buffer_queued_packet_count_high.get_name_leafdata());
    if (egress_packet_count_since_last_read_high.is_set || is_set(egress_packet_count_since_last_read_high.yfilter)) leaf_name_data.push_back(egress_packet_count_since_last_read_high.get_name_leafdata());
    if (egress_channel_utilization_count_high.is_set || is_set(egress_channel_utilization_count_high.yfilter)) leaf_name_data.push_back(egress_channel_utilization_count_high.get_name_leafdata());
    if (output_buffer_back_pressure_count_high.is_set || is_set(output_buffer_back_pressure_count_high.yfilter)) leaf_name_data.push_back(output_buffer_back_pressure_count_high.get_name_leafdata());
    if (output_buffer_correctable_ecc_error_count_high.is_set || is_set(output_buffer_correctable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(output_buffer_correctable_ecc_error_count_high.get_name_leafdata());
    if (output_buffer_uncorrectable_ecc_error_count_high.is_set || is_set(output_buffer_uncorrectable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(output_buffer_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (fpoedb_correctable_ecc_error_count_high.is_set || is_set(fpoedb_correctable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(fpoedb_correctable_ecc_error_count_high.get_name_leafdata());
    if (fpoedb_uncorrectable_ecc_error_count_high.is_set || is_set(fpoedb_uncorrectable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(fpoedb_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (input_buffer_queued_packet_count_low.is_set || is_set(input_buffer_queued_packet_count_low.yfilter)) leaf_name_data.push_back(input_buffer_queued_packet_count_low.get_name_leafdata());
    if (ingress_packet_count_since_last_read_low.is_set || is_set(ingress_packet_count_since_last_read_low.yfilter)) leaf_name_data.push_back(ingress_packet_count_since_last_read_low.get_name_leafdata());
    if (ingress_channel_utilization_count_low.is_set || is_set(ingress_channel_utilization_count_low.yfilter)) leaf_name_data.push_back(ingress_channel_utilization_count_low.get_name_leafdata());
    if (input_buffer_back_pressure_count_low.is_set || is_set(input_buffer_back_pressure_count_low.yfilter)) leaf_name_data.push_back(input_buffer_back_pressure_count_low.get_name_leafdata());
    if (xbar_timeout_drop_count_low.is_set || is_set(xbar_timeout_drop_count_low.yfilter)) leaf_name_data.push_back(xbar_timeout_drop_count_low.get_name_leafdata());
    if (holdrop_count_low.is_set || is_set(holdrop_count_low.yfilter)) leaf_name_data.push_back(holdrop_count_low.get_name_leafdata());
    if (null_fpoe_drop_count_low.is_set || is_set(null_fpoe_drop_count_low.yfilter)) leaf_name_data.push_back(null_fpoe_drop_count_low.get_name_leafdata());
    if (diagnostic_packet_count_low.is_set || is_set(diagnostic_packet_count_low.yfilter)) leaf_name_data.push_back(diagnostic_packet_count_low.get_name_leafdata());
    if (input_buffer_correctable_ecc_error_count_low.is_set || is_set(input_buffer_correctable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(input_buffer_correctable_ecc_error_count_low.get_name_leafdata());
    if (input_buffer_uncorrectable_ecc_error_count_low.is_set || is_set(input_buffer_uncorrectable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(input_buffer_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (header_crc_error_count_low.is_set || is_set(header_crc_error_count_low.yfilter)) leaf_name_data.push_back(header_crc_error_count_low.get_name_leafdata());
    if (short_input_header_error_count_low.is_set || is_set(short_input_header_error_count_low.yfilter)) leaf_name_data.push_back(short_input_header_error_count_low.get_name_leafdata());
    if (packet_crc_error_count_low.is_set || is_set(packet_crc_error_count_low.yfilter)) leaf_name_data.push_back(packet_crc_error_count_low.get_name_leafdata());
    if (short_packet_error_count_low.is_set || is_set(short_packet_error_count_low.yfilter)) leaf_name_data.push_back(short_packet_error_count_low.get_name_leafdata());
    if (output_buffer_queued_packet_count_low.is_set || is_set(output_buffer_queued_packet_count_low.yfilter)) leaf_name_data.push_back(output_buffer_queued_packet_count_low.get_name_leafdata());
    if (egress_packet_count_since_last_read_low.is_set || is_set(egress_packet_count_since_last_read_low.yfilter)) leaf_name_data.push_back(egress_packet_count_since_last_read_low.get_name_leafdata());
    if (egress_channel_utilization_count_low.is_set || is_set(egress_channel_utilization_count_low.yfilter)) leaf_name_data.push_back(egress_channel_utilization_count_low.get_name_leafdata());
    if (output_buffer_back_pressure_count_low.is_set || is_set(output_buffer_back_pressure_count_low.yfilter)) leaf_name_data.push_back(output_buffer_back_pressure_count_low.get_name_leafdata());
    if (output_buffer_correctable_ecc_error_count_low.is_set || is_set(output_buffer_correctable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(output_buffer_correctable_ecc_error_count_low.get_name_leafdata());
    if (output_buffer_uncorrectable_ecc_error_count_low.is_set || is_set(output_buffer_uncorrectable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(output_buffer_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (fpoedb_correctable_ecc_error_count_low.is_set || is_set(fpoedb_correctable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(fpoedb_correctable_ecc_error_count_low.get_name_leafdata());
    if (fpoedb_uncorrectable_ecc_error_count_low.is_set || is_set(fpoedb_uncorrectable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(fpoedb_uncorrectable_ecc_error_count_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
        asic_id.value_namespace = name_space;
        asic_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-queued-packet-count-high")
    {
        input_buffer_queued_packet_count_high = value;
        input_buffer_queued_packet_count_high.value_namespace = name_space;
        input_buffer_queued_packet_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-packet-count-since-last-read-high")
    {
        ingress_packet_count_since_last_read_high = value;
        ingress_packet_count_since_last_read_high.value_namespace = name_space;
        ingress_packet_count_since_last_read_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-channel-utilization-count-high")
    {
        ingress_channel_utilization_count_high = value;
        ingress_channel_utilization_count_high.value_namespace = name_space;
        ingress_channel_utilization_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-back-pressure-count-high")
    {
        input_buffer_back_pressure_count_high = value;
        input_buffer_back_pressure_count_high.value_namespace = name_space;
        input_buffer_back_pressure_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-timeout-drop-count-high")
    {
        xbar_timeout_drop_count_high = value;
        xbar_timeout_drop_count_high.value_namespace = name_space;
        xbar_timeout_drop_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdrop-count-high")
    {
        holdrop_count_high = value;
        holdrop_count_high.value_namespace = name_space;
        holdrop_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-fpoe-drop-count-high")
    {
        null_fpoe_drop_count_high = value;
        null_fpoe_drop_count_high.value_namespace = name_space;
        null_fpoe_drop_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic-packet-count-high")
    {
        diagnostic_packet_count_high = value;
        diagnostic_packet_count_high.value_namespace = name_space;
        diagnostic_packet_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-high")
    {
        input_buffer_correctable_ecc_error_count_high = value;
        input_buffer_correctable_ecc_error_count_high.value_namespace = name_space;
        input_buffer_correctable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-high")
    {
        input_buffer_uncorrectable_ecc_error_count_high = value;
        input_buffer_uncorrectable_ecc_error_count_high.value_namespace = name_space;
        input_buffer_uncorrectable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-crc-error-count-high")
    {
        header_crc_error_count_high = value;
        header_crc_error_count_high.value_namespace = name_space;
        header_crc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-input-header-error-count-high")
    {
        short_input_header_error_count_high = value;
        short_input_header_error_count_high.value_namespace = name_space;
        short_input_header_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-crc-error-count-high")
    {
        packet_crc_error_count_high = value;
        packet_crc_error_count_high.value_namespace = name_space;
        packet_crc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-packet-error-count-high")
    {
        short_packet_error_count_high = value;
        short_packet_error_count_high.value_namespace = name_space;
        short_packet_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-queued-packet-count-high")
    {
        output_buffer_queued_packet_count_high = value;
        output_buffer_queued_packet_count_high.value_namespace = name_space;
        output_buffer_queued_packet_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-packet-count-since-last-read-high")
    {
        egress_packet_count_since_last_read_high = value;
        egress_packet_count_since_last_read_high.value_namespace = name_space;
        egress_packet_count_since_last_read_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-channel-utilization-count-high")
    {
        egress_channel_utilization_count_high = value;
        egress_channel_utilization_count_high.value_namespace = name_space;
        egress_channel_utilization_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-back-pressure-count-high")
    {
        output_buffer_back_pressure_count_high = value;
        output_buffer_back_pressure_count_high.value_namespace = name_space;
        output_buffer_back_pressure_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-high")
    {
        output_buffer_correctable_ecc_error_count_high = value;
        output_buffer_correctable_ecc_error_count_high.value_namespace = name_space;
        output_buffer_correctable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-high")
    {
        output_buffer_uncorrectable_ecc_error_count_high = value;
        output_buffer_uncorrectable_ecc_error_count_high.value_namespace = name_space;
        output_buffer_uncorrectable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-high")
    {
        fpoedb_correctable_ecc_error_count_high = value;
        fpoedb_correctable_ecc_error_count_high.value_namespace = name_space;
        fpoedb_correctable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-high")
    {
        fpoedb_uncorrectable_ecc_error_count_high = value;
        fpoedb_uncorrectable_ecc_error_count_high.value_namespace = name_space;
        fpoedb_uncorrectable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-queued-packet-count-low")
    {
        input_buffer_queued_packet_count_low = value;
        input_buffer_queued_packet_count_low.value_namespace = name_space;
        input_buffer_queued_packet_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-packet-count-since-last-read-low")
    {
        ingress_packet_count_since_last_read_low = value;
        ingress_packet_count_since_last_read_low.value_namespace = name_space;
        ingress_packet_count_since_last_read_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-channel-utilization-count-low")
    {
        ingress_channel_utilization_count_low = value;
        ingress_channel_utilization_count_low.value_namespace = name_space;
        ingress_channel_utilization_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-back-pressure-count-low")
    {
        input_buffer_back_pressure_count_low = value;
        input_buffer_back_pressure_count_low.value_namespace = name_space;
        input_buffer_back_pressure_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-timeout-drop-count-low")
    {
        xbar_timeout_drop_count_low = value;
        xbar_timeout_drop_count_low.value_namespace = name_space;
        xbar_timeout_drop_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdrop-count-low")
    {
        holdrop_count_low = value;
        holdrop_count_low.value_namespace = name_space;
        holdrop_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-fpoe-drop-count-low")
    {
        null_fpoe_drop_count_low = value;
        null_fpoe_drop_count_low.value_namespace = name_space;
        null_fpoe_drop_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic-packet-count-low")
    {
        diagnostic_packet_count_low = value;
        diagnostic_packet_count_low.value_namespace = name_space;
        diagnostic_packet_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-low")
    {
        input_buffer_correctable_ecc_error_count_low = value;
        input_buffer_correctable_ecc_error_count_low.value_namespace = name_space;
        input_buffer_correctable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-low")
    {
        input_buffer_uncorrectable_ecc_error_count_low = value;
        input_buffer_uncorrectable_ecc_error_count_low.value_namespace = name_space;
        input_buffer_uncorrectable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-crc-error-count-low")
    {
        header_crc_error_count_low = value;
        header_crc_error_count_low.value_namespace = name_space;
        header_crc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-input-header-error-count-low")
    {
        short_input_header_error_count_low = value;
        short_input_header_error_count_low.value_namespace = name_space;
        short_input_header_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-crc-error-count-low")
    {
        packet_crc_error_count_low = value;
        packet_crc_error_count_low.value_namespace = name_space;
        packet_crc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-packet-error-count-low")
    {
        short_packet_error_count_low = value;
        short_packet_error_count_low.value_namespace = name_space;
        short_packet_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-queued-packet-count-low")
    {
        output_buffer_queued_packet_count_low = value;
        output_buffer_queued_packet_count_low.value_namespace = name_space;
        output_buffer_queued_packet_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-packet-count-since-last-read-low")
    {
        egress_packet_count_since_last_read_low = value;
        egress_packet_count_since_last_read_low.value_namespace = name_space;
        egress_packet_count_since_last_read_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-channel-utilization-count-low")
    {
        egress_channel_utilization_count_low = value;
        egress_channel_utilization_count_low.value_namespace = name_space;
        egress_channel_utilization_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-back-pressure-count-low")
    {
        output_buffer_back_pressure_count_low = value;
        output_buffer_back_pressure_count_low.value_namespace = name_space;
        output_buffer_back_pressure_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-low")
    {
        output_buffer_correctable_ecc_error_count_low = value;
        output_buffer_correctable_ecc_error_count_low.value_namespace = name_space;
        output_buffer_correctable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-low")
    {
        output_buffer_uncorrectable_ecc_error_count_low = value;
        output_buffer_uncorrectable_ecc_error_count_low.value_namespace = name_space;
        output_buffer_uncorrectable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-low")
    {
        fpoedb_correctable_ecc_error_count_low = value;
        fpoedb_correctable_ecc_error_count_low.value_namespace = name_space;
        fpoedb_correctable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-low")
    {
        fpoedb_uncorrectable_ecc_error_count_low = value;
        fpoedb_uncorrectable_ecc_error_count_low.value_namespace = name_space;
        fpoedb_uncorrectable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-id")
    {
        asic_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "input-buffer-queued-packet-count-high")
    {
        input_buffer_queued_packet_count_high.yfilter = yfilter;
    }
    if(value_path == "ingress-packet-count-since-last-read-high")
    {
        ingress_packet_count_since_last_read_high.yfilter = yfilter;
    }
    if(value_path == "ingress-channel-utilization-count-high")
    {
        ingress_channel_utilization_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-back-pressure-count-high")
    {
        input_buffer_back_pressure_count_high.yfilter = yfilter;
    }
    if(value_path == "xbar-timeout-drop-count-high")
    {
        xbar_timeout_drop_count_high.yfilter = yfilter;
    }
    if(value_path == "holdrop-count-high")
    {
        holdrop_count_high.yfilter = yfilter;
    }
    if(value_path == "null-fpoe-drop-count-high")
    {
        null_fpoe_drop_count_high.yfilter = yfilter;
    }
    if(value_path == "diagnostic-packet-count-high")
    {
        diagnostic_packet_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-high")
    {
        input_buffer_correctable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-high")
    {
        input_buffer_uncorrectable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "header-crc-error-count-high")
    {
        header_crc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "short-input-header-error-count-high")
    {
        short_input_header_error_count_high.yfilter = yfilter;
    }
    if(value_path == "packet-crc-error-count-high")
    {
        packet_crc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "short-packet-error-count-high")
    {
        short_packet_error_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-queued-packet-count-high")
    {
        output_buffer_queued_packet_count_high.yfilter = yfilter;
    }
    if(value_path == "egress-packet-count-since-last-read-high")
    {
        egress_packet_count_since_last_read_high.yfilter = yfilter;
    }
    if(value_path == "egress-channel-utilization-count-high")
    {
        egress_channel_utilization_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-back-pressure-count-high")
    {
        output_buffer_back_pressure_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-high")
    {
        output_buffer_correctable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-high")
    {
        output_buffer_uncorrectable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-high")
    {
        fpoedb_correctable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-high")
    {
        fpoedb_uncorrectable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-queued-packet-count-low")
    {
        input_buffer_queued_packet_count_low.yfilter = yfilter;
    }
    if(value_path == "ingress-packet-count-since-last-read-low")
    {
        ingress_packet_count_since_last_read_low.yfilter = yfilter;
    }
    if(value_path == "ingress-channel-utilization-count-low")
    {
        ingress_channel_utilization_count_low.yfilter = yfilter;
    }
    if(value_path == "input-buffer-back-pressure-count-low")
    {
        input_buffer_back_pressure_count_low.yfilter = yfilter;
    }
    if(value_path == "xbar-timeout-drop-count-low")
    {
        xbar_timeout_drop_count_low.yfilter = yfilter;
    }
    if(value_path == "holdrop-count-low")
    {
        holdrop_count_low.yfilter = yfilter;
    }
    if(value_path == "null-fpoe-drop-count-low")
    {
        null_fpoe_drop_count_low.yfilter = yfilter;
    }
    if(value_path == "diagnostic-packet-count-low")
    {
        diagnostic_packet_count_low.yfilter = yfilter;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-low")
    {
        input_buffer_correctable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-low")
    {
        input_buffer_uncorrectable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "header-crc-error-count-low")
    {
        header_crc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "short-input-header-error-count-low")
    {
        short_input_header_error_count_low.yfilter = yfilter;
    }
    if(value_path == "packet-crc-error-count-low")
    {
        packet_crc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "short-packet-error-count-low")
    {
        short_packet_error_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-queued-packet-count-low")
    {
        output_buffer_queued_packet_count_low.yfilter = yfilter;
    }
    if(value_path == "egress-packet-count-since-last-read-low")
    {
        egress_packet_count_since_last_read_low.yfilter = yfilter;
    }
    if(value_path == "egress-channel-utilization-count-low")
    {
        egress_channel_utilization_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-back-pressure-count-low")
    {
        output_buffer_back_pressure_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-low")
    {
        output_buffer_correctable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-low")
    {
        output_buffer_uncorrectable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-low")
    {
        fpoedb_correctable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-low")
    {
        fpoedb_uncorrectable_ecc_error_count_low.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "port" || name == "internal-error-count" || name == "input-buffer-queued-packet-count-high" || name == "ingress-packet-count-since-last-read-high" || name == "ingress-channel-utilization-count-high" || name == "input-buffer-back-pressure-count-high" || name == "xbar-timeout-drop-count-high" || name == "holdrop-count-high" || name == "null-fpoe-drop-count-high" || name == "diagnostic-packet-count-high" || name == "input-buffer-correctable-ecc-error-count-high" || name == "input-buffer-uncorrectable-ecc-error-count-high" || name == "header-crc-error-count-high" || name == "short-input-header-error-count-high" || name == "packet-crc-error-count-high" || name == "short-packet-error-count-high" || name == "output-buffer-queued-packet-count-high" || name == "egress-packet-count-since-last-read-high" || name == "egress-channel-utilization-count-high" || name == "output-buffer-back-pressure-count-high" || name == "output-buffer-correctable-ecc-error-count-high" || name == "output-buffer-uncorrectable-ecc-error-count-high" || name == "fpoedb-correctable-ecc-error-count-high" || name == "fpoedb-uncorrectable-ecc-error-count-high" || name == "input-buffer-queued-packet-count-low" || name == "ingress-packet-count-since-last-read-low" || name == "ingress-channel-utilization-count-low" || name == "input-buffer-back-pressure-count-low" || name == "xbar-timeout-drop-count-low" || name == "holdrop-count-low" || name == "null-fpoe-drop-count-low" || name == "diagnostic-packet-count-low" || name == "input-buffer-correctable-ecc-error-count-low" || name == "input-buffer-uncorrectable-ecc-error-count-low" || name == "header-crc-error-count-low" || name == "short-input-header-error-count-low" || name == "packet-crc-error-count-low" || name == "short-packet-error-count-low" || name == "output-buffer-queued-packet-count-low" || name == "egress-packet-count-since-last-read-low" || name == "egress-channel-utilization-count-low" || name == "output-buffer-back-pressure-count-low" || name == "output-buffer-correctable-ecc-error-count-low" || name == "output-buffer-uncorrectable-ecc-error-count-low" || name == "fpoedb-correctable-ecc-error-count-low" || name == "fpoedb-uncorrectable-ecc-error-count-low")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stats()
    :
    sm15_stat(this, {})
{

    yang_name = "sm15-stats"; yang_parent_name = "cross-bar-table"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::~Sm15Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sm15_stat.len(); index++)
    {
        if(sm15_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::has_operation() const
{
    for (std::size_t index=0; index<sm15_stat.len(); index++)
    {
        if(sm15_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm15-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sm15-stat")
    {
        auto ent_ = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat>();
        ent_->parent = this;
        sm15_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sm15_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sm15-stat")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Sm15Stat()
    :
    asic_id{YType::str, "asic-id"},
    port{YType::str, "port"},
    internal_err_cnt{YType::uint64, "internal-err-cnt"}
        ,
    ua0_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats>())
    , ua1_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats>())
    , ua2_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats>())
    , ma_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats>())
    , ca_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats>())
    , pi_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats>())
    , pe_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats>())
    , pi_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats>())
    , pi_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats>())
    , pi_cc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats>())
    , pe_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats>())
    , pe_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats>())
    , pe_cc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats>())
{
    ua0_stats->parent = this;
    ua1_stats->parent = this;
    ua2_stats->parent = this;
    ma_stats->parent = this;
    ca_stats->parent = this;
    pi_stats->parent = this;
    pe_stats->parent = this;
    pi_uc_stats->parent = this;
    pi_mc_stats->parent = this;
    pi_cc_stats->parent = this;
    pe_uc_stats->parent = this;
    pe_mc_stats->parent = this;
    pe_cc_stats->parent = this;

    yang_name = "sm15-stat"; yang_parent_name = "sm15-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::~Sm15Stat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_data() const
{
    if (is_presence_container) return true;
    return asic_id.is_set
	|| port.is_set
	|| internal_err_cnt.is_set
	|| (ua0_stats !=  nullptr && ua0_stats->has_data())
	|| (ua1_stats !=  nullptr && ua1_stats->has_data())
	|| (ua2_stats !=  nullptr && ua2_stats->has_data())
	|| (ma_stats !=  nullptr && ma_stats->has_data())
	|| (ca_stats !=  nullptr && ca_stats->has_data())
	|| (pi_stats !=  nullptr && pi_stats->has_data())
	|| (pe_stats !=  nullptr && pe_stats->has_data())
	|| (pi_uc_stats !=  nullptr && pi_uc_stats->has_data())
	|| (pi_mc_stats !=  nullptr && pi_mc_stats->has_data())
	|| (pi_cc_stats !=  nullptr && pi_cc_stats->has_data())
	|| (pe_uc_stats !=  nullptr && pe_uc_stats->has_data())
	|| (pe_mc_stats !=  nullptr && pe_mc_stats->has_data())
	|| (pe_cc_stats !=  nullptr && pe_cc_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_id.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(internal_err_cnt.yfilter)
	|| (ua0_stats !=  nullptr && ua0_stats->has_operation())
	|| (ua1_stats !=  nullptr && ua1_stats->has_operation())
	|| (ua2_stats !=  nullptr && ua2_stats->has_operation())
	|| (ma_stats !=  nullptr && ma_stats->has_operation())
	|| (ca_stats !=  nullptr && ca_stats->has_operation())
	|| (pi_stats !=  nullptr && pi_stats->has_operation())
	|| (pe_stats !=  nullptr && pe_stats->has_operation())
	|| (pi_uc_stats !=  nullptr && pi_uc_stats->has_operation())
	|| (pi_mc_stats !=  nullptr && pi_mc_stats->has_operation())
	|| (pi_cc_stats !=  nullptr && pi_cc_stats->has_operation())
	|| (pe_uc_stats !=  nullptr && pe_uc_stats->has_operation())
	|| (pe_mc_stats !=  nullptr && pe_mc_stats->has_operation())
	|| (pe_cc_stats !=  nullptr && pe_cc_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm15-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.yfilter)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (internal_err_cnt.is_set || is_set(internal_err_cnt.yfilter)) leaf_name_data.push_back(internal_err_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ua0-stats")
    {
        if(ua0_stats == nullptr)
        {
            ua0_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats>();
        }
        return ua0_stats;
    }

    if(child_yang_name == "ua1-stats")
    {
        if(ua1_stats == nullptr)
        {
            ua1_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats>();
        }
        return ua1_stats;
    }

    if(child_yang_name == "ua2-stats")
    {
        if(ua2_stats == nullptr)
        {
            ua2_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats>();
        }
        return ua2_stats;
    }

    if(child_yang_name == "ma-stats")
    {
        if(ma_stats == nullptr)
        {
            ma_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats>();
        }
        return ma_stats;
    }

    if(child_yang_name == "ca-stats")
    {
        if(ca_stats == nullptr)
        {
            ca_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats>();
        }
        return ca_stats;
    }

    if(child_yang_name == "pi-stats")
    {
        if(pi_stats == nullptr)
        {
            pi_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats>();
        }
        return pi_stats;
    }

    if(child_yang_name == "pe-stats")
    {
        if(pe_stats == nullptr)
        {
            pe_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats>();
        }
        return pe_stats;
    }

    if(child_yang_name == "pi-uc-stats")
    {
        if(pi_uc_stats == nullptr)
        {
            pi_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats>();
        }
        return pi_uc_stats;
    }

    if(child_yang_name == "pi-mc-stats")
    {
        if(pi_mc_stats == nullptr)
        {
            pi_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats>();
        }
        return pi_mc_stats;
    }

    if(child_yang_name == "pi-cc-stats")
    {
        if(pi_cc_stats == nullptr)
        {
            pi_cc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats>();
        }
        return pi_cc_stats;
    }

    if(child_yang_name == "pe-uc-stats")
    {
        if(pe_uc_stats == nullptr)
        {
            pe_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats>();
        }
        return pe_uc_stats;
    }

    if(child_yang_name == "pe-mc-stats")
    {
        if(pe_mc_stats == nullptr)
        {
            pe_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats>();
        }
        return pe_mc_stats;
    }

    if(child_yang_name == "pe-cc-stats")
    {
        if(pe_cc_stats == nullptr)
        {
            pe_cc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats>();
        }
        return pe_cc_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ua0_stats != nullptr)
    {
        _children["ua0-stats"] = ua0_stats;
    }

    if(ua1_stats != nullptr)
    {
        _children["ua1-stats"] = ua1_stats;
    }

    if(ua2_stats != nullptr)
    {
        _children["ua2-stats"] = ua2_stats;
    }

    if(ma_stats != nullptr)
    {
        _children["ma-stats"] = ma_stats;
    }

    if(ca_stats != nullptr)
    {
        _children["ca-stats"] = ca_stats;
    }

    if(pi_stats != nullptr)
    {
        _children["pi-stats"] = pi_stats;
    }

    if(pe_stats != nullptr)
    {
        _children["pe-stats"] = pe_stats;
    }

    if(pi_uc_stats != nullptr)
    {
        _children["pi-uc-stats"] = pi_uc_stats;
    }

    if(pi_mc_stats != nullptr)
    {
        _children["pi-mc-stats"] = pi_mc_stats;
    }

    if(pi_cc_stats != nullptr)
    {
        _children["pi-cc-stats"] = pi_cc_stats;
    }

    if(pe_uc_stats != nullptr)
    {
        _children["pe-uc-stats"] = pe_uc_stats;
    }

    if(pe_mc_stats != nullptr)
    {
        _children["pe-mc-stats"] = pe_mc_stats;
    }

    if(pe_cc_stats != nullptr)
    {
        _children["pe-cc-stats"] = pe_cc_stats;
    }

    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
        asic_id.value_namespace = name_space;
        asic_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt = value;
        internal_err_cnt.value_namespace = name_space;
        internal_err_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-id")
    {
        asic_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ua0-stats" || name == "ua1-stats" || name == "ua2-stats" || name == "ma-stats" || name == "ca-stats" || name == "pi-stats" || name == "pe-stats" || name == "pi-uc-stats" || name == "pi-mc-stats" || name == "pi-cc-stats" || name == "pe-uc-stats" || name == "pe-mc-stats" || name == "pe-cc-stats" || name == "asic-id" || name == "port" || name == "internal-err-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::Ua0Stats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"}
{

    yang_name = "ua0-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::~Ua0Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_data() const
{
    if (is_presence_container) return true;
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| ack_wait_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(ack_wait_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua0-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.yfilter)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
        ack_wait_cnt.value_namespace = name_space;
        ack_wait_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-fabric-to-cnt" || name == "ack-wait-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::Ua1Stats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"}
{

    yang_name = "ua1-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::~Ua1Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_data() const
{
    if (is_presence_container) return true;
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| ack_wait_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(ack_wait_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua1-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.yfilter)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
        ack_wait_cnt.value_namespace = name_space;
        ack_wait_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-fabric-to-cnt" || name == "ack-wait-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::Ua2Stats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"}
{

    yang_name = "ua2-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::~Ua2Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_data() const
{
    if (is_presence_container) return true;
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| ack_wait_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(ack_wait_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua2-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.yfilter)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
        ack_wait_cnt.value_namespace = name_space;
        ack_wait_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-fabric-to-cnt" || name == "ack-wait-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::MaStats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_re_transmit_cnt{YType::uint64, "rx-re-transmit-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    rx_hol_to_cnt{YType::uint64, "rx-hol-to-cnt"}
{

    yang_name = "ma-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::~MaStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_data() const
{
    if (is_presence_container) return true;
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_re_transmit_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| rx_hol_to_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_re_transmit_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(rx_hol_to_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ma-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_re_transmit_cnt.is_set || is_set(rx_re_transmit_cnt.yfilter)) leaf_name_data.push_back(rx_re_transmit_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (rx_hol_to_cnt.is_set || is_set(rx_hol_to_cnt.yfilter)) leaf_name_data.push_back(rx_hol_to_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-re-transmit-cnt")
    {
        rx_re_transmit_cnt = value;
        rx_re_transmit_cnt.value_namespace = name_space;
        rx_re_transmit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-hol-to-cnt")
    {
        rx_hol_to_cnt = value;
        rx_hol_to_cnt.value_namespace = name_space;
        rx_hol_to_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-re-transmit-cnt")
    {
        rx_re_transmit_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-hol-to-cnt")
    {
        rx_hol_to_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-re-transmit-cnt" || name == "rx-fabric-to-cnt" || name == "rx-hol-to-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::CaStats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"}
{

    yang_name = "ca-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::~CaStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_data() const
{
    if (is_presence_container) return true;
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::PiStats()
    :
    total_rate1_cnt{YType::uint64, "total-rate1-cnt"},
    total_rate2_cnt{YType::uint64, "total-rate2-cnt"},
    total_rate3_cnt{YType::uint64, "total-rate3-cnt"},
    total_calc_rate{YType::uint64, "total-calc-rate"}
{

    yang_name = "pi-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::~PiStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_data() const
{
    if (is_presence_container) return true;
    return total_rate1_cnt.is_set
	|| total_rate2_cnt.is_set
	|| total_rate3_cnt.is_set
	|| total_calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_rate1_cnt.yfilter)
	|| ydk::is_set(total_rate2_cnt.yfilter)
	|| ydk::is_set(total_rate3_cnt.yfilter)
	|| ydk::is_set(total_calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_rate1_cnt.is_set || is_set(total_rate1_cnt.yfilter)) leaf_name_data.push_back(total_rate1_cnt.get_name_leafdata());
    if (total_rate2_cnt.is_set || is_set(total_rate2_cnt.yfilter)) leaf_name_data.push_back(total_rate2_cnt.get_name_leafdata());
    if (total_rate3_cnt.is_set || is_set(total_rate3_cnt.yfilter)) leaf_name_data.push_back(total_rate3_cnt.get_name_leafdata());
    if (total_calc_rate.is_set || is_set(total_calc_rate.yfilter)) leaf_name_data.push_back(total_calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt = value;
        total_rate1_cnt.value_namespace = name_space;
        total_rate1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt = value;
        total_rate2_cnt.value_namespace = name_space;
        total_rate2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt = value;
        total_rate3_cnt.value_namespace = name_space;
        total_rate3_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate = value;
        total_calc_rate.value_namespace = name_space;
        total_calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt.yfilter = yfilter;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-rate1-cnt" || name == "total-rate2-cnt" || name == "total-rate3-cnt" || name == "total-calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::PeStats()
    :
    total_rate1_cnt{YType::uint64, "total-rate1-cnt"},
    total_rate2_cnt{YType::uint64, "total-rate2-cnt"},
    total_rate3_cnt{YType::uint64, "total-rate3-cnt"},
    total_calc_rate{YType::uint64, "total-calc-rate"},
    mc2uc_preempt_cnt{YType::uint64, "mc2uc-preempt-cnt"}
{

    yang_name = "pe-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::~PeStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_data() const
{
    if (is_presence_container) return true;
    return total_rate1_cnt.is_set
	|| total_rate2_cnt.is_set
	|| total_rate3_cnt.is_set
	|| total_calc_rate.is_set
	|| mc2uc_preempt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_rate1_cnt.yfilter)
	|| ydk::is_set(total_rate2_cnt.yfilter)
	|| ydk::is_set(total_rate3_cnt.yfilter)
	|| ydk::is_set(total_calc_rate.yfilter)
	|| ydk::is_set(mc2uc_preempt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_rate1_cnt.is_set || is_set(total_rate1_cnt.yfilter)) leaf_name_data.push_back(total_rate1_cnt.get_name_leafdata());
    if (total_rate2_cnt.is_set || is_set(total_rate2_cnt.yfilter)) leaf_name_data.push_back(total_rate2_cnt.get_name_leafdata());
    if (total_rate3_cnt.is_set || is_set(total_rate3_cnt.yfilter)) leaf_name_data.push_back(total_rate3_cnt.get_name_leafdata());
    if (total_calc_rate.is_set || is_set(total_calc_rate.yfilter)) leaf_name_data.push_back(total_calc_rate.get_name_leafdata());
    if (mc2uc_preempt_cnt.is_set || is_set(mc2uc_preempt_cnt.yfilter)) leaf_name_data.push_back(mc2uc_preempt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt = value;
        total_rate1_cnt.value_namespace = name_space;
        total_rate1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt = value;
        total_rate2_cnt.value_namespace = name_space;
        total_rate2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt = value;
        total_rate3_cnt.value_namespace = name_space;
        total_rate3_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate = value;
        total_calc_rate.value_namespace = name_space;
        total_calc_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mc2uc-preempt-cnt")
    {
        mc2uc_preempt_cnt = value;
        mc2uc_preempt_cnt.value_namespace = name_space;
        mc2uc_preempt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt.yfilter = yfilter;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate.yfilter = yfilter;
    }
    if(value_path == "mc2uc-preempt-cnt")
    {
        mc2uc_preempt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-rate1-cnt" || name == "total-rate2-cnt" || name == "total-rate3-cnt" || name == "total-calc-rate" || name == "mc2uc-preempt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::PiUcStats()
    :
    pkt_rcv_cnt{YType::uint64, "pkt-rcv-cnt"},
    pkt_seq_err_cnt{YType::uint64, "pkt-seq-err-cnt"},
    in_coming_pkt_err_cnt{YType::uint64, "in-coming-pkt-err-cnt"},
    min_pkt_len_err_cnt{YType::uint64, "min-pkt-len-err-cnt"},
    max_pkt_len_err_cnt{YType::uint64, "max-pkt-len-err-cnt"},
    line_err_drp_pkt{YType::uint64, "line-err-drp-pkt"},
    pkt_crc_err_cnt{YType::uint64, "pkt-crc-err-cnt"},
    pkt_cfh_crc_err_cnt{YType::uint64, "pkt-cfh-crc-err-cnt"},
    line_s_written_in_mem0{YType::uint64, "line-s-written-in-mem0"},
    line_s_written_in_mem1{YType::uint64, "line-s-written-in-mem1"},
    line_s_written_in_mem2{YType::uint64, "line-s-written-in-mem2"},
    tail_drp_pkt_cnt{YType::uint64, "tail-drp-pkt-cnt"},
    uc0_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc0-data-mem-ecc-1bit-err-cnt"},
    uc1_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc1-data-mem-ecc-1bit-err-cnt"},
    uc2_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc2-data-mem-ecc-1bit-err-cnt"},
    uc0_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc0-data-mem-ecc-2bit-err-cnt"},
    uc1_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc1-data-mem-ecc-2bit-err-cnt"},
    uc2_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc2-data-mem-ecc-2bit-err-cnt"},
    diag_pkt_cnt{YType::uint64, "diag-pkt-cnt"},
    pkt_sent_to_disabled_port_cnt{YType::uint64, "pkt-sent-to-disabled-port-cnt"},
    pkt_null_poe_sent_ua0_cnt{YType::uint64, "pkt-null-poe-sent-ua0-cnt"},
    pkt_null_poe_sent_ua1_cnt{YType::uint64, "pkt-null-poe-sent-ua1-cnt"},
    pkt_null_poe_sent_ua2_cnt{YType::uint64, "pkt-null-poe-sent-ua2-cnt"},
    pkt_fpoe_addr_rng_hit_cnt{YType::uint64, "pkt-fpoe-addr-rng-hit-cnt"},
    fpoe_mem_ecc_1bit_err_cnt{YType::uint64, "fpoe-mem-ecc-1bit-err-cnt"},
    fpoe_mem_ecc_2bit_err_cnt{YType::uint64, "fpoe-mem-ecc-2bit-err-cnt"},
    pkts_sent_to_ux0_cnt{YType::uint64, "pkts-sent-to-ux0-cnt"},
    pkts_sent_to_ux1_cnt{YType::uint64, "pkts-sent-to-ux1-cnt"},
    pkts_sent_to_ux2_cnt{YType::uint64, "pkts-sent-to-ux2-cnt"},
    cpp_head_drop_pkt_cnt{YType::uint64, "cpp-head-drop-pkt-cnt"},
    tr_head_drop_pkt_cnt{YType::uint64, "tr-head-drop-pkt-cnt"},
    tr_pkt_sent_to_ux{YType::uint64, "tr-pkt-sent-to-ux"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"},
    crc_stomp_pkt_cnt{YType::uint64, "crc-stomp-pkt-cnt"}
{

    yang_name = "pi-uc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::~PiUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_data() const
{
    if (is_presence_container) return true;
    return pkt_rcv_cnt.is_set
	|| pkt_seq_err_cnt.is_set
	|| in_coming_pkt_err_cnt.is_set
	|| min_pkt_len_err_cnt.is_set
	|| max_pkt_len_err_cnt.is_set
	|| line_err_drp_pkt.is_set
	|| pkt_crc_err_cnt.is_set
	|| pkt_cfh_crc_err_cnt.is_set
	|| line_s_written_in_mem0.is_set
	|| line_s_written_in_mem1.is_set
	|| line_s_written_in_mem2.is_set
	|| tail_drp_pkt_cnt.is_set
	|| uc0_data_mem_ecc_1bit_err_cnt.is_set
	|| uc1_data_mem_ecc_1bit_err_cnt.is_set
	|| uc2_data_mem_ecc_1bit_err_cnt.is_set
	|| uc0_data_mem_ecc_2bit_err_cnt.is_set
	|| uc1_data_mem_ecc_2bit_err_cnt.is_set
	|| uc2_data_mem_ecc_2bit_err_cnt.is_set
	|| diag_pkt_cnt.is_set
	|| pkt_sent_to_disabled_port_cnt.is_set
	|| pkt_null_poe_sent_ua0_cnt.is_set
	|| pkt_null_poe_sent_ua1_cnt.is_set
	|| pkt_null_poe_sent_ua2_cnt.is_set
	|| pkt_fpoe_addr_rng_hit_cnt.is_set
	|| fpoe_mem_ecc_1bit_err_cnt.is_set
	|| fpoe_mem_ecc_2bit_err_cnt.is_set
	|| pkts_sent_to_ux0_cnt.is_set
	|| pkts_sent_to_ux1_cnt.is_set
	|| pkts_sent_to_ux2_cnt.is_set
	|| cpp_head_drop_pkt_cnt.is_set
	|| tr_head_drop_pkt_cnt.is_set
	|| tr_pkt_sent_to_ux.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set
	|| crc_stomp_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_rcv_cnt.yfilter)
	|| ydk::is_set(pkt_seq_err_cnt.yfilter)
	|| ydk::is_set(in_coming_pkt_err_cnt.yfilter)
	|| ydk::is_set(min_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(max_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(line_err_drp_pkt.yfilter)
	|| ydk::is_set(pkt_crc_err_cnt.yfilter)
	|| ydk::is_set(pkt_cfh_crc_err_cnt.yfilter)
	|| ydk::is_set(line_s_written_in_mem0.yfilter)
	|| ydk::is_set(line_s_written_in_mem1.yfilter)
	|| ydk::is_set(line_s_written_in_mem2.yfilter)
	|| ydk::is_set(tail_drp_pkt_cnt.yfilter)
	|| ydk::is_set(uc0_data_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(uc1_data_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(uc2_data_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(uc0_data_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(uc1_data_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(uc2_data_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(diag_pkt_cnt.yfilter)
	|| ydk::is_set(pkt_sent_to_disabled_port_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_ua0_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_ua1_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_ua2_cnt.yfilter)
	|| ydk::is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_ux0_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_ux1_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_ux2_cnt.yfilter)
	|| ydk::is_set(cpp_head_drop_pkt_cnt.yfilter)
	|| ydk::is_set(tr_head_drop_pkt_cnt.yfilter)
	|| ydk::is_set(tr_pkt_sent_to_ux.yfilter)
	|| ydk::is_set(stop_thrsh_hit_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter)
	|| ydk::is_set(crc_stomp_pkt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_rcv_cnt.is_set || is_set(pkt_rcv_cnt.yfilter)) leaf_name_data.push_back(pkt_rcv_cnt.get_name_leafdata());
    if (pkt_seq_err_cnt.is_set || is_set(pkt_seq_err_cnt.yfilter)) leaf_name_data.push_back(pkt_seq_err_cnt.get_name_leafdata());
    if (in_coming_pkt_err_cnt.is_set || is_set(in_coming_pkt_err_cnt.yfilter)) leaf_name_data.push_back(in_coming_pkt_err_cnt.get_name_leafdata());
    if (min_pkt_len_err_cnt.is_set || is_set(min_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(min_pkt_len_err_cnt.get_name_leafdata());
    if (max_pkt_len_err_cnt.is_set || is_set(max_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(max_pkt_len_err_cnt.get_name_leafdata());
    if (line_err_drp_pkt.is_set || is_set(line_err_drp_pkt.yfilter)) leaf_name_data.push_back(line_err_drp_pkt.get_name_leafdata());
    if (pkt_crc_err_cnt.is_set || is_set(pkt_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_crc_err_cnt.get_name_leafdata());
    if (pkt_cfh_crc_err_cnt.is_set || is_set(pkt_cfh_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_cfh_crc_err_cnt.get_name_leafdata());
    if (line_s_written_in_mem0.is_set || is_set(line_s_written_in_mem0.yfilter)) leaf_name_data.push_back(line_s_written_in_mem0.get_name_leafdata());
    if (line_s_written_in_mem1.is_set || is_set(line_s_written_in_mem1.yfilter)) leaf_name_data.push_back(line_s_written_in_mem1.get_name_leafdata());
    if (line_s_written_in_mem2.is_set || is_set(line_s_written_in_mem2.yfilter)) leaf_name_data.push_back(line_s_written_in_mem2.get_name_leafdata());
    if (tail_drp_pkt_cnt.is_set || is_set(tail_drp_pkt_cnt.yfilter)) leaf_name_data.push_back(tail_drp_pkt_cnt.get_name_leafdata());
    if (uc0_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc0_data_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(uc0_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc1_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc1_data_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(uc1_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc2_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc2_data_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(uc2_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc0_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc0_data_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(uc0_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (uc1_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc1_data_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(uc1_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (uc2_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc2_data_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(uc2_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (diag_pkt_cnt.is_set || is_set(diag_pkt_cnt.yfilter)) leaf_name_data.push_back(diag_pkt_cnt.get_name_leafdata());
    if (pkt_sent_to_disabled_port_cnt.is_set || is_set(pkt_sent_to_disabled_port_cnt.yfilter)) leaf_name_data.push_back(pkt_sent_to_disabled_port_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua0_cnt.is_set || is_set(pkt_null_poe_sent_ua0_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_ua0_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua1_cnt.is_set || is_set(pkt_null_poe_sent_ua1_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_ua1_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua2_cnt.is_set || is_set(pkt_null_poe_sent_ua2_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_ua2_cnt.get_name_leafdata());
    if (pkt_fpoe_addr_rng_hit_cnt.is_set || is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)) leaf_name_data.push_back(pkt_fpoe_addr_rng_hit_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_1bit_err_cnt.is_set || is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_2bit_err_cnt.is_set || is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (pkts_sent_to_ux0_cnt.is_set || is_set(pkts_sent_to_ux0_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_ux0_cnt.get_name_leafdata());
    if (pkts_sent_to_ux1_cnt.is_set || is_set(pkts_sent_to_ux1_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_ux1_cnt.get_name_leafdata());
    if (pkts_sent_to_ux2_cnt.is_set || is_set(pkts_sent_to_ux2_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_ux2_cnt.get_name_leafdata());
    if (cpp_head_drop_pkt_cnt.is_set || is_set(cpp_head_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(cpp_head_drop_pkt_cnt.get_name_leafdata());
    if (tr_head_drop_pkt_cnt.is_set || is_set(tr_head_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(tr_head_drop_pkt_cnt.get_name_leafdata());
    if (tr_pkt_sent_to_ux.is_set || is_set(tr_pkt_sent_to_ux.yfilter)) leaf_name_data.push_back(tr_pkt_sent_to_ux.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.yfilter)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (crc_stomp_pkt_cnt.is_set || is_set(crc_stomp_pkt_cnt.yfilter)) leaf_name_data.push_back(crc_stomp_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt = value;
        pkt_rcv_cnt.value_namespace = name_space;
        pkt_rcv_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt = value;
        pkt_seq_err_cnt.value_namespace = name_space;
        pkt_seq_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt = value;
        in_coming_pkt_err_cnt.value_namespace = name_space;
        in_coming_pkt_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt = value;
        min_pkt_len_err_cnt.value_namespace = name_space;
        min_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt = value;
        max_pkt_len_err_cnt.value_namespace = name_space;
        max_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt = value;
        line_err_drp_pkt.value_namespace = name_space;
        line_err_drp_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt = value;
        pkt_crc_err_cnt.value_namespace = name_space;
        pkt_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt = value;
        pkt_cfh_crc_err_cnt.value_namespace = name_space;
        pkt_cfh_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem0")
    {
        line_s_written_in_mem0 = value;
        line_s_written_in_mem0.value_namespace = name_space;
        line_s_written_in_mem0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem1")
    {
        line_s_written_in_mem1 = value;
        line_s_written_in_mem1.value_namespace = name_space;
        line_s_written_in_mem1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem2")
    {
        line_s_written_in_mem2 = value;
        line_s_written_in_mem2.value_namespace = name_space;
        line_s_written_in_mem2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt = value;
        tail_drp_pkt_cnt.value_namespace = name_space;
        tail_drp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc0-data-mem-ecc-1bit-err-cnt")
    {
        uc0_data_mem_ecc_1bit_err_cnt = value;
        uc0_data_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        uc0_data_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc1-data-mem-ecc-1bit-err-cnt")
    {
        uc1_data_mem_ecc_1bit_err_cnt = value;
        uc1_data_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        uc1_data_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc2-data-mem-ecc-1bit-err-cnt")
    {
        uc2_data_mem_ecc_1bit_err_cnt = value;
        uc2_data_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        uc2_data_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc0-data-mem-ecc-2bit-err-cnt")
    {
        uc0_data_mem_ecc_2bit_err_cnt = value;
        uc0_data_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        uc0_data_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc1-data-mem-ecc-2bit-err-cnt")
    {
        uc1_data_mem_ecc_2bit_err_cnt = value;
        uc1_data_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        uc1_data_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc2-data-mem-ecc-2bit-err-cnt")
    {
        uc2_data_mem_ecc_2bit_err_cnt = value;
        uc2_data_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        uc2_data_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt = value;
        diag_pkt_cnt.value_namespace = name_space;
        diag_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sent-to-disabled-port-cnt")
    {
        pkt_sent_to_disabled_port_cnt = value;
        pkt_sent_to_disabled_port_cnt.value_namespace = name_space;
        pkt_sent_to_disabled_port_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-ua0-cnt")
    {
        pkt_null_poe_sent_ua0_cnt = value;
        pkt_null_poe_sent_ua0_cnt.value_namespace = name_space;
        pkt_null_poe_sent_ua0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-ua1-cnt")
    {
        pkt_null_poe_sent_ua1_cnt = value;
        pkt_null_poe_sent_ua1_cnt.value_namespace = name_space;
        pkt_null_poe_sent_ua1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-ua2-cnt")
    {
        pkt_null_poe_sent_ua2_cnt = value;
        pkt_null_poe_sent_ua2_cnt.value_namespace = name_space;
        pkt_null_poe_sent_ua2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt = value;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace = name_space;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt = value;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt = value;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-ux0-cnt")
    {
        pkts_sent_to_ux0_cnt = value;
        pkts_sent_to_ux0_cnt.value_namespace = name_space;
        pkts_sent_to_ux0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-ux1-cnt")
    {
        pkts_sent_to_ux1_cnt = value;
        pkts_sent_to_ux1_cnt.value_namespace = name_space;
        pkts_sent_to_ux1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-ux2-cnt")
    {
        pkts_sent_to_ux2_cnt = value;
        pkts_sent_to_ux2_cnt.value_namespace = name_space;
        pkts_sent_to_ux2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpp-head-drop-pkt-cnt")
    {
        cpp_head_drop_pkt_cnt = value;
        cpp_head_drop_pkt_cnt.value_namespace = name_space;
        cpp_head_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-head-drop-pkt-cnt")
    {
        tr_head_drop_pkt_cnt = value;
        tr_head_drop_pkt_cnt.value_namespace = name_space;
        tr_head_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-pkt-sent-to-ux")
    {
        tr_pkt_sent_to_ux = value;
        tr_pkt_sent_to_ux.value_namespace = name_space;
        tr_pkt_sent_to_ux.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
        stop_thrsh_hit_cnt.value_namespace = name_space;
        stop_thrsh_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt = value;
        crc_stomp_pkt_cnt.value_namespace = name_space;
        crc_stomp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt.yfilter = yfilter;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt.yfilter = yfilter;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem0")
    {
        line_s_written_in_mem0.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem1")
    {
        line_s_written_in_mem1.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem2")
    {
        line_s_written_in_mem2.yfilter = yfilter;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "uc0-data-mem-ecc-1bit-err-cnt")
    {
        uc0_data_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc1-data-mem-ecc-1bit-err-cnt")
    {
        uc1_data_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc2-data-mem-ecc-1bit-err-cnt")
    {
        uc2_data_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc0-data-mem-ecc-2bit-err-cnt")
    {
        uc0_data_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc1-data-mem-ecc-2bit-err-cnt")
    {
        uc1_data_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc2-data-mem-ecc-2bit-err-cnt")
    {
        uc2_data_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sent-to-disabled-port-cnt")
    {
        pkt_sent_to_disabled_port_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-ua0-cnt")
    {
        pkt_null_poe_sent_ua0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-ua1-cnt")
    {
        pkt_null_poe_sent_ua1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-ua2-cnt")
    {
        pkt_null_poe_sent_ua2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-ux0-cnt")
    {
        pkts_sent_to_ux0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-ux1-cnt")
    {
        pkts_sent_to_ux1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-ux2-cnt")
    {
        pkts_sent_to_ux2_cnt.yfilter = yfilter;
    }
    if(value_path == "cpp-head-drop-pkt-cnt")
    {
        cpp_head_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-head-drop-pkt-cnt")
    {
        tr_head_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-pkt-sent-to-ux")
    {
        tr_pkt_sent_to_ux.yfilter = yfilter;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-rcv-cnt" || name == "pkt-seq-err-cnt" || name == "in-coming-pkt-err-cnt" || name == "min-pkt-len-err-cnt" || name == "max-pkt-len-err-cnt" || name == "line-err-drp-pkt" || name == "pkt-crc-err-cnt" || name == "pkt-cfh-crc-err-cnt" || name == "line-s-written-in-mem0" || name == "line-s-written-in-mem1" || name == "line-s-written-in-mem2" || name == "tail-drp-pkt-cnt" || name == "uc0-data-mem-ecc-1bit-err-cnt" || name == "uc1-data-mem-ecc-1bit-err-cnt" || name == "uc2-data-mem-ecc-1bit-err-cnt" || name == "uc0-data-mem-ecc-2bit-err-cnt" || name == "uc1-data-mem-ecc-2bit-err-cnt" || name == "uc2-data-mem-ecc-2bit-err-cnt" || name == "diag-pkt-cnt" || name == "pkt-sent-to-disabled-port-cnt" || name == "pkt-null-poe-sent-ua0-cnt" || name == "pkt-null-poe-sent-ua1-cnt" || name == "pkt-null-poe-sent-ua2-cnt" || name == "pkt-fpoe-addr-rng-hit-cnt" || name == "fpoe-mem-ecc-1bit-err-cnt" || name == "fpoe-mem-ecc-2bit-err-cnt" || name == "pkts-sent-to-ux0-cnt" || name == "pkts-sent-to-ux1-cnt" || name == "pkts-sent-to-ux2-cnt" || name == "cpp-head-drop-pkt-cnt" || name == "tr-head-drop-pkt-cnt" || name == "tr-pkt-sent-to-ux" || name == "stop-thrsh-hit-cnt" || name == "rate-cnt" || name == "calc-rate" || name == "crc-stomp-pkt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::PiMcStats()
    :
    pkt_rcv_cnt{YType::uint64, "pkt-rcv-cnt"},
    pkt_seq_err_cnt{YType::uint64, "pkt-seq-err-cnt"},
    in_coming_pkt_err_cnt{YType::uint64, "in-coming-pkt-err-cnt"},
    min_pkt_len_err_cnt{YType::uint64, "min-pkt-len-err-cnt"},
    max_pkt_len_err_cnt{YType::uint64, "max-pkt-len-err-cnt"},
    line_err_drp_pkt{YType::uint64, "line-err-drp-pkt"},
    pkt_crc_err_cnt{YType::uint64, "pkt-crc-err-cnt"},
    pkt_cfh_crc_err_cnt{YType::uint64, "pkt-cfh-crc-err-cnt"},
    line_s_written_in_mem{YType::uint64, "line-s-written-in-mem"},
    tail_drp_pkt_cnt{YType::uint64, "tail-drp-pkt-cnt"},
    data_mem0_ecc_1bit_err_cnt{YType::uint64, "data-mem0-ecc-1bit-err-cnt"},
    data_mem1_ecc_1bit_err_cnt{YType::uint64, "data-mem1-ecc-1bit-err-cnt"},
    data_mem2_ecc_1bit_err_cnt{YType::uint64, "data-mem2-ecc-1bit-err-cnt"},
    data_mem0_ecc_2bit_err_cnt{YType::uint64, "data-mem0-ecc-2bit-err-cnt"},
    data_mem1_ecc_2bit_err_cnt{YType::uint64, "data-mem1-ecc-2bit-err-cnt"},
    data_mem2_ecc_2bit_err_cnt{YType::uint64, "data-mem2-ecc-2bit-err-cnt"},
    diag_pkt_cnt{YType::uint64, "diag-pkt-cnt"},
    pkt_sent_to_disabled_port{YType::uint64, "pkt-sent-to-disabled-port"},
    pkt_fpoe_match_hit_cnt{YType::uint64, "pkt-fpoe-match-hit-cnt"},
    pkt_null_poe_sent_cnt{YType::uint64, "pkt-null-poe-sent-cnt"},
    pkt_fpoe_addr_rng_hit_cnt{YType::uint64, "pkt-fpoe-addr-rng-hit-cnt"},
    di_hdr_len_err_pkt_cnt{YType::uint64, "di-hdr-len-err-pkt-cnt"},
    di_err_pkt_cnt{YType::uint64, "di-err-pkt-cnt"},
    fpoe_mem_ecc_1bit_err_cnt{YType::uint64, "fpoe-mem-ecc-1bit-err-cnt"},
    fpoe_mem_ecc_2bit_err_cnt{YType::uint64, "fpoe-mem-ecc-2bit-err-cnt"},
    pkts_sent_to_mx_cnt{YType::uint64, "pkts-sent-to-mx-cnt"},
    cpp_head_drop_pkt_from_ma_cnt{YType::uint64, "cpp-head-drop-pkt-from-ma-cnt"},
    tr_head_drop_pkt_from_ma_cnt{YType::uint64, "tr-head-drop-pkt-from-ma-cnt"},
    tr_pkt_sent_to_mx{YType::uint64, "tr-pkt-sent-to-mx"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"},
    crc_stomp_pkt_cnt{YType::uint64, "crc-stomp-pkt-cnt"}
{

    yang_name = "pi-mc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::~PiMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_data() const
{
    if (is_presence_container) return true;
    return pkt_rcv_cnt.is_set
	|| pkt_seq_err_cnt.is_set
	|| in_coming_pkt_err_cnt.is_set
	|| min_pkt_len_err_cnt.is_set
	|| max_pkt_len_err_cnt.is_set
	|| line_err_drp_pkt.is_set
	|| pkt_crc_err_cnt.is_set
	|| pkt_cfh_crc_err_cnt.is_set
	|| line_s_written_in_mem.is_set
	|| tail_drp_pkt_cnt.is_set
	|| data_mem0_ecc_1bit_err_cnt.is_set
	|| data_mem1_ecc_1bit_err_cnt.is_set
	|| data_mem2_ecc_1bit_err_cnt.is_set
	|| data_mem0_ecc_2bit_err_cnt.is_set
	|| data_mem1_ecc_2bit_err_cnt.is_set
	|| data_mem2_ecc_2bit_err_cnt.is_set
	|| diag_pkt_cnt.is_set
	|| pkt_sent_to_disabled_port.is_set
	|| pkt_fpoe_match_hit_cnt.is_set
	|| pkt_null_poe_sent_cnt.is_set
	|| pkt_fpoe_addr_rng_hit_cnt.is_set
	|| di_hdr_len_err_pkt_cnt.is_set
	|| di_err_pkt_cnt.is_set
	|| fpoe_mem_ecc_1bit_err_cnt.is_set
	|| fpoe_mem_ecc_2bit_err_cnt.is_set
	|| pkts_sent_to_mx_cnt.is_set
	|| cpp_head_drop_pkt_from_ma_cnt.is_set
	|| tr_head_drop_pkt_from_ma_cnt.is_set
	|| tr_pkt_sent_to_mx.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set
	|| crc_stomp_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_rcv_cnt.yfilter)
	|| ydk::is_set(pkt_seq_err_cnt.yfilter)
	|| ydk::is_set(in_coming_pkt_err_cnt.yfilter)
	|| ydk::is_set(min_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(max_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(line_err_drp_pkt.yfilter)
	|| ydk::is_set(pkt_crc_err_cnt.yfilter)
	|| ydk::is_set(pkt_cfh_crc_err_cnt.yfilter)
	|| ydk::is_set(line_s_written_in_mem.yfilter)
	|| ydk::is_set(tail_drp_pkt_cnt.yfilter)
	|| ydk::is_set(data_mem0_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem1_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem2_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem0_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem1_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem2_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(diag_pkt_cnt.yfilter)
	|| ydk::is_set(pkt_sent_to_disabled_port.yfilter)
	|| ydk::is_set(pkt_fpoe_match_hit_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_cnt.yfilter)
	|| ydk::is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)
	|| ydk::is_set(di_hdr_len_err_pkt_cnt.yfilter)
	|| ydk::is_set(di_err_pkt_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_mx_cnt.yfilter)
	|| ydk::is_set(cpp_head_drop_pkt_from_ma_cnt.yfilter)
	|| ydk::is_set(tr_head_drop_pkt_from_ma_cnt.yfilter)
	|| ydk::is_set(tr_pkt_sent_to_mx.yfilter)
	|| ydk::is_set(stop_thrsh_hit_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter)
	|| ydk::is_set(crc_stomp_pkt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_rcv_cnt.is_set || is_set(pkt_rcv_cnt.yfilter)) leaf_name_data.push_back(pkt_rcv_cnt.get_name_leafdata());
    if (pkt_seq_err_cnt.is_set || is_set(pkt_seq_err_cnt.yfilter)) leaf_name_data.push_back(pkt_seq_err_cnt.get_name_leafdata());
    if (in_coming_pkt_err_cnt.is_set || is_set(in_coming_pkt_err_cnt.yfilter)) leaf_name_data.push_back(in_coming_pkt_err_cnt.get_name_leafdata());
    if (min_pkt_len_err_cnt.is_set || is_set(min_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(min_pkt_len_err_cnt.get_name_leafdata());
    if (max_pkt_len_err_cnt.is_set || is_set(max_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(max_pkt_len_err_cnt.get_name_leafdata());
    if (line_err_drp_pkt.is_set || is_set(line_err_drp_pkt.yfilter)) leaf_name_data.push_back(line_err_drp_pkt.get_name_leafdata());
    if (pkt_crc_err_cnt.is_set || is_set(pkt_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_crc_err_cnt.get_name_leafdata());
    if (pkt_cfh_crc_err_cnt.is_set || is_set(pkt_cfh_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_cfh_crc_err_cnt.get_name_leafdata());
    if (line_s_written_in_mem.is_set || is_set(line_s_written_in_mem.yfilter)) leaf_name_data.push_back(line_s_written_in_mem.get_name_leafdata());
    if (tail_drp_pkt_cnt.is_set || is_set(tail_drp_pkt_cnt.yfilter)) leaf_name_data.push_back(tail_drp_pkt_cnt.get_name_leafdata());
    if (data_mem0_ecc_1bit_err_cnt.is_set || is_set(data_mem0_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem0_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem1_ecc_1bit_err_cnt.is_set || is_set(data_mem1_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem1_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem2_ecc_1bit_err_cnt.is_set || is_set(data_mem2_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem2_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem0_ecc_2bit_err_cnt.is_set || is_set(data_mem0_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem0_ecc_2bit_err_cnt.get_name_leafdata());
    if (data_mem1_ecc_2bit_err_cnt.is_set || is_set(data_mem1_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem1_ecc_2bit_err_cnt.get_name_leafdata());
    if (data_mem2_ecc_2bit_err_cnt.is_set || is_set(data_mem2_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem2_ecc_2bit_err_cnt.get_name_leafdata());
    if (diag_pkt_cnt.is_set || is_set(diag_pkt_cnt.yfilter)) leaf_name_data.push_back(diag_pkt_cnt.get_name_leafdata());
    if (pkt_sent_to_disabled_port.is_set || is_set(pkt_sent_to_disabled_port.yfilter)) leaf_name_data.push_back(pkt_sent_to_disabled_port.get_name_leafdata());
    if (pkt_fpoe_match_hit_cnt.is_set || is_set(pkt_fpoe_match_hit_cnt.yfilter)) leaf_name_data.push_back(pkt_fpoe_match_hit_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_cnt.is_set || is_set(pkt_null_poe_sent_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_cnt.get_name_leafdata());
    if (pkt_fpoe_addr_rng_hit_cnt.is_set || is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)) leaf_name_data.push_back(pkt_fpoe_addr_rng_hit_cnt.get_name_leafdata());
    if (di_hdr_len_err_pkt_cnt.is_set || is_set(di_hdr_len_err_pkt_cnt.yfilter)) leaf_name_data.push_back(di_hdr_len_err_pkt_cnt.get_name_leafdata());
    if (di_err_pkt_cnt.is_set || is_set(di_err_pkt_cnt.yfilter)) leaf_name_data.push_back(di_err_pkt_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_1bit_err_cnt.is_set || is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_2bit_err_cnt.is_set || is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (pkts_sent_to_mx_cnt.is_set || is_set(pkts_sent_to_mx_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_mx_cnt.get_name_leafdata());
    if (cpp_head_drop_pkt_from_ma_cnt.is_set || is_set(cpp_head_drop_pkt_from_ma_cnt.yfilter)) leaf_name_data.push_back(cpp_head_drop_pkt_from_ma_cnt.get_name_leafdata());
    if (tr_head_drop_pkt_from_ma_cnt.is_set || is_set(tr_head_drop_pkt_from_ma_cnt.yfilter)) leaf_name_data.push_back(tr_head_drop_pkt_from_ma_cnt.get_name_leafdata());
    if (tr_pkt_sent_to_mx.is_set || is_set(tr_pkt_sent_to_mx.yfilter)) leaf_name_data.push_back(tr_pkt_sent_to_mx.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.yfilter)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (crc_stomp_pkt_cnt.is_set || is_set(crc_stomp_pkt_cnt.yfilter)) leaf_name_data.push_back(crc_stomp_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt = value;
        pkt_rcv_cnt.value_namespace = name_space;
        pkt_rcv_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt = value;
        pkt_seq_err_cnt.value_namespace = name_space;
        pkt_seq_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt = value;
        in_coming_pkt_err_cnt.value_namespace = name_space;
        in_coming_pkt_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt = value;
        min_pkt_len_err_cnt.value_namespace = name_space;
        min_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt = value;
        max_pkt_len_err_cnt.value_namespace = name_space;
        max_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt = value;
        line_err_drp_pkt.value_namespace = name_space;
        line_err_drp_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt = value;
        pkt_crc_err_cnt.value_namespace = name_space;
        pkt_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt = value;
        pkt_cfh_crc_err_cnt.value_namespace = name_space;
        pkt_cfh_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem")
    {
        line_s_written_in_mem = value;
        line_s_written_in_mem.value_namespace = name_space;
        line_s_written_in_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt = value;
        tail_drp_pkt_cnt.value_namespace = name_space;
        tail_drp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem0-ecc-1bit-err-cnt")
    {
        data_mem0_ecc_1bit_err_cnt = value;
        data_mem0_ecc_1bit_err_cnt.value_namespace = name_space;
        data_mem0_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem1-ecc-1bit-err-cnt")
    {
        data_mem1_ecc_1bit_err_cnt = value;
        data_mem1_ecc_1bit_err_cnt.value_namespace = name_space;
        data_mem1_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem2-ecc-1bit-err-cnt")
    {
        data_mem2_ecc_1bit_err_cnt = value;
        data_mem2_ecc_1bit_err_cnt.value_namespace = name_space;
        data_mem2_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem0-ecc-2bit-err-cnt")
    {
        data_mem0_ecc_2bit_err_cnt = value;
        data_mem0_ecc_2bit_err_cnt.value_namespace = name_space;
        data_mem0_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem1-ecc-2bit-err-cnt")
    {
        data_mem1_ecc_2bit_err_cnt = value;
        data_mem1_ecc_2bit_err_cnt.value_namespace = name_space;
        data_mem1_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem2-ecc-2bit-err-cnt")
    {
        data_mem2_ecc_2bit_err_cnt = value;
        data_mem2_ecc_2bit_err_cnt.value_namespace = name_space;
        data_mem2_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt = value;
        diag_pkt_cnt.value_namespace = name_space;
        diag_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sent-to-disabled-port")
    {
        pkt_sent_to_disabled_port = value;
        pkt_sent_to_disabled_port.value_namespace = name_space;
        pkt_sent_to_disabled_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-fpoe-match-hit-cnt")
    {
        pkt_fpoe_match_hit_cnt = value;
        pkt_fpoe_match_hit_cnt.value_namespace = name_space;
        pkt_fpoe_match_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-cnt")
    {
        pkt_null_poe_sent_cnt = value;
        pkt_null_poe_sent_cnt.value_namespace = name_space;
        pkt_null_poe_sent_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt = value;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace = name_space;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-hdr-len-err-pkt-cnt")
    {
        di_hdr_len_err_pkt_cnt = value;
        di_hdr_len_err_pkt_cnt.value_namespace = name_space;
        di_hdr_len_err_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-err-pkt-cnt")
    {
        di_err_pkt_cnt = value;
        di_err_pkt_cnt.value_namespace = name_space;
        di_err_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt = value;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt = value;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-mx-cnt")
    {
        pkts_sent_to_mx_cnt = value;
        pkts_sent_to_mx_cnt.value_namespace = name_space;
        pkts_sent_to_mx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpp-head-drop-pkt-from-ma-cnt")
    {
        cpp_head_drop_pkt_from_ma_cnt = value;
        cpp_head_drop_pkt_from_ma_cnt.value_namespace = name_space;
        cpp_head_drop_pkt_from_ma_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-head-drop-pkt-from-ma-cnt")
    {
        tr_head_drop_pkt_from_ma_cnt = value;
        tr_head_drop_pkt_from_ma_cnt.value_namespace = name_space;
        tr_head_drop_pkt_from_ma_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-pkt-sent-to-mx")
    {
        tr_pkt_sent_to_mx = value;
        tr_pkt_sent_to_mx.value_namespace = name_space;
        tr_pkt_sent_to_mx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
        stop_thrsh_hit_cnt.value_namespace = name_space;
        stop_thrsh_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt = value;
        crc_stomp_pkt_cnt.value_namespace = name_space;
        crc_stomp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt.yfilter = yfilter;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt.yfilter = yfilter;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem")
    {
        line_s_written_in_mem.yfilter = yfilter;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem0-ecc-1bit-err-cnt")
    {
        data_mem0_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem1-ecc-1bit-err-cnt")
    {
        data_mem1_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem2-ecc-1bit-err-cnt")
    {
        data_mem2_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem0-ecc-2bit-err-cnt")
    {
        data_mem0_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem1-ecc-2bit-err-cnt")
    {
        data_mem1_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem2-ecc-2bit-err-cnt")
    {
        data_mem2_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sent-to-disabled-port")
    {
        pkt_sent_to_disabled_port.yfilter = yfilter;
    }
    if(value_path == "pkt-fpoe-match-hit-cnt")
    {
        pkt_fpoe_match_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-cnt")
    {
        pkt_null_poe_sent_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "di-hdr-len-err-pkt-cnt")
    {
        di_hdr_len_err_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "di-err-pkt-cnt")
    {
        di_err_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-mx-cnt")
    {
        pkts_sent_to_mx_cnt.yfilter = yfilter;
    }
    if(value_path == "cpp-head-drop-pkt-from-ma-cnt")
    {
        cpp_head_drop_pkt_from_ma_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-head-drop-pkt-from-ma-cnt")
    {
        tr_head_drop_pkt_from_ma_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-pkt-sent-to-mx")
    {
        tr_pkt_sent_to_mx.yfilter = yfilter;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-rcv-cnt" || name == "pkt-seq-err-cnt" || name == "in-coming-pkt-err-cnt" || name == "min-pkt-len-err-cnt" || name == "max-pkt-len-err-cnt" || name == "line-err-drp-pkt" || name == "pkt-crc-err-cnt" || name == "pkt-cfh-crc-err-cnt" || name == "line-s-written-in-mem" || name == "tail-drp-pkt-cnt" || name == "data-mem0-ecc-1bit-err-cnt" || name == "data-mem1-ecc-1bit-err-cnt" || name == "data-mem2-ecc-1bit-err-cnt" || name == "data-mem0-ecc-2bit-err-cnt" || name == "data-mem1-ecc-2bit-err-cnt" || name == "data-mem2-ecc-2bit-err-cnt" || name == "diag-pkt-cnt" || name == "pkt-sent-to-disabled-port" || name == "pkt-fpoe-match-hit-cnt" || name == "pkt-null-poe-sent-cnt" || name == "pkt-fpoe-addr-rng-hit-cnt" || name == "di-hdr-len-err-pkt-cnt" || name == "di-err-pkt-cnt" || name == "fpoe-mem-ecc-1bit-err-cnt" || name == "fpoe-mem-ecc-2bit-err-cnt" || name == "pkts-sent-to-mx-cnt" || name == "cpp-head-drop-pkt-from-ma-cnt" || name == "tr-head-drop-pkt-from-ma-cnt" || name == "tr-pkt-sent-to-mx" || name == "stop-thrsh-hit-cnt" || name == "rate-cnt" || name == "calc-rate" || name == "crc-stomp-pkt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::PiCcStats()
    :
    in0_ecc_serr_cnt{YType::uint64, "in0-ecc-serr-cnt"},
    in0_ecc_derr_cnt{YType::uint64, "in0-ecc-derr-cnt"},
    in1_ecc_serr_cnt{YType::uint64, "in1-ecc-serr-cnt"},
    in1_ecc_derr_cnt{YType::uint64, "in1-ecc-derr-cnt"},
    data_mem_ecc_serr_cnt{YType::uint64, "data-mem-ecc-serr-cnt"},
    data_mem_ecc_derr_cnt{YType::uint64, "data-mem-ecc-derr-cnt"},
    data_mem_ovf0_cnt{YType::uint64, "data-mem-ovf0-cnt"},
    data_mem_ovf1_cnt{YType::uint64, "data-mem-ovf1-cnt"},
    fpoe_mem_ecc_serr_cnt{YType::uint64, "fpoe-mem-ecc-serr-cnt"},
    fpoe_mem_ecc_derr_cnt{YType::uint64, "fpoe-mem-ecc-derr-cnt"},
    null_poe_cnt{YType::uint64, "null-poe-cnt"},
    shut_ack_cnt{YType::uint64, "shut-ack-cnt"},
    in0_fnc_err_cnt{YType::uint64, "in0-fnc-err-cnt"},
    in1_fnc_err_cnt{YType::uint64, "in1-fnc-err-cnt"},
    in0_drop_cnt{YType::uint64, "in0-drop-cnt"},
    in1_drop_cnt{YType::uint64, "in1-drop-cnt"},
    in0_cong_cnt{YType::uint64, "in0-cong-cnt"},
    in1_cong_cnt{YType::uint64, "in1-cong-cnt"},
    in0_shut_cnt{YType::uint64, "in0-shut-cnt"},
    in1_shut_cnt{YType::uint64, "in1-shut-cnt"},
    tail_drop_msg_cnt{YType::uint64, "tail-drop-msg-cnt"},
    in0_pkt_cnt{YType::uint64, "in0-pkt-cnt"},
    in1_pkt_cnt{YType::uint64, "in1-pkt-cnt"},
    dmem_rd_cnt{YType::uint64, "dmem-rd-cnt"},
    in_dmem0_cnt{YType::uint64, "in-dmem0-cnt"},
    in_dmem1_cnt{YType::uint64, "in-dmem1-cnt"},
    out_pkt_cnt{YType::uint64, "out-pkt-cnt"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pi-cc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::~PiCcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_data() const
{
    if (is_presence_container) return true;
    return in0_ecc_serr_cnt.is_set
	|| in0_ecc_derr_cnt.is_set
	|| in1_ecc_serr_cnt.is_set
	|| in1_ecc_derr_cnt.is_set
	|| data_mem_ecc_serr_cnt.is_set
	|| data_mem_ecc_derr_cnt.is_set
	|| data_mem_ovf0_cnt.is_set
	|| data_mem_ovf1_cnt.is_set
	|| fpoe_mem_ecc_serr_cnt.is_set
	|| fpoe_mem_ecc_derr_cnt.is_set
	|| null_poe_cnt.is_set
	|| shut_ack_cnt.is_set
	|| in0_fnc_err_cnt.is_set
	|| in1_fnc_err_cnt.is_set
	|| in0_drop_cnt.is_set
	|| in1_drop_cnt.is_set
	|| in0_cong_cnt.is_set
	|| in1_cong_cnt.is_set
	|| in0_shut_cnt.is_set
	|| in1_shut_cnt.is_set
	|| tail_drop_msg_cnt.is_set
	|| in0_pkt_cnt.is_set
	|| in1_pkt_cnt.is_set
	|| dmem_rd_cnt.is_set
	|| in_dmem0_cnt.is_set
	|| in_dmem1_cnt.is_set
	|| out_pkt_cnt.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in0_ecc_serr_cnt.yfilter)
	|| ydk::is_set(in0_ecc_derr_cnt.yfilter)
	|| ydk::is_set(in1_ecc_serr_cnt.yfilter)
	|| ydk::is_set(in1_ecc_derr_cnt.yfilter)
	|| ydk::is_set(data_mem_ecc_serr_cnt.yfilter)
	|| ydk::is_set(data_mem_ecc_derr_cnt.yfilter)
	|| ydk::is_set(data_mem_ovf0_cnt.yfilter)
	|| ydk::is_set(data_mem_ovf1_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_serr_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_derr_cnt.yfilter)
	|| ydk::is_set(null_poe_cnt.yfilter)
	|| ydk::is_set(shut_ack_cnt.yfilter)
	|| ydk::is_set(in0_fnc_err_cnt.yfilter)
	|| ydk::is_set(in1_fnc_err_cnt.yfilter)
	|| ydk::is_set(in0_drop_cnt.yfilter)
	|| ydk::is_set(in1_drop_cnt.yfilter)
	|| ydk::is_set(in0_cong_cnt.yfilter)
	|| ydk::is_set(in1_cong_cnt.yfilter)
	|| ydk::is_set(in0_shut_cnt.yfilter)
	|| ydk::is_set(in1_shut_cnt.yfilter)
	|| ydk::is_set(tail_drop_msg_cnt.yfilter)
	|| ydk::is_set(in0_pkt_cnt.yfilter)
	|| ydk::is_set(in1_pkt_cnt.yfilter)
	|| ydk::is_set(dmem_rd_cnt.yfilter)
	|| ydk::is_set(in_dmem0_cnt.yfilter)
	|| ydk::is_set(in_dmem1_cnt.yfilter)
	|| ydk::is_set(out_pkt_cnt.yfilter)
	|| ydk::is_set(stop_thrsh_hit_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-cc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in0_ecc_serr_cnt.is_set || is_set(in0_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(in0_ecc_serr_cnt.get_name_leafdata());
    if (in0_ecc_derr_cnt.is_set || is_set(in0_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(in0_ecc_derr_cnt.get_name_leafdata());
    if (in1_ecc_serr_cnt.is_set || is_set(in1_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(in1_ecc_serr_cnt.get_name_leafdata());
    if (in1_ecc_derr_cnt.is_set || is_set(in1_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(in1_ecc_derr_cnt.get_name_leafdata());
    if (data_mem_ecc_serr_cnt.is_set || is_set(data_mem_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(data_mem_ecc_serr_cnt.get_name_leafdata());
    if (data_mem_ecc_derr_cnt.is_set || is_set(data_mem_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(data_mem_ecc_derr_cnt.get_name_leafdata());
    if (data_mem_ovf0_cnt.is_set || is_set(data_mem_ovf0_cnt.yfilter)) leaf_name_data.push_back(data_mem_ovf0_cnt.get_name_leafdata());
    if (data_mem_ovf1_cnt.is_set || is_set(data_mem_ovf1_cnt.yfilter)) leaf_name_data.push_back(data_mem_ovf1_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_serr_cnt.is_set || is_set(fpoe_mem_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_serr_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_derr_cnt.is_set || is_set(fpoe_mem_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_derr_cnt.get_name_leafdata());
    if (null_poe_cnt.is_set || is_set(null_poe_cnt.yfilter)) leaf_name_data.push_back(null_poe_cnt.get_name_leafdata());
    if (shut_ack_cnt.is_set || is_set(shut_ack_cnt.yfilter)) leaf_name_data.push_back(shut_ack_cnt.get_name_leafdata());
    if (in0_fnc_err_cnt.is_set || is_set(in0_fnc_err_cnt.yfilter)) leaf_name_data.push_back(in0_fnc_err_cnt.get_name_leafdata());
    if (in1_fnc_err_cnt.is_set || is_set(in1_fnc_err_cnt.yfilter)) leaf_name_data.push_back(in1_fnc_err_cnt.get_name_leafdata());
    if (in0_drop_cnt.is_set || is_set(in0_drop_cnt.yfilter)) leaf_name_data.push_back(in0_drop_cnt.get_name_leafdata());
    if (in1_drop_cnt.is_set || is_set(in1_drop_cnt.yfilter)) leaf_name_data.push_back(in1_drop_cnt.get_name_leafdata());
    if (in0_cong_cnt.is_set || is_set(in0_cong_cnt.yfilter)) leaf_name_data.push_back(in0_cong_cnt.get_name_leafdata());
    if (in1_cong_cnt.is_set || is_set(in1_cong_cnt.yfilter)) leaf_name_data.push_back(in1_cong_cnt.get_name_leafdata());
    if (in0_shut_cnt.is_set || is_set(in0_shut_cnt.yfilter)) leaf_name_data.push_back(in0_shut_cnt.get_name_leafdata());
    if (in1_shut_cnt.is_set || is_set(in1_shut_cnt.yfilter)) leaf_name_data.push_back(in1_shut_cnt.get_name_leafdata());
    if (tail_drop_msg_cnt.is_set || is_set(tail_drop_msg_cnt.yfilter)) leaf_name_data.push_back(tail_drop_msg_cnt.get_name_leafdata());
    if (in0_pkt_cnt.is_set || is_set(in0_pkt_cnt.yfilter)) leaf_name_data.push_back(in0_pkt_cnt.get_name_leafdata());
    if (in1_pkt_cnt.is_set || is_set(in1_pkt_cnt.yfilter)) leaf_name_data.push_back(in1_pkt_cnt.get_name_leafdata());
    if (dmem_rd_cnt.is_set || is_set(dmem_rd_cnt.yfilter)) leaf_name_data.push_back(dmem_rd_cnt.get_name_leafdata());
    if (in_dmem0_cnt.is_set || is_set(in_dmem0_cnt.yfilter)) leaf_name_data.push_back(in_dmem0_cnt.get_name_leafdata());
    if (in_dmem1_cnt.is_set || is_set(in_dmem1_cnt.yfilter)) leaf_name_data.push_back(in_dmem1_cnt.get_name_leafdata());
    if (out_pkt_cnt.is_set || is_set(out_pkt_cnt.yfilter)) leaf_name_data.push_back(out_pkt_cnt.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.yfilter)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in0-ecc-serr-cnt")
    {
        in0_ecc_serr_cnt = value;
        in0_ecc_serr_cnt.value_namespace = name_space;
        in0_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-ecc-derr-cnt")
    {
        in0_ecc_derr_cnt = value;
        in0_ecc_derr_cnt.value_namespace = name_space;
        in0_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-ecc-serr-cnt")
    {
        in1_ecc_serr_cnt = value;
        in1_ecc_serr_cnt.value_namespace = name_space;
        in1_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-ecc-derr-cnt")
    {
        in1_ecc_derr_cnt = value;
        in1_ecc_derr_cnt.value_namespace = name_space;
        in1_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ecc-serr-cnt")
    {
        data_mem_ecc_serr_cnt = value;
        data_mem_ecc_serr_cnt.value_namespace = name_space;
        data_mem_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ecc-derr-cnt")
    {
        data_mem_ecc_derr_cnt = value;
        data_mem_ecc_derr_cnt.value_namespace = name_space;
        data_mem_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ovf0-cnt")
    {
        data_mem_ovf0_cnt = value;
        data_mem_ovf0_cnt.value_namespace = name_space;
        data_mem_ovf0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ovf1-cnt")
    {
        data_mem_ovf1_cnt = value;
        data_mem_ovf1_cnt.value_namespace = name_space;
        data_mem_ovf1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-serr-cnt")
    {
        fpoe_mem_ecc_serr_cnt = value;
        fpoe_mem_ecc_serr_cnt.value_namespace = name_space;
        fpoe_mem_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-derr-cnt")
    {
        fpoe_mem_ecc_derr_cnt = value;
        fpoe_mem_ecc_derr_cnt.value_namespace = name_space;
        fpoe_mem_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-poe-cnt")
    {
        null_poe_cnt = value;
        null_poe_cnt.value_namespace = name_space;
        null_poe_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shut-ack-cnt")
    {
        shut_ack_cnt = value;
        shut_ack_cnt.value_namespace = name_space;
        shut_ack_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-fnc-err-cnt")
    {
        in0_fnc_err_cnt = value;
        in0_fnc_err_cnt.value_namespace = name_space;
        in0_fnc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-fnc-err-cnt")
    {
        in1_fnc_err_cnt = value;
        in1_fnc_err_cnt.value_namespace = name_space;
        in1_fnc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-drop-cnt")
    {
        in0_drop_cnt = value;
        in0_drop_cnt.value_namespace = name_space;
        in0_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-drop-cnt")
    {
        in1_drop_cnt = value;
        in1_drop_cnt.value_namespace = name_space;
        in1_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-cong-cnt")
    {
        in0_cong_cnt = value;
        in0_cong_cnt.value_namespace = name_space;
        in0_cong_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-cong-cnt")
    {
        in1_cong_cnt = value;
        in1_cong_cnt.value_namespace = name_space;
        in1_cong_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-shut-cnt")
    {
        in0_shut_cnt = value;
        in0_shut_cnt.value_namespace = name_space;
        in0_shut_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-shut-cnt")
    {
        in1_shut_cnt = value;
        in1_shut_cnt.value_namespace = name_space;
        in1_shut_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-msg-cnt")
    {
        tail_drop_msg_cnt = value;
        tail_drop_msg_cnt.value_namespace = name_space;
        tail_drop_msg_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-pkt-cnt")
    {
        in0_pkt_cnt = value;
        in0_pkt_cnt.value_namespace = name_space;
        in0_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-pkt-cnt")
    {
        in1_pkt_cnt = value;
        in1_pkt_cnt.value_namespace = name_space;
        in1_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmem-rd-cnt")
    {
        dmem_rd_cnt = value;
        dmem_rd_cnt.value_namespace = name_space;
        dmem_rd_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-dmem0-cnt")
    {
        in_dmem0_cnt = value;
        in_dmem0_cnt.value_namespace = name_space;
        in_dmem0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-dmem1-cnt")
    {
        in_dmem1_cnt = value;
        in_dmem1_cnt.value_namespace = name_space;
        in_dmem1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-cnt")
    {
        out_pkt_cnt = value;
        out_pkt_cnt.value_namespace = name_space;
        out_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
        stop_thrsh_hit_cnt.value_namespace = name_space;
        stop_thrsh_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in0-ecc-serr-cnt")
    {
        in0_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-ecc-derr-cnt")
    {
        in0_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-ecc-serr-cnt")
    {
        in1_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-ecc-derr-cnt")
    {
        in1_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ecc-serr-cnt")
    {
        data_mem_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ecc-derr-cnt")
    {
        data_mem_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ovf0-cnt")
    {
        data_mem_ovf0_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ovf1-cnt")
    {
        data_mem_ovf1_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-serr-cnt")
    {
        fpoe_mem_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-derr-cnt")
    {
        fpoe_mem_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "null-poe-cnt")
    {
        null_poe_cnt.yfilter = yfilter;
    }
    if(value_path == "shut-ack-cnt")
    {
        shut_ack_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-fnc-err-cnt")
    {
        in0_fnc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-fnc-err-cnt")
    {
        in1_fnc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-drop-cnt")
    {
        in0_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-drop-cnt")
    {
        in1_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-cong-cnt")
    {
        in0_cong_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-cong-cnt")
    {
        in1_cong_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-shut-cnt")
    {
        in0_shut_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-shut-cnt")
    {
        in1_shut_cnt.yfilter = yfilter;
    }
    if(value_path == "tail-drop-msg-cnt")
    {
        tail_drop_msg_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-pkt-cnt")
    {
        in0_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-pkt-cnt")
    {
        in1_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dmem-rd-cnt")
    {
        dmem_rd_cnt.yfilter = yfilter;
    }
    if(value_path == "in-dmem0-cnt")
    {
        in_dmem0_cnt.yfilter = yfilter;
    }
    if(value_path == "in-dmem1-cnt")
    {
        in_dmem1_cnt.yfilter = yfilter;
    }
    if(value_path == "out-pkt-cnt")
    {
        out_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in0-ecc-serr-cnt" || name == "in0-ecc-derr-cnt" || name == "in1-ecc-serr-cnt" || name == "in1-ecc-derr-cnt" || name == "data-mem-ecc-serr-cnt" || name == "data-mem-ecc-derr-cnt" || name == "data-mem-ovf0-cnt" || name == "data-mem-ovf1-cnt" || name == "fpoe-mem-ecc-serr-cnt" || name == "fpoe-mem-ecc-derr-cnt" || name == "null-poe-cnt" || name == "shut-ack-cnt" || name == "in0-fnc-err-cnt" || name == "in1-fnc-err-cnt" || name == "in0-drop-cnt" || name == "in1-drop-cnt" || name == "in0-cong-cnt" || name == "in1-cong-cnt" || name == "in0-shut-cnt" || name == "in1-shut-cnt" || name == "tail-drop-msg-cnt" || name == "in0-pkt-cnt" || name == "in1-pkt-cnt" || name == "dmem-rd-cnt" || name == "in-dmem0-cnt" || name == "in-dmem1-cnt" || name == "out-pkt-cnt" || name == "stop-thrsh-hit-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::PeUcStats()
    :
    in_pkt_uc0_cnt{YType::uint64, "in-pkt-uc0-cnt"},
    in_pkt_uc1_cnt{YType::uint64, "in-pkt-uc1-cnt"},
    in_pkt_uc2_cnt{YType::uint64, "in-pkt-uc2-cnt"},
    in_full_line_uc0_cnt{YType::uint64, "in-full-line-uc0-cnt"},
    in_full_line_uc1_cnt{YType::uint64, "in-full-line-uc1-cnt"},
    in_full_line_uc2_cnt{YType::uint64, "in-full-line-uc2-cnt"},
    pkt_trunc_eop_uc0_cnt{YType::uint64, "pkt-trunc-eop-uc0-cnt"},
    pkt_trunc_eop_uc1_cnt{YType::uint64, "pkt-trunc-eop-uc1-cnt"},
    pkt_trunc_eop_uc2_cnt{YType::uint64, "pkt-trunc-eop-uc2-cnt"},
    pkt_sop_drop_uc0_cnt{YType::uint64, "pkt-sop-drop-uc0-cnt"},
    pkt_sop_drop_uc1_cnt{YType::uint64, "pkt-sop-drop-uc1-cnt"},
    pkt_sop_drop_uc2_cnt{YType::uint64, "pkt-sop-drop-uc2-cnt"},
    pkt_ecc_err_drop_uc_cnt{YType::uint64, "pkt-ecc-err-drop-uc-cnt"},
    pkt_ecc_trunc_cnt_uc_cnt{YType::uint64, "pkt-ecc-trunc-cnt-uc-cnt"},
    ecc_1bit_err_uc0_0_cnt{YType::uint64, "ecc-1bit-err-uc0-0-cnt"},
    ecc_1bit_err_uc0_1_cnt{YType::uint64, "ecc-1bit-err-uc0-1-cnt"},
    ecc_1bit_err_uc1_0_cnt{YType::uint64, "ecc-1bit-err-uc1-0-cnt"},
    ecc_1bit_err_uc1_1_cnt{YType::uint64, "ecc-1bit-err-uc1-1-cnt"},
    ecc_1bit_err_uc2_0_cnt{YType::uint64, "ecc-1bit-err-uc2-0-cnt"},
    ecc_1bit_err_uc2_1_cnt{YType::uint64, "ecc-1bit-err-uc2-1-cnt"},
    ecc_2bit_err_uc0_0_cnt{YType::uint64, "ecc-2bit-err-uc0-0-cnt"},
    ecc_2bit_err_uc0_1_cnt{YType::uint64, "ecc-2bit-err-uc0-1-cnt"},
    ecc_2bit_err_uc1_0_cnt{YType::uint64, "ecc-2bit-err-uc1-0-cnt"},
    ecc_2bit_err_uc1_1_cnt{YType::uint64, "ecc-2bit-err-uc1-1-cnt"},
    ecc_2bit_err_uc2_0_cnt{YType::uint64, "ecc-2bit-err-uc2-0-cnt"},
    ecc_2bit_err_uc2_1_cnt{YType::uint64, "ecc-2bit-err-uc2-1-cnt"},
    out_pkt_uc_cnt{YType::uint64, "out-pkt-uc-cnt"},
    fe_uc_sop_eop_pack_cnt{YType::uint64, "fe-uc-sop-eop-pack-cnt"},
    fc_uc_0_1_trans_cnt{YType::uint64, "fc-uc-0-1-trans-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pe-uc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::~PeUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkt_uc0_cnt.is_set
	|| in_pkt_uc1_cnt.is_set
	|| in_pkt_uc2_cnt.is_set
	|| in_full_line_uc0_cnt.is_set
	|| in_full_line_uc1_cnt.is_set
	|| in_full_line_uc2_cnt.is_set
	|| pkt_trunc_eop_uc0_cnt.is_set
	|| pkt_trunc_eop_uc1_cnt.is_set
	|| pkt_trunc_eop_uc2_cnt.is_set
	|| pkt_sop_drop_uc0_cnt.is_set
	|| pkt_sop_drop_uc1_cnt.is_set
	|| pkt_sop_drop_uc2_cnt.is_set
	|| pkt_ecc_err_drop_uc_cnt.is_set
	|| pkt_ecc_trunc_cnt_uc_cnt.is_set
	|| ecc_1bit_err_uc0_0_cnt.is_set
	|| ecc_1bit_err_uc0_1_cnt.is_set
	|| ecc_1bit_err_uc1_0_cnt.is_set
	|| ecc_1bit_err_uc1_1_cnt.is_set
	|| ecc_1bit_err_uc2_0_cnt.is_set
	|| ecc_1bit_err_uc2_1_cnt.is_set
	|| ecc_2bit_err_uc0_0_cnt.is_set
	|| ecc_2bit_err_uc0_1_cnt.is_set
	|| ecc_2bit_err_uc1_0_cnt.is_set
	|| ecc_2bit_err_uc1_1_cnt.is_set
	|| ecc_2bit_err_uc2_0_cnt.is_set
	|| ecc_2bit_err_uc2_1_cnt.is_set
	|| out_pkt_uc_cnt.is_set
	|| fe_uc_sop_eop_pack_cnt.is_set
	|| fc_uc_0_1_trans_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_uc0_cnt.yfilter)
	|| ydk::is_set(in_pkt_uc1_cnt.yfilter)
	|| ydk::is_set(in_pkt_uc2_cnt.yfilter)
	|| ydk::is_set(in_full_line_uc0_cnt.yfilter)
	|| ydk::is_set(in_full_line_uc1_cnt.yfilter)
	|| ydk::is_set(in_full_line_uc2_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_uc0_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_uc1_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_uc2_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_uc0_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_uc1_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_uc2_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_err_drop_uc_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_trunc_cnt_uc_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc0_0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc0_1_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc1_0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc1_1_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc2_0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc2_1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc0_0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc0_1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc1_0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc1_1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc2_0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc2_1_cnt.yfilter)
	|| ydk::is_set(out_pkt_uc_cnt.yfilter)
	|| ydk::is_set(fe_uc_sop_eop_pack_cnt.yfilter)
	|| ydk::is_set(fc_uc_0_1_trans_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_uc0_cnt.is_set || is_set(in_pkt_uc0_cnt.yfilter)) leaf_name_data.push_back(in_pkt_uc0_cnt.get_name_leafdata());
    if (in_pkt_uc1_cnt.is_set || is_set(in_pkt_uc1_cnt.yfilter)) leaf_name_data.push_back(in_pkt_uc1_cnt.get_name_leafdata());
    if (in_pkt_uc2_cnt.is_set || is_set(in_pkt_uc2_cnt.yfilter)) leaf_name_data.push_back(in_pkt_uc2_cnt.get_name_leafdata());
    if (in_full_line_uc0_cnt.is_set || is_set(in_full_line_uc0_cnt.yfilter)) leaf_name_data.push_back(in_full_line_uc0_cnt.get_name_leafdata());
    if (in_full_line_uc1_cnt.is_set || is_set(in_full_line_uc1_cnt.yfilter)) leaf_name_data.push_back(in_full_line_uc1_cnt.get_name_leafdata());
    if (in_full_line_uc2_cnt.is_set || is_set(in_full_line_uc2_cnt.yfilter)) leaf_name_data.push_back(in_full_line_uc2_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc0_cnt.is_set || is_set(pkt_trunc_eop_uc0_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_uc0_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc1_cnt.is_set || is_set(pkt_trunc_eop_uc1_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_uc1_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc2_cnt.is_set || is_set(pkt_trunc_eop_uc2_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_uc2_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc0_cnt.is_set || is_set(pkt_sop_drop_uc0_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_uc0_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc1_cnt.is_set || is_set(pkt_sop_drop_uc1_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_uc1_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc2_cnt.is_set || is_set(pkt_sop_drop_uc2_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_uc2_cnt.get_name_leafdata());
    if (pkt_ecc_err_drop_uc_cnt.is_set || is_set(pkt_ecc_err_drop_uc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_err_drop_uc_cnt.get_name_leafdata());
    if (pkt_ecc_trunc_cnt_uc_cnt.is_set || is_set(pkt_ecc_trunc_cnt_uc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_trunc_cnt_uc_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc0_0_cnt.is_set || is_set(ecc_1bit_err_uc0_0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc0_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc0_1_cnt.is_set || is_set(ecc_1bit_err_uc0_1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc0_1_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc1_0_cnt.is_set || is_set(ecc_1bit_err_uc1_0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc1_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc1_1_cnt.is_set || is_set(ecc_1bit_err_uc1_1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc1_1_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc2_0_cnt.is_set || is_set(ecc_1bit_err_uc2_0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc2_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc2_1_cnt.is_set || is_set(ecc_1bit_err_uc2_1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc2_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc0_0_cnt.is_set || is_set(ecc_2bit_err_uc0_0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc0_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc0_1_cnt.is_set || is_set(ecc_2bit_err_uc0_1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc0_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc1_0_cnt.is_set || is_set(ecc_2bit_err_uc1_0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc1_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc1_1_cnt.is_set || is_set(ecc_2bit_err_uc1_1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc1_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc2_0_cnt.is_set || is_set(ecc_2bit_err_uc2_0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc2_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc2_1_cnt.is_set || is_set(ecc_2bit_err_uc2_1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc2_1_cnt.get_name_leafdata());
    if (out_pkt_uc_cnt.is_set || is_set(out_pkt_uc_cnt.yfilter)) leaf_name_data.push_back(out_pkt_uc_cnt.get_name_leafdata());
    if (fe_uc_sop_eop_pack_cnt.is_set || is_set(fe_uc_sop_eop_pack_cnt.yfilter)) leaf_name_data.push_back(fe_uc_sop_eop_pack_cnt.get_name_leafdata());
    if (fc_uc_0_1_trans_cnt.is_set || is_set(fc_uc_0_1_trans_cnt.yfilter)) leaf_name_data.push_back(fc_uc_0_1_trans_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-uc0-cnt")
    {
        in_pkt_uc0_cnt = value;
        in_pkt_uc0_cnt.value_namespace = name_space;
        in_pkt_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-uc1-cnt")
    {
        in_pkt_uc1_cnt = value;
        in_pkt_uc1_cnt.value_namespace = name_space;
        in_pkt_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-uc2-cnt")
    {
        in_pkt_uc2_cnt = value;
        in_pkt_uc2_cnt.value_namespace = name_space;
        in_pkt_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-uc0-cnt")
    {
        in_full_line_uc0_cnt = value;
        in_full_line_uc0_cnt.value_namespace = name_space;
        in_full_line_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-uc1-cnt")
    {
        in_full_line_uc1_cnt = value;
        in_full_line_uc1_cnt.value_namespace = name_space;
        in_full_line_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-uc2-cnt")
    {
        in_full_line_uc2_cnt = value;
        in_full_line_uc2_cnt.value_namespace = name_space;
        in_full_line_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-uc0-cnt")
    {
        pkt_trunc_eop_uc0_cnt = value;
        pkt_trunc_eop_uc0_cnt.value_namespace = name_space;
        pkt_trunc_eop_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-uc1-cnt")
    {
        pkt_trunc_eop_uc1_cnt = value;
        pkt_trunc_eop_uc1_cnt.value_namespace = name_space;
        pkt_trunc_eop_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-uc2-cnt")
    {
        pkt_trunc_eop_uc2_cnt = value;
        pkt_trunc_eop_uc2_cnt.value_namespace = name_space;
        pkt_trunc_eop_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-uc0-cnt")
    {
        pkt_sop_drop_uc0_cnt = value;
        pkt_sop_drop_uc0_cnt.value_namespace = name_space;
        pkt_sop_drop_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-uc1-cnt")
    {
        pkt_sop_drop_uc1_cnt = value;
        pkt_sop_drop_uc1_cnt.value_namespace = name_space;
        pkt_sop_drop_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-uc2-cnt")
    {
        pkt_sop_drop_uc2_cnt = value;
        pkt_sop_drop_uc2_cnt.value_namespace = name_space;
        pkt_sop_drop_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-err-drop-uc-cnt")
    {
        pkt_ecc_err_drop_uc_cnt = value;
        pkt_ecc_err_drop_uc_cnt.value_namespace = name_space;
        pkt_ecc_err_drop_uc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-trunc-cnt-uc-cnt")
    {
        pkt_ecc_trunc_cnt_uc_cnt = value;
        pkt_ecc_trunc_cnt_uc_cnt.value_namespace = name_space;
        pkt_ecc_trunc_cnt_uc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc0-0-cnt")
    {
        ecc_1bit_err_uc0_0_cnt = value;
        ecc_1bit_err_uc0_0_cnt.value_namespace = name_space;
        ecc_1bit_err_uc0_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc0-1-cnt")
    {
        ecc_1bit_err_uc0_1_cnt = value;
        ecc_1bit_err_uc0_1_cnt.value_namespace = name_space;
        ecc_1bit_err_uc0_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc1-0-cnt")
    {
        ecc_1bit_err_uc1_0_cnt = value;
        ecc_1bit_err_uc1_0_cnt.value_namespace = name_space;
        ecc_1bit_err_uc1_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc1-1-cnt")
    {
        ecc_1bit_err_uc1_1_cnt = value;
        ecc_1bit_err_uc1_1_cnt.value_namespace = name_space;
        ecc_1bit_err_uc1_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc2-0-cnt")
    {
        ecc_1bit_err_uc2_0_cnt = value;
        ecc_1bit_err_uc2_0_cnt.value_namespace = name_space;
        ecc_1bit_err_uc2_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc2-1-cnt")
    {
        ecc_1bit_err_uc2_1_cnt = value;
        ecc_1bit_err_uc2_1_cnt.value_namespace = name_space;
        ecc_1bit_err_uc2_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc0-0-cnt")
    {
        ecc_2bit_err_uc0_0_cnt = value;
        ecc_2bit_err_uc0_0_cnt.value_namespace = name_space;
        ecc_2bit_err_uc0_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc0-1-cnt")
    {
        ecc_2bit_err_uc0_1_cnt = value;
        ecc_2bit_err_uc0_1_cnt.value_namespace = name_space;
        ecc_2bit_err_uc0_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc1-0-cnt")
    {
        ecc_2bit_err_uc1_0_cnt = value;
        ecc_2bit_err_uc1_0_cnt.value_namespace = name_space;
        ecc_2bit_err_uc1_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc1-1-cnt")
    {
        ecc_2bit_err_uc1_1_cnt = value;
        ecc_2bit_err_uc1_1_cnt.value_namespace = name_space;
        ecc_2bit_err_uc1_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc2-0-cnt")
    {
        ecc_2bit_err_uc2_0_cnt = value;
        ecc_2bit_err_uc2_0_cnt.value_namespace = name_space;
        ecc_2bit_err_uc2_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc2-1-cnt")
    {
        ecc_2bit_err_uc2_1_cnt = value;
        ecc_2bit_err_uc2_1_cnt.value_namespace = name_space;
        ecc_2bit_err_uc2_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-uc-cnt")
    {
        out_pkt_uc_cnt = value;
        out_pkt_uc_cnt.value_namespace = name_space;
        out_pkt_uc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-uc-sop-eop-pack-cnt")
    {
        fe_uc_sop_eop_pack_cnt = value;
        fe_uc_sop_eop_pack_cnt.value_namespace = name_space;
        fe_uc_sop_eop_pack_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-uc-0-1-trans-cnt")
    {
        fc_uc_0_1_trans_cnt = value;
        fc_uc_0_1_trans_cnt.value_namespace = name_space;
        fc_uc_0_1_trans_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-uc0-cnt")
    {
        in_pkt_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "in-pkt-uc1-cnt")
    {
        in_pkt_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "in-pkt-uc2-cnt")
    {
        in_pkt_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-uc0-cnt")
    {
        in_full_line_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-uc1-cnt")
    {
        in_full_line_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-uc2-cnt")
    {
        in_full_line_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-uc0-cnt")
    {
        pkt_trunc_eop_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-uc1-cnt")
    {
        pkt_trunc_eop_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-uc2-cnt")
    {
        pkt_trunc_eop_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-uc0-cnt")
    {
        pkt_sop_drop_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-uc1-cnt")
    {
        pkt_sop_drop_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-uc2-cnt")
    {
        pkt_sop_drop_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-err-drop-uc-cnt")
    {
        pkt_ecc_err_drop_uc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-trunc-cnt-uc-cnt")
    {
        pkt_ecc_trunc_cnt_uc_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc0-0-cnt")
    {
        ecc_1bit_err_uc0_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc0-1-cnt")
    {
        ecc_1bit_err_uc0_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc1-0-cnt")
    {
        ecc_1bit_err_uc1_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc1-1-cnt")
    {
        ecc_1bit_err_uc1_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc2-0-cnt")
    {
        ecc_1bit_err_uc2_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc2-1-cnt")
    {
        ecc_1bit_err_uc2_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc0-0-cnt")
    {
        ecc_2bit_err_uc0_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc0-1-cnt")
    {
        ecc_2bit_err_uc0_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc1-0-cnt")
    {
        ecc_2bit_err_uc1_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc1-1-cnt")
    {
        ecc_2bit_err_uc1_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc2-0-cnt")
    {
        ecc_2bit_err_uc2_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc2-1-cnt")
    {
        ecc_2bit_err_uc2_1_cnt.yfilter = yfilter;
    }
    if(value_path == "out-pkt-uc-cnt")
    {
        out_pkt_uc_cnt.yfilter = yfilter;
    }
    if(value_path == "fe-uc-sop-eop-pack-cnt")
    {
        fe_uc_sop_eop_pack_cnt.yfilter = yfilter;
    }
    if(value_path == "fc-uc-0-1-trans-cnt")
    {
        fc_uc_0_1_trans_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-uc0-cnt" || name == "in-pkt-uc1-cnt" || name == "in-pkt-uc2-cnt" || name == "in-full-line-uc0-cnt" || name == "in-full-line-uc1-cnt" || name == "in-full-line-uc2-cnt" || name == "pkt-trunc-eop-uc0-cnt" || name == "pkt-trunc-eop-uc1-cnt" || name == "pkt-trunc-eop-uc2-cnt" || name == "pkt-sop-drop-uc0-cnt" || name == "pkt-sop-drop-uc1-cnt" || name == "pkt-sop-drop-uc2-cnt" || name == "pkt-ecc-err-drop-uc-cnt" || name == "pkt-ecc-trunc-cnt-uc-cnt" || name == "ecc-1bit-err-uc0-0-cnt" || name == "ecc-1bit-err-uc0-1-cnt" || name == "ecc-1bit-err-uc1-0-cnt" || name == "ecc-1bit-err-uc1-1-cnt" || name == "ecc-1bit-err-uc2-0-cnt" || name == "ecc-1bit-err-uc2-1-cnt" || name == "ecc-2bit-err-uc0-0-cnt" || name == "ecc-2bit-err-uc0-1-cnt" || name == "ecc-2bit-err-uc1-0-cnt" || name == "ecc-2bit-err-uc1-1-cnt" || name == "ecc-2bit-err-uc2-0-cnt" || name == "ecc-2bit-err-uc2-1-cnt" || name == "out-pkt-uc-cnt" || name == "fe-uc-sop-eop-pack-cnt" || name == "fc-uc-0-1-trans-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::PeMcStats()
    :
    in_pkt_mc_cnt{YType::uint64, "in-pkt-mc-cnt"},
    in_full_line_mc_cnt{YType::uint64, "in-full-line-mc-cnt"},
    pkt_trunc_eop_mc_cnt{YType::uint64, "pkt-trunc-eop-mc-cnt"},
    pkt_sop_drop_mc_cnt{YType::uint64, "pkt-sop-drop-mc-cnt"},
    pkt_ecc_err_drop_mc_cnt{YType::uint64, "pkt-ecc-err-drop-mc-cnt"},
    pkt_ecc_err_trunc_cnt_mc_cnt{YType::uint64, "pkt-ecc-err-trunc-cnt-mc-cnt"},
    ecc_1bit_err_mc0_cnt{YType::uint64, "ecc-1bit-err-mc0-cnt"},
    ecc_1bit_err_mc1_cnt{YType::uint64, "ecc-1bit-err-mc1-cnt"},
    ecc_1bit_err_mc2_cnt{YType::uint64, "ecc-1bit-err-mc2-cnt"},
    ecc_2bit_err_mc0_cnt{YType::uint64, "ecc-2bit-err-mc0-cnt"},
    ecc_2bit_err_mc1_cnt{YType::uint64, "ecc-2bit-err-mc1-cnt"},
    ecc_2bit_err_mc2_cnt{YType::uint64, "ecc-2bit-err-mc2-cnt"},
    out_pkt_mc_cnt{YType::uint64, "out-pkt-mc-cnt"},
    fe_mc_sop_eop_pack_cnt{YType::uint64, "fe-mc-sop-eop-pack-cnt"},
    fc_mc_0_1_trans_cnt{YType::uint64, "fc-mc-0-1-trans-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pe-mc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::~PeMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkt_mc_cnt.is_set
	|| in_full_line_mc_cnt.is_set
	|| pkt_trunc_eop_mc_cnt.is_set
	|| pkt_sop_drop_mc_cnt.is_set
	|| pkt_ecc_err_drop_mc_cnt.is_set
	|| pkt_ecc_err_trunc_cnt_mc_cnt.is_set
	|| ecc_1bit_err_mc0_cnt.is_set
	|| ecc_1bit_err_mc1_cnt.is_set
	|| ecc_1bit_err_mc2_cnt.is_set
	|| ecc_2bit_err_mc0_cnt.is_set
	|| ecc_2bit_err_mc1_cnt.is_set
	|| ecc_2bit_err_mc2_cnt.is_set
	|| out_pkt_mc_cnt.is_set
	|| fe_mc_sop_eop_pack_cnt.is_set
	|| fc_mc_0_1_trans_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_mc_cnt.yfilter)
	|| ydk::is_set(in_full_line_mc_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_mc_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_mc_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_err_drop_mc_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_err_trunc_cnt_mc_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_mc0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_mc1_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_mc2_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_mc0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_mc1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_mc2_cnt.yfilter)
	|| ydk::is_set(out_pkt_mc_cnt.yfilter)
	|| ydk::is_set(fe_mc_sop_eop_pack_cnt.yfilter)
	|| ydk::is_set(fc_mc_0_1_trans_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_mc_cnt.is_set || is_set(in_pkt_mc_cnt.yfilter)) leaf_name_data.push_back(in_pkt_mc_cnt.get_name_leafdata());
    if (in_full_line_mc_cnt.is_set || is_set(in_full_line_mc_cnt.yfilter)) leaf_name_data.push_back(in_full_line_mc_cnt.get_name_leafdata());
    if (pkt_trunc_eop_mc_cnt.is_set || is_set(pkt_trunc_eop_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_mc_cnt.get_name_leafdata());
    if (pkt_sop_drop_mc_cnt.is_set || is_set(pkt_sop_drop_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_mc_cnt.get_name_leafdata());
    if (pkt_ecc_err_drop_mc_cnt.is_set || is_set(pkt_ecc_err_drop_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_err_drop_mc_cnt.get_name_leafdata());
    if (pkt_ecc_err_trunc_cnt_mc_cnt.is_set || is_set(pkt_ecc_err_trunc_cnt_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_err_trunc_cnt_mc_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc0_cnt.is_set || is_set(ecc_1bit_err_mc0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_mc0_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc1_cnt.is_set || is_set(ecc_1bit_err_mc1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_mc1_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc2_cnt.is_set || is_set(ecc_1bit_err_mc2_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_mc2_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc0_cnt.is_set || is_set(ecc_2bit_err_mc0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_mc0_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc1_cnt.is_set || is_set(ecc_2bit_err_mc1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_mc1_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc2_cnt.is_set || is_set(ecc_2bit_err_mc2_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_mc2_cnt.get_name_leafdata());
    if (out_pkt_mc_cnt.is_set || is_set(out_pkt_mc_cnt.yfilter)) leaf_name_data.push_back(out_pkt_mc_cnt.get_name_leafdata());
    if (fe_mc_sop_eop_pack_cnt.is_set || is_set(fe_mc_sop_eop_pack_cnt.yfilter)) leaf_name_data.push_back(fe_mc_sop_eop_pack_cnt.get_name_leafdata());
    if (fc_mc_0_1_trans_cnt.is_set || is_set(fc_mc_0_1_trans_cnt.yfilter)) leaf_name_data.push_back(fc_mc_0_1_trans_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-mc-cnt")
    {
        in_pkt_mc_cnt = value;
        in_pkt_mc_cnt.value_namespace = name_space;
        in_pkt_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-mc-cnt")
    {
        in_full_line_mc_cnt = value;
        in_full_line_mc_cnt.value_namespace = name_space;
        in_full_line_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-mc-cnt")
    {
        pkt_trunc_eop_mc_cnt = value;
        pkt_trunc_eop_mc_cnt.value_namespace = name_space;
        pkt_trunc_eop_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-mc-cnt")
    {
        pkt_sop_drop_mc_cnt = value;
        pkt_sop_drop_mc_cnt.value_namespace = name_space;
        pkt_sop_drop_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-err-drop-mc-cnt")
    {
        pkt_ecc_err_drop_mc_cnt = value;
        pkt_ecc_err_drop_mc_cnt.value_namespace = name_space;
        pkt_ecc_err_drop_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-err-trunc-cnt-mc-cnt")
    {
        pkt_ecc_err_trunc_cnt_mc_cnt = value;
        pkt_ecc_err_trunc_cnt_mc_cnt.value_namespace = name_space;
        pkt_ecc_err_trunc_cnt_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-mc0-cnt")
    {
        ecc_1bit_err_mc0_cnt = value;
        ecc_1bit_err_mc0_cnt.value_namespace = name_space;
        ecc_1bit_err_mc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-mc1-cnt")
    {
        ecc_1bit_err_mc1_cnt = value;
        ecc_1bit_err_mc1_cnt.value_namespace = name_space;
        ecc_1bit_err_mc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-mc2-cnt")
    {
        ecc_1bit_err_mc2_cnt = value;
        ecc_1bit_err_mc2_cnt.value_namespace = name_space;
        ecc_1bit_err_mc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-mc0-cnt")
    {
        ecc_2bit_err_mc0_cnt = value;
        ecc_2bit_err_mc0_cnt.value_namespace = name_space;
        ecc_2bit_err_mc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-mc1-cnt")
    {
        ecc_2bit_err_mc1_cnt = value;
        ecc_2bit_err_mc1_cnt.value_namespace = name_space;
        ecc_2bit_err_mc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-mc2-cnt")
    {
        ecc_2bit_err_mc2_cnt = value;
        ecc_2bit_err_mc2_cnt.value_namespace = name_space;
        ecc_2bit_err_mc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-mc-cnt")
    {
        out_pkt_mc_cnt = value;
        out_pkt_mc_cnt.value_namespace = name_space;
        out_pkt_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-mc-sop-eop-pack-cnt")
    {
        fe_mc_sop_eop_pack_cnt = value;
        fe_mc_sop_eop_pack_cnt.value_namespace = name_space;
        fe_mc_sop_eop_pack_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-mc-0-1-trans-cnt")
    {
        fc_mc_0_1_trans_cnt = value;
        fc_mc_0_1_trans_cnt.value_namespace = name_space;
        fc_mc_0_1_trans_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-mc-cnt")
    {
        in_pkt_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-mc-cnt")
    {
        in_full_line_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-mc-cnt")
    {
        pkt_trunc_eop_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-mc-cnt")
    {
        pkt_sop_drop_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-err-drop-mc-cnt")
    {
        pkt_ecc_err_drop_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-err-trunc-cnt-mc-cnt")
    {
        pkt_ecc_err_trunc_cnt_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-mc0-cnt")
    {
        ecc_1bit_err_mc0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-mc1-cnt")
    {
        ecc_1bit_err_mc1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-mc2-cnt")
    {
        ecc_1bit_err_mc2_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-mc0-cnt")
    {
        ecc_2bit_err_mc0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-mc1-cnt")
    {
        ecc_2bit_err_mc1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-mc2-cnt")
    {
        ecc_2bit_err_mc2_cnt.yfilter = yfilter;
    }
    if(value_path == "out-pkt-mc-cnt")
    {
        out_pkt_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "fe-mc-sop-eop-pack-cnt")
    {
        fe_mc_sop_eop_pack_cnt.yfilter = yfilter;
    }
    if(value_path == "fc-mc-0-1-trans-cnt")
    {
        fc_mc_0_1_trans_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-mc-cnt" || name == "in-full-line-mc-cnt" || name == "pkt-trunc-eop-mc-cnt" || name == "pkt-sop-drop-mc-cnt" || name == "pkt-ecc-err-drop-mc-cnt" || name == "pkt-ecc-err-trunc-cnt-mc-cnt" || name == "ecc-1bit-err-mc0-cnt" || name == "ecc-1bit-err-mc1-cnt" || name == "ecc-1bit-err-mc2-cnt" || name == "ecc-2bit-err-mc0-cnt" || name == "ecc-2bit-err-mc1-cnt" || name == "ecc-2bit-err-mc2-cnt" || name == "out-pkt-mc-cnt" || name == "fe-mc-sop-eop-pack-cnt" || name == "fc-mc-0-1-trans-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::PeCcStats()
    :
    in_pkt_cnt{YType::uint64, "in-pkt-cnt"},
    out_path0_pkt_cnt{YType::uint64, "out-path0-pkt-cnt"},
    out_path1_pkt_cnt{YType::uint64, "out-path1-pkt-cnt"},
    xbar_ecc_drop_pkt_cnt{YType::uint64, "xbar-ecc-drop-pkt-cnt"},
    mem0_drop_pkt_cnt{YType::uint64, "mem0-drop-pkt-cnt"},
    mem1_drop_pkt_cnt{YType::uint64, "mem1-drop-pkt-cnt"},
    congn_pkt_cnt{YType::uint64, "congn-pkt-cnt"},
    xbar_ecc_single_err_cnt{YType::uint64, "xbar-ecc-single-err-cnt"},
    xbar_ecc_double_err_cnt{YType::uint64, "xbar-ecc-double-err-cnt"},
    mem0_ecc_single_err_cnt{YType::uint64, "mem0-ecc-single-err-cnt"},
    mem0_ecc_double_err_cnt{YType::uint64, "mem0-ecc-double-err-cnt"},
    mem1_ecc_single_err_cnt{YType::uint64, "mem1-ecc-single-err-cnt"},
    mem1_ecc_double_err_cnt{YType::uint64, "mem1-ecc-double-err-cnt"},
    fc_cc_0_1_trans_cnt{YType::uint64, "fc-cc-0-1-trans-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pe-cc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::~PeCcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkt_cnt.is_set
	|| out_path0_pkt_cnt.is_set
	|| out_path1_pkt_cnt.is_set
	|| xbar_ecc_drop_pkt_cnt.is_set
	|| mem0_drop_pkt_cnt.is_set
	|| mem1_drop_pkt_cnt.is_set
	|| congn_pkt_cnt.is_set
	|| xbar_ecc_single_err_cnt.is_set
	|| xbar_ecc_double_err_cnt.is_set
	|| mem0_ecc_single_err_cnt.is_set
	|| mem0_ecc_double_err_cnt.is_set
	|| mem1_ecc_single_err_cnt.is_set
	|| mem1_ecc_double_err_cnt.is_set
	|| fc_cc_0_1_trans_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_cnt.yfilter)
	|| ydk::is_set(out_path0_pkt_cnt.yfilter)
	|| ydk::is_set(out_path1_pkt_cnt.yfilter)
	|| ydk::is_set(xbar_ecc_drop_pkt_cnt.yfilter)
	|| ydk::is_set(mem0_drop_pkt_cnt.yfilter)
	|| ydk::is_set(mem1_drop_pkt_cnt.yfilter)
	|| ydk::is_set(congn_pkt_cnt.yfilter)
	|| ydk::is_set(xbar_ecc_single_err_cnt.yfilter)
	|| ydk::is_set(xbar_ecc_double_err_cnt.yfilter)
	|| ydk::is_set(mem0_ecc_single_err_cnt.yfilter)
	|| ydk::is_set(mem0_ecc_double_err_cnt.yfilter)
	|| ydk::is_set(mem1_ecc_single_err_cnt.yfilter)
	|| ydk::is_set(mem1_ecc_double_err_cnt.yfilter)
	|| ydk::is_set(fc_cc_0_1_trans_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-cc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_cnt.is_set || is_set(in_pkt_cnt.yfilter)) leaf_name_data.push_back(in_pkt_cnt.get_name_leafdata());
    if (out_path0_pkt_cnt.is_set || is_set(out_path0_pkt_cnt.yfilter)) leaf_name_data.push_back(out_path0_pkt_cnt.get_name_leafdata());
    if (out_path1_pkt_cnt.is_set || is_set(out_path1_pkt_cnt.yfilter)) leaf_name_data.push_back(out_path1_pkt_cnt.get_name_leafdata());
    if (xbar_ecc_drop_pkt_cnt.is_set || is_set(xbar_ecc_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(xbar_ecc_drop_pkt_cnt.get_name_leafdata());
    if (mem0_drop_pkt_cnt.is_set || is_set(mem0_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(mem0_drop_pkt_cnt.get_name_leafdata());
    if (mem1_drop_pkt_cnt.is_set || is_set(mem1_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(mem1_drop_pkt_cnt.get_name_leafdata());
    if (congn_pkt_cnt.is_set || is_set(congn_pkt_cnt.yfilter)) leaf_name_data.push_back(congn_pkt_cnt.get_name_leafdata());
    if (xbar_ecc_single_err_cnt.is_set || is_set(xbar_ecc_single_err_cnt.yfilter)) leaf_name_data.push_back(xbar_ecc_single_err_cnt.get_name_leafdata());
    if (xbar_ecc_double_err_cnt.is_set || is_set(xbar_ecc_double_err_cnt.yfilter)) leaf_name_data.push_back(xbar_ecc_double_err_cnt.get_name_leafdata());
    if (mem0_ecc_single_err_cnt.is_set || is_set(mem0_ecc_single_err_cnt.yfilter)) leaf_name_data.push_back(mem0_ecc_single_err_cnt.get_name_leafdata());
    if (mem0_ecc_double_err_cnt.is_set || is_set(mem0_ecc_double_err_cnt.yfilter)) leaf_name_data.push_back(mem0_ecc_double_err_cnt.get_name_leafdata());
    if (mem1_ecc_single_err_cnt.is_set || is_set(mem1_ecc_single_err_cnt.yfilter)) leaf_name_data.push_back(mem1_ecc_single_err_cnt.get_name_leafdata());
    if (mem1_ecc_double_err_cnt.is_set || is_set(mem1_ecc_double_err_cnt.yfilter)) leaf_name_data.push_back(mem1_ecc_double_err_cnt.get_name_leafdata());
    if (fc_cc_0_1_trans_cnt.is_set || is_set(fc_cc_0_1_trans_cnt.yfilter)) leaf_name_data.push_back(fc_cc_0_1_trans_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-cnt")
    {
        in_pkt_cnt = value;
        in_pkt_cnt.value_namespace = name_space;
        in_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path0-pkt-cnt")
    {
        out_path0_pkt_cnt = value;
        out_path0_pkt_cnt.value_namespace = name_space;
        out_path0_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path1-pkt-cnt")
    {
        out_path1_pkt_cnt = value;
        out_path1_pkt_cnt.value_namespace = name_space;
        out_path1_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-ecc-drop-pkt-cnt")
    {
        xbar_ecc_drop_pkt_cnt = value;
        xbar_ecc_drop_pkt_cnt.value_namespace = name_space;
        xbar_ecc_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem0-drop-pkt-cnt")
    {
        mem0_drop_pkt_cnt = value;
        mem0_drop_pkt_cnt.value_namespace = name_space;
        mem0_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem1-drop-pkt-cnt")
    {
        mem1_drop_pkt_cnt = value;
        mem1_drop_pkt_cnt.value_namespace = name_space;
        mem1_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "congn-pkt-cnt")
    {
        congn_pkt_cnt = value;
        congn_pkt_cnt.value_namespace = name_space;
        congn_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-ecc-single-err-cnt")
    {
        xbar_ecc_single_err_cnt = value;
        xbar_ecc_single_err_cnt.value_namespace = name_space;
        xbar_ecc_single_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-ecc-double-err-cnt")
    {
        xbar_ecc_double_err_cnt = value;
        xbar_ecc_double_err_cnt.value_namespace = name_space;
        xbar_ecc_double_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem0-ecc-single-err-cnt")
    {
        mem0_ecc_single_err_cnt = value;
        mem0_ecc_single_err_cnt.value_namespace = name_space;
        mem0_ecc_single_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem0-ecc-double-err-cnt")
    {
        mem0_ecc_double_err_cnt = value;
        mem0_ecc_double_err_cnt.value_namespace = name_space;
        mem0_ecc_double_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem1-ecc-single-err-cnt")
    {
        mem1_ecc_single_err_cnt = value;
        mem1_ecc_single_err_cnt.value_namespace = name_space;
        mem1_ecc_single_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem1-ecc-double-err-cnt")
    {
        mem1_ecc_double_err_cnt = value;
        mem1_ecc_double_err_cnt.value_namespace = name_space;
        mem1_ecc_double_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-cc-0-1-trans-cnt")
    {
        fc_cc_0_1_trans_cnt = value;
        fc_cc_0_1_trans_cnt.value_namespace = name_space;
        fc_cc_0_1_trans_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-cnt")
    {
        in_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "out-path0-pkt-cnt")
    {
        out_path0_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "out-path1-pkt-cnt")
    {
        out_path1_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "xbar-ecc-drop-pkt-cnt")
    {
        xbar_ecc_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "mem0-drop-pkt-cnt")
    {
        mem0_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "mem1-drop-pkt-cnt")
    {
        mem1_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "congn-pkt-cnt")
    {
        congn_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "xbar-ecc-single-err-cnt")
    {
        xbar_ecc_single_err_cnt.yfilter = yfilter;
    }
    if(value_path == "xbar-ecc-double-err-cnt")
    {
        xbar_ecc_double_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem0-ecc-single-err-cnt")
    {
        mem0_ecc_single_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem0-ecc-double-err-cnt")
    {
        mem0_ecc_double_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem1-ecc-single-err-cnt")
    {
        mem1_ecc_single_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem1-ecc-double-err-cnt")
    {
        mem1_ecc_double_err_cnt.yfilter = yfilter;
    }
    if(value_path == "fc-cc-0-1-trans-cnt")
    {
        fc_cc_0_1_trans_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-cnt" || name == "out-path0-pkt-cnt" || name == "out-path1-pkt-cnt" || name == "xbar-ecc-drop-pkt-cnt" || name == "mem0-drop-pkt-cnt" || name == "mem1-drop-pkt-cnt" || name == "congn-pkt-cnt" || name == "xbar-ecc-single-err-cnt" || name == "xbar-ecc-double-err-cnt" || name == "mem0-ecc-single-err-cnt" || name == "mem0-ecc-double-err-cnt" || name == "mem1-ecc-single-err-cnt" || name == "mem1-ecc-double-err-cnt" || name == "fc-cc-0-1-trans-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}


}
}

