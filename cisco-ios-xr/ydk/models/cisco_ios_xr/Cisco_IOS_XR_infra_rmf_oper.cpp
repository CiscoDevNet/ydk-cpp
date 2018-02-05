
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rmf_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rmf_oper {

Redundancy::Redundancy()
    :
    nodes(std::make_shared<Redundancy::Nodes>())
	,summary(std::make_shared<Redundancy::Summary>())
{
    nodes->parent = this;
    summary->parent = this;

    yang_name = "redundancy"; yang_parent_name = "Cisco-IOS-XR-infra-rmf-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Redundancy::~Redundancy()
{
}

bool Redundancy::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Redundancy::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Redundancy::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Redundancy::clone_ptr() const
{
    return std::make_shared<Redundancy>();
}

std::string Redundancy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Redundancy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Redundancy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Redundancy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "summary")
        return true;
    return false;
}

Redundancy::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Redundancy::Nodes::~Nodes()
{
}

bool Redundancy::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Redundancy::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Redundancy::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Redundancy::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<Redundancy::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Nodes::get_children() const
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

void Redundancy::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Redundancy::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Redundancy::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Redundancy::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    log{YType::str, "log"},
    active_reboot_reason{YType::str, "active-reboot-reason"},
    standby_reboot_reason{YType::str, "standby-reboot-reason"},
    err_log{YType::str, "err-log"}
    	,
    redundancy(std::make_shared<Redundancy::Nodes::Node::Redundancy_>())
{
    redundancy->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Redundancy::Nodes::Node::~Node()
{
}

bool Redundancy::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| log.is_set
	|| active_reboot_reason.is_set
	|| standby_reboot_reason.is_set
	|| err_log.is_set
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Redundancy::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(active_reboot_reason.yfilter)
	|| ydk::is_set(standby_reboot_reason.yfilter)
	|| ydk::is_set(err_log.yfilter)
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Redundancy::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Redundancy::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (active_reboot_reason.is_set || is_set(active_reboot_reason.yfilter)) leaf_name_data.push_back(active_reboot_reason.get_name_leafdata());
    if (standby_reboot_reason.is_set || is_set(standby_reboot_reason.yfilter)) leaf_name_data.push_back(standby_reboot_reason.get_name_leafdata());
    if (err_log.is_set || is_set(err_log.yfilter)) leaf_name_data.push_back(err_log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Redundancy::Nodes::Node::Redundancy_>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Redundancy::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-reboot-reason")
    {
        active_reboot_reason = value;
        active_reboot_reason.value_namespace = name_space;
        active_reboot_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-reboot-reason")
    {
        standby_reboot_reason = value;
        standby_reboot_reason.value_namespace = name_space;
        standby_reboot_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-log")
    {
        err_log = value;
        err_log.value_namespace = name_space;
        err_log.value_namespace_prefix = name_space_prefix;
    }
}

void Redundancy::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "active-reboot-reason")
    {
        active_reboot_reason.yfilter = yfilter;
    }
    if(value_path == "standby-reboot-reason")
    {
        standby_reboot_reason.yfilter = yfilter;
    }
    if(value_path == "err-log")
    {
        err_log.yfilter = yfilter;
    }
}

bool Redundancy::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "node-id" || name == "log" || name == "active-reboot-reason" || name == "standby-reboot-reason" || name == "err-log")
        return true;
    return false;
}

Redundancy::Nodes::Node::Redundancy_::Redundancy_()
    :
    active{YType::str, "active"},
    standby{YType::str, "standby"},
    ha_state{YType::str, "ha-state"},
    nsr_state{YType::str, "nsr-state"}
{

    yang_name = "redundancy"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Redundancy::Nodes::Node::Redundancy_::~Redundancy_()
{
}

bool Redundancy::Nodes::Node::Redundancy_::has_data() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_data())
            return true;
    }
    return active.is_set
	|| standby.is_set
	|| ha_state.is_set
	|| nsr_state.is_set;
}

bool Redundancy::Nodes::Node::Redundancy_::has_operation() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(standby.yfilter)
	|| ydk::is_set(ha_state.yfilter)
	|| ydk::is_set(nsr_state.yfilter);
}

std::string Redundancy::Nodes::Node::Redundancy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Nodes::Node::Redundancy_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (standby.is_set || is_set(standby.yfilter)) leaf_name_data.push_back(standby.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.yfilter)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Nodes::Node::Redundancy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groupinfo")
    {
        auto c = std::make_shared<Redundancy::Nodes::Node::Redundancy_::Groupinfo>();
        c->parent = this;
        groupinfo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Nodes::Node::Redundancy_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : groupinfo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Redundancy::Nodes::Node::Redundancy_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby")
    {
        standby = value;
        standby.value_namespace = name_space;
        standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
        ha_state.value_namespace = name_space;
        ha_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Redundancy::Nodes::Node::Redundancy_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "standby")
    {
        standby.yfilter = yfilter;
    }
    if(value_path == "ha-state")
    {
        ha_state.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
}

bool Redundancy::Nodes::Node::Redundancy_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groupinfo" || name == "active" || name == "standby" || name == "ha-state" || name == "nsr-state")
        return true;
    return false;
}

Redundancy::Nodes::Node::Redundancy_::Groupinfo::Groupinfo()
    :
    active{YType::str, "active"},
    standby{YType::str, "standby"},
    ha_state{YType::str, "ha-state"},
    nsr_state{YType::str, "nsr-state"}
{

    yang_name = "groupinfo"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Redundancy::Nodes::Node::Redundancy_::Groupinfo::~Groupinfo()
{
}

bool Redundancy::Nodes::Node::Redundancy_::Groupinfo::has_data() const
{
    return active.is_set
	|| standby.is_set
	|| ha_state.is_set
	|| nsr_state.is_set;
}

bool Redundancy::Nodes::Node::Redundancy_::Groupinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(standby.yfilter)
	|| ydk::is_set(ha_state.yfilter)
	|| ydk::is_set(nsr_state.yfilter);
}

