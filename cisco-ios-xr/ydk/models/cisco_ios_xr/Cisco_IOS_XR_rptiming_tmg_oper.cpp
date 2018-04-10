
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_rptiming_tmg_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rptiming_tmg_oper {

TimingCard::TimingCard()
    :
    nodes(std::make_shared<TimingCard::Nodes>())
{
    nodes->parent = this;

    yang_name = "timing-card"; yang_parent_name = "Cisco-IOS-XR-rptiming-tmg-oper"; is_top_level_class = true; has_list_ancestor = false;
}

TimingCard::~TimingCard()
{
}

bool TimingCard::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool TimingCard::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string TimingCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rptiming-tmg-oper:timing-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<TimingCard::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void TimingCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingCard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TimingCard::clone_ptr() const
{
    return std::make_shared<TimingCard>();
}

std::string TimingCard::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TimingCard::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TimingCard::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TimingCard::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TimingCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

TimingCard::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "timing-card"; is_top_level_class = false; has_list_ancestor = false;
}

TimingCard::Nodes::~Nodes()
{
}

bool TimingCard::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool TimingCard::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingCard::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rptiming-tmg-oper:timing-card/" << get_segment_path();
    return path_buffer.str();
}

std::string TimingCard::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingCard::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingCard::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<TimingCard::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingCard::Nodes::get_children() const
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

void TimingCard::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingCard::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingCard::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

TimingCard::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    input_clock(std::make_shared<TimingCard::Nodes::Node::InputClock>())
	,pll(std::make_shared<TimingCard::Nodes::Node::Pll>())
{
    input_clock->parent = this;
    pll->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

TimingCard::Nodes::Node::~Node()
{
}

bool TimingCard::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (input_clock !=  nullptr && input_clock->has_data())
	|| (pll !=  nullptr && pll->has_data());
}

bool TimingCard::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (input_clock !=  nullptr && input_clock->has_operation())
	|| (pll !=  nullptr && pll->has_operation());
}

std::string TimingCard::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rptiming-tmg-oper:timing-card/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string TimingCard::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingCard::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingCard::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-clock")
    {
        if(input_clock == nullptr)
        {
            input_clock = std::make_shared<TimingCard::Nodes::Node::InputClock>();
        }
        return input_clock;
    }

    if(child_yang_name == "pll")
    {
        if(pll == nullptr)
        {
            pll = std::make_shared<TimingCard::Nodes::Node::Pll>();
        }
        return pll;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingCard::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_clock != nullptr)
    {
        children["input-clock"] = input_clock;
    }

    if(pll != nullptr)
    {
        children["pll"] = pll;
    }

    return children;
}

void TimingCard::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void TimingCard::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool TimingCard::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-clock" || name == "pll" || name == "node-name")
        return true;
    return false;
}

TimingCard::Nodes::Node::InputClock::InputClock()
    :
    ic1_valid{YType::boolean, "ic1-valid"},
    ic2_valid{YType::boolean, "ic2-valid"},
    ic3_valid{YType::boolean, "ic3-valid"},
    ic4_valid{YType::boolean, "ic4-valid"},
    ic5_valid{YType::boolean, "ic5-valid"},
    ic6_valid{YType::boolean, "ic6-valid"},
    ic7_valid{YType::boolean, "ic7-valid"},
    ic8_valid{YType::boolean, "ic8-valid"},
    ic9_valid{YType::boolean, "ic9-valid"},
    ic10_valid{YType::boolean, "ic10-valid"},
    ic11_valid{YType::boolean, "ic11-valid"},
    ic1_slot{YType::str, "ic1-slot"},
    ic2_slot{YType::str, "ic2-slot"},
    ic3_slot{YType::str, "ic3-slot"},
    ic4_slot{YType::str, "ic4-slot"},
    ic5_slot{YType::str, "ic5-slot"},
    ic6_slot{YType::str, "ic6-slot"},
    ic7_slot{YType::str, "ic7-slot"},
    ic8_slot{YType::str, "ic8-slot"},
    ic9_slot{YType::str, "ic9-slot"},
    ic10_slot{YType::str, "ic10-slot"},
    ic11_slot{YType::str, "ic11-slot"},
    ic1_split_xom{YType::str, "ic1-split-xom"},
    ic2_split_xom{YType::str, "ic2-split-xom"},
    ic3_split_xom{YType::str, "ic3-split-xom"},
    ic4_split_xom{YType::str, "ic4-split-xom"},
    ic5_split_xom{YType::str, "ic5-split-xom"},
    ic6_split_xom{YType::str, "ic6-split-xom"},
    ic7_split_xom{YType::str, "ic7-split-xom"},
    ic8_split_xom{YType::str, "ic8-split-xom"},
    ic9_split_xom{YType::str, "ic9-split-xom"},
    ic10_split_xom{YType::str, "ic10-split-xom"},
    ic11_split_xom{YType::str, "ic11-split-xom"},
    ic1_eppsm{YType::str, "ic1-eppsm"},
    ic2_eppsm{YType::str, "ic2-eppsm"},
    ic3_eppsm{YType::str, "ic3-eppsm"},
    ic4_eppsm{YType::str, "ic4-eppsm"},
    ic5_eppsm{YType::str, "ic5-eppsm"},
    ic6_eppsm{YType::str, "ic6-eppsm"},
    ic7_eppsm{YType::str, "ic7-eppsm"},
    ic8_eppsm{YType::str, "ic8-eppsm"},
    ic9_eppsm{YType::str, "ic9-eppsm"},
    ic10_eppsm{YType::str, "ic10-eppsm"},
    ic11_eppsm{YType::str, "ic11-eppsm"},
    ic1_pfm{YType::str, "ic1-pfm"},
    ic2_pfm{YType::str, "ic2-pfm"},
    ic3_pfm{YType::str, "ic3-pfm"},
    ic4_pfm{YType::str, "ic4-pfm"},
    ic5_pfm{YType::str, "ic5-pfm"},
    ic6_pfm{YType::str, "ic6-pfm"},
    ic7_pfm{YType::str, "ic7-pfm"},
    ic8_pfm{YType::str, "ic8-pfm"},
    ic9_pfm{YType::str, "ic9-pfm"},
    ic10_pfm{YType::str, "ic10-pfm"},
    ic11_pfm{YType::str, "ic11-pfm"},
    ic1_gst{YType::str, "ic1-gst"},
    ic2_gst{YType::str, "ic2-gst"},
    ic3_gst{YType::str, "ic3-gst"},
    ic4_gst{YType::str, "ic4-gst"},
    ic5_gst{YType::str, "ic5-gst"},
    ic6_gst{YType::str, "ic6-gst"},
    ic7_gst{YType::str, "ic7-gst"},
    ic8_gst{YType::str, "ic8-gst"},
    ic9_gst{YType::str, "ic9-gst"},
    ic10_gst{YType::str, "ic10-gst"},
    ic11_gst{YType::str, "ic11-gst"},
    ic1_cfm{YType::str, "ic1-cfm"},
    ic2_cfm{YType::str, "ic2-cfm"},
    ic3_cfm{YType::str, "ic3-cfm"},
    ic4_cfm{YType::str, "ic4-cfm"},
    ic5_cfm{YType::str, "ic5-cfm"},
    ic6_cfm{YType::str, "ic6-cfm"},
    ic7_cfm{YType::str, "ic7-cfm"},
    ic8_cfm{YType::str, "ic8-cfm"},
    ic9_cfm{YType::str, "ic9-cfm"},
    ic10_cfm{YType::str, "ic10-cfm"},
    ic11_cfm{YType::str, "ic11-cfm"},
    ic1_scm{YType::str, "ic1-scm"},
    ic2_scm{YType::str, "ic2-scm"},
    ic3_scm{YType::str, "ic3-scm"},
    ic4_scm{YType::str, "ic4-scm"},
    ic5_scm{YType::str, "ic5-scm"},
    ic6_scm{YType::str, "ic6-scm"},
    ic7_scm{YType::str, "ic7-scm"},
    ic8_scm{YType::str, "ic8-scm"},
    ic9_scm{YType::str, "ic9-scm"},
    ic10_scm{YType::str, "ic10-scm"},
    ic11_scm{YType::str, "ic11-scm"},
    ic1_los{YType::str, "ic1-los"},
    ic2_los{YType::str, "ic2-los"},
    ic3_los{YType::str, "ic3-los"},
    ic4_los{YType::str, "ic4-los"},
    ic5_los{YType::str, "ic5-los"},
    ic6_los{YType::str, "ic6-los"},
    ic7_los{YType::str, "ic7-los"},
    ic8_los{YType::str, "ic8-los"},
    ic9_los{YType::str, "ic9-los"},
    ic10_los{YType::str, "ic10-los"},
    ic11_los{YType::str, "ic11-los"}
{

    yang_name = "input-clock"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TimingCard::Nodes::Node::InputClock::~InputClock()
{
}

bool TimingCard::Nodes::Node::InputClock::has_data() const
{
    return ic1_valid.is_set
	|| ic2_valid.is_set
	|| ic3_valid.is_set
	|| ic4_valid.is_set
	|| ic5_valid.is_set
	|| ic6_valid.is_set
	|| ic7_valid.is_set
	|| ic8_valid.is_set
	|| ic9_valid.is_set
	|| ic10_valid.is_set
	|| ic11_valid.is_set
	|| ic1_slot.is_set
	|| ic2_slot.is_set
	|| ic3_slot.is_set
	|| ic4_slot.is_set
	|| ic5_slot.is_set
	|| ic6_slot.is_set
	|| ic7_slot.is_set
	|| ic8_slot.is_set
	|| ic9_slot.is_set
	|| ic10_slot.is_set
	|| ic11_slot.is_set
	|| ic1_split_xom.is_set
	|| ic2_split_xom.is_set
	|| ic3_split_xom.is_set
	|| ic4_split_xom.is_set
	|| ic5_split_xom.is_set
	|| ic6_split_xom.is_set
	|| ic7_split_xom.is_set
	|| ic8_split_xom.is_set
	|| ic9_split_xom.is_set
	|| ic10_split_xom.is_set
	|| ic11_split_xom.is_set
	|| ic1_eppsm.is_set
	|| ic2_eppsm.is_set
	|| ic3_eppsm.is_set
	|| ic4_eppsm.is_set
	|| ic5_eppsm.is_set
	|| ic6_eppsm.is_set
	|| ic7_eppsm.is_set
	|| ic8_eppsm.is_set
	|| ic9_eppsm.is_set
	|| ic10_eppsm.is_set
	|| ic11_eppsm.is_set
	|| ic1_pfm.is_set
	|| ic2_pfm.is_set
	|| ic3_pfm.is_set
	|| ic4_pfm.is_set
	|| ic5_pfm.is_set
	|| ic6_pfm.is_set
	|| ic7_pfm.is_set
	|| ic8_pfm.is_set
	|| ic9_pfm.is_set
	|| ic10_pfm.is_set
	|| ic11_pfm.is_set
	|| ic1_gst.is_set
	|| ic2_gst.is_set
	|| ic3_gst.is_set
	|| ic4_gst.is_set
	|| ic5_gst.is_set
	|| ic6_gst.is_set
	|| ic7_gst.is_set
	|| ic8_gst.is_set
	|| ic9_gst.is_set
	|| ic10_gst.is_set
	|| ic11_gst.is_set
	|| ic1_cfm.is_set
	|| ic2_cfm.is_set
	|| ic3_cfm.is_set
	|| ic4_cfm.is_set
	|| ic5_cfm.is_set
	|| ic6_cfm.is_set
	|| ic7_cfm.is_set
	|| ic8_cfm.is_set
	|| ic9_cfm.is_set
	|| ic10_cfm.is_set
	|| ic11_cfm.is_set
	|| ic1_scm.is_set
	|| ic2_scm.is_set
	|| ic3_scm.is_set
	|| ic4_scm.is_set
	|| ic5_scm.is_set
	|| ic6_scm.is_set
	|| ic7_scm.is_set
	|| ic8_scm.is_set
	|| ic9_scm.is_set
	|| ic10_scm.is_set
	|| ic11_scm.is_set
	|| ic1_los.is_set
	|| ic2_los.is_set
	|| ic3_los.is_set
	|| ic4_los.is_set
	|| ic5_los.is_set
	|| ic6_los.is_set
	|| ic7_los.is_set
	|| ic8_los.is_set
	|| ic9_los.is_set
	|| ic10_los.is_set
	|| ic11_los.is_set;
}

bool TimingCard::Nodes::Node::InputClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ic1_valid.yfilter)
	|| ydk::is_set(ic2_valid.yfilter)
	|| ydk::is_set(ic3_valid.yfilter)
	|| ydk::is_set(ic4_valid.yfilter)
	|| ydk::is_set(ic5_valid.yfilter)
	|| ydk::is_set(ic6_valid.yfilter)
	|| ydk::is_set(ic7_valid.yfilter)
	|| ydk::is_set(ic8_valid.yfilter)
	|| ydk::is_set(ic9_valid.yfilter)
	|| ydk::is_set(ic10_valid.yfilter)
	|| ydk::is_set(ic11_valid.yfilter)
	|| ydk::is_set(ic1_slot.yfilter)
	|| ydk::is_set(ic2_slot.yfilter)
	|| ydk::is_set(ic3_slot.yfilter)
	|| ydk::is_set(ic4_slot.yfilter)
	|| ydk::is_set(ic5_slot.yfilter)
	|| ydk::is_set(ic6_slot.yfilter)
	|| ydk::is_set(ic7_slot.yfilter)
	|| ydk::is_set(ic8_slot.yfilter)
	|| ydk::is_set(ic9_slot.yfilter)
	|| ydk::is_set(ic10_slot.yfilter)
	|| ydk::is_set(ic11_slot.yfilter)
	|| ydk::is_set(ic1_split_xom.yfilter)
	|| ydk::is_set(ic2_split_xom.yfilter)
	|| ydk::is_set(ic3_split_xom.yfilter)
	|| ydk::is_set(ic4_split_xom.yfilter)
	|| ydk::is_set(ic5_split_xom.yfilter)
	|| ydk::is_set(ic6_split_xom.yfilter)
	|| ydk::is_set(ic7_split_xom.yfilter)
	|| ydk::is_set(ic8_split_xom.yfilter)
	|| ydk::is_set(ic9_split_xom.yfilter)
	|| ydk::is_set(ic10_split_xom.yfilter)
	|| ydk::is_set(ic11_split_xom.yfilter)
	|| ydk::is_set(ic1_eppsm.yfilter)
	|| ydk::is_set(ic2_eppsm.yfilter)
	|| ydk::is_set(ic3_eppsm.yfilter)
	|| ydk::is_set(ic4_eppsm.yfilter)
	|| ydk::is_set(ic5_eppsm.yfilter)
	|| ydk::is_set(ic6_eppsm.yfilter)
	|| ydk::is_set(ic7_eppsm.yfilter)
	|| ydk::is_set(ic8_eppsm.yfilter)
	|| ydk::is_set(ic9_eppsm.yfilter)
	|| ydk::is_set(ic10_eppsm.yfilter)
	|| ydk::is_set(ic11_eppsm.yfilter)
	|| ydk::is_set(ic1_pfm.yfilter)
	|| ydk::is_set(ic2_pfm.yfilter)
	|| ydk::is_set(ic3_pfm.yfilter)
	|| ydk::is_set(ic4_pfm.yfilter)
	|| ydk::is_set(ic5_pfm.yfilter)
	|| ydk::is_set(ic6_pfm.yfilter)
	|| ydk::is_set(ic7_pfm.yfilter)
	|| ydk::is_set(ic8_pfm.yfilter)
	|| ydk::is_set(ic9_pfm.yfilter)
	|| ydk::is_set(ic10_pfm.yfilter)
	|| ydk::is_set(ic11_pfm.yfilter)
	|| ydk::is_set(ic1_gst.yfilter)
	|| ydk::is_set(ic2_gst.yfilter)
	|| ydk::is_set(ic3_gst.yfilter)
	|| ydk::is_set(ic4_gst.yfilter)
	|| ydk::is_set(ic5_gst.yfilter)
	|| ydk::is_set(ic6_gst.yfilter)
	|| ydk::is_set(ic7_gst.yfilter)
	|| ydk::is_set(ic8_gst.yfilter)
	|| ydk::is_set(ic9_gst.yfilter)
	|| ydk::is_set(ic10_gst.yfilter)
	|| ydk::is_set(ic11_gst.yfilter)
	|| ydk::is_set(ic1_cfm.yfilter)
	|| ydk::is_set(ic2_cfm.yfilter)
	|| ydk::is_set(ic3_cfm.yfilter)
	|| ydk::is_set(ic4_cfm.yfilter)
	|| ydk::is_set(ic5_cfm.yfilter)
	|| ydk::is_set(ic6_cfm.yfilter)
	|| ydk::is_set(ic7_cfm.yfilter)
	|| ydk::is_set(ic8_cfm.yfilter)
	|| ydk::is_set(ic9_cfm.yfilter)
	|| ydk::is_set(ic10_cfm.yfilter)
	|| ydk::is_set(ic11_cfm.yfilter)
	|| ydk::is_set(ic1_scm.yfilter)
	|| ydk::is_set(ic2_scm.yfilter)
	|| ydk::is_set(ic3_scm.yfilter)
	|| ydk::is_set(ic4_scm.yfilter)
	|| ydk::is_set(ic5_scm.yfilter)
	|| ydk::is_set(ic6_scm.yfilter)
	|| ydk::is_set(ic7_scm.yfilter)
	|| ydk::is_set(ic8_scm.yfilter)
	|| ydk::is_set(ic9_scm.yfilter)
	|| ydk::is_set(ic10_scm.yfilter)
	|| ydk::is_set(ic11_scm.yfilter)
	|| ydk::is_set(ic1_los.yfilter)
	|| ydk::is_set(ic2_los.yfilter)
	|| ydk::is_set(ic3_los.yfilter)
	|| ydk::is_set(ic4_los.yfilter)
	|| ydk::is_set(ic5_los.yfilter)
	|| ydk::is_set(ic6_los.yfilter)
	|| ydk::is_set(ic7_los.yfilter)
	|| ydk::is_set(ic8_los.yfilter)
	|| ydk::is_set(ic9_los.yfilter)
	|| ydk::is_set(ic10_los.yfilter)
	|| ydk::is_set(ic11_los.yfilter);
}

