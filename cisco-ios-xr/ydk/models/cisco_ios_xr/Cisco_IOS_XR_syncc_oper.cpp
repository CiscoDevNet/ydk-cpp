
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_syncc_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_syncc_oper {

TimingController::TimingController()
    :
    nodes(std::make_shared<TimingController::Nodes>())
{
    nodes->parent = this;

    yang_name = "timing-controller"; yang_parent_name = "Cisco-IOS-XR-syncc-oper"; is_top_level_class = true; has_list_ancestor = false;
}

TimingController::~TimingController()
{
}

bool TimingController::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool TimingController::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string TimingController::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-syncc-oper:timing-controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<TimingController::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void TimingController::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TimingController::clone_ptr() const
{
    return std::make_shared<TimingController>();
}

std::string TimingController::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TimingController::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TimingController::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TimingController::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TimingController::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

TimingController::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "timing-controller"; is_top_level_class = false; has_list_ancestor = false;
}

TimingController::Nodes::~Nodes()
{
}

bool TimingController::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool TimingController::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingController::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-syncc-oper:timing-controller/" << get_segment_path();
    return path_buffer.str();
}

std::string TimingController::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<TimingController::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TimingController::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingController::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

TimingController::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    clock_(std::make_shared<TimingController::Nodes::Node::Clock_>())
	,state(std::make_shared<TimingController::Nodes::Node::State>())
	,timing_source(std::make_shared<TimingController::Nodes::Node::TimingSource>())
{
    clock_->parent = this;
    state->parent = this;
    timing_source->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

TimingController::Nodes::Node::~Node()
{
}

bool TimingController::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (timing_source !=  nullptr && timing_source->has_data());
}

bool TimingController::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (timing_source !=  nullptr && timing_source->has_operation());
}

std::string TimingController::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-syncc-oper:timing-controller/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string TimingController::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<TimingController::Nodes::Node::Clock_>();
        }
        return clock_;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<TimingController::Nodes::Node::State>();
        }
        return state;
    }

    if(child_yang_name == "timing-source")
    {
        if(timing_source == nullptr)
        {
            timing_source = std::make_shared<TimingController::Nodes::Node::TimingSource>();
        }
        return timing_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(timing_source != nullptr)
    {
        children["timing-source"] = timing_source;
    }

    return children;
}

void TimingController::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void TimingController::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool TimingController::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "state" || name == "timing-source" || name == "node-name")
        return true;
    return false;
}