std::string Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groupinfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (standby.is_set || is_set(standby.yfilter)) leaf_name_data.push_back(standby.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.yfilter)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Redundancy::Nodes::Node::Redundancy_::Groupinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby")
    {
        standby = value;
        standby.value_namespace = name_space;
        standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
        ha_state.value_namespace = name_space;
        ha_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Redundancy::Nodes::Node::Redundancy_::Groupinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "standby")
    {
        standby.yfilter = yfilter;
    }
    if(value_path == "ha-state")
    {
        ha_state.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
}

bool Redundancy::Nodes::Node::Redundancy_::Groupinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby" || name == "ha-state" || name == "nsr-state")
        return true;
    return false;
}

Redundancy::Summary::Summary()
    :
    err_log{YType::str, "err-log"}
{

    yang_name = "summary"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Redundancy::Summary::~Summary()
{
}

bool Redundancy::Summary::has_data() const
{
    for (std::size_t index=0; index<red_pair.size(); index++)
    {
        if(red_pair[index]->has_data())
            return true;
    }
    return err_log.is_set;
}

bool Redundancy::Summary::has_operation() const
{
    for (std::size_t index=0; index<red_pair.size(); index++)
    {
        if(red_pair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(err_log.yfilter);
}

std::string Redundancy::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Redundancy::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_log.is_set || is_set(err_log.yfilter)) leaf_name_data.push_back(err_log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-pair")
    {
        auto c = std::make_shared<Redundancy::Summary::RedPair>();
        c->parent = this;
        red_pair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : red_pair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Redundancy::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "err-log")
    {
        err_log = value;
        err_log.value_namespace = name_space;
        err_log.value_namespace_prefix = name_space_prefix;
    }
}

void Redundancy::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "err-log")
    {
        err_log.yfilter = yfilter;
    }
}

bool Redundancy::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "red-pair" || name == "err-log")
        return true;
    return false;
}

Redundancy::Summary::RedPair::RedPair()
    :
    active{YType::str, "active"},
    standby{YType::str, "standby"},
    ha_state{YType::str, "ha-state"},
    nsr_state{YType::str, "nsr-state"}
{

    yang_name = "red-pair"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Redundancy::Summary::RedPair::~RedPair()
{
}

bool Redundancy::Summary::RedPair::has_data() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_data())
            return true;
    }
    return active.is_set
	|| standby.is_set
	|| ha_state.is_set
	|| nsr_state.is_set;
}

bool Redundancy::Summary::RedPair::has_operation() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(standby.yfilter)
	|| ydk::is_set(ha_state.yfilter)
	|| ydk::is_set(nsr_state.yfilter);
}

std::string Redundancy::Summary::RedPair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Redundancy::Summary::RedPair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Summary::RedPair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (standby.is_set || is_set(standby.yfilter)) leaf_name_data.push_back(standby.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.yfilter)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Summary::RedPair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groupinfo")
    {
        auto c = std::make_shared<Redundancy::Summary::RedPair::Groupinfo>();
        c->parent = this;
        groupinfo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Summary::RedPair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : groupinfo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Redundancy::Summary::RedPair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby")
    {
        standby = value;
        standby.value_namespace = name_space;
        standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
        ha_state.value_namespace = name_space;
        ha_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Redundancy::Summary::RedPair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "standby")
    {
        standby.yfilter = yfilter;
    }
    if(value_path == "ha-state")
    {
        ha_state.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
}

bool Redundancy::Summary::RedPair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groupinfo" || name == "active" || name == "standby" || name == "ha-state" || name == "nsr-state")
        return true;
    return false;
}

Redundancy::Summary::RedPair::Groupinfo::Groupinfo()
    :
    active{YType::str, "active"},
    standby{YType::str, "standby"},
    ha_state{YType::str, "ha-state"},
    nsr_state{YType::str, "nsr-state"}
{

    yang_name = "groupinfo"; yang_parent_name = "red-pair"; is_top_level_class = false; has_list_ancestor = false;
}

Redundancy::Summary::RedPair::Groupinfo::~Groupinfo()
{
}

bool Redundancy::Summary::RedPair::Groupinfo::has_data() const
{
    return active.is_set
	|| standby.is_set
	|| ha_state.is_set
	|| nsr_state.is_set;
}

bool Redundancy::Summary::RedPair::Groupinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(standby.yfilter)
	|| ydk::is_set(ha_state.yfilter)
	|| ydk::is_set(nsr_state.yfilter);
}

std::string Redundancy::Summary::RedPair::Groupinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/summary/red-pair/" << get_segment_path();
    return path_buffer.str();
}

std::string Redundancy::Summary::RedPair::Groupinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groupinfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Redundancy::Summary::RedPair::Groupinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (standby.is_set || is_set(standby.yfilter)) leaf_name_data.push_back(standby.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.yfilter)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Redundancy::Summary::RedPair::Groupinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Redundancy::Summary::RedPair::Groupinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Redundancy::Summary::RedPair::Groupinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby")
    {
        standby = value;
        standby.value_namespace = name_space;
        standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
        ha_state.value_namespace = name_space;
        ha_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Redundancy::Summary::RedPair::Groupinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "standby")
    {
        standby.yfilter = yfilter;
    }
    if(value_path == "ha-state")
    {
        ha_state.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
}

bool Redundancy::Summary::RedPair::Groupinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby" || name == "ha-state" || name == "nsr-state")
        return true;
    return false;
}


}
}