std::string TimingCard::Nodes::Node::InputClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingCard::Nodes::Node::InputClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ic1_valid.is_set || is_set(ic1_valid.yfilter)) leaf_name_data.push_back(ic1_valid.get_name_leafdata());
    if (ic2_valid.is_set || is_set(ic2_valid.yfilter)) leaf_name_data.push_back(ic2_valid.get_name_leafdata());
    if (ic3_valid.is_set || is_set(ic3_valid.yfilter)) leaf_name_data.push_back(ic3_valid.get_name_leafdata());
    if (ic4_valid.is_set || is_set(ic4_valid.yfilter)) leaf_name_data.push_back(ic4_valid.get_name_leafdata());
    if (ic5_valid.is_set || is_set(ic5_valid.yfilter)) leaf_name_data.push_back(ic5_valid.get_name_leafdata());
    if (ic6_valid.is_set || is_set(ic6_valid.yfilter)) leaf_name_data.push_back(ic6_valid.get_name_leafdata());
    if (ic7_valid.is_set || is_set(ic7_valid.yfilter)) leaf_name_data.push_back(ic7_valid.get_name_leafdata());
    if (ic8_valid.is_set || is_set(ic8_valid.yfilter)) leaf_name_data.push_back(ic8_valid.get_name_leafdata());
    if (ic9_valid.is_set || is_set(ic9_valid.yfilter)) leaf_name_data.push_back(ic9_valid.get_name_leafdata());
    if (ic10_valid.is_set || is_set(ic10_valid.yfilter)) leaf_name_data.push_back(ic10_valid.get_name_leafdata());
    if (ic11_valid.is_set || is_set(ic11_valid.yfilter)) leaf_name_data.push_back(ic11_valid.get_name_leafdata());
    if (ic1_slot.is_set || is_set(ic1_slot.yfilter)) leaf_name_data.push_back(ic1_slot.get_name_leafdata());
    if (ic2_slot.is_set || is_set(ic2_slot.yfilter)) leaf_name_data.push_back(ic2_slot.get_name_leafdata());
    if (ic3_slot.is_set || is_set(ic3_slot.yfilter)) leaf_name_data.push_back(ic3_slot.get_name_leafdata());
    if (ic4_slot.is_set || is_set(ic4_slot.yfilter)) leaf_name_data.push_back(ic4_slot.get_name_leafdata());
    if (ic5_slot.is_set || is_set(ic5_slot.yfilter)) leaf_name_data.push_back(ic5_slot.get_name_leafdata());
    if (ic6_slot.is_set || is_set(ic6_slot.yfilter)) leaf_name_data.push_back(ic6_slot.get_name_leafdata());
    if (ic7_slot.is_set || is_set(ic7_slot.yfilter)) leaf_name_data.push_back(ic7_slot.get_name_leafdata());
    if (ic8_slot.is_set || is_set(ic8_slot.yfilter)) leaf_name_data.push_back(ic8_slot.get_name_leafdata());
    if (ic9_slot.is_set || is_set(ic9_slot.yfilter)) leaf_name_data.push_back(ic9_slot.get_name_leafdata());
    if (ic10_slot.is_set || is_set(ic10_slot.yfilter)) leaf_name_data.push_back(ic10_slot.get_name_leafdata());
    if (ic11_slot.is_set || is_set(ic11_slot.yfilter)) leaf_name_data.push_back(ic11_slot.get_name_leafdata());
    if (ic1_split_xom.is_set || is_set(ic1_split_xom.yfilter)) leaf_name_data.push_back(ic1_split_xom.get_name_leafdata());
    if (ic2_split_xom.is_set || is_set(ic2_split_xom.yfilter)) leaf_name_data.push_back(ic2_split_xom.get_name_leafdata());
    if (ic3_split_xom.is_set || is_set(ic3_split_xom.yfilter)) leaf_name_data.push_back(ic3_split_xom.get_name_leafdata());
    if (ic4_split_xom.is_set || is_set(ic4_split_xom.yfilter)) leaf_name_data.push_back(ic4_split_xom.get_name_leafdata());
    if (ic5_split_xom.is_set || is_set(ic5_split_xom.yfilter)) leaf_name_data.push_back(ic5_split_xom.get_name_leafdata());
    if (ic6_split_xom.is_set || is_set(ic6_split_xom.yfilter)) leaf_name_data.push_back(ic6_split_xom.get_name_leafdata());
    if (ic7_split_xom.is_set || is_set(ic7_split_xom.yfilter)) leaf_name_data.push_back(ic7_split_xom.get_name_leafdata());
    if (ic8_split_xom.is_set || is_set(ic8_split_xom.yfilter)) leaf_name_data.push_back(ic8_split_xom.get_name_leafdata());
    if (ic9_split_xom.is_set || is_set(ic9_split_xom.yfilter)) leaf_name_data.push_back(ic9_split_xom.get_name_leafdata());
    if (ic10_split_xom.is_set || is_set(ic10_split_xom.yfilter)) leaf_name_data.push_back(ic10_split_xom.get_name_leafdata());
    if (ic11_split_xom.is_set || is_set(ic11_split_xom.yfilter)) leaf_name_data.push_back(ic11_split_xom.get_name_leafdata());
    if (ic1_eppsm.is_set || is_set(ic1_eppsm.yfilter)) leaf_name_data.push_back(ic1_eppsm.get_name_leafdata());
    if (ic2_eppsm.is_set || is_set(ic2_eppsm.yfilter)) leaf_name_data.push_back(ic2_eppsm.get_name_leafdata());
    if (ic3_eppsm.is_set || is_set(ic3_eppsm.yfilter)) leaf_name_data.push_back(ic3_eppsm.get_name_leafdata());
    if (ic4_eppsm.is_set || is_set(ic4_eppsm.yfilter)) leaf_name_data.push_back(ic4_eppsm.get_name_leafdata());
    if (ic5_eppsm.is_set || is_set(ic5_eppsm.yfilter)) leaf_name_data.push_back(ic5_eppsm.get_name_leafdata());
    if (ic6_eppsm.is_set || is_set(ic6_eppsm.yfilter)) leaf_name_data.push_back(ic6_eppsm.get_name_leafdata());
    if (ic7_eppsm.is_set || is_set(ic7_eppsm.yfilter)) leaf_name_data.push_back(ic7_eppsm.get_name_leafdata());
    if (ic8_eppsm.is_set || is_set(ic8_eppsm.yfilter)) leaf_name_data.push_back(ic8_eppsm.get_name_leafdata());
    if (ic9_eppsm.is_set || is_set(ic9_eppsm.yfilter)) leaf_name_data.push_back(ic9_eppsm.get_name_leafdata());
    if (ic10_eppsm.is_set || is_set(ic10_eppsm.yfilter)) leaf_name_data.push_back(ic10_eppsm.get_name_leafdata());
    if (ic11_eppsm.is_set || is_set(ic11_eppsm.yfilter)) leaf_name_data.push_back(ic11_eppsm.get_name_leafdata());
    if (ic1_pfm.is_set || is_set(ic1_pfm.yfilter)) leaf_name_data.push_back(ic1_pfm.get_name_leafdata());
    if (ic2_pfm.is_set || is_set(ic2_pfm.yfilter)) leaf_name_data.push_back(ic2_pfm.get_name_leafdata());
    if (ic3_pfm.is_set || is_set(ic3_pfm.yfilter)) leaf_name_data.push_back(ic3_pfm.get_name_leafdata());
    if (ic4_pfm.is_set || is_set(ic4_pfm.yfilter)) leaf_name_data.push_back(ic4_pfm.get_name_leafdata());
    if (ic5_pfm.is_set || is_set(ic5_pfm.yfilter)) leaf_name_data.push_back(ic5_pfm.get_name_leafdata());
    if (ic6_pfm.is_set || is_set(ic6_pfm.yfilter)) leaf_name_data.push_back(ic6_pfm.get_name_leafdata());
    if (ic7_pfm.is_set || is_set(ic7_pfm.yfilter)) leaf_name_data.push_back(ic7_pfm.get_name_leafdata());
    if (ic8_pfm.is_set || is_set(ic8_pfm.yfilter)) leaf_name_data.push_back(ic8_pfm.get_name_leafdata());
    if (ic9_pfm.is_set || is_set(ic9_pfm.yfilter)) leaf_name_data.push_back(ic9_pfm.get_name_leafdata());
    if (ic10_pfm.is_set || is_set(ic10_pfm.yfilter)) leaf_name_data.push_back(ic10_pfm.get_name_leafdata());
    if (ic11_pfm.is_set || is_set(ic11_pfm.yfilter)) leaf_name_data.push_back(ic11_pfm.get_name_leafdata());
    if (ic1_gst.is_set || is_set(ic1_gst.yfilter)) leaf_name_data.push_back(ic1_gst.get_name_leafdata());
    if (ic2_gst.is_set || is_set(ic2_gst.yfilter)) leaf_name_data.push_back(ic2_gst.get_name_leafdata());
    if (ic3_gst.is_set || is_set(ic3_gst.yfilter)) leaf_name_data.push_back(ic3_gst.get_name_leafdata());
    if (ic4_gst.is_set || is_set(ic4_gst.yfilter)) leaf_name_data.push_back(ic4_gst.get_name_leafdata());
    if (ic5_gst.is_set || is_set(ic5_gst.yfilter)) leaf_name_data.push_back(ic5_gst.get_name_leafdata());
    if (ic6_gst.is_set || is_set(ic6_gst.yfilter)) leaf_name_data.push_back(ic6_gst.get_name_leafdata());
    if (ic7_gst.is_set || is_set(ic7_gst.yfilter)) leaf_name_data.push_back(ic7_gst.get_name_leafdata());
    if (ic8_gst.is_set || is_set(ic8_gst.yfilter)) leaf_name_data.push_back(ic8_gst.get_name_leafdata());
    if (ic9_gst.is_set || is_set(ic9_gst.yfilter)) leaf_name_data.push_back(ic9_gst.get_name_leafdata());
    if (ic10_gst.is_set || is_set(ic10_gst.yfilter)) leaf_name_data.push_back(ic10_gst.get_name_leafdata());
    if (ic11_gst.is_set || is_set(ic11_gst.yfilter)) leaf_name_data.push_back(ic11_gst.get_name_leafdata());
    if (ic1_cfm.is_set || is_set(ic1_cfm.yfilter)) leaf_name_data.push_back(ic1_cfm.get_name_leafdata());
    if (ic2_cfm.is_set || is_set(ic2_cfm.yfilter)) leaf_name_data.push_back(ic2_cfm.get_name_leafdata());
    if (ic3_cfm.is_set || is_set(ic3_cfm.yfilter)) leaf_name_data.push_back(ic3_cfm.get_name_leafdata());
    if (ic4_cfm.is_set || is_set(ic4_cfm.yfilter)) leaf_name_data.push_back(ic4_cfm.get_name_leafdata());
    if (ic5_cfm.is_set || is_set(ic5_cfm.yfilter)) leaf_name_data.push_back(ic5_cfm.get_name_leafdata());
    if (ic6_cfm.is_set || is_set(ic6_cfm.yfilter)) leaf_name_data.push_back(ic6_cfm.get_name_leafdata());
    if (ic7_cfm.is_set || is_set(ic7_cfm.yfilter)) leaf_name_data.push_back(ic7_cfm.get_name_leafdata());
    if (ic8_cfm.is_set || is_set(ic8_cfm.yfilter)) leaf_name_data.push_back(ic8_cfm.get_name_leafdata());
    if (ic9_cfm.is_set || is_set(ic9_cfm.yfilter)) leaf_name_data.push_back(ic9_cfm.get_name_leafdata());
    if (ic10_cfm.is_set || is_set(ic10_cfm.yfilter)) leaf_name_data.push_back(ic10_cfm.get_name_leafdata());
    if (ic11_cfm.is_set || is_set(ic11_cfm.yfilter)) leaf_name_data.push_back(ic11_cfm.get_name_leafdata());
    if (ic1_scm.is_set || is_set(ic1_scm.yfilter)) leaf_name_data.push_back(ic1_scm.get_name_leafdata());
    if (ic2_scm.is_set || is_set(ic2_scm.yfilter)) leaf_name_data.push_back(ic2_scm.get_name_leafdata());
    if (ic3_scm.is_set || is_set(ic3_scm.yfilter)) leaf_name_data.push_back(ic3_scm.get_name_leafdata());
    if (ic4_scm.is_set || is_set(ic4_scm.yfilter)) leaf_name_data.push_back(ic4_scm.get_name_leafdata());
    if (ic5_scm.is_set || is_set(ic5_scm.yfilter)) leaf_name_data.push_back(ic5_scm.get_name_leafdata());
    if (ic6_scm.is_set || is_set(ic6_scm.yfilter)) leaf_name_data.push_back(ic6_scm.get_name_leafdata());
    if (ic7_scm.is_set || is_set(ic7_scm.yfilter)) leaf_name_data.push_back(ic7_scm.get_name_leafdata());
    if (ic8_scm.is_set || is_set(ic8_scm.yfilter)) leaf_name_data.push_back(ic8_scm.get_name_leafdata());
    if (ic9_scm.is_set || is_set(ic9_scm.yfilter)) leaf_name_data.push_back(ic9_scm.get_name_leafdata());
    if (ic10_scm.is_set || is_set(ic10_scm.yfilter)) leaf_name_data.push_back(ic10_scm.get_name_leafdata());
    if (ic11_scm.is_set || is_set(ic11_scm.yfilter)) leaf_name_data.push_back(ic11_scm.get_name_leafdata());
    if (ic1_los.is_set || is_set(ic1_los.yfilter)) leaf_name_data.push_back(ic1_los.get_name_leafdata());
    if (ic2_los.is_set || is_set(ic2_los.yfilter)) leaf_name_data.push_back(ic2_los.get_name_leafdata());
    if (ic3_los.is_set || is_set(ic3_los.yfilter)) leaf_name_data.push_back(ic3_los.get_name_leafdata());
    if (ic4_los.is_set || is_set(ic4_los.yfilter)) leaf_name_data.push_back(ic4_los.get_name_leafdata());
    if (ic5_los.is_set || is_set(ic5_los.yfilter)) leaf_name_data.push_back(ic5_los.get_name_leafdata());
    if (ic6_los.is_set || is_set(ic6_los.yfilter)) leaf_name_data.push_back(ic6_los.get_name_leafdata());
    if (ic7_los.is_set || is_set(ic7_los.yfilter)) leaf_name_data.push_back(ic7_los.get_name_leafdata());
    if (ic8_los.is_set || is_set(ic8_los.yfilter)) leaf_name_data.push_back(ic8_los.get_name_leafdata());
    if (ic9_los.is_set || is_set(ic9_los.yfilter)) leaf_name_data.push_back(ic9_los.get_name_leafdata());
    if (ic10_los.is_set || is_set(ic10_los.yfilter)) leaf_name_data.push_back(ic10_los.get_name_leafdata());
    if (ic11_los.is_set || is_set(ic11_los.yfilter)) leaf_name_data.push_back(ic11_los.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingCard::Nodes::Node::InputClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingCard::Nodes::Node::InputClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TimingCard::Nodes::Node::InputClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ic1-valid")
    {
        ic1_valid = value;
        ic1_valid.value_namespace = name_space;
        ic1_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-valid")
    {
        ic2_valid = value;
        ic2_valid.value_namespace = name_space;
        ic2_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-valid")
    {
        ic3_valid = value;
        ic3_valid.value_namespace = name_space;
        ic3_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-valid")
    {
        ic4_valid = value;
        ic4_valid.value_namespace = name_space;
        ic4_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-valid")
    {
        ic5_valid = value;
        ic5_valid.value_namespace = name_space;
        ic5_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-valid")
    {
        ic6_valid = value;
        ic6_valid.value_namespace = name_space;
        ic6_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-valid")
    {
        ic7_valid = value;
        ic7_valid.value_namespace = name_space;
        ic7_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-valid")
    {
        ic8_valid = value;
        ic8_valid.value_namespace = name_space;
        ic8_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-valid")
    {
        ic9_valid = value;
        ic9_valid.value_namespace = name_space;
        ic9_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-valid")
    {
        ic10_valid = value;
        ic10_valid.value_namespace = name_space;
        ic10_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-valid")
    {
        ic11_valid = value;
        ic11_valid.value_namespace = name_space;
        ic11_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-slot")
    {
        ic1_slot = value;
        ic1_slot.value_namespace = name_space;
        ic1_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-slot")
    {
        ic2_slot = value;
        ic2_slot.value_namespace = name_space;
        ic2_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-slot")
    {
        ic3_slot = value;
        ic3_slot.value_namespace = name_space;
        ic3_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-slot")
    {
        ic4_slot = value;
        ic4_slot.value_namespace = name_space;
        ic4_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-slot")
    {
        ic5_slot = value;
        ic5_slot.value_namespace = name_space;
        ic5_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-slot")
    {
        ic6_slot = value;
        ic6_slot.value_namespace = name_space;
        ic6_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-slot")
    {
        ic7_slot = value;
        ic7_slot.value_namespace = name_space;
        ic7_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-slot")
    {
        ic8_slot = value;
        ic8_slot.value_namespace = name_space;
        ic8_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-slot")
    {
        ic9_slot = value;
        ic9_slot.value_namespace = name_space;
        ic9_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-slot")
    {
        ic10_slot = value;
        ic10_slot.value_namespace = name_space;
        ic10_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-slot")
    {
        ic11_slot = value;
        ic11_slot.value_namespace = name_space;
        ic11_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-split-xom")
    {
        ic1_split_xom = value;
        ic1_split_xom.value_namespace = name_space;
        ic1_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-split-xom")
    {
        ic2_split_xom = value;
        ic2_split_xom.value_namespace = name_space;
        ic2_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-split-xom")
    {
        ic3_split_xom = value;
        ic3_split_xom.value_namespace = name_space;
        ic3_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-split-xom")
    {
        ic4_split_xom = value;
        ic4_split_xom.value_namespace = name_space;
        ic4_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-split-xom")
    {
        ic5_split_xom = value;
        ic5_split_xom.value_namespace = name_space;
        ic5_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-split-xom")
    {
        ic6_split_xom = value;
        ic6_split_xom.value_namespace = name_space;
        ic6_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-split-xom")
    {
        ic7_split_xom = value;
        ic7_split_xom.value_namespace = name_space;
        ic7_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-split-xom")
    {
        ic8_split_xom = value;
        ic8_split_xom.value_namespace = name_space;
        ic8_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-split-xom")
    {
        ic9_split_xom = value;
        ic9_split_xom.value_namespace = name_space;
        ic9_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-split-xom")
    {
        ic10_split_xom = value;
        ic10_split_xom.value_namespace = name_space;
        ic10_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-split-xom")
    {
        ic11_split_xom = value;
        ic11_split_xom.value_namespace = name_space;
        ic11_split_xom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-eppsm")
    {
        ic1_eppsm = value;
        ic1_eppsm.value_namespace = name_space;
        ic1_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-eppsm")
    {
        ic2_eppsm = value;
        ic2_eppsm.value_namespace = name_space;
        ic2_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-eppsm")
    {
        ic3_eppsm = value;
        ic3_eppsm.value_namespace = name_space;
        ic3_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-eppsm")
    {
        ic4_eppsm = value;
        ic4_eppsm.value_namespace = name_space;
        ic4_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-eppsm")
    {
        ic5_eppsm = value;
        ic5_eppsm.value_namespace = name_space;
        ic5_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-eppsm")
    {
        ic6_eppsm = value;
        ic6_eppsm.value_namespace = name_space;
        ic6_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-eppsm")
    {
        ic7_eppsm = value;
        ic7_eppsm.value_namespace = name_space;
        ic7_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-eppsm")
    {
        ic8_eppsm = value;
        ic8_eppsm.value_namespace = name_space;
        ic8_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-eppsm")
    {
        ic9_eppsm = value;
        ic9_eppsm.value_namespace = name_space;
        ic9_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-eppsm")
    {
        ic10_eppsm = value;
        ic10_eppsm.value_namespace = name_space;
        ic10_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-eppsm")
    {
        ic11_eppsm = value;
        ic11_eppsm.value_namespace = name_space;
        ic11_eppsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-pfm")
    {
        ic1_pfm = value;
        ic1_pfm.value_namespace = name_space;
        ic1_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-pfm")
    {
        ic2_pfm = value;
        ic2_pfm.value_namespace = name_space;
        ic2_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-pfm")
    {
        ic3_pfm = value;
        ic3_pfm.value_namespace = name_space;
        ic3_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-pfm")
    {
        ic4_pfm = value;
        ic4_pfm.value_namespace = name_space;
        ic4_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-pfm")
    {
        ic5_pfm = value;
        ic5_pfm.value_namespace = name_space;
        ic5_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-pfm")
    {
        ic6_pfm = value;
        ic6_pfm.value_namespace = name_space;
        ic6_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-pfm")
    {
        ic7_pfm = value;
        ic7_pfm.value_namespace = name_space;
        ic7_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-pfm")
    {
        ic8_pfm = value;
        ic8_pfm.value_namespace = name_space;
        ic8_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-pfm")
    {
        ic9_pfm = value;
        ic9_pfm.value_namespace = name_space;
        ic9_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-pfm")
    {
        ic10_pfm = value;
        ic10_pfm.value_namespace = name_space;
        ic10_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-pfm")
    {
        ic11_pfm = value;
        ic11_pfm.value_namespace = name_space;
        ic11_pfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-gst")
    {
        ic1_gst = value;
        ic1_gst.value_namespace = name_space;
        ic1_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-gst")
    {
        ic2_gst = value;
        ic2_gst.value_namespace = name_space;
        ic2_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-gst")
    {
        ic3_gst = value;
        ic3_gst.value_namespace = name_space;
        ic3_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-gst")
    {
        ic4_gst = value;
        ic4_gst.value_namespace = name_space;
        ic4_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-gst")
    {
        ic5_gst = value;
        ic5_gst.value_namespace = name_space;
        ic5_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-gst")
    {
        ic6_gst = value;
        ic6_gst.value_namespace = name_space;
        ic6_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-gst")
    {
        ic7_gst = value;
        ic7_gst.value_namespace = name_space;
        ic7_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-gst")
    {
        ic8_gst = value;
        ic8_gst.value_namespace = name_space;
        ic8_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-gst")
    {
        ic9_gst = value;
        ic9_gst.value_namespace = name_space;
        ic9_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-gst")
    {
        ic10_gst = value;
        ic10_gst.value_namespace = name_space;
        ic10_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-gst")
    {
        ic11_gst = value;
        ic11_gst.value_namespace = name_space;
        ic11_gst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-cfm")
    {
        ic1_cfm = value;
        ic1_cfm.value_namespace = name_space;
        ic1_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-cfm")
    {
        ic2_cfm = value;
        ic2_cfm.value_namespace = name_space;
        ic2_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-cfm")
    {
        ic3_cfm = value;
        ic3_cfm.value_namespace = name_space;
        ic3_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-cfm")
    {
        ic4_cfm = value;
        ic4_cfm.value_namespace = name_space;
        ic4_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-cfm")
    {
        ic5_cfm = value;
        ic5_cfm.value_namespace = name_space;
        ic5_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-cfm")
    {
        ic6_cfm = value;
        ic6_cfm.value_namespace = name_space;
        ic6_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-cfm")
    {
        ic7_cfm = value;
        ic7_cfm.value_namespace = name_space;
        ic7_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-cfm")
    {
        ic8_cfm = value;
        ic8_cfm.value_namespace = name_space;
        ic8_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-cfm")
    {
        ic9_cfm = value;
        ic9_cfm.value_namespace = name_space;
        ic9_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-cfm")
    {
        ic10_cfm = value;
        ic10_cfm.value_namespace = name_space;
        ic10_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-cfm")
    {
        ic11_cfm = value;
        ic11_cfm.value_namespace = name_space;
        ic11_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-scm")
    {
        ic1_scm = value;
        ic1_scm.value_namespace = name_space;
        ic1_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-scm")
    {
        ic2_scm = value;
        ic2_scm.value_namespace = name_space;
        ic2_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-scm")
    {
        ic3_scm = value;
        ic3_scm.value_namespace = name_space;
        ic3_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-scm")
    {
        ic4_scm = value;
        ic4_scm.value_namespace = name_space;
        ic4_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-scm")
    {
        ic5_scm = value;
        ic5_scm.value_namespace = name_space;
        ic5_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-scm")
    {
        ic6_scm = value;
        ic6_scm.value_namespace = name_space;
        ic6_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-scm")
    {
        ic7_scm = value;
        ic7_scm.value_namespace = name_space;
        ic7_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-scm")
    {
        ic8_scm = value;
        ic8_scm.value_namespace = name_space;
        ic8_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-scm")
    {
        ic9_scm = value;
        ic9_scm.value_namespace = name_space;
        ic9_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-scm")
    {
        ic10_scm = value;
        ic10_scm.value_namespace = name_space;
        ic10_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-scm")
    {
        ic11_scm = value;
        ic11_scm.value_namespace = name_space;
        ic11_scm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-los")
    {
        ic1_los = value;
        ic1_los.value_namespace = name_space;
        ic1_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-los")
    {
        ic2_los = value;
        ic2_los.value_namespace = name_space;
        ic2_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-los")
    {
        ic3_los = value;
        ic3_los.value_namespace = name_space;
        ic3_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-los")
    {
        ic4_los = value;
        ic4_los.value_namespace = name_space;
        ic4_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-los")
    {
        ic5_los = value;
        ic5_los.value_namespace = name_space;
        ic5_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-los")
    {
        ic6_los = value;
        ic6_los.value_namespace = name_space;
        ic6_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-los")
    {
        ic7_los = value;
        ic7_los.value_namespace = name_space;
        ic7_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-los")
    {
        ic8_los = value;
        ic8_los.value_namespace = name_space;
        ic8_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-los")
    {
        ic9_los = value;
        ic9_los.value_namespace = name_space;
        ic9_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-los")
    {
        ic10_los = value;
        ic10_los.value_namespace = name_space;
        ic10_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-los")
    {
        ic11_los = value;
        ic11_los.value_namespace = name_space;
        ic11_los.value_namespace_prefix = name_space_prefix;
    }
}

void TimingCard::Nodes::Node::InputClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ic1-valid")
    {
        ic1_valid.yfilter = yfilter;
    }
    if(value_path == "ic2-valid")
    {
        ic2_valid.yfilter = yfilter;
    }
    if(value_path == "ic3-valid")
    {
        ic3_valid.yfilter = yfilter;
    }
    if(value_path == "ic4-valid")
    {
        ic4_valid.yfilter = yfilter;
    }
    if(value_path == "ic5-valid")
    {
        ic5_valid.yfilter = yfilter;
    }
    if(value_path == "ic6-valid")
    {
        ic6_valid.yfilter = yfilter;
    }
    if(value_path == "ic7-valid")
    {
        ic7_valid.yfilter = yfilter;
    }
    if(value_path == "ic8-valid")
    {
        ic8_valid.yfilter = yfilter;
    }
    if(value_path == "ic9-valid")
    {
        ic9_valid.yfilter = yfilter;
    }
    if(value_path == "ic10-valid")
    {
        ic10_valid.yfilter = yfilter;
    }
    if(value_path == "ic11-valid")
    {
        ic11_valid.yfilter = yfilter;
    }
    if(value_path == "ic1-slot")
    {
        ic1_slot.yfilter = yfilter;
    }
    if(value_path == "ic2-slot")
    {
        ic2_slot.yfilter = yfilter;
    }
    if(value_path == "ic3-slot")
    {
        ic3_slot.yfilter = yfilter;
    }
    if(value_path == "ic4-slot")
    {
        ic4_slot.yfilter = yfilter;
    }
    if(value_path == "ic5-slot")
    {
        ic5_slot.yfilter = yfilter;
    }
    if(value_path == "ic6-slot")
    {
        ic6_slot.yfilter = yfilter;
    }
    if(value_path == "ic7-slot")
    {
        ic7_slot.yfilter = yfilter;
    }
    if(value_path == "ic8-slot")
    {
        ic8_slot.yfilter = yfilter;
    }
    if(value_path == "ic9-slot")
    {
        ic9_slot.yfilter = yfilter;
    }
    if(value_path == "ic10-slot")
    {
        ic10_slot.yfilter = yfilter;
    }
    if(value_path == "ic11-slot")
    {
        ic11_slot.yfilter = yfilter;
    }
    if(value_path == "ic1-split-xom")
    {
        ic1_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic2-split-xom")
    {
        ic2_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic3-split-xom")
    {
        ic3_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic4-split-xom")
    {
        ic4_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic5-split-xom")
    {
        ic5_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic6-split-xom")
    {
        ic6_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic7-split-xom")
    {
        ic7_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic8-split-xom")
    {
        ic8_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic9-split-xom")
    {
        ic9_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic10-split-xom")
    {
        ic10_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic11-split-xom")
    {
        ic11_split_xom.yfilter = yfilter;
    }
    if(value_path == "ic1-eppsm")
    {
        ic1_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic2-eppsm")
    {
        ic2_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic3-eppsm")
    {
        ic3_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic4-eppsm")
    {
        ic4_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic5-eppsm")
    {
        ic5_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic6-eppsm")
    {
        ic6_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic7-eppsm")
    {
        ic7_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic8-eppsm")
    {
        ic8_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic9-eppsm")
    {
        ic9_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic10-eppsm")
    {
        ic10_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic11-eppsm")
    {
        ic11_eppsm.yfilter = yfilter;
    }
    if(value_path == "ic1-pfm")
    {
        ic1_pfm.yfilter = yfilter;
    }
    if(value_path == "ic2-pfm")
    {
        ic2_pfm.yfilter = yfilter;
    }
    if(value_path == "ic3-pfm")
    {
        ic3_pfm.yfilter = yfilter;
    }
    if(value_path == "ic4-pfm")
    {
        ic4_pfm.yfilter = yfilter;
    }
    if(value_path == "ic5-pfm")
    {
        ic5_pfm.yfilter = yfilter;
    }
    if(value_path == "ic6-pfm")
    {
        ic6_pfm.yfilter = yfilter;
    }
    if(value_path == "ic7-pfm")
    {
        ic7_pfm.yfilter = yfilter;
    }
    if(value_path == "ic8-pfm")
    {
        ic8_pfm.yfilter = yfilter;
    }
    if(value_path == "ic9-pfm")
    {
        ic9_pfm.yfilter = yfilter;
    }
    if(value_path == "ic10-pfm")
    {
        ic10_pfm.yfilter = yfilter;
    }
    if(value_path == "ic11-pfm")
    {
        ic11_pfm.yfilter = yfilter;
    }
    if(value_path == "ic1-gst")
    {
        ic1_gst.yfilter = yfilter;
    }
    if(value_path == "ic2-gst")
    {
        ic2_gst.yfilter = yfilter;
    }
    if(value_path == "ic3-gst")
    {
        ic3_gst.yfilter = yfilter;
    }
    if(value_path == "ic4-gst")
    {
        ic4_gst.yfilter = yfilter;
    }
    if(value_path == "ic5-gst")
    {
        ic5_gst.yfilter = yfilter;
    }
    if(value_path == "ic6-gst")
    {
        ic6_gst.yfilter = yfilter;
    }
    if(value_path == "ic7-gst")
    {
        ic7_gst.yfilter = yfilter;
    }
    if(value_path == "ic8-gst")
    {
        ic8_gst.yfilter = yfilter;
    }
    if(value_path == "ic9-gst")
    {
        ic9_gst.yfilter = yfilter;
    }
    if(value_path == "ic10-gst")
    {
        ic10_gst.yfilter = yfilter;
    }
    if(value_path == "ic11-gst")
    {
        ic11_gst.yfilter = yfilter;
    }
    if(value_path == "ic1-cfm")
    {
        ic1_cfm.yfilter = yfilter;
    }
    if(value_path == "ic2-cfm")
    {
        ic2_cfm.yfilter = yfilter;
    }
    if(value_path == "ic3-cfm")
    {
        ic3_cfm.yfilter = yfilter;
    }
    if(value_path == "ic4-cfm")
    {
        ic4_cfm.yfilter = yfilter;
    }
    if(value_path == "ic5-cfm")
    {
        ic5_cfm.yfilter = yfilter;
    }
    if(value_path == "ic6-cfm")
    {
        ic6_cfm.yfilter = yfilter;
    }
    if(value_path == "ic7-cfm")
    {
        ic7_cfm.yfilter = yfilter;
    }
    if(value_path == "ic8-cfm")
    {
        ic8_cfm.yfilter = yfilter;
    }
    if(value_path == "ic9-cfm")
    {
        ic9_cfm.yfilter = yfilter;
    }
    if(value_path == "ic10-cfm")
    {
        ic10_cfm.yfilter = yfilter;
    }
    if(value_path == "ic11-cfm")
    {
        ic11_cfm.yfilter = yfilter;
    }
    if(value_path == "ic1-scm")
    {
        ic1_scm.yfilter = yfilter;
    }
    if(value_path == "ic2-scm")
    {
        ic2_scm.yfilter = yfilter;
    }
    if(value_path == "ic3-scm")
    {
        ic3_scm.yfilter = yfilter;
    }
    if(value_path == "ic4-scm")
    {
        ic4_scm.yfilter = yfilter;
    }
    if(value_path == "ic5-scm")
    {
        ic5_scm.yfilter = yfilter;
    }
    if(value_path == "ic6-scm")
    {
        ic6_scm.yfilter = yfilter;
    }
    if(value_path == "ic7-scm")
    {
        ic7_scm.yfilter = yfilter;
    }
    if(value_path == "ic8-scm")
    {
        ic8_scm.yfilter = yfilter;
    }
    if(value_path == "ic9-scm")
    {
        ic9_scm.yfilter = yfilter;
    }
    if(value_path == "ic10-scm")
    {
        ic10_scm.yfilter = yfilter;
    }
    if(value_path == "ic11-scm")
    {
        ic11_scm.yfilter = yfilter;
    }
    if(value_path == "ic1-los")
    {
        ic1_los.yfilter = yfilter;
    }
    if(value_path == "ic2-los")
    {
        ic2_los.yfilter = yfilter;
    }
    if(value_path == "ic3-los")
    {
        ic3_los.yfilter = yfilter;
    }
    if(value_path == "ic4-los")
    {
        ic4_los.yfilter = yfilter;
    }
    if(value_path == "ic5-los")
    {
        ic5_los.yfilter = yfilter;
    }
    if(value_path == "ic6-los")
    {
        ic6_los.yfilter = yfilter;
    }
    if(value_path == "ic7-los")
    {
        ic7_los.yfilter = yfilter;
    }
    if(value_path == "ic8-los")
    {
        ic8_los.yfilter = yfilter;
    }
    if(value_path == "ic9-los")
    {
        ic9_los.yfilter = yfilter;
    }
    if(value_path == "ic10-los")
    {
        ic10_los.yfilter = yfilter;
    }
    if(value_path == "ic11-los")
    {
        ic11_los.yfilter = yfilter;
    }
}

bool TimingCard::Nodes::Node::InputClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ic1-valid" || name == "ic2-valid" || name == "ic3-valid" || name == "ic4-valid" || name == "ic5-valid" || name == "ic6-valid" || name == "ic7-valid" || name == "ic8-valid" || name == "ic9-valid" || name == "ic10-valid" || name == "ic11-valid" || name == "ic1-slot" || name == "ic2-slot" || name == "ic3-slot" || name == "ic4-slot" || name == "ic5-slot" || name == "ic6-slot" || name == "ic7-slot" || name == "ic8-slot" || name == "ic9-slot" || name == "ic10-slot" || name == "ic11-slot" || name == "ic1-split-xom" || name == "ic2-split-xom" || name == "ic3-split-xom" || name == "ic4-split-xom" || name == "ic5-split-xom" || name == "ic6-split-xom" || name == "ic7-split-xom" || name == "ic8-split-xom" || name == "ic9-split-xom" || name == "ic10-split-xom" || name == "ic11-split-xom" || name == "ic1-eppsm" || name == "ic2-eppsm" || name == "ic3-eppsm" || name == "ic4-eppsm" || name == "ic5-eppsm" || name == "ic6-eppsm" || name == "ic7-eppsm" || name == "ic8-eppsm" || name == "ic9-eppsm" || name == "ic10-eppsm" || name == "ic11-eppsm" || name == "ic1-pfm" || name == "ic2-pfm" || name == "ic3-pfm" || name == "ic4-pfm" || name == "ic5-pfm" || name == "ic6-pfm" || name == "ic7-pfm" || name == "ic8-pfm" || name == "ic9-pfm" || name == "ic10-pfm" || name == "ic11-pfm" || name == "ic1-gst" || name == "ic2-gst" || name == "ic3-gst" || name == "ic4-gst" || name == "ic5-gst" || name == "ic6-gst" || name == "ic7-gst" || name == "ic8-gst" || name == "ic9-gst" || name == "ic10-gst" || name == "ic11-gst" || name == "ic1-cfm" || name == "ic2-cfm" || name == "ic3-cfm" || name == "ic4-cfm" || name == "ic5-cfm" || name == "ic6-cfm" || name == "ic7-cfm" || name == "ic8-cfm" || name == "ic9-cfm" || name == "ic10-cfm" || name == "ic11-cfm" || name == "ic1-scm" || name == "ic2-scm" || name == "ic3-scm" || name == "ic4-scm" || name == "ic5-scm" || name == "ic6-scm" || name == "ic7-scm" || name == "ic8-scm" || name == "ic9-scm" || name == "ic10-scm" || name == "ic11-scm" || name == "ic1-los" || name == "ic2-los" || name == "ic3-los" || name == "ic4-los" || name == "ic5-los" || name == "ic6-los" || name == "ic7-los" || name == "ic8-los" || name == "ic9-los" || name == "ic10-los" || name == "ic11-los")
        return true;
    return false;
}

TimingCard::Nodes::Node::Pll::Pll()
    :
    t0_pll_state{YType::str, "t0-pll-state"},
    t4_pll_state{YType::str, "t4-pll-state"},
    ptp_pll_state{YType::str, "ptp-pll-state"},
    t0_pll_selected{YType::str, "t0-pll-selected"},
    t4_pll_selected{YType::str, "t4-pll-selected"},
    ptp_pll_selected{YType::str, "ptp-pll-selected"},
    t0_pll_mode{YType::str, "t0-pll-mode"},
    t4_pll_mode{YType::str, "t4-pll-mode"},
    ptp_pll_mode{YType::str, "ptp-pll-mode"},
    t0_pll_ic1_prio{YType::uint8, "t0-pll-ic1-prio"},
    t0_pll_ic2_prio{YType::uint8, "t0-pll-ic2-prio"},
    t0_pll_ic3_prio{YType::uint8, "t0-pll-ic3-prio"},
    t0_pll_ic4_prio{YType::uint8, "t0-pll-ic4-prio"},
    t0_pll_ic5_prio{YType::uint8, "t0-pll-ic5-prio"},
    t0_pll_ic6_prio{YType::uint8, "t0-pll-ic6-prio"},
    t0_pll_ic7_prio{YType::uint8, "t0-pll-ic7-prio"},
    t0_pll_ic8_prio{YType::uint8, "t0-pll-ic8-prio"},
    t0_pll_ic9_prio{YType::uint8, "t0-pll-ic9-prio"},
    t0_pll_ic10_prio{YType::uint8, "t0-pll-ic10-prio"},
    t0_pll_ic11_prio{YType::uint8, "t0-pll-ic11-prio"},
    t4_pll_ic1_prio{YType::uint8, "t4-pll-ic1-prio"},
    t4_pll_ic2_prio{YType::uint8, "t4-pll-ic2-prio"},
    t4_pll_ic3_prio{YType::uint8, "t4-pll-ic3-prio"},
    t4_pll_ic4_prio{YType::uint8, "t4-pll-ic4-prio"},
    t4_pll_ic5_prio{YType::uint8, "t4-pll-ic5-prio"},
    t4_pll_ic6_prio{YType::uint8, "t4-pll-ic6-prio"},
    t4_pll_ic7_prio{YType::uint8, "t4-pll-ic7-prio"},
    t4_pll_ic8_prio{YType::uint8, "t4-pll-ic8-prio"},
    t4_pll_ic9_prio{YType::uint8, "t4-pll-ic9-prio"},
    t4_pll_ic10_prio{YType::uint8, "t4-pll-ic10-prio"},
    t4_pll_ic11_prio{YType::uint8, "t4-pll-ic11-prio"},
    ptp_pll_ic1_prio{YType::uint8, "ptp-pll-ic1-prio"},
    ptp_pll_ic2_prio{YType::uint8, "ptp-pll-ic2-prio"},
    ptp_pll_ic3_prio{YType::uint8, "ptp-pll-ic3-prio"},
    ptp_pll_ic4_prio{YType::uint8, "ptp-pll-ic4-prio"},
    ptp_pll_ic5_prio{YType::uint8, "ptp-pll-ic5-prio"},
    ptp_pll_ic6_prio{YType::uint8, "ptp-pll-ic6-prio"},
    ptp_pll_ic7_prio{YType::uint8, "ptp-pll-ic7-prio"},
    ptp_pll_ic8_prio{YType::uint8, "ptp-pll-ic8-prio"},
    ptp_pll_ic9_prio{YType::uint8, "ptp-pll-ic9-prio"},
    ptp_pll_ic10_prio{YType::uint8, "ptp-pll-ic10-prio"},
    ptp_pll_ic11_prio{YType::uint8, "ptp-pll-ic11-prio"},
    ic1_valid{YType::boolean, "ic1-valid"},
    ic2_valid{YType::boolean, "ic2-valid"},
    ic3_valid{YType::boolean, "ic3-valid"},
    ic4_valid{YType::boolean, "ic4-valid"},
    ic5_valid{YType::boolean, "ic5-valid"},
    ic6_valid{YType::boolean, "ic6-valid"},
    ic7_valid{YType::boolean, "ic7-valid"},
    ic8_valid{YType::boolean, "ic8-valid"},
    ic9_valid{YType::boolean, "ic9-valid"},
    ic10_valid{YType::boolean, "ic10-valid"},
    ic11_valid{YType::boolean, "ic11-valid"},
    t0_pll_freq_offset{YType::int32, "t0-pll-freq-offset"},
    t4_pll_freq_offset{YType::int32, "t4-pll-freq-offset"},
    ptp_pll_freq_offset{YType::int32, "ptp-pll-freq-offset"},
    t0_pll_bandwidth{YType::str, "t0-pll-bandwidth"},
    t4_pll_bandwidth{YType::str, "t4-pll-bandwidth"},
    ptp_pll_bandwidth{YType::str, "ptp-pll-bandwidth"},
    t0_pll_psl{YType::str, "t0-pll-psl"},
    t4_pll_psl{YType::str, "t4-pll-psl"},
    ptp_pll_psl{YType::str, "ptp-pll-psl"},
    ic1_qual_min{YType::str, "ic1-qual-min"},
    ic1_qual_max{YType::str, "ic1-qual-max"},
    ic2_qual_min{YType::str, "ic2-qual-min"},
    ic2_qual_max{YType::str, "ic2-qual-max"},
    ic3_qual_min{YType::str, "ic3-qual-min"},
    ic3_qual_max{YType::str, "ic3-qual-max"},
    ic4_qual_min{YType::str, "ic4-qual-min"},
    ic4_qual_max{YType::str, "ic4-qual-max"},
    ic5_qual_min{YType::str, "ic5-qual-min"},
    ic5_qual_max{YType::str, "ic5-qual-max"},
    ic6_qual_min{YType::str, "ic6-qual-min"},
    ic6_qual_max{YType::str, "ic6-qual-max"},
    ic7_qual_min{YType::str, "ic7-qual-min"},
    ic7_qual_max{YType::str, "ic7-qual-max"},
    ic8_qual_min{YType::str, "ic8-qual-min"},
    ic8_qual_max{YType::str, "ic8-qual-max"},
    ic9_qual_min{YType::str, "ic9-qual-min"},
    ic9_qual_max{YType::str, "ic9-qual-max"},
    ic10_qual_min{YType::str, "ic10-qual-min"},
    ic10_qual_max{YType::str, "ic10-qual-max"},
    ic11_qual_min{YType::str, "ic11-qual-min"},
    ic11_qual_max{YType::str, "ic11-qual-max"}
{

    yang_name = "pll"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TimingCard::Nodes::Node::Pll::~Pll()
{
}

bool TimingCard::Nodes::Node::Pll::has_data() const
{
    return t0_pll_state.is_set
	|| t4_pll_state.is_set
	|| ptp_pll_state.is_set
	|| t0_pll_selected.is_set
	|| t4_pll_selected.is_set
	|| ptp_pll_selected.is_set
	|| t0_pll_mode.is_set
	|| t4_pll_mode.is_set
	|| ptp_pll_mode.is_set
	|| t0_pll_ic1_prio.is_set
	|| t0_pll_ic2_prio.is_set
	|| t0_pll_ic3_prio.is_set
	|| t0_pll_ic4_prio.is_set
	|| t0_pll_ic5_prio.is_set
	|| t0_pll_ic6_prio.is_set
	|| t0_pll_ic7_prio.is_set
	|| t0_pll_ic8_prio.is_set
	|| t0_pll_ic9_prio.is_set
	|| t0_pll_ic10_prio.is_set
	|| t0_pll_ic11_prio.is_set
	|| t4_pll_ic1_prio.is_set
	|| t4_pll_ic2_prio.is_set
	|| t4_pll_ic3_prio.is_set
	|| t4_pll_ic4_prio.is_set
	|| t4_pll_ic5_prio.is_set
	|| t4_pll_ic6_prio.is_set
	|| t4_pll_ic7_prio.is_set
	|| t4_pll_ic8_prio.is_set
	|| t4_pll_ic9_prio.is_set
	|| t4_pll_ic10_prio.is_set
	|| t4_pll_ic11_prio.is_set
	|| ptp_pll_ic1_prio.is_set
	|| ptp_pll_ic2_prio.is_set
	|| ptp_pll_ic3_prio.is_set
	|| ptp_pll_ic4_prio.is_set
	|| ptp_pll_ic5_prio.is_set
	|| ptp_pll_ic6_prio.is_set
	|| ptp_pll_ic7_prio.is_set
	|| ptp_pll_ic8_prio.is_set
	|| ptp_pll_ic9_prio.is_set
	|| ptp_pll_ic10_prio.is_set
	|| ptp_pll_ic11_prio.is_set
	|| ic1_valid.is_set
	|| ic2_valid.is_set
	|| ic3_valid.is_set
	|| ic4_valid.is_set
	|| ic5_valid.is_set
	|| ic6_valid.is_set
	|| ic7_valid.is_set
	|| ic8_valid.is_set
	|| ic9_valid.is_set
	|| ic10_valid.is_set
	|| ic11_valid.is_set
	|| t0_pll_freq_offset.is_set
	|| t4_pll_freq_offset.is_set
	|| ptp_pll_freq_offset.is_set
	|| t0_pll_bandwidth.is_set
	|| t4_pll_bandwidth.is_set
	|| ptp_pll_bandwidth.is_set
	|| t0_pll_psl.is_set
	|| t4_pll_psl.is_set
	|| ptp_pll_psl.is_set
	|| ic1_qual_min.is_set
	|| ic1_qual_max.is_set
	|| ic2_qual_min.is_set
	|| ic2_qual_max.is_set
	|| ic3_qual_min.is_set
	|| ic3_qual_max.is_set
	|| ic4_qual_min.is_set
	|| ic4_qual_max.is_set
	|| ic5_qual_min.is_set
	|| ic5_qual_max.is_set
	|| ic6_qual_min.is_set
	|| ic6_qual_max.is_set
	|| ic7_qual_min.is_set
	|| ic7_qual_max.is_set
	|| ic8_qual_min.is_set
	|| ic8_qual_max.is_set
	|| ic9_qual_min.is_set
	|| ic9_qual_max.is_set
	|| ic10_qual_min.is_set
	|| ic10_qual_max.is_set
	|| ic11_qual_min.is_set
	|| ic11_qual_max.is_set;
}

bool TimingCard::Nodes::Node::Pll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(t0_pll_state.yfilter)
	|| ydk::is_set(t4_pll_state.yfilter)
	|| ydk::is_set(ptp_pll_state.yfilter)
	|| ydk::is_set(t0_pll_selected.yfilter)
	|| ydk::is_set(t4_pll_selected.yfilter)
	|| ydk::is_set(ptp_pll_selected.yfilter)
	|| ydk::is_set(t0_pll_mode.yfilter)
	|| ydk::is_set(t4_pll_mode.yfilter)
	|| ydk::is_set(ptp_pll_mode.yfilter)
	|| ydk::is_set(t0_pll_ic1_prio.yfilter)
	|| ydk::is_set(t0_pll_ic2_prio.yfilter)
	|| ydk::is_set(t0_pll_ic3_prio.yfilter)
	|| ydk::is_set(t0_pll_ic4_prio.yfilter)
	|| ydk::is_set(t0_pll_ic5_prio.yfilter)
	|| ydk::is_set(t0_pll_ic6_prio.yfilter)
	|| ydk::is_set(t0_pll_ic7_prio.yfilter)
	|| ydk::is_set(t0_pll_ic8_prio.yfilter)
	|| ydk::is_set(t0_pll_ic9_prio.yfilter)
	|| ydk::is_set(t0_pll_ic10_prio.yfilter)
	|| ydk::is_set(t0_pll_ic11_prio.yfilter)
	|| ydk::is_set(t4_pll_ic1_prio.yfilter)
	|| ydk::is_set(t4_pll_ic2_prio.yfilter)
	|| ydk::is_set(t4_pll_ic3_prio.yfilter)
	|| ydk::is_set(t4_pll_ic4_prio.yfilter)
	|| ydk::is_set(t4_pll_ic5_prio.yfilter)
	|| ydk::is_set(t4_pll_ic6_prio.yfilter)
	|| ydk::is_set(t4_pll_ic7_prio.yfilter)
	|| ydk::is_set(t4_pll_ic8_prio.yfilter)
	|| ydk::is_set(t4_pll_ic9_prio.yfilter)
	|| ydk::is_set(t4_pll_ic10_prio.yfilter)
	|| ydk::is_set(t4_pll_ic11_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic1_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic2_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic3_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic4_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic5_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic6_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic7_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic8_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic9_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic10_prio.yfilter)
	|| ydk::is_set(ptp_pll_ic11_prio.yfilter)
	|| ydk::is_set(ic1_valid.yfilter)
	|| ydk::is_set(ic2_valid.yfilter)
	|| ydk::is_set(ic3_valid.yfilter)
	|| ydk::is_set(ic4_valid.yfilter)
	|| ydk::is_set(ic5_valid.yfilter)
	|| ydk::is_set(ic6_valid.yfilter)
	|| ydk::is_set(ic7_valid.yfilter)
	|| ydk::is_set(ic8_valid.yfilter)
	|| ydk::is_set(ic9_valid.yfilter)
	|| ydk::is_set(ic10_valid.yfilter)
	|| ydk::is_set(ic11_valid.yfilter)
	|| ydk::is_set(t0_pll_freq_offset.yfilter)
	|| ydk::is_set(t4_pll_freq_offset.yfilter)
	|| ydk::is_set(ptp_pll_freq_offset.yfilter)
	|| ydk::is_set(t0_pll_bandwidth.yfilter)
	|| ydk::is_set(t4_pll_bandwidth.yfilter)
	|| ydk::is_set(ptp_pll_bandwidth.yfilter)
	|| ydk::is_set(t0_pll_psl.yfilter)
	|| ydk::is_set(t4_pll_psl.yfilter)
	|| ydk::is_set(ptp_pll_psl.yfilter)
	|| ydk::is_set(ic1_qual_min.yfilter)
	|| ydk::is_set(ic1_qual_max.yfilter)
	|| ydk::is_set(ic2_qual_min.yfilter)
	|| ydk::is_set(ic2_qual_max.yfilter)
	|| ydk::is_set(ic3_qual_min.yfilter)
	|| ydk::is_set(ic3_qual_max.yfilter)
	|| ydk::is_set(ic4_qual_min.yfilter)
	|| ydk::is_set(ic4_qual_max.yfilter)
	|| ydk::is_set(ic5_qual_min.yfilter)
	|| ydk::is_set(ic5_qual_max.yfilter)
	|| ydk::is_set(ic6_qual_min.yfilter)
	|| ydk::is_set(ic6_qual_max.yfilter)
	|| ydk::is_set(ic7_qual_min.yfilter)
	|| ydk::is_set(ic7_qual_max.yfilter)
	|| ydk::is_set(ic8_qual_min.yfilter)
	|| ydk::is_set(ic8_qual_max.yfilter)
	|| ydk::is_set(ic9_qual_min.yfilter)
	|| ydk::is_set(ic9_qual_max.yfilter)
	|| ydk::is_set(ic10_qual_min.yfilter)
	|| ydk::is_set(ic10_qual_max.yfilter)
	|| ydk::is_set(ic11_qual_min.yfilter)
	|| ydk::is_set(ic11_qual_max.yfilter);
}

std::string TimingCard::Nodes::Node::Pll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pll";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingCard::Nodes::Node::Pll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (t0_pll_state.is_set || is_set(t0_pll_state.yfilter)) leaf_name_data.push_back(t0_pll_state.get_name_leafdata());
    if (t4_pll_state.is_set || is_set(t4_pll_state.yfilter)) leaf_name_data.push_back(t4_pll_state.get_name_leafdata());
    if (ptp_pll_state.is_set || is_set(ptp_pll_state.yfilter)) leaf_name_data.push_back(ptp_pll_state.get_name_leafdata());
    if (t0_pll_selected.is_set || is_set(t0_pll_selected.yfilter)) leaf_name_data.push_back(t0_pll_selected.get_name_leafdata());
    if (t4_pll_selected.is_set || is_set(t4_pll_selected.yfilter)) leaf_name_data.push_back(t4_pll_selected.get_name_leafdata());
    if (ptp_pll_selected.is_set || is_set(ptp_pll_selected.yfilter)) leaf_name_data.push_back(ptp_pll_selected.get_name_leafdata());
    if (t0_pll_mode.is_set || is_set(t0_pll_mode.yfilter)) leaf_name_data.push_back(t0_pll_mode.get_name_leafdata());
    if (t4_pll_mode.is_set || is_set(t4_pll_mode.yfilter)) leaf_name_data.push_back(t4_pll_mode.get_name_leafdata());
    if (ptp_pll_mode.is_set || is_set(ptp_pll_mode.yfilter)) leaf_name_data.push_back(ptp_pll_mode.get_name_leafdata());
    if (t0_pll_ic1_prio.is_set || is_set(t0_pll_ic1_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic1_prio.get_name_leafdata());
    if (t0_pll_ic2_prio.is_set || is_set(t0_pll_ic2_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic2_prio.get_name_leafdata());
    if (t0_pll_ic3_prio.is_set || is_set(t0_pll_ic3_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic3_prio.get_name_leafdata());
    if (t0_pll_ic4_prio.is_set || is_set(t0_pll_ic4_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic4_prio.get_name_leafdata());
    if (t0_pll_ic5_prio.is_set || is_set(t0_pll_ic5_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic5_prio.get_name_leafdata());
    if (t0_pll_ic6_prio.is_set || is_set(t0_pll_ic6_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic6_prio.get_name_leafdata());
    if (t0_pll_ic7_prio.is_set || is_set(t0_pll_ic7_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic7_prio.get_name_leafdata());
    if (t0_pll_ic8_prio.is_set || is_set(t0_pll_ic8_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic8_prio.get_name_leafdata());
    if (t0_pll_ic9_prio.is_set || is_set(t0_pll_ic9_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic9_prio.get_name_leafdata());
    if (t0_pll_ic10_prio.is_set || is_set(t0_pll_ic10_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic10_prio.get_name_leafdata());
    if (t0_pll_ic11_prio.is_set || is_set(t0_pll_ic11_prio.yfilter)) leaf_name_data.push_back(t0_pll_ic11_prio.get_name_leafdata());
    if (t4_pll_ic1_prio.is_set || is_set(t4_pll_ic1_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic1_prio.get_name_leafdata());
    if (t4_pll_ic2_prio.is_set || is_set(t4_pll_ic2_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic2_prio.get_name_leafdata());
    if (t4_pll_ic3_prio.is_set || is_set(t4_pll_ic3_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic3_prio.get_name_leafdata());
    if (t4_pll_ic4_prio.is_set || is_set(t4_pll_ic4_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic4_prio.get_name_leafdata());
    if (t4_pll_ic5_prio.is_set || is_set(t4_pll_ic5_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic5_prio.get_name_leafdata());
    if (t4_pll_ic6_prio.is_set || is_set(t4_pll_ic6_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic6_prio.get_name_leafdata());
    if (t4_pll_ic7_prio.is_set || is_set(t4_pll_ic7_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic7_prio.get_name_leafdata());
    if (t4_pll_ic8_prio.is_set || is_set(t4_pll_ic8_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic8_prio.get_name_leafdata());
    if (t4_pll_ic9_prio.is_set || is_set(t4_pll_ic9_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic9_prio.get_name_leafdata());
    if (t4_pll_ic10_prio.is_set || is_set(t4_pll_ic10_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic10_prio.get_name_leafdata());
    if (t4_pll_ic11_prio.is_set || is_set(t4_pll_ic11_prio.yfilter)) leaf_name_data.push_back(t4_pll_ic11_prio.get_name_leafdata());
    if (ptp_pll_ic1_prio.is_set || is_set(ptp_pll_ic1_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic1_prio.get_name_leafdata());
    if (ptp_pll_ic2_prio.is_set || is_set(ptp_pll_ic2_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic2_prio.get_name_leafdata());
    if (ptp_pll_ic3_prio.is_set || is_set(ptp_pll_ic3_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic3_prio.get_name_leafdata());
    if (ptp_pll_ic4_prio.is_set || is_set(ptp_pll_ic4_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic4_prio.get_name_leafdata());
    if (ptp_pll_ic5_prio.is_set || is_set(ptp_pll_ic5_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic5_prio.get_name_leafdata());
    if (ptp_pll_ic6_prio.is_set || is_set(ptp_pll_ic6_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic6_prio.get_name_leafdata());
    if (ptp_pll_ic7_prio.is_set || is_set(ptp_pll_ic7_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic7_prio.get_name_leafdata());
    if (ptp_pll_ic8_prio.is_set || is_set(ptp_pll_ic8_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic8_prio.get_name_leafdata());
    if (ptp_pll_ic9_prio.is_set || is_set(ptp_pll_ic9_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic9_prio.get_name_leafdata());
    if (ptp_pll_ic10_prio.is_set || is_set(ptp_pll_ic10_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic10_prio.get_name_leafdata());
    if (ptp_pll_ic11_prio.is_set || is_set(ptp_pll_ic11_prio.yfilter)) leaf_name_data.push_back(ptp_pll_ic11_prio.get_name_leafdata());
    if (ic1_valid.is_set || is_set(ic1_valid.yfilter)) leaf_name_data.push_back(ic1_valid.get_name_leafdata());
    if (ic2_valid.is_set || is_set(ic2_valid.yfilter)) leaf_name_data.push_back(ic2_valid.get_name_leafdata());
    if (ic3_valid.is_set || is_set(ic3_valid.yfilter)) leaf_name_data.push_back(ic3_valid.get_name_leafdata());
    if (ic4_valid.is_set || is_set(ic4_valid.yfilter)) leaf_name_data.push_back(ic4_valid.get_name_leafdata());
    if (ic5_valid.is_set || is_set(ic5_valid.yfilter)) leaf_name_data.push_back(ic5_valid.get_name_leafdata());
    if (ic6_valid.is_set || is_set(ic6_valid.yfilter)) leaf_name_data.push_back(ic6_valid.get_name_leafdata());
    if (ic7_valid.is_set || is_set(ic7_valid.yfilter)) leaf_name_data.push_back(ic7_valid.get_name_leafdata());
    if (ic8_valid.is_set || is_set(ic8_valid.yfilter)) leaf_name_data.push_back(ic8_valid.get_name_leafdata());
    if (ic9_valid.is_set || is_set(ic9_valid.yfilter)) leaf_name_data.push_back(ic9_valid.get_name_leafdata());
    if (ic10_valid.is_set || is_set(ic10_valid.yfilter)) leaf_name_data.push_back(ic10_valid.get_name_leafdata());
    if (ic11_valid.is_set || is_set(ic11_valid.yfilter)) leaf_name_data.push_back(ic11_valid.get_name_leafdata());
    if (t0_pll_freq_offset.is_set || is_set(t0_pll_freq_offset.yfilter)) leaf_name_data.push_back(t0_pll_freq_offset.get_name_leafdata());
    if (t4_pll_freq_offset.is_set || is_set(t4_pll_freq_offset.yfilter)) leaf_name_data.push_back(t4_pll_freq_offset.get_name_leafdata());
    if (ptp_pll_freq_offset.is_set || is_set(ptp_pll_freq_offset.yfilter)) leaf_name_data.push_back(ptp_pll_freq_offset.get_name_leafdata());
    if (t0_pll_bandwidth.is_set || is_set(t0_pll_bandwidth.yfilter)) leaf_name_data.push_back(t0_pll_bandwidth.get_name_leafdata());
    if (t4_pll_bandwidth.is_set || is_set(t4_pll_bandwidth.yfilter)) leaf_name_data.push_back(t4_pll_bandwidth.get_name_leafdata());
    if (ptp_pll_bandwidth.is_set || is_set(ptp_pll_bandwidth.yfilter)) leaf_name_data.push_back(ptp_pll_bandwidth.get_name_leafdata());
    if (t0_pll_psl.is_set || is_set(t0_pll_psl.yfilter)) leaf_name_data.push_back(t0_pll_psl.get_name_leafdata());
    if (t4_pll_psl.is_set || is_set(t4_pll_psl.yfilter)) leaf_name_data.push_back(t4_pll_psl.get_name_leafdata());
    if (ptp_pll_psl.is_set || is_set(ptp_pll_psl.yfilter)) leaf_name_data.push_back(ptp_pll_psl.get_name_leafdata());
    if (ic1_qual_min.is_set || is_set(ic1_qual_min.yfilter)) leaf_name_data.push_back(ic1_qual_min.get_name_leafdata());
    if (ic1_qual_max.is_set || is_set(ic1_qual_max.yfilter)) leaf_name_data.push_back(ic1_qual_max.get_name_leafdata());
    if (ic2_qual_min.is_set || is_set(ic2_qual_min.yfilter)) leaf_name_data.push_back(ic2_qual_min.get_name_leafdata());
    if (ic2_qual_max.is_set || is_set(ic2_qual_max.yfilter)) leaf_name_data.push_back(ic2_qual_max.get_name_leafdata());
    if (ic3_qual_min.is_set || is_set(ic3_qual_min.yfilter)) leaf_name_data.push_back(ic3_qual_min.get_name_leafdata());
    if (ic3_qual_max.is_set || is_set(ic3_qual_max.yfilter)) leaf_name_data.push_back(ic3_qual_max.get_name_leafdata());
    if (ic4_qual_min.is_set || is_set(ic4_qual_min.yfilter)) leaf_name_data.push_back(ic4_qual_min.get_name_leafdata());
    if (ic4_qual_max.is_set || is_set(ic4_qual_max.yfilter)) leaf_name_data.push_back(ic4_qual_max.get_name_leafdata());
    if (ic5_qual_min.is_set || is_set(ic5_qual_min.yfilter)) leaf_name_data.push_back(ic5_qual_min.get_name_leafdata());
    if (ic5_qual_max.is_set || is_set(ic5_qual_max.yfilter)) leaf_name_data.push_back(ic5_qual_max.get_name_leafdata());
    if (ic6_qual_min.is_set || is_set(ic6_qual_min.yfilter)) leaf_name_data.push_back(ic6_qual_min.get_name_leafdata());
    if (ic6_qual_max.is_set || is_set(ic6_qual_max.yfilter)) leaf_name_data.push_back(ic6_qual_max.get_name_leafdata());
    if (ic7_qual_min.is_set || is_set(ic7_qual_min.yfilter)) leaf_name_data.push_back(ic7_qual_min.get_name_leafdata());
    if (ic7_qual_max.is_set || is_set(ic7_qual_max.yfilter)) leaf_name_data.push_back(ic7_qual_max.get_name_leafdata());
    if (ic8_qual_min.is_set || is_set(ic8_qual_min.yfilter)) leaf_name_data.push_back(ic8_qual_min.get_name_leafdata());
    if (ic8_qual_max.is_set || is_set(ic8_qual_max.yfilter)) leaf_name_data.push_back(ic8_qual_max.get_name_leafdata());
    if (ic9_qual_min.is_set || is_set(ic9_qual_min.yfilter)) leaf_name_data.push_back(ic9_qual_min.get_name_leafdata());
    if (ic9_qual_max.is_set || is_set(ic9_qual_max.yfilter)) leaf_name_data.push_back(ic9_qual_max.get_name_leafdata());
    if (ic10_qual_min.is_set || is_set(ic10_qual_min.yfilter)) leaf_name_data.push_back(ic10_qual_min.get_name_leafdata());
    if (ic10_qual_max.is_set || is_set(ic10_qual_max.yfilter)) leaf_name_data.push_back(ic10_qual_max.get_name_leafdata());
    if (ic11_qual_min.is_set || is_set(ic11_qual_min.yfilter)) leaf_name_data.push_back(ic11_qual_min.get_name_leafdata());
    if (ic11_qual_max.is_set || is_set(ic11_qual_max.yfilter)) leaf_name_data.push_back(ic11_qual_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingCard::Nodes::Node::Pll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingCard::Nodes::Node::Pll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TimingCard::Nodes::Node::Pll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "t0-pll-state")
    {
        t0_pll_state = value;
        t0_pll_state.value_namespace = name_space;
        t0_pll_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-state")
    {
        t4_pll_state = value;
        t4_pll_state.value_namespace = name_space;
        t4_pll_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-state")
    {
        ptp_pll_state = value;
        ptp_pll_state.value_namespace = name_space;
        ptp_pll_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-selected")
    {
        t0_pll_selected = value;
        t0_pll_selected.value_namespace = name_space;
        t0_pll_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-selected")
    {
        t4_pll_selected = value;
        t4_pll_selected.value_namespace = name_space;
        t4_pll_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-selected")
    {
        ptp_pll_selected = value;
        ptp_pll_selected.value_namespace = name_space;
        ptp_pll_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-mode")
    {
        t0_pll_mode = value;
        t0_pll_mode.value_namespace = name_space;
        t0_pll_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-mode")
    {
        t4_pll_mode = value;
        t4_pll_mode.value_namespace = name_space;
        t4_pll_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-mode")
    {
        ptp_pll_mode = value;
        ptp_pll_mode.value_namespace = name_space;
        ptp_pll_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic1-prio")
    {
        t0_pll_ic1_prio = value;
        t0_pll_ic1_prio.value_namespace = name_space;
        t0_pll_ic1_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic2-prio")
    {
        t0_pll_ic2_prio = value;
        t0_pll_ic2_prio.value_namespace = name_space;
        t0_pll_ic2_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic3-prio")
    {
        t0_pll_ic3_prio = value;
        t0_pll_ic3_prio.value_namespace = name_space;
        t0_pll_ic3_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic4-prio")
    {
        t0_pll_ic4_prio = value;
        t0_pll_ic4_prio.value_namespace = name_space;
        t0_pll_ic4_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic5-prio")
    {
        t0_pll_ic5_prio = value;
        t0_pll_ic5_prio.value_namespace = name_space;
        t0_pll_ic5_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic6-prio")
    {
        t0_pll_ic6_prio = value;
        t0_pll_ic6_prio.value_namespace = name_space;
        t0_pll_ic6_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic7-prio")
    {
        t0_pll_ic7_prio = value;
        t0_pll_ic7_prio.value_namespace = name_space;
        t0_pll_ic7_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic8-prio")
    {
        t0_pll_ic8_prio = value;
        t0_pll_ic8_prio.value_namespace = name_space;
        t0_pll_ic8_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic9-prio")
    {
        t0_pll_ic9_prio = value;
        t0_pll_ic9_prio.value_namespace = name_space;
        t0_pll_ic9_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic10-prio")
    {
        t0_pll_ic10_prio = value;
        t0_pll_ic10_prio.value_namespace = name_space;
        t0_pll_ic10_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-ic11-prio")
    {
        t0_pll_ic11_prio = value;
        t0_pll_ic11_prio.value_namespace = name_space;
        t0_pll_ic11_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic1-prio")
    {
        t4_pll_ic1_prio = value;
        t4_pll_ic1_prio.value_namespace = name_space;
        t4_pll_ic1_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic2-prio")
    {
        t4_pll_ic2_prio = value;
        t4_pll_ic2_prio.value_namespace = name_space;
        t4_pll_ic2_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic3-prio")
    {
        t4_pll_ic3_prio = value;
        t4_pll_ic3_prio.value_namespace = name_space;
        t4_pll_ic3_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic4-prio")
    {
        t4_pll_ic4_prio = value;
        t4_pll_ic4_prio.value_namespace = name_space;
        t4_pll_ic4_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic5-prio")
    {
        t4_pll_ic5_prio = value;
        t4_pll_ic5_prio.value_namespace = name_space;
        t4_pll_ic5_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic6-prio")
    {
        t4_pll_ic6_prio = value;
        t4_pll_ic6_prio.value_namespace = name_space;
        t4_pll_ic6_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic7-prio")
    {
        t4_pll_ic7_prio = value;
        t4_pll_ic7_prio.value_namespace = name_space;
        t4_pll_ic7_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic8-prio")
    {
        t4_pll_ic8_prio = value;
        t4_pll_ic8_prio.value_namespace = name_space;
        t4_pll_ic8_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic9-prio")
    {
        t4_pll_ic9_prio = value;
        t4_pll_ic9_prio.value_namespace = name_space;
        t4_pll_ic9_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic10-prio")
    {
        t4_pll_ic10_prio = value;
        t4_pll_ic10_prio.value_namespace = name_space;
        t4_pll_ic10_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-ic11-prio")
    {
        t4_pll_ic11_prio = value;
        t4_pll_ic11_prio.value_namespace = name_space;
        t4_pll_ic11_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic1-prio")
    {
        ptp_pll_ic1_prio = value;
        ptp_pll_ic1_prio.value_namespace = name_space;
        ptp_pll_ic1_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic2-prio")
    {
        ptp_pll_ic2_prio = value;
        ptp_pll_ic2_prio.value_namespace = name_space;
        ptp_pll_ic2_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic3-prio")
    {
        ptp_pll_ic3_prio = value;
        ptp_pll_ic3_prio.value_namespace = name_space;
        ptp_pll_ic3_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic4-prio")
    {
        ptp_pll_ic4_prio = value;
        ptp_pll_ic4_prio.value_namespace = name_space;
        ptp_pll_ic4_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic5-prio")
    {
        ptp_pll_ic5_prio = value;
        ptp_pll_ic5_prio.value_namespace = name_space;
        ptp_pll_ic5_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic6-prio")
    {
        ptp_pll_ic6_prio = value;
        ptp_pll_ic6_prio.value_namespace = name_space;
        ptp_pll_ic6_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic7-prio")
    {
        ptp_pll_ic7_prio = value;
        ptp_pll_ic7_prio.value_namespace = name_space;
        ptp_pll_ic7_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic8-prio")
    {
        ptp_pll_ic8_prio = value;
        ptp_pll_ic8_prio.value_namespace = name_space;
        ptp_pll_ic8_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic9-prio")
    {
        ptp_pll_ic9_prio = value;
        ptp_pll_ic9_prio.value_namespace = name_space;
        ptp_pll_ic9_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic10-prio")
    {
        ptp_pll_ic10_prio = value;
        ptp_pll_ic10_prio.value_namespace = name_space;
        ptp_pll_ic10_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-ic11-prio")
    {
        ptp_pll_ic11_prio = value;
        ptp_pll_ic11_prio.value_namespace = name_space;
        ptp_pll_ic11_prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-valid")
    {
        ic1_valid = value;
        ic1_valid.value_namespace = name_space;
        ic1_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-valid")
    {
        ic2_valid = value;
        ic2_valid.value_namespace = name_space;
        ic2_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-valid")
    {
        ic3_valid = value;
        ic3_valid.value_namespace = name_space;
        ic3_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-valid")
    {
        ic4_valid = value;
        ic4_valid.value_namespace = name_space;
        ic4_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-valid")
    {
        ic5_valid = value;
        ic5_valid.value_namespace = name_space;
        ic5_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-valid")
    {
        ic6_valid = value;
        ic6_valid.value_namespace = name_space;
        ic6_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-valid")
    {
        ic7_valid = value;
        ic7_valid.value_namespace = name_space;
        ic7_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-valid")
    {
        ic8_valid = value;
        ic8_valid.value_namespace = name_space;
        ic8_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-valid")
    {
        ic9_valid = value;
        ic9_valid.value_namespace = name_space;
        ic9_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-valid")
    {
        ic10_valid = value;
        ic10_valid.value_namespace = name_space;
        ic10_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-valid")
    {
        ic11_valid = value;
        ic11_valid.value_namespace = name_space;
        ic11_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-freq-offset")
    {
        t0_pll_freq_offset = value;
        t0_pll_freq_offset.value_namespace = name_space;
        t0_pll_freq_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-freq-offset")
    {
        t4_pll_freq_offset = value;
        t4_pll_freq_offset.value_namespace = name_space;
        t4_pll_freq_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-freq-offset")
    {
        ptp_pll_freq_offset = value;
        ptp_pll_freq_offset.value_namespace = name_space;
        ptp_pll_freq_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-bandwidth")
    {
        t0_pll_bandwidth = value;
        t0_pll_bandwidth.value_namespace = name_space;
        t0_pll_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-bandwidth")
    {
        t4_pll_bandwidth = value;
        t4_pll_bandwidth.value_namespace = name_space;
        t4_pll_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-bandwidth")
    {
        ptp_pll_bandwidth = value;
        ptp_pll_bandwidth.value_namespace = name_space;
        ptp_pll_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t0-pll-psl")
    {
        t0_pll_psl = value;
        t0_pll_psl.value_namespace = name_space;
        t0_pll_psl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t4-pll-psl")
    {
        t4_pll_psl = value;
        t4_pll_psl.value_namespace = name_space;
        t4_pll_psl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-pll-psl")
    {
        ptp_pll_psl = value;
        ptp_pll_psl.value_namespace = name_space;
        ptp_pll_psl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-qual-min")
    {
        ic1_qual_min = value;
        ic1_qual_min.value_namespace = name_space;
        ic1_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic1-qual-max")
    {
        ic1_qual_max = value;
        ic1_qual_max.value_namespace = name_space;
        ic1_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-qual-min")
    {
        ic2_qual_min = value;
        ic2_qual_min.value_namespace = name_space;
        ic2_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic2-qual-max")
    {
        ic2_qual_max = value;
        ic2_qual_max.value_namespace = name_space;
        ic2_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-qual-min")
    {
        ic3_qual_min = value;
        ic3_qual_min.value_namespace = name_space;
        ic3_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic3-qual-max")
    {
        ic3_qual_max = value;
        ic3_qual_max.value_namespace = name_space;
        ic3_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-qual-min")
    {
        ic4_qual_min = value;
        ic4_qual_min.value_namespace = name_space;
        ic4_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic4-qual-max")
    {
        ic4_qual_max = value;
        ic4_qual_max.value_namespace = name_space;
        ic4_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-qual-min")
    {
        ic5_qual_min = value;
        ic5_qual_min.value_namespace = name_space;
        ic5_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic5-qual-max")
    {
        ic5_qual_max = value;
        ic5_qual_max.value_namespace = name_space;
        ic5_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-qual-min")
    {
        ic6_qual_min = value;
        ic6_qual_min.value_namespace = name_space;
        ic6_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic6-qual-max")
    {
        ic6_qual_max = value;
        ic6_qual_max.value_namespace = name_space;
        ic6_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-qual-min")
    {
        ic7_qual_min = value;
        ic7_qual_min.value_namespace = name_space;
        ic7_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic7-qual-max")
    {
        ic7_qual_max = value;
        ic7_qual_max.value_namespace = name_space;
        ic7_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-qual-min")
    {
        ic8_qual_min = value;
        ic8_qual_min.value_namespace = name_space;
        ic8_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic8-qual-max")
    {
        ic8_qual_max = value;
        ic8_qual_max.value_namespace = name_space;
        ic8_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-qual-min")
    {
        ic9_qual_min = value;
        ic9_qual_min.value_namespace = name_space;
        ic9_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic9-qual-max")
    {
        ic9_qual_max = value;
        ic9_qual_max.value_namespace = name_space;
        ic9_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-qual-min")
    {
        ic10_qual_min = value;
        ic10_qual_min.value_namespace = name_space;
        ic10_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic10-qual-max")
    {
        ic10_qual_max = value;
        ic10_qual_max.value_namespace = name_space;
        ic10_qual_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-qual-min")
    {
        ic11_qual_min = value;
        ic11_qual_min.value_namespace = name_space;
        ic11_qual_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ic11-qual-max")
    {
        ic11_qual_max = value;
        ic11_qual_max.value_namespace = name_space;
        ic11_qual_max.value_namespace_prefix = name_space_prefix;
    }
}

void TimingCard::Nodes::Node::Pll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "t0-pll-state")
    {
        t0_pll_state.yfilter = yfilter;
    }
    if(value_path == "t4-pll-state")
    {
        t4_pll_state.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-state")
    {
        ptp_pll_state.yfilter = yfilter;
    }
    if(value_path == "t0-pll-selected")
    {
        t0_pll_selected.yfilter = yfilter;
    }
    if(value_path == "t4-pll-selected")
    {
        t4_pll_selected.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-selected")
    {
        ptp_pll_selected.yfilter = yfilter;
    }
    if(value_path == "t0-pll-mode")
    {
        t0_pll_mode.yfilter = yfilter;
    }
    if(value_path == "t4-pll-mode")
    {
        t4_pll_mode.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-mode")
    {
        ptp_pll_mode.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic1-prio")
    {
        t0_pll_ic1_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic2-prio")
    {
        t0_pll_ic2_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic3-prio")
    {
        t0_pll_ic3_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic4-prio")
    {
        t0_pll_ic4_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic5-prio")
    {
        t0_pll_ic5_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic6-prio")
    {
        t0_pll_ic6_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic7-prio")
    {
        t0_pll_ic7_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic8-prio")
    {
        t0_pll_ic8_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic9-prio")
    {
        t0_pll_ic9_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic10-prio")
    {
        t0_pll_ic10_prio.yfilter = yfilter;
    }
    if(value_path == "t0-pll-ic11-prio")
    {
        t0_pll_ic11_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic1-prio")
    {
        t4_pll_ic1_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic2-prio")
    {
        t4_pll_ic2_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic3-prio")
    {
        t4_pll_ic3_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic4-prio")
    {
        t4_pll_ic4_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic5-prio")
    {
        t4_pll_ic5_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic6-prio")
    {
        t4_pll_ic6_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic7-prio")
    {
        t4_pll_ic7_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic8-prio")
    {
        t4_pll_ic8_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic9-prio")
    {
        t4_pll_ic9_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic10-prio")
    {
        t4_pll_ic10_prio.yfilter = yfilter;
    }
    if(value_path == "t4-pll-ic11-prio")
    {
        t4_pll_ic11_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic1-prio")
    {
        ptp_pll_ic1_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic2-prio")
    {
        ptp_pll_ic2_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic3-prio")
    {
        ptp_pll_ic3_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic4-prio")
    {
        ptp_pll_ic4_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic5-prio")
    {
        ptp_pll_ic5_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic6-prio")
    {
        ptp_pll_ic6_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic7-prio")
    {
        ptp_pll_ic7_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic8-prio")
    {
        ptp_pll_ic8_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic9-prio")
    {
        ptp_pll_ic9_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic10-prio")
    {
        ptp_pll_ic10_prio.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-ic11-prio")
    {
        ptp_pll_ic11_prio.yfilter = yfilter;
    }
    if(value_path == "ic1-valid")
    {
        ic1_valid.yfilter = yfilter;
    }
    if(value_path == "ic2-valid")
    {
        ic2_valid.yfilter = yfilter;
    }
    if(value_path == "ic3-valid")
    {
        ic3_valid.yfilter = yfilter;
    }
    if(value_path == "ic4-valid")
    {
        ic4_valid.yfilter = yfilter;
    }
    if(value_path == "ic5-valid")
    {
        ic5_valid.yfilter = yfilter;
    }
    if(value_path == "ic6-valid")
    {
        ic6_valid.yfilter = yfilter;
    }
    if(value_path == "ic7-valid")
    {
        ic7_valid.yfilter = yfilter;
    }
    if(value_path == "ic8-valid")
    {
        ic8_valid.yfilter = yfilter;
    }
    if(value_path == "ic9-valid")
    {
        ic9_valid.yfilter = yfilter;
    }
    if(value_path == "ic10-valid")
    {
        ic10_valid.yfilter = yfilter;
    }
    if(value_path == "ic11-valid")
    {
        ic11_valid.yfilter = yfilter;
    }
    if(value_path == "t0-pll-freq-offset")
    {
        t0_pll_freq_offset.yfilter = yfilter;
    }
    if(value_path == "t4-pll-freq-offset")
    {
        t4_pll_freq_offset.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-freq-offset")
    {
        ptp_pll_freq_offset.yfilter = yfilter;
    }
    if(value_path == "t0-pll-bandwidth")
    {
        t0_pll_bandwidth.yfilter = yfilter;
    }
    if(value_path == "t4-pll-bandwidth")
    {
        t4_pll_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-bandwidth")
    {
        ptp_pll_bandwidth.yfilter = yfilter;
    }
    if(value_path == "t0-pll-psl")
    {
        t0_pll_psl.yfilter = yfilter;
    }
    if(value_path == "t4-pll-psl")
    {
        t4_pll_psl.yfilter = yfilter;
    }
    if(value_path == "ptp-pll-psl")
    {
        ptp_pll_psl.yfilter = yfilter;
    }
    if(value_path == "ic1-qual-min")
    {
        ic1_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic1-qual-max")
    {
        ic1_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic2-qual-min")
    {
        ic2_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic2-qual-max")
    {
        ic2_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic3-qual-min")
    {
        ic3_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic3-qual-max")
    {
        ic3_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic4-qual-min")
    {
        ic4_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic4-qual-max")
    {
        ic4_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic5-qual-min")
    {
        ic5_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic5-qual-max")
    {
        ic5_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic6-qual-min")
    {
        ic6_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic6-qual-max")
    {
        ic6_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic7-qual-min")
    {
        ic7_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic7-qual-max")
    {
        ic7_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic8-qual-min")
    {
        ic8_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic8-qual-max")
    {
        ic8_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic9-qual-min")
    {
        ic9_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic9-qual-max")
    {
        ic9_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic10-qual-min")
    {
        ic10_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic10-qual-max")
    {
        ic10_qual_max.yfilter = yfilter;
    }
    if(value_path == "ic11-qual-min")
    {
        ic11_qual_min.yfilter = yfilter;
    }
    if(value_path == "ic11-qual-max")
    {
        ic11_qual_max.yfilter = yfilter;
    }
}

bool TimingCard::Nodes::Node::Pll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t0-pll-state" || name == "t4-pll-state" || name == "ptp-pll-state" || name == "t0-pll-selected" || name == "t4-pll-selected" || name == "ptp-pll-selected" || name == "t0-pll-mode" || name == "t4-pll-mode" || name == "ptp-pll-mode" || name == "t0-pll-ic1-prio" || name == "t0-pll-ic2-prio" || name == "t0-pll-ic3-prio" || name == "t0-pll-ic4-prio" || name == "t0-pll-ic5-prio" || name == "t0-pll-ic6-prio" || name == "t0-pll-ic7-prio" || name == "t0-pll-ic8-prio" || name == "t0-pll-ic9-prio" || name == "t0-pll-ic10-prio" || name == "t0-pll-ic11-prio" || name == "t4-pll-ic1-prio" || name == "t4-pll-ic2-prio" || name == "t4-pll-ic3-prio" || name == "t4-pll-ic4-prio" || name == "t4-pll-ic5-prio" || name == "t4-pll-ic6-prio" || name == "t4-pll-ic7-prio" || name == "t4-pll-ic8-prio" || name == "t4-pll-ic9-prio" || name == "t4-pll-ic10-prio" || name == "t4-pll-ic11-prio" || name == "ptp-pll-ic1-prio" || name == "ptp-pll-ic2-prio" || name == "ptp-pll-ic3-prio" || name == "ptp-pll-ic4-prio" || name == "ptp-pll-ic5-prio" || name == "ptp-pll-ic6-prio" || name == "ptp-pll-ic7-prio" || name == "ptp-pll-ic8-prio" || name == "ptp-pll-ic9-prio" || name == "ptp-pll-ic10-prio" || name == "ptp-pll-ic11-prio" || name == "ic1-valid" || name == "ic2-valid" || name == "ic3-valid" || name == "ic4-valid" || name == "ic5-valid" || name == "ic6-valid" || name == "ic7-valid" || name == "ic8-valid" || name == "ic9-valid" || name == "ic10-valid" || name == "ic11-valid" || name == "t0-pll-freq-offset" || name == "t4-pll-freq-offset" || name == "ptp-pll-freq-offset" || name == "t0-pll-bandwidth" || name == "t4-pll-bandwidth" || name == "ptp-pll-bandwidth" || name == "t0-pll-psl" || name == "t4-pll-psl" || name == "ptp-pll-psl" || name == "ic1-qual-min" || name == "ic1-qual-max" || name == "ic2-qual-min" || name == "ic2-qual-max" || name == "ic3-qual-min" || name == "ic3-qual-max" || name == "ic4-qual-min" || name == "ic4-qual-max" || name == "ic5-qual-min" || name == "ic5-qual-max" || name == "ic6-qual-min" || name == "ic6-qual-max" || name == "ic7-qual-min" || name == "ic7-qual-max" || name == "ic8-qual-min" || name == "ic8-qual-max" || name == "ic9-qual-min" || name == "ic9-qual-max" || name == "ic10-qual-min" || name == "ic10-qual-max" || name == "ic11-qual-min" || name == "ic11-qual-max")
        return true;
    return false;
}


}
}