TimingController::Nodes::Node::Clock_::Clock_()
{

    yang_name = "clock"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::Clock_::~Clock_()
{
}

bool TimingController::Nodes::Node::Clock_::has_data() const
{
    for (std::size_t index=0; index<syncc_instance.size(); index++)
    {
        if(syncc_instance[index]->has_data())
            return true;
    }
    return false;
}

bool TimingController::Nodes::Node::Clock_::has_operation() const
{
    for (std::size_t index=0; index<syncc_instance.size(); index++)
    {
        if(syncc_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingController::Nodes::Node::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syncc-instance")
    {
        for(auto const & c : syncc_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::Clock_::SynccInstance>();
        c->parent = this;
        syncc_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : syncc_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TimingController::Nodes::Node::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::Nodes::Node::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingController::Nodes::Node::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syncc-instance")
        return true;
    return false;
}

TimingController::Nodes::Node::Clock_::SynccInstance::SynccInstance()
{

    yang_name = "syncc-instance"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::Clock_::SynccInstance::~SynccInstance()
{
}

bool TimingController::Nodes::Node::Clock_::SynccInstance::has_data() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool TimingController::Nodes::Node::Clock_::SynccInstance::has_operation() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingController::Nodes::Node::Clock_::SynccInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncc-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::Clock_::SynccInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::Clock_::SynccInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        for(auto const & c : clock_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::Clock_::SynccInstance::Clock__>();
        c->parent = this;
        clock_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::Clock_::SynccInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TimingController::Nodes::Node::Clock_::SynccInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::Nodes::Node::Clock_::SynccInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingController::Nodes::Node::Clock_::SynccInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock")
        return true;
    return false;
}

TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::Clock__()
    :
    baudrate_port0{YType::uint32, "baudrate-port0"},
    baudrate_port1{YType::uint32, "baudrate-port1"},
    baudrate_port2{YType::uint32, "baudrate-port2"},
    baudrate_port3{YType::uint32, "baudrate-port3"},
    direction_port0{YType::enumeration, "direction-port0"},
    direction_port1{YType::enumeration, "direction-port1"},
    direction_port2{YType::enumeration, "direction-port2"},
    direction_port3{YType::enumeration, "direction-port3"},
    interface_state_port0{YType::enumeration, "interface-state-port0"},
    interface_state_port1{YType::enumeration, "interface-state-port1"},
    interface_state_port2{YType::enumeration, "interface-state-port2"},
    interface_state_port3{YType::enumeration, "interface-state-port3"},
    is_configured_port0{YType::boolean, "is-configured-port0"},
    is_configured_port1{YType::boolean, "is-configured-port1"},
    is_configured_port2{YType::boolean, "is-configured-port2"},
    is_configured_port3{YType::boolean, "is-configured-port3"},
    mode_port0{YType::enumeration, "mode-port0"},
    mode_port1{YType::enumeration, "mode-port1"},
    mode_port2{YType::enumeration, "mode-port2"},
    mode_port3{YType::enumeration, "mode-port3"},
    quality_option_port0{YType::enumeration, "quality-option-port0"},
    quality_option_port1{YType::enumeration, "quality-option-port1"},
    quality_option_port2{YType::enumeration, "quality-option-port2"},
    quality_option_port3{YType::enumeration, "quality-option-port3"},
    recieve_ssm_port0{YType::uint32, "recieve-ssm-port0"},
    recieve_ssm_port1{YType::uint32, "recieve-ssm-port1"},
    recieve_ssm_port2{YType::uint32, "recieve-ssm-port2"},
    recieve_ssm_port3{YType::uint32, "recieve-ssm-port3"},
    shutdown_port0{YType::uint32, "shutdown-port0"},
    shutdown_port1{YType::uint32, "shutdown-port1"},
    shutdown_port2{YType::uint32, "shutdown-port2"},
    shutdown_port3{YType::uint32, "shutdown-port3"},
    submode1_port0{YType::enumeration, "submode1-port0"},
    submode1_port1{YType::enumeration, "submode1-port1"},
    submode1_port2{YType::enumeration, "submode1-port2"},
    submode1_port3{YType::enumeration, "submode1-port3"},
    submode2_port0{YType::enumeration, "submode2-port0"},
    submode2_port1{YType::enumeration, "submode2-port1"},
    submode2_port2{YType::enumeration, "submode2-port2"},
    submode2_port3{YType::enumeration, "submode2-port3"},
    submode3_port0{YType::uint32, "submode3-port0"},
    submode3_port1{YType::uint32, "submode3-port1"},
    submode3_port2{YType::uint32, "submode3-port2"},
    submode3_port3{YType::uint32, "submode3-port3"},
    transmit_ssm_port0{YType::uint32, "transmit-ssm-port0"},
    transmit_ssm_port1{YType::uint32, "transmit-ssm-port1"},
    transmit_ssm_port2{YType::uint32, "transmit-ssm-port2"},
    transmit_ssm_port3{YType::uint32, "transmit-ssm-port3"}
{

    yang_name = "clock"; yang_parent_name = "syncc-instance"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::~Clock__()
{
}

bool TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::has_data() const
{
    return baudrate_port0.is_set
	|| baudrate_port1.is_set
	|| baudrate_port2.is_set
	|| baudrate_port3.is_set
	|| direction_port0.is_set
	|| direction_port1.is_set
	|| direction_port2.is_set
	|| direction_port3.is_set
	|| interface_state_port0.is_set
	|| interface_state_port1.is_set
	|| interface_state_port2.is_set
	|| interface_state_port3.is_set
	|| is_configured_port0.is_set
	|| is_configured_port1.is_set
	|| is_configured_port2.is_set
	|| is_configured_port3.is_set
	|| mode_port0.is_set
	|| mode_port1.is_set
	|| mode_port2.is_set
	|| mode_port3.is_set
	|| quality_option_port0.is_set
	|| quality_option_port1.is_set
	|| quality_option_port2.is_set
	|| quality_option_port3.is_set
	|| recieve_ssm_port0.is_set
	|| recieve_ssm_port1.is_set
	|| recieve_ssm_port2.is_set
	|| recieve_ssm_port3.is_set
	|| shutdown_port0.is_set
	|| shutdown_port1.is_set
	|| shutdown_port2.is_set
	|| shutdown_port3.is_set
	|| submode1_port0.is_set
	|| submode1_port1.is_set
	|| submode1_port2.is_set
	|| submode1_port3.is_set
	|| submode2_port0.is_set
	|| submode2_port1.is_set
	|| submode2_port2.is_set
	|| submode2_port3.is_set
	|| submode3_port0.is_set
	|| submode3_port1.is_set
	|| submode3_port2.is_set
	|| submode3_port3.is_set
	|| transmit_ssm_port0.is_set
	|| transmit_ssm_port1.is_set
	|| transmit_ssm_port2.is_set
	|| transmit_ssm_port3.is_set;
}

bool TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baudrate_port0.yfilter)
	|| ydk::is_set(baudrate_port1.yfilter)
	|| ydk::is_set(baudrate_port2.yfilter)
	|| ydk::is_set(baudrate_port3.yfilter)
	|| ydk::is_set(direction_port0.yfilter)
	|| ydk::is_set(direction_port1.yfilter)
	|| ydk::is_set(direction_port2.yfilter)
	|| ydk::is_set(direction_port3.yfilter)
	|| ydk::is_set(interface_state_port0.yfilter)
	|| ydk::is_set(interface_state_port1.yfilter)
	|| ydk::is_set(interface_state_port2.yfilter)
	|| ydk::is_set(interface_state_port3.yfilter)
	|| ydk::is_set(is_configured_port0.yfilter)
	|| ydk::is_set(is_configured_port1.yfilter)
	|| ydk::is_set(is_configured_port2.yfilter)
	|| ydk::is_set(is_configured_port3.yfilter)
	|| ydk::is_set(mode_port0.yfilter)
	|| ydk::is_set(mode_port1.yfilter)
	|| ydk::is_set(mode_port2.yfilter)
	|| ydk::is_set(mode_port3.yfilter)
	|| ydk::is_set(quality_option_port0.yfilter)
	|| ydk::is_set(quality_option_port1.yfilter)
	|| ydk::is_set(quality_option_port2.yfilter)
	|| ydk::is_set(quality_option_port3.yfilter)
	|| ydk::is_set(recieve_ssm_port0.yfilter)
	|| ydk::is_set(recieve_ssm_port1.yfilter)
	|| ydk::is_set(recieve_ssm_port2.yfilter)
	|| ydk::is_set(recieve_ssm_port3.yfilter)
	|| ydk::is_set(shutdown_port0.yfilter)
	|| ydk::is_set(shutdown_port1.yfilter)
	|| ydk::is_set(shutdown_port2.yfilter)
	|| ydk::is_set(shutdown_port3.yfilter)
	|| ydk::is_set(submode1_port0.yfilter)
	|| ydk::is_set(submode1_port1.yfilter)
	|| ydk::is_set(submode1_port2.yfilter)
	|| ydk::is_set(submode1_port3.yfilter)
	|| ydk::is_set(submode2_port0.yfilter)
	|| ydk::is_set(submode2_port1.yfilter)
	|| ydk::is_set(submode2_port2.yfilter)
	|| ydk::is_set(submode2_port3.yfilter)
	|| ydk::is_set(submode3_port0.yfilter)
	|| ydk::is_set(submode3_port1.yfilter)
	|| ydk::is_set(submode3_port2.yfilter)
	|| ydk::is_set(submode3_port3.yfilter)
	|| ydk::is_set(transmit_ssm_port0.yfilter)
	|| ydk::is_set(transmit_ssm_port1.yfilter)
	|| ydk::is_set(transmit_ssm_port2.yfilter)
	|| ydk::is_set(transmit_ssm_port3.yfilter);
}

std::string TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baudrate_port0.is_set || is_set(baudrate_port0.yfilter)) leaf_name_data.push_back(baudrate_port0.get_name_leafdata());
    if (baudrate_port1.is_set || is_set(baudrate_port1.yfilter)) leaf_name_data.push_back(baudrate_port1.get_name_leafdata());
    if (baudrate_port2.is_set || is_set(baudrate_port2.yfilter)) leaf_name_data.push_back(baudrate_port2.get_name_leafdata());
    if (baudrate_port3.is_set || is_set(baudrate_port3.yfilter)) leaf_name_data.push_back(baudrate_port3.get_name_leafdata());
    if (direction_port0.is_set || is_set(direction_port0.yfilter)) leaf_name_data.push_back(direction_port0.get_name_leafdata());
    if (direction_port1.is_set || is_set(direction_port1.yfilter)) leaf_name_data.push_back(direction_port1.get_name_leafdata());
    if (direction_port2.is_set || is_set(direction_port2.yfilter)) leaf_name_data.push_back(direction_port2.get_name_leafdata());
    if (direction_port3.is_set || is_set(direction_port3.yfilter)) leaf_name_data.push_back(direction_port3.get_name_leafdata());
    if (interface_state_port0.is_set || is_set(interface_state_port0.yfilter)) leaf_name_data.push_back(interface_state_port0.get_name_leafdata());
    if (interface_state_port1.is_set || is_set(interface_state_port1.yfilter)) leaf_name_data.push_back(interface_state_port1.get_name_leafdata());
    if (interface_state_port2.is_set || is_set(interface_state_port2.yfilter)) leaf_name_data.push_back(interface_state_port2.get_name_leafdata());
    if (interface_state_port3.is_set || is_set(interface_state_port3.yfilter)) leaf_name_data.push_back(interface_state_port3.get_name_leafdata());
    if (is_configured_port0.is_set || is_set(is_configured_port0.yfilter)) leaf_name_data.push_back(is_configured_port0.get_name_leafdata());
    if (is_configured_port1.is_set || is_set(is_configured_port1.yfilter)) leaf_name_data.push_back(is_configured_port1.get_name_leafdata());
    if (is_configured_port2.is_set || is_set(is_configured_port2.yfilter)) leaf_name_data.push_back(is_configured_port2.get_name_leafdata());
    if (is_configured_port3.is_set || is_set(is_configured_port3.yfilter)) leaf_name_data.push_back(is_configured_port3.get_name_leafdata());
    if (mode_port0.is_set || is_set(mode_port0.yfilter)) leaf_name_data.push_back(mode_port0.get_name_leafdata());
    if (mode_port1.is_set || is_set(mode_port1.yfilter)) leaf_name_data.push_back(mode_port1.get_name_leafdata());
    if (mode_port2.is_set || is_set(mode_port2.yfilter)) leaf_name_data.push_back(mode_port2.get_name_leafdata());
    if (mode_port3.is_set || is_set(mode_port3.yfilter)) leaf_name_data.push_back(mode_port3.get_name_leafdata());
    if (quality_option_port0.is_set || is_set(quality_option_port0.yfilter)) leaf_name_data.push_back(quality_option_port0.get_name_leafdata());
    if (quality_option_port1.is_set || is_set(quality_option_port1.yfilter)) leaf_name_data.push_back(quality_option_port1.get_name_leafdata());
    if (quality_option_port2.is_set || is_set(quality_option_port2.yfilter)) leaf_name_data.push_back(quality_option_port2.get_name_leafdata());
    if (quality_option_port3.is_set || is_set(quality_option_port3.yfilter)) leaf_name_data.push_back(quality_option_port3.get_name_leafdata());
    if (recieve_ssm_port0.is_set || is_set(recieve_ssm_port0.yfilter)) leaf_name_data.push_back(recieve_ssm_port0.get_name_leafdata());
    if (recieve_ssm_port1.is_set || is_set(recieve_ssm_port1.yfilter)) leaf_name_data.push_back(recieve_ssm_port1.get_name_leafdata());
    if (recieve_ssm_port2.is_set || is_set(recieve_ssm_port2.yfilter)) leaf_name_data.push_back(recieve_ssm_port2.get_name_leafdata());
    if (recieve_ssm_port3.is_set || is_set(recieve_ssm_port3.yfilter)) leaf_name_data.push_back(recieve_ssm_port3.get_name_leafdata());
    if (shutdown_port0.is_set || is_set(shutdown_port0.yfilter)) leaf_name_data.push_back(shutdown_port0.get_name_leafdata());
    if (shutdown_port1.is_set || is_set(shutdown_port1.yfilter)) leaf_name_data.push_back(shutdown_port1.get_name_leafdata());
    if (shutdown_port2.is_set || is_set(shutdown_port2.yfilter)) leaf_name_data.push_back(shutdown_port2.get_name_leafdata());
    if (shutdown_port3.is_set || is_set(shutdown_port3.yfilter)) leaf_name_data.push_back(shutdown_port3.get_name_leafdata());
    if (submode1_port0.is_set || is_set(submode1_port0.yfilter)) leaf_name_data.push_back(submode1_port0.get_name_leafdata());
    if (submode1_port1.is_set || is_set(submode1_port1.yfilter)) leaf_name_data.push_back(submode1_port1.get_name_leafdata());
    if (submode1_port2.is_set || is_set(submode1_port2.yfilter)) leaf_name_data.push_back(submode1_port2.get_name_leafdata());
    if (submode1_port3.is_set || is_set(submode1_port3.yfilter)) leaf_name_data.push_back(submode1_port3.get_name_leafdata());
    if (submode2_port0.is_set || is_set(submode2_port0.yfilter)) leaf_name_data.push_back(submode2_port0.get_name_leafdata());
    if (submode2_port1.is_set || is_set(submode2_port1.yfilter)) leaf_name_data.push_back(submode2_port1.get_name_leafdata());
    if (submode2_port2.is_set || is_set(submode2_port2.yfilter)) leaf_name_data.push_back(submode2_port2.get_name_leafdata());
    if (submode2_port3.is_set || is_set(submode2_port3.yfilter)) leaf_name_data.push_back(submode2_port3.get_name_leafdata());
    if (submode3_port0.is_set || is_set(submode3_port0.yfilter)) leaf_name_data.push_back(submode3_port0.get_name_leafdata());
    if (submode3_port1.is_set || is_set(submode3_port1.yfilter)) leaf_name_data.push_back(submode3_port1.get_name_leafdata());
    if (submode3_port2.is_set || is_set(submode3_port2.yfilter)) leaf_name_data.push_back(submode3_port2.get_name_leafdata());
    if (submode3_port3.is_set || is_set(submode3_port3.yfilter)) leaf_name_data.push_back(submode3_port3.get_name_leafdata());
    if (transmit_ssm_port0.is_set || is_set(transmit_ssm_port0.yfilter)) leaf_name_data.push_back(transmit_ssm_port0.get_name_leafdata());
    if (transmit_ssm_port1.is_set || is_set(transmit_ssm_port1.yfilter)) leaf_name_data.push_back(transmit_ssm_port1.get_name_leafdata());
    if (transmit_ssm_port2.is_set || is_set(transmit_ssm_port2.yfilter)) leaf_name_data.push_back(transmit_ssm_port2.get_name_leafdata());
    if (transmit_ssm_port3.is_set || is_set(transmit_ssm_port3.yfilter)) leaf_name_data.push_back(transmit_ssm_port3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "baudrate-port0")
    {
        baudrate_port0 = value;
        baudrate_port0.value_namespace = name_space;
        baudrate_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baudrate-port1")
    {
        baudrate_port1 = value;
        baudrate_port1.value_namespace = name_space;
        baudrate_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baudrate-port2")
    {
        baudrate_port2 = value;
        baudrate_port2.value_namespace = name_space;
        baudrate_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baudrate-port3")
    {
        baudrate_port3 = value;
        baudrate_port3.value_namespace = name_space;
        baudrate_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction-port0")
    {
        direction_port0 = value;
        direction_port0.value_namespace = name_space;
        direction_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction-port1")
    {
        direction_port1 = value;
        direction_port1.value_namespace = name_space;
        direction_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction-port2")
    {
        direction_port2 = value;
        direction_port2.value_namespace = name_space;
        direction_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction-port3")
    {
        direction_port3 = value;
        direction_port3.value_namespace = name_space;
        direction_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state-port0")
    {
        interface_state_port0 = value;
        interface_state_port0.value_namespace = name_space;
        interface_state_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state-port1")
    {
        interface_state_port1 = value;
        interface_state_port1.value_namespace = name_space;
        interface_state_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state-port2")
    {
        interface_state_port2 = value;
        interface_state_port2.value_namespace = name_space;
        interface_state_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state-port3")
    {
        interface_state_port3 = value;
        interface_state_port3.value_namespace = name_space;
        interface_state_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured-port0")
    {
        is_configured_port0 = value;
        is_configured_port0.value_namespace = name_space;
        is_configured_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured-port1")
    {
        is_configured_port1 = value;
        is_configured_port1.value_namespace = name_space;
        is_configured_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured-port2")
    {
        is_configured_port2 = value;
        is_configured_port2.value_namespace = name_space;
        is_configured_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured-port3")
    {
        is_configured_port3 = value;
        is_configured_port3.value_namespace = name_space;
        is_configured_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-port0")
    {
        mode_port0 = value;
        mode_port0.value_namespace = name_space;
        mode_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-port1")
    {
        mode_port1 = value;
        mode_port1.value_namespace = name_space;
        mode_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-port2")
    {
        mode_port2 = value;
        mode_port2.value_namespace = name_space;
        mode_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-port3")
    {
        mode_port3 = value;
        mode_port3.value_namespace = name_space;
        mode_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-option-port0")
    {
        quality_option_port0 = value;
        quality_option_port0.value_namespace = name_space;
        quality_option_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-option-port1")
    {
        quality_option_port1 = value;
        quality_option_port1.value_namespace = name_space;
        quality_option_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-option-port2")
    {
        quality_option_port2 = value;
        quality_option_port2.value_namespace = name_space;
        quality_option_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-option-port3")
    {
        quality_option_port3 = value;
        quality_option_port3.value_namespace = name_space;
        quality_option_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recieve-ssm-port0")
    {
        recieve_ssm_port0 = value;
        recieve_ssm_port0.value_namespace = name_space;
        recieve_ssm_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recieve-ssm-port1")
    {
        recieve_ssm_port1 = value;
        recieve_ssm_port1.value_namespace = name_space;
        recieve_ssm_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recieve-ssm-port2")
    {
        recieve_ssm_port2 = value;
        recieve_ssm_port2.value_namespace = name_space;
        recieve_ssm_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recieve-ssm-port3")
    {
        recieve_ssm_port3 = value;
        recieve_ssm_port3.value_namespace = name_space;
        recieve_ssm_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-port0")
    {
        shutdown_port0 = value;
        shutdown_port0.value_namespace = name_space;
        shutdown_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-port1")
    {
        shutdown_port1 = value;
        shutdown_port1.value_namespace = name_space;
        shutdown_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-port2")
    {
        shutdown_port2 = value;
        shutdown_port2.value_namespace = name_space;
        shutdown_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-port3")
    {
        shutdown_port3 = value;
        shutdown_port3.value_namespace = name_space;
        shutdown_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode1-port0")
    {
        submode1_port0 = value;
        submode1_port0.value_namespace = name_space;
        submode1_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode1-port1")
    {
        submode1_port1 = value;
        submode1_port1.value_namespace = name_space;
        submode1_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode1-port2")
    {
        submode1_port2 = value;
        submode1_port2.value_namespace = name_space;
        submode1_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode1-port3")
    {
        submode1_port3 = value;
        submode1_port3.value_namespace = name_space;
        submode1_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode2-port0")
    {
        submode2_port0 = value;
        submode2_port0.value_namespace = name_space;
        submode2_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode2-port1")
    {
        submode2_port1 = value;
        submode2_port1.value_namespace = name_space;
        submode2_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode2-port2")
    {
        submode2_port2 = value;
        submode2_port2.value_namespace = name_space;
        submode2_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode2-port3")
    {
        submode2_port3 = value;
        submode2_port3.value_namespace = name_space;
        submode2_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode3-port0")
    {
        submode3_port0 = value;
        submode3_port0.value_namespace = name_space;
        submode3_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode3-port1")
    {
        submode3_port1 = value;
        submode3_port1.value_namespace = name_space;
        submode3_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode3-port2")
    {
        submode3_port2 = value;
        submode3_port2.value_namespace = name_space;
        submode3_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "submode3-port3")
    {
        submode3_port3 = value;
        submode3_port3.value_namespace = name_space;
        submode3_port3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-ssm-port0")
    {
        transmit_ssm_port0 = value;
        transmit_ssm_port0.value_namespace = name_space;
        transmit_ssm_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-ssm-port1")
    {
        transmit_ssm_port1 = value;
        transmit_ssm_port1.value_namespace = name_space;
        transmit_ssm_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-ssm-port2")
    {
        transmit_ssm_port2 = value;
        transmit_ssm_port2.value_namespace = name_space;
        transmit_ssm_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-ssm-port3")
    {
        transmit_ssm_port3 = value;
        transmit_ssm_port3.value_namespace = name_space;
        transmit_ssm_port3.value_namespace_prefix = name_space_prefix;
    }
}

void TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "baudrate-port0")
    {
        baudrate_port0.yfilter = yfilter;
    }
    if(value_path == "baudrate-port1")
    {
        baudrate_port1.yfilter = yfilter;
    }
    if(value_path == "baudrate-port2")
    {
        baudrate_port2.yfilter = yfilter;
    }
    if(value_path == "baudrate-port3")
    {
        baudrate_port3.yfilter = yfilter;
    }
    if(value_path == "direction-port0")
    {
        direction_port0.yfilter = yfilter;
    }
    if(value_path == "direction-port1")
    {
        direction_port1.yfilter = yfilter;
    }
    if(value_path == "direction-port2")
    {
        direction_port2.yfilter = yfilter;
    }
    if(value_path == "direction-port3")
    {
        direction_port3.yfilter = yfilter;
    }
    if(value_path == "interface-state-port0")
    {
        interface_state_port0.yfilter = yfilter;
    }
    if(value_path == "interface-state-port1")
    {
        interface_state_port1.yfilter = yfilter;
    }
    if(value_path == "interface-state-port2")
    {
        interface_state_port2.yfilter = yfilter;
    }
    if(value_path == "interface-state-port3")
    {
        interface_state_port3.yfilter = yfilter;
    }
    if(value_path == "is-configured-port0")
    {
        is_configured_port0.yfilter = yfilter;
    }
    if(value_path == "is-configured-port1")
    {
        is_configured_port1.yfilter = yfilter;
    }
    if(value_path == "is-configured-port2")
    {
        is_configured_port2.yfilter = yfilter;
    }
    if(value_path == "is-configured-port3")
    {
        is_configured_port3.yfilter = yfilter;
    }
    if(value_path == "mode-port0")
    {
        mode_port0.yfilter = yfilter;
    }
    if(value_path == "mode-port1")
    {
        mode_port1.yfilter = yfilter;
    }
    if(value_path == "mode-port2")
    {
        mode_port2.yfilter = yfilter;
    }
    if(value_path == "mode-port3")
    {
        mode_port3.yfilter = yfilter;
    }
    if(value_path == "quality-option-port0")
    {
        quality_option_port0.yfilter = yfilter;
    }
    if(value_path == "quality-option-port1")
    {
        quality_option_port1.yfilter = yfilter;
    }
    if(value_path == "quality-option-port2")
    {
        quality_option_port2.yfilter = yfilter;
    }
    if(value_path == "quality-option-port3")
    {
        quality_option_port3.yfilter = yfilter;
    }
    if(value_path == "recieve-ssm-port0")
    {
        recieve_ssm_port0.yfilter = yfilter;
    }
    if(value_path == "recieve-ssm-port1")
    {
        recieve_ssm_port1.yfilter = yfilter;
    }
    if(value_path == "recieve-ssm-port2")
    {
        recieve_ssm_port2.yfilter = yfilter;
    }
    if(value_path == "recieve-ssm-port3")
    {
        recieve_ssm_port3.yfilter = yfilter;
    }
    if(value_path == "shutdown-port0")
    {
        shutdown_port0.yfilter = yfilter;
    }
    if(value_path == "shutdown-port1")
    {
        shutdown_port1.yfilter = yfilter;
    }
    if(value_path == "shutdown-port2")
    {
        shutdown_port2.yfilter = yfilter;
    }
    if(value_path == "shutdown-port3")
    {
        shutdown_port3.yfilter = yfilter;
    }
    if(value_path == "submode1-port0")
    {
        submode1_port0.yfilter = yfilter;
    }
    if(value_path == "submode1-port1")
    {
        submode1_port1.yfilter = yfilter;
    }
    if(value_path == "submode1-port2")
    {
        submode1_port2.yfilter = yfilter;
    }
    if(value_path == "submode1-port3")
    {
        submode1_port3.yfilter = yfilter;
    }
    if(value_path == "submode2-port0")
    {
        submode2_port0.yfilter = yfilter;
    }
    if(value_path == "submode2-port1")
    {
        submode2_port1.yfilter = yfilter;
    }
    if(value_path == "submode2-port2")
    {
        submode2_port2.yfilter = yfilter;
    }
    if(value_path == "submode2-port3")
    {
        submode2_port3.yfilter = yfilter;
    }
    if(value_path == "submode3-port0")
    {
        submode3_port0.yfilter = yfilter;
    }
    if(value_path == "submode3-port1")
    {
        submode3_port1.yfilter = yfilter;
    }
    if(value_path == "submode3-port2")
    {
        submode3_port2.yfilter = yfilter;
    }
    if(value_path == "submode3-port3")
    {
        submode3_port3.yfilter = yfilter;
    }
    if(value_path == "transmit-ssm-port0")
    {
        transmit_ssm_port0.yfilter = yfilter;
    }
    if(value_path == "transmit-ssm-port1")
    {
        transmit_ssm_port1.yfilter = yfilter;
    }
    if(value_path == "transmit-ssm-port2")
    {
        transmit_ssm_port2.yfilter = yfilter;
    }
    if(value_path == "transmit-ssm-port3")
    {
        transmit_ssm_port3.yfilter = yfilter;
    }
}

bool TimingController::Nodes::Node::Clock_::SynccInstance::Clock__::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "baudrate-port0" || name == "baudrate-port1" || name == "baudrate-port2" || name == "baudrate-port3" || name == "direction-port0" || name == "direction-port1" || name == "direction-port2" || name == "direction-port3" || name == "interface-state-port0" || name == "interface-state-port1" || name == "interface-state-port2" || name == "interface-state-port3" || name == "is-configured-port0" || name == "is-configured-port1" || name == "is-configured-port2" || name == "is-configured-port3" || name == "mode-port0" || name == "mode-port1" || name == "mode-port2" || name == "mode-port3" || name == "quality-option-port0" || name == "quality-option-port1" || name == "quality-option-port2" || name == "quality-option-port3" || name == "recieve-ssm-port0" || name == "recieve-ssm-port1" || name == "recieve-ssm-port2" || name == "recieve-ssm-port3" || name == "shutdown-port0" || name == "shutdown-port1" || name == "shutdown-port2" || name == "shutdown-port3" || name == "submode1-port0" || name == "submode1-port1" || name == "submode1-port2" || name == "submode1-port3" || name == "submode2-port0" || name == "submode2-port1" || name == "submode2-port2" || name == "submode2-port3" || name == "submode3-port0" || name == "submode3-port1" || name == "submode3-port2" || name == "submode3-port3" || name == "transmit-ssm-port0" || name == "transmit-ssm-port1" || name == "transmit-ssm-port2" || name == "transmit-ssm-port3")
        return true;
    return false;
}

TimingController::Nodes::Node::State::State()
{

    yang_name = "state"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::State::~State()
{
}

bool TimingController::Nodes::Node::State::has_data() const
{
    for (std::size_t index=0; index<syncc_instance.size(); index++)
    {
        if(syncc_instance[index]->has_data())
            return true;
    }
    return false;
}

bool TimingController::Nodes::Node::State::has_operation() const
{
    for (std::size_t index=0; index<syncc_instance.size(); index++)
    {
        if(syncc_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingController::Nodes::Node::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syncc-instance")
    {
        for(auto const & c : syncc_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::State::SynccInstance>();
        c->parent = this;
        syncc_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : syncc_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TimingController::Nodes::Node::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::Nodes::Node::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingController::Nodes::Node::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syncc-instance")
        return true;
    return false;
}

TimingController::Nodes::Node::State::SynccInstance::SynccInstance()
    :
    capability_count{YType::uint32, "capability-count"},
    capability_notification{YType::uint32, "capability-notification"},
    controller_state{YType::enumeration, "controller-state"},
    get_clock_count{YType::uint32, "get-clock-count"},
    initial_count{YType::uint32, "initial-count"},
    input_notification{YType::uint32, "input-notification"},
    resync_notification{YType::uint32, "resync-notification"},
    set_capability_count{YType::uint32, "set-capability-count"},
    set_clock_out_count{YType::uint32, "set-clock-out-count"},
    set_input_count{YType::uint32, "set-input-count"},
    set_quality_level_count{YType::uint32, "set-quality-level-count"},
    shutdown_count{YType::uint32, "shutdown-count"},
    status_notification{YType::uint32, "status-notification"},
    sync_disable_count{YType::uint32, "sync-disable-count"},
    sync_enable_count{YType::uint32, "sync-enable-count"},
    syncc_node_state{YType::enumeration, "syncc-node-state"},
    verbose_level{YType::uint32, "verbose-level"}
{

    yang_name = "syncc-instance"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::State::SynccInstance::~SynccInstance()
{
}

bool TimingController::Nodes::Node::State::SynccInstance::has_data() const
{
    return capability_count.is_set
	|| capability_notification.is_set
	|| controller_state.is_set
	|| get_clock_count.is_set
	|| initial_count.is_set
	|| input_notification.is_set
	|| resync_notification.is_set
	|| set_capability_count.is_set
	|| set_clock_out_count.is_set
	|| set_input_count.is_set
	|| set_quality_level_count.is_set
	|| shutdown_count.is_set
	|| status_notification.is_set
	|| sync_disable_count.is_set
	|| sync_enable_count.is_set
	|| syncc_node_state.is_set
	|| verbose_level.is_set;
}

bool TimingController::Nodes::Node::State::SynccInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability_count.yfilter)
	|| ydk::is_set(capability_notification.yfilter)
	|| ydk::is_set(controller_state.yfilter)
	|| ydk::is_set(get_clock_count.yfilter)
	|| ydk::is_set(initial_count.yfilter)
	|| ydk::is_set(input_notification.yfilter)
	|| ydk::is_set(resync_notification.yfilter)
	|| ydk::is_set(set_capability_count.yfilter)
	|| ydk::is_set(set_clock_out_count.yfilter)
	|| ydk::is_set(set_input_count.yfilter)
	|| ydk::is_set(set_quality_level_count.yfilter)
	|| ydk::is_set(shutdown_count.yfilter)
	|| ydk::is_set(status_notification.yfilter)
	|| ydk::is_set(sync_disable_count.yfilter)
	|| ydk::is_set(sync_enable_count.yfilter)
	|| ydk::is_set(syncc_node_state.yfilter)
	|| ydk::is_set(verbose_level.yfilter);
}

std::string TimingController::Nodes::Node::State::SynccInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncc-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::State::SynccInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_count.is_set || is_set(capability_count.yfilter)) leaf_name_data.push_back(capability_count.get_name_leafdata());
    if (capability_notification.is_set || is_set(capability_notification.yfilter)) leaf_name_data.push_back(capability_notification.get_name_leafdata());
    if (controller_state.is_set || is_set(controller_state.yfilter)) leaf_name_data.push_back(controller_state.get_name_leafdata());
    if (get_clock_count.is_set || is_set(get_clock_count.yfilter)) leaf_name_data.push_back(get_clock_count.get_name_leafdata());
    if (initial_count.is_set || is_set(initial_count.yfilter)) leaf_name_data.push_back(initial_count.get_name_leafdata());
    if (input_notification.is_set || is_set(input_notification.yfilter)) leaf_name_data.push_back(input_notification.get_name_leafdata());
    if (resync_notification.is_set || is_set(resync_notification.yfilter)) leaf_name_data.push_back(resync_notification.get_name_leafdata());
    if (set_capability_count.is_set || is_set(set_capability_count.yfilter)) leaf_name_data.push_back(set_capability_count.get_name_leafdata());
    if (set_clock_out_count.is_set || is_set(set_clock_out_count.yfilter)) leaf_name_data.push_back(set_clock_out_count.get_name_leafdata());
    if (set_input_count.is_set || is_set(set_input_count.yfilter)) leaf_name_data.push_back(set_input_count.get_name_leafdata());
    if (set_quality_level_count.is_set || is_set(set_quality_level_count.yfilter)) leaf_name_data.push_back(set_quality_level_count.get_name_leafdata());
    if (shutdown_count.is_set || is_set(shutdown_count.yfilter)) leaf_name_data.push_back(shutdown_count.get_name_leafdata());
    if (status_notification.is_set || is_set(status_notification.yfilter)) leaf_name_data.push_back(status_notification.get_name_leafdata());
    if (sync_disable_count.is_set || is_set(sync_disable_count.yfilter)) leaf_name_data.push_back(sync_disable_count.get_name_leafdata());
    if (sync_enable_count.is_set || is_set(sync_enable_count.yfilter)) leaf_name_data.push_back(sync_enable_count.get_name_leafdata());
    if (syncc_node_state.is_set || is_set(syncc_node_state.yfilter)) leaf_name_data.push_back(syncc_node_state.get_name_leafdata());
    if (verbose_level.is_set || is_set(verbose_level.yfilter)) leaf_name_data.push_back(verbose_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::State::SynccInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::State::SynccInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TimingController::Nodes::Node::State::SynccInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability-count")
    {
        capability_count = value;
        capability_count.value_namespace = name_space;
        capability_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-notification")
    {
        capability_notification = value;
        capability_notification.value_namespace = name_space;
        capability_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-state")
    {
        controller_state = value;
        controller_state.value_namespace = name_space;
        controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-clock-count")
    {
        get_clock_count = value;
        get_clock_count.value_namespace = name_space;
        get_clock_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-count")
    {
        initial_count = value;
        initial_count.value_namespace = name_space;
        initial_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-notification")
    {
        input_notification = value;
        input_notification.value_namespace = name_space;
        input_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-notification")
    {
        resync_notification = value;
        resync_notification.value_namespace = name_space;
        resync_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-capability-count")
    {
        set_capability_count = value;
        set_capability_count.value_namespace = name_space;
        set_capability_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-clock-out-count")
    {
        set_clock_out_count = value;
        set_clock_out_count.value_namespace = name_space;
        set_clock_out_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-input-count")
    {
        set_input_count = value;
        set_input_count.value_namespace = name_space;
        set_input_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-quality-level-count")
    {
        set_quality_level_count = value;
        set_quality_level_count.value_namespace = name_space;
        set_quality_level_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-count")
    {
        shutdown_count = value;
        shutdown_count.value_namespace = name_space;
        shutdown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-notification")
    {
        status_notification = value;
        status_notification.value_namespace = name_space;
        status_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-disable-count")
    {
        sync_disable_count = value;
        sync_disable_count.value_namespace = name_space;
        sync_disable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-enable-count")
    {
        sync_enable_count = value;
        sync_enable_count.value_namespace = name_space;
        sync_enable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncc-node-state")
    {
        syncc_node_state = value;
        syncc_node_state.value_namespace = name_space;
        syncc_node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose-level")
    {
        verbose_level = value;
        verbose_level.value_namespace = name_space;
        verbose_level.value_namespace_prefix = name_space_prefix;
    }
}

void TimingController::Nodes::Node::State::SynccInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability-count")
    {
        capability_count.yfilter = yfilter;
    }
    if(value_path == "capability-notification")
    {
        capability_notification.yfilter = yfilter;
    }
    if(value_path == "controller-state")
    {
        controller_state.yfilter = yfilter;
    }
    if(value_path == "get-clock-count")
    {
        get_clock_count.yfilter = yfilter;
    }
    if(value_path == "initial-count")
    {
        initial_count.yfilter = yfilter;
    }
    if(value_path == "input-notification")
    {
        input_notification.yfilter = yfilter;
    }
    if(value_path == "resync-notification")
    {
        resync_notification.yfilter = yfilter;
    }
    if(value_path == "set-capability-count")
    {
        set_capability_count.yfilter = yfilter;
    }
    if(value_path == "set-clock-out-count")
    {
        set_clock_out_count.yfilter = yfilter;
    }
    if(value_path == "set-input-count")
    {
        set_input_count.yfilter = yfilter;
    }
    if(value_path == "set-quality-level-count")
    {
        set_quality_level_count.yfilter = yfilter;
    }
    if(value_path == "shutdown-count")
    {
        shutdown_count.yfilter = yfilter;
    }
    if(value_path == "status-notification")
    {
        status_notification.yfilter = yfilter;
    }
    if(value_path == "sync-disable-count")
    {
        sync_disable_count.yfilter = yfilter;
    }
    if(value_path == "sync-enable-count")
    {
        sync_enable_count.yfilter = yfilter;
    }
    if(value_path == "syncc-node-state")
    {
        syncc_node_state.yfilter = yfilter;
    }
    if(value_path == "verbose-level")
    {
        verbose_level.yfilter = yfilter;
    }
}

bool TimingController::Nodes::Node::State::SynccInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability-count" || name == "capability-notification" || name == "controller-state" || name == "get-clock-count" || name == "initial-count" || name == "input-notification" || name == "resync-notification" || name == "set-capability-count" || name == "set-clock-out-count" || name == "set-input-count" || name == "set-quality-level-count" || name == "shutdown-count" || name == "status-notification" || name == "sync-disable-count" || name == "sync-enable-count" || name == "syncc-node-state" || name == "verbose-level")
        return true;
    return false;
}

TimingController::Nodes::Node::TimingSource::TimingSource()
{

    yang_name = "timing-source"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::TimingSource::~TimingSource()
{
}

bool TimingController::Nodes::Node::TimingSource::has_data() const
{
    for (std::size_t index=0; index<syncc_instance.size(); index++)
    {
        if(syncc_instance[index]->has_data())
            return true;
    }
    return false;
}

bool TimingController::Nodes::Node::TimingSource::has_operation() const
{
    for (std::size_t index=0; index<syncc_instance.size(); index++)
    {
        if(syncc_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingController::Nodes::Node::TimingSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timing-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::TimingSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::TimingSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syncc-instance")
    {
        for(auto const & c : syncc_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::TimingSource::SynccInstance>();
        c->parent = this;
        syncc_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::TimingSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : syncc_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TimingController::Nodes::Node::TimingSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::Nodes::Node::TimingSource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingController::Nodes::Node::TimingSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syncc-instance")
        return true;
    return false;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::SynccInstance()
{

    yang_name = "syncc-instance"; yang_parent_name = "timing-source"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::~SynccInstance()
{
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::has_data() const
{
    for (std::size_t index=0; index<timing_status1588.size(); index++)
    {
        if(timing_status1588[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<timing_status_t0.size(); index++)
    {
        if(timing_status_t0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<timing_status_t4.size(); index++)
    {
        if(timing_status_t4[index]->has_data())
            return true;
    }
    return false;
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::has_operation() const
{
    for (std::size_t index=0; index<timing_status1588.size(); index++)
    {
        if(timing_status1588[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<timing_status_t0.size(); index++)
    {
        if(timing_status_t0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<timing_status_t4.size(); index++)
    {
        if(timing_status_t4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TimingController::Nodes::Node::TimingSource::SynccInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncc-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::TimingSource::SynccInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::TimingSource::SynccInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timing-status1588")
    {
        for(auto const & c : timing_status1588)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588>();
        c->parent = this;
        timing_status1588.push_back(c);
        return c;
    }

    if(child_yang_name == "timing-status-t0")
    {
        for(auto const & c : timing_status_t0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0>();
        c->parent = this;
        timing_status_t0.push_back(c);
        return c;
    }

    if(child_yang_name == "timing-status-t4")
    {
        for(auto const & c : timing_status_t4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4>();
        c->parent = this;
        timing_status_t4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::TimingSource::SynccInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : timing_status1588)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : timing_status_t0)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : timing_status_t4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timing-status1588" || name == "timing-status-t0" || name == "timing-status-t4")
        return true;
    return false;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::TimingStatus1588()
    :
    clock_source{YType::enumeration, "clock-source"},
    clock_state{YType::enumeration, "clock-state"},
    input{YType::uint8, "input"},
    is_select{YType::boolean, "is-select"},
    port{YType::uint8, "port"},
    quality_level_option{YType::uint8, "quality-level-option"},
    quality_level_value{YType::uint8, "quality-level-value"},
    rank{YType::uint8, "rank"},
    slot{YType::uint8, "slot"},
    user_priority{YType::uint8, "user-priority"}
{

    yang_name = "timing-status1588"; yang_parent_name = "syncc-instance"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::~TimingStatus1588()
{
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::has_data() const
{
    return clock_source.is_set
	|| clock_state.is_set
	|| input.is_set
	|| is_select.is_set
	|| port.is_set
	|| quality_level_option.is_set
	|| quality_level_value.is_set
	|| rank.is_set
	|| slot.is_set
	|| user_priority.is_set;
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_source.yfilter)
	|| ydk::is_set(clock_state.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(is_select.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(quality_level_value.yfilter)
	|| ydk::is_set(rank.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(user_priority.yfilter);
}

std::string TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timing-status1588";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_source.is_set || is_set(clock_source.yfilter)) leaf_name_data.push_back(clock_source.get_name_leafdata());
    if (clock_state.is_set || is_set(clock_state.yfilter)) leaf_name_data.push_back(clock_state.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (is_select.is_set || is_set(is_select.yfilter)) leaf_name_data.push_back(is_select.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (quality_level_value.is_set || is_set(quality_level_value.yfilter)) leaf_name_data.push_back(quality_level_value.get_name_leafdata());
    if (rank.is_set || is_set(rank.yfilter)) leaf_name_data.push_back(rank.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-source")
    {
        clock_source = value;
        clock_source.value_namespace = name_space;
        clock_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-state")
    {
        clock_state = value;
        clock_state.value_namespace = name_space;
        clock_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-select")
    {
        is_select = value;
        is_select.value_namespace = name_space;
        is_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-value")
    {
        quality_level_value = value;
        quality_level_value.value_namespace = name_space;
        quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rank")
    {
        rank = value;
        rank.value_namespace = name_space;
        rank.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-source")
    {
        clock_source.yfilter = yfilter;
    }
    if(value_path == "clock-state")
    {
        clock_state.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "is-select")
    {
        is_select.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "quality-level-value")
    {
        quality_level_value.yfilter = yfilter;
    }
    if(value_path == "rank")
    {
        rank.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-source" || name == "clock-state" || name == "input" || name == "is-select" || name == "port" || name == "quality-level-option" || name == "quality-level-value" || name == "rank" || name == "slot" || name == "user-priority")
        return true;
    return false;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::TimingStatusT0()
    :
    clock_source{YType::enumeration, "clock-source"},
    clock_state{YType::enumeration, "clock-state"},
    input{YType::uint8, "input"},
    is_select{YType::boolean, "is-select"},
    port{YType::uint8, "port"},
    quality_level_option{YType::uint8, "quality-level-option"},
    quality_level_value{YType::uint8, "quality-level-value"},
    rank{YType::uint8, "rank"},
    slot{YType::uint8, "slot"},
    user_priority{YType::uint8, "user-priority"}
{

    yang_name = "timing-status-t0"; yang_parent_name = "syncc-instance"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::~TimingStatusT0()
{
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::has_data() const
{
    return clock_source.is_set
	|| clock_state.is_set
	|| input.is_set
	|| is_select.is_set
	|| port.is_set
	|| quality_level_option.is_set
	|| quality_level_value.is_set
	|| rank.is_set
	|| slot.is_set
	|| user_priority.is_set;
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_source.yfilter)
	|| ydk::is_set(clock_state.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(is_select.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(quality_level_value.yfilter)
	|| ydk::is_set(rank.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(user_priority.yfilter);
}

std::string TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timing-status-t0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_source.is_set || is_set(clock_source.yfilter)) leaf_name_data.push_back(clock_source.get_name_leafdata());
    if (clock_state.is_set || is_set(clock_state.yfilter)) leaf_name_data.push_back(clock_state.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (is_select.is_set || is_set(is_select.yfilter)) leaf_name_data.push_back(is_select.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (quality_level_value.is_set || is_set(quality_level_value.yfilter)) leaf_name_data.push_back(quality_level_value.get_name_leafdata());
    if (rank.is_set || is_set(rank.yfilter)) leaf_name_data.push_back(rank.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-source")
    {
        clock_source = value;
        clock_source.value_namespace = name_space;
        clock_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-state")
    {
        clock_state = value;
        clock_state.value_namespace = name_space;
        clock_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-select")
    {
        is_select = value;
        is_select.value_namespace = name_space;
        is_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-value")
    {
        quality_level_value = value;
        quality_level_value.value_namespace = name_space;
        quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rank")
    {
        rank = value;
        rank.value_namespace = name_space;
        rank.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-source")
    {
        clock_source.yfilter = yfilter;
    }
    if(value_path == "clock-state")
    {
        clock_state.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "is-select")
    {
        is_select.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "quality-level-value")
    {
        quality_level_value.yfilter = yfilter;
    }
    if(value_path == "rank")
    {
        rank.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-source" || name == "clock-state" || name == "input" || name == "is-select" || name == "port" || name == "quality-level-option" || name == "quality-level-value" || name == "rank" || name == "slot" || name == "user-priority")
        return true;
    return false;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::TimingStatusT4()
    :
    clock_source{YType::enumeration, "clock-source"},
    clock_state{YType::enumeration, "clock-state"},
    input{YType::uint8, "input"},
    is_select{YType::boolean, "is-select"},
    port{YType::uint8, "port"},
    quality_level_option{YType::uint8, "quality-level-option"},
    quality_level_value{YType::uint8, "quality-level-value"},
    rank{YType::uint8, "rank"},
    slot{YType::uint8, "slot"},
    user_priority{YType::uint8, "user-priority"}
{

    yang_name = "timing-status-t4"; yang_parent_name = "syncc-instance"; is_top_level_class = false; has_list_ancestor = true;
}

TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::~TimingStatusT4()
{
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::has_data() const
{
    return clock_source.is_set
	|| clock_state.is_set
	|| input.is_set
	|| is_select.is_set
	|| port.is_set
	|| quality_level_option.is_set
	|| quality_level_value.is_set
	|| rank.is_set
	|| slot.is_set
	|| user_priority.is_set;
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_source.yfilter)
	|| ydk::is_set(clock_state.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(is_select.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(quality_level_value.yfilter)
	|| ydk::is_set(rank.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(user_priority.yfilter);
}

std::string TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timing-status-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_source.is_set || is_set(clock_source.yfilter)) leaf_name_data.push_back(clock_source.get_name_leafdata());
    if (clock_state.is_set || is_set(clock_state.yfilter)) leaf_name_data.push_back(clock_state.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (is_select.is_set || is_set(is_select.yfilter)) leaf_name_data.push_back(is_select.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (quality_level_value.is_set || is_set(quality_level_value.yfilter)) leaf_name_data.push_back(quality_level_value.get_name_leafdata());
    if (rank.is_set || is_set(rank.yfilter)) leaf_name_data.push_back(rank.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-source")
    {
        clock_source = value;
        clock_source.value_namespace = name_space;
        clock_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-state")
    {
        clock_state = value;
        clock_state.value_namespace = name_space;
        clock_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-select")
    {
        is_select = value;
        is_select.value_namespace = name_space;
        is_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-value")
    {
        quality_level_value = value;
        quality_level_value.value_namespace = name_space;
        quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rank")
    {
        rank = value;
        rank.value_namespace = name_space;
        rank.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
}

void TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-source")
    {
        clock_source.yfilter = yfilter;
    }
    if(value_path == "clock-state")
    {
        clock_state.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "is-select")
    {
        is_select.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "quality-level-value")
    {
        quality_level_value.yfilter = yfilter;
    }
    if(value_path == "rank")
    {
        rank.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
}

bool TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-source" || name == "clock-state" || name == "input" || name == "is-select" || name == "port" || name == "quality-level-option" || name == "quality-level-value" || name == "rank" || name == "slot" || name == "user-priority")
        return true;
    return false;
}

const Enum::YLeaf InterfaceState::up {0, "up"};
const Enum::YLeaf InterfaceState::down {1, "down"};
const Enum::YLeaf InterfaceState::admin_down {2, "admin-down"};

const Enum::YLeaf SynccStates::initializing {0, "initializing"};
const Enum::YLeaf SynccStates::running {1, "running"};
const Enum::YLeaf SynccStates::normal {2, "normal"};
const Enum::YLeaf SynccStates::shutdown {3, "shutdown"};

const Enum::YLeaf SourceStateName::not_valid {0, "not-valid"};
const Enum::YLeaf SourceStateName::unqualified {1, "unqualified"};
const Enum::YLeaf SourceStateName::available {2, "available"};
const Enum::YLeaf SourceStateName::failed {3, "failed"};
const Enum::YLeaf SourceStateName::unmonitored {4, "unmonitored"};
const Enum::YLeaf SourceStateName::error {5, "error"};

const Enum::YLeaf QlOption1::quality_level_none {0, "quality-level-none"};
const Enum::YLeaf QlOption1::o1 {1, "o1"};
const Enum::YLeaf QlOption1::o2_g1 {2, "o2-g1"};
const Enum::YLeaf QlOption1::o2_g2 {3, "o2-g2"};

const Enum::YLeaf Direct::receive_transmit {0, "receive-transmit"};
const Enum::YLeaf Direct::transmit {1, "transmit"};
const Enum::YLeaf Direct::receive {2, "receive"};

const Enum::YLeaf Source::invalid {0, "invalid"};
const Enum::YLeaf Source::ethernet_line_interface {1, "ethernet-line-interface"};
const Enum::YLeaf Source::sonet_line_interface {2, "sonet-line-interface"};
const Enum::YLeaf Source::clock_interface {3, "clock-interface"};
const Enum::YLeaf Source::internal {4, "internal"};

const Enum::YLeaf Smode2::ami_mode {0, "ami-mode"};
const Enum::YLeaf Smode2::b8zs {1, "b8zs"};
const Enum::YLeaf Smode2::hdb3 {2, "hdb3"};
const Enum::YLeaf Smode2::submode2_none {3, "submode2-none"};

const Enum::YLeaf ClockModes::t1 {0, "t1"};
const Enum::YLeaf ClockModes::e1 {1, "e1"};
const Enum::YLeaf ClockModes::two_m {2, "two-m"};
const Enum::YLeaf ClockModes::input64k {3, "input64k"};
const Enum::YLeaf ClockModes::output6m {4, "output6m"};
const Enum::YLeaf ClockModes::uti {5, "uti"};
const Enum::YLeaf ClockModes::none {6, "none"};

const Enum::YLeaf NodeState::active {1, "active"};
const Enum::YLeaf NodeState::standby {2, "standby"};

const Enum::YLeaf Smode1::extended_super_frame {0, "extended-super-frame"};
const Enum::YLeaf Smode1::d4 {1, "d4"};
const Enum::YLeaf Smode1::non_crc4 {2, "non-crc4"};
const Enum::YLeaf Smode1::crc4 {3, "crc4"};
const Enum::YLeaf Smode1::submode1_none {4, "submode1-none"};


}
}

