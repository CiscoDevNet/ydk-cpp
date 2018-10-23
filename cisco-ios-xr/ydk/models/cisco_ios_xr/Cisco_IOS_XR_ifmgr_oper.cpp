
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_oper {

InterfaceDampening::InterfaceDampening()
    :
    interfaces(std::make_shared<InterfaceDampening::Interfaces>())
    , nodes(std::make_shared<InterfaceDampening::Nodes>())
{
    interfaces->parent = this;
    nodes->parent = this;

    yang_name = "interface-dampening"; yang_parent_name = "Cisco-IOS-XR-ifmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

InterfaceDampening::~InterfaceDampening()
{
}

bool InterfaceDampening::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool InterfaceDampening::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string InterfaceDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InterfaceDampening::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<InterfaceDampening::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void InterfaceDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InterfaceDampening::clone_ptr() const
{
    return std::make_shared<InterfaceDampening>();
}

std::string InterfaceDampening::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceDampening::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceDampening::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InterfaceDampening::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InterfaceDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "nodes")
        return true;
    return false;
}

InterfaceDampening::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interface-dampening"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceDampening::Interfaces::~Interfaces()
{
}

bool InterfaceDampening::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceDampening::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceDampening::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceDampening::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceDampening::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InterfaceDampening::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    if_dampening(std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening>())
{
    if_dampening->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceDampening::Interfaces::Interface::~Interface()
{
}

bool InterfaceDampening::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (if_dampening !=  nullptr && if_dampening->has_data());
}

bool InterfaceDampening::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (if_dampening !=  nullptr && if_dampening->has_operation());
}

std::string InterfaceDampening::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceDampening::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-dampening")
    {
        if(if_dampening == nullptr)
        {
            if_dampening = std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening>();
        }
        return if_dampening;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_dampening != nullptr)
    {
        _children["if-dampening"] = if_dampening;
    }

    return _children;
}

void InterfaceDampening::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool InterfaceDampening::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-dampening" || name == "interface-name")
        return true;
    return false;
}

InterfaceDampening::Interfaces::Interface::IfDampening::IfDampening()
    :
    state_transition_count{YType::uint32, "state-transition-count"},
    last_state_transition_time{YType::uint32, "last-state-transition-time"},
    is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    restart_penalty{YType::uint32, "restart-penalty"}
        ,
    interface_dampening(std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_>())
    , capsulation(this, {})
{
    interface_dampening->parent = this;

    yang_name = "if-dampening"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Interfaces::Interface::IfDampening::~IfDampening()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<capsulation.len(); index++)
    {
        if(capsulation[index]->has_data())
            return true;
    }
    return state_transition_count.is_set
	|| last_state_transition_time.is_set
	|| is_dampening_enabled.is_set
	|| half_life.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| maximum_suppress_time.is_set
	|| restart_penalty.is_set
	|| (interface_dampening !=  nullptr && interface_dampening->has_data());
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::has_operation() const
{
    for (std::size_t index=0; index<capsulation.len(); index++)
    {
        if(capsulation[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state_transition_count.yfilter)
	|| ydk::is_set(last_state_transition_time.yfilter)
	|| ydk::is_set(is_dampening_enabled.yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(maximum_suppress_time.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| (interface_dampening !=  nullptr && interface_dampening->has_operation());
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Interfaces::Interface::IfDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_transition_count.is_set || is_set(state_transition_count.yfilter)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.yfilter)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.yfilter)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.yfilter)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Interfaces::Interface::IfDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-dampening")
    {
        if(interface_dampening == nullptr)
        {
            interface_dampening = std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_>();
        }
        return interface_dampening;
    }

    if(child_yang_name == "capsulation")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation>();
        ent_->parent = this;
        capsulation.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Interfaces::Interface::IfDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_dampening != nullptr)
    {
        _children["interface-dampening"] = interface_dampening;
    }

    count_ = 0;
    for (auto ent_ : capsulation.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
        state_transition_count.value_namespace = name_space;
        state_transition_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
        last_state_transition_time.value_namespace = name_space;
        last_state_transition_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
        is_dampening_enabled.value_namespace = name_space;
        is_dampening_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
        maximum_suppress_time.value_namespace = name_space;
        maximum_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Interfaces::Interface::IfDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-transition-count")
    {
        state_transition_count.yfilter = yfilter;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time.yfilter = yfilter;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled.yfilter = yfilter;
    }
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-dampening" || name == "capsulation" || name == "state-transition-count" || name == "last-state-transition-time" || name == "is-dampening-enabled" || name == "half-life" || name == "reuse-threshold" || name == "suppress-threshold" || name == "maximum-suppress-time" || name == "restart-penalty")
        return true;
    return false;
}

InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::InterfaceDampening_()
    :
    penalty{YType::uint32, "penalty"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    flaps{YType::uint32, "flaps"},
    state{YType::enumeration, "state"}
{

    yang_name = "interface-dampening"; yang_parent_name = "if-dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::~InterfaceDampening_()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::has_data() const
{
    if (is_presence_container) return true;
    return penalty.is_set
	|| is_suppressed_enabled.is_set
	|| seconds_remaining.is_set
	|| flaps.is_set
	|| state.is_set;
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(flaps.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (flaps.is_set || is_set(flaps.yfilter)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flaps")
    {
        flaps = value;
        flaps.value_namespace = name_space;
        flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "flaps")
    {
        flaps.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty" || name == "is-suppressed-enabled" || name == "seconds-remaining" || name == "flaps" || name == "state")
        return true;
    return false;
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::Capsulation()
    :
    capsulation_number{YType::str, "capsulation-number"}
        ,
    capsulation_dampening(std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening>())
{
    capsulation_dampening->parent = this;

    yang_name = "capsulation"; yang_parent_name = "if-dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::~Capsulation()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::has_data() const
{
    if (is_presence_container) return true;
    return capsulation_number.is_set
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_data());
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capsulation_number.yfilter)
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_operation());
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_number.is_set || is_set(capsulation_number.yfilter)) leaf_name_data.push_back(capsulation_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capsulation-dampening")
    {
        if(capsulation_dampening == nullptr)
        {
            capsulation_dampening = std::make_shared<InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening>();
        }
        return capsulation_dampening;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capsulation_dampening != nullptr)
    {
        _children["capsulation-dampening"] = capsulation_dampening;
    }

    return _children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number = value;
        capsulation_number.value_namespace = name_space;
        capsulation_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number.yfilter = yfilter;
    }
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capsulation-dampening" || name == "capsulation-number")
        return true;
    return false;
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::CapsulationDampening()
    :
    penalty{YType::uint32, "penalty"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    flaps{YType::uint32, "flaps"},
    state{YType::enumeration, "state"}
{

    yang_name = "capsulation-dampening"; yang_parent_name = "capsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::~CapsulationDampening()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::has_data() const
{
    if (is_presence_container) return true;
    return penalty.is_set
	|| is_suppressed_enabled.is_set
	|| seconds_remaining.is_set
	|| flaps.is_set
	|| state.is_set;
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(flaps.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (flaps.is_set || is_set(flaps.yfilter)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flaps")
    {
        flaps = value;
        flaps.value_namespace = name_space;
        flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "flaps")
    {
        flaps.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty" || name == "is-suppressed-enabled" || name == "seconds-remaining" || name == "flaps" || name == "state")
        return true;
    return false;
}

InterfaceDampening::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "interface-dampening"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceDampening::Nodes::~Nodes()
{
}

bool InterfaceDampening::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceDampening::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceDampening::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::get_children() const
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

void InterfaceDampening::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceDampening::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    show(std::make_shared<InterfaceDampening::Nodes::Node::Show>())
{
    show->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceDampening::Nodes::Node::~Node()
{
}

bool InterfaceDampening::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (show !=  nullptr && show->has_data());
}

bool InterfaceDampening::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (show !=  nullptr && show->has_operation());
}

std::string InterfaceDampening::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceDampening::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "show")
    {
        if(show == nullptr)
        {
            show = std::make_shared<InterfaceDampening::Nodes::Node::Show>();
        }
        return show;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(show != nullptr)
    {
        _children["show"] = show;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show" || name == "node-name")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Show()
    :
    dampening(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening>())
{
    dampening->parent = this;

    yang_name = "show"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::~Show()
{
}

bool InterfaceDampening::Nodes::Node::Show::has_data() const
{
    if (is_presence_container) return true;
    return (dampening !=  nullptr && dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::has_operation() const
{
    return is_set(yfilter)
	|| (dampening !=  nullptr && dampening->has_operation());
}

std::string InterfaceDampening::Nodes::Node::Show::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening>();
        }
        return dampening;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::Nodes::Node::Show::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceDampening::Nodes::Node::Show::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::Dampening()
    :
    if_handles(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles>())
    , interfaces(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces>())
{
    if_handles->parent = this;
    interfaces->parent = this;

    yang_name = "dampening"; yang_parent_name = "show"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::~Dampening()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return (if_handles !=  nullptr && if_handles->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| (if_handles !=  nullptr && if_handles->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-handles")
    {
        if(if_handles == nullptr)
        {
            if_handles = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles>();
        }
        return if_handles;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_handles != nullptr)
    {
        _children["if-handles"] = if_handles;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::Nodes::Node::Show::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-handles" || name == "interfaces")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandles()
    :
    if_handle(this, {"interface_handle_name"})
{

    yang_name = "if-handles"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::~IfHandles()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_handle.len(); index++)
    {
        if(if_handle[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::has_operation() const
{
    for (std::size_t index=0; index<if_handle.len(); index++)
    {
        if(if_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-handle")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle>();
        ent_->parent = this;
        if_handle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_handle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-handle")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::IfHandle()
    :
    interface_handle_name{YType::str, "interface-handle-name"},
    state_transition_count{YType::uint32, "state-transition-count"},
    last_state_transition_time{YType::uint32, "last-state-transition-time"},
    is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    restart_penalty{YType::uint32, "restart-penalty"}
        ,
    interface_dampening(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_>())
    , capsulation(this, {})
{
    interface_dampening->parent = this;

    yang_name = "if-handle"; yang_parent_name = "if-handles"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::~IfHandle()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<capsulation.len(); index++)
    {
        if(capsulation[index]->has_data())
            return true;
    }
    return interface_handle_name.is_set
	|| state_transition_count.is_set
	|| last_state_transition_time.is_set
	|| is_dampening_enabled.is_set
	|| half_life.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| maximum_suppress_time.is_set
	|| restart_penalty.is_set
	|| (interface_dampening !=  nullptr && interface_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::has_operation() const
{
    for (std::size_t index=0; index<capsulation.len(); index++)
    {
        if(capsulation[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_handle_name.yfilter)
	|| ydk::is_set(state_transition_count.yfilter)
	|| ydk::is_set(last_state_transition_time.yfilter)
	|| ydk::is_set(is_dampening_enabled.yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(maximum_suppress_time.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| (interface_dampening !=  nullptr && interface_dampening->has_operation());
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-handle";
    ADD_KEY_TOKEN(interface_handle_name, "interface-handle-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle_name.is_set || is_set(interface_handle_name.yfilter)) leaf_name_data.push_back(interface_handle_name.get_name_leafdata());
    if (state_transition_count.is_set || is_set(state_transition_count.yfilter)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.yfilter)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.yfilter)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.yfilter)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-dampening")
    {
        if(interface_dampening == nullptr)
        {
            interface_dampening = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_>();
        }
        return interface_dampening;
    }

    if(child_yang_name == "capsulation")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation>();
        ent_->parent = this;
        capsulation.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_dampening != nullptr)
    {
        _children["interface-dampening"] = interface_dampening;
    }

    count_ = 0;
    for (auto ent_ : capsulation.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle-name")
    {
        interface_handle_name = value;
        interface_handle_name.value_namespace = name_space;
        interface_handle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
        state_transition_count.value_namespace = name_space;
        state_transition_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
        last_state_transition_time.value_namespace = name_space;
        last_state_transition_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
        is_dampening_enabled.value_namespace = name_space;
        is_dampening_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
        maximum_suppress_time.value_namespace = name_space;
        maximum_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle-name")
    {
        interface_handle_name.yfilter = yfilter;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count.yfilter = yfilter;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time.yfilter = yfilter;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled.yfilter = yfilter;
    }
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-dampening" || name == "capsulation" || name == "interface-handle-name" || name == "state-transition-count" || name == "last-state-transition-time" || name == "is-dampening-enabled" || name == "half-life" || name == "reuse-threshold" || name == "suppress-threshold" || name == "maximum-suppress-time" || name == "restart-penalty")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::InterfaceDampening_()
    :
    penalty{YType::uint32, "penalty"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    flaps{YType::uint32, "flaps"},
    state{YType::enumeration, "state"}
{

    yang_name = "interface-dampening"; yang_parent_name = "if-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::~InterfaceDampening_()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::has_data() const
{
    if (is_presence_container) return true;
    return penalty.is_set
	|| is_suppressed_enabled.is_set
	|| seconds_remaining.is_set
	|| flaps.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(flaps.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (flaps.is_set || is_set(flaps.yfilter)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flaps")
    {
        flaps = value;
        flaps.value_namespace = name_space;
        flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "flaps")
    {
        flaps.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty" || name == "is-suppressed-enabled" || name == "seconds-remaining" || name == "flaps" || name == "state")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::Capsulation()
    :
    capsulation_number{YType::str, "capsulation-number"}
        ,
    capsulation_dampening(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening>())
{
    capsulation_dampening->parent = this;

    yang_name = "capsulation"; yang_parent_name = "if-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::~Capsulation()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::has_data() const
{
    if (is_presence_container) return true;
    return capsulation_number.is_set
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capsulation_number.yfilter)
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_operation());
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_number.is_set || is_set(capsulation_number.yfilter)) leaf_name_data.push_back(capsulation_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capsulation-dampening")
    {
        if(capsulation_dampening == nullptr)
        {
            capsulation_dampening = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening>();
        }
        return capsulation_dampening;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capsulation_dampening != nullptr)
    {
        _children["capsulation-dampening"] = capsulation_dampening;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number = value;
        capsulation_number.value_namespace = name_space;
        capsulation_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capsulation-dampening" || name == "capsulation-number")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::CapsulationDampening()
    :
    penalty{YType::uint32, "penalty"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    flaps{YType::uint32, "flaps"},
    state{YType::enumeration, "state"}
{

    yang_name = "capsulation-dampening"; yang_parent_name = "capsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::~CapsulationDampening()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::has_data() const
{
    if (is_presence_container) return true;
    return penalty.is_set
	|| is_suppressed_enabled.is_set
	|| seconds_remaining.is_set
	|| flaps.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(flaps.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (flaps.is_set || is_set(flaps.yfilter)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flaps")
    {
        flaps = value;
        flaps.value_namespace = name_space;
        flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "flaps")
    {
        flaps.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty" || name == "is-suppressed-enabled" || name == "seconds-remaining" || name == "flaps" || name == "state")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::~Interfaces()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    state_transition_count{YType::uint32, "state-transition-count"},
    last_state_transition_time{YType::uint32, "last-state-transition-time"},
    is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    restart_penalty{YType::uint32, "restart-penalty"}
        ,
    interface_dampening(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_>())
    , capsulation(this, {})
{
    interface_dampening->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::~Interface()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<capsulation.len(); index++)
    {
        if(capsulation[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| state_transition_count.is_set
	|| last_state_transition_time.is_set
	|| is_dampening_enabled.is_set
	|| half_life.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| maximum_suppress_time.is_set
	|| restart_penalty.is_set
	|| (interface_dampening !=  nullptr && interface_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<capsulation.len(); index++)
    {
        if(capsulation[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(state_transition_count.yfilter)
	|| ydk::is_set(last_state_transition_time.yfilter)
	|| ydk::is_set(is_dampening_enabled.yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(maximum_suppress_time.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| (interface_dampening !=  nullptr && interface_dampening->has_operation());
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state_transition_count.is_set || is_set(state_transition_count.yfilter)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.yfilter)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.yfilter)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.yfilter)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-dampening")
    {
        if(interface_dampening == nullptr)
        {
            interface_dampening = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_>();
        }
        return interface_dampening;
    }

    if(child_yang_name == "capsulation")
    {
        auto ent_ = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation>();
        ent_->parent = this;
        capsulation.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_dampening != nullptr)
    {
        _children["interface-dampening"] = interface_dampening;
    }

    count_ = 0;
    for (auto ent_ : capsulation.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
        state_transition_count.value_namespace = name_space;
        state_transition_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
        last_state_transition_time.value_namespace = name_space;
        last_state_transition_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
        is_dampening_enabled.value_namespace = name_space;
        is_dampening_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
        maximum_suppress_time.value_namespace = name_space;
        maximum_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count.yfilter = yfilter;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time.yfilter = yfilter;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled.yfilter = yfilter;
    }
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-dampening" || name == "capsulation" || name == "interface-name" || name == "state-transition-count" || name == "last-state-transition-time" || name == "is-dampening-enabled" || name == "half-life" || name == "reuse-threshold" || name == "suppress-threshold" || name == "maximum-suppress-time" || name == "restart-penalty")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::InterfaceDampening_()
    :
    penalty{YType::uint32, "penalty"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    flaps{YType::uint32, "flaps"},
    state{YType::enumeration, "state"}
{

    yang_name = "interface-dampening"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::~InterfaceDampening_()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::has_data() const
{
    if (is_presence_container) return true;
    return penalty.is_set
	|| is_suppressed_enabled.is_set
	|| seconds_remaining.is_set
	|| flaps.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(flaps.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (flaps.is_set || is_set(flaps.yfilter)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flaps")
    {
        flaps = value;
        flaps.value_namespace = name_space;
        flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "flaps")
    {
        flaps.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty" || name == "is-suppressed-enabled" || name == "seconds-remaining" || name == "flaps" || name == "state")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::Capsulation()
    :
    capsulation_number{YType::str, "capsulation-number"}
        ,
    capsulation_dampening(std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening>())
{
    capsulation_dampening->parent = this;

    yang_name = "capsulation"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::~Capsulation()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::has_data() const
{
    if (is_presence_container) return true;
    return capsulation_number.is_set
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capsulation_number.yfilter)
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_operation());
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_number.is_set || is_set(capsulation_number.yfilter)) leaf_name_data.push_back(capsulation_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capsulation-dampening")
    {
        if(capsulation_dampening == nullptr)
        {
            capsulation_dampening = std::make_shared<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening>();
        }
        return capsulation_dampening;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capsulation_dampening != nullptr)
    {
        _children["capsulation-dampening"] = capsulation_dampening;
    }

    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number = value;
        capsulation_number.value_namespace = name_space;
        capsulation_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capsulation-dampening" || name == "capsulation-number")
        return true;
    return false;
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::CapsulationDampening()
    :
    penalty{YType::uint32, "penalty"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    flaps{YType::uint32, "flaps"},
    state{YType::enumeration, "state"}
{

    yang_name = "capsulation-dampening"; yang_parent_name = "capsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::~CapsulationDampening()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::has_data() const
{
    if (is_presence_container) return true;
    return penalty.is_set
	|| is_suppressed_enabled.is_set
	|| seconds_remaining.is_set
	|| flaps.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(flaps.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (flaps.is_set || is_set(flaps.yfilter)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flaps")
    {
        flaps = value;
        flaps.value_namespace = name_space;
        flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "flaps")
    {
        flaps.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty" || name == "is-suppressed-enabled" || name == "seconds-remaining" || name == "flaps" || name == "state")
        return true;
    return false;
}

InterfaceProperties::InterfaceProperties()
    :
    data_nodes(std::make_shared<InterfaceProperties::DataNodes>())
{
    data_nodes->parent = this;

    yang_name = "interface-properties"; yang_parent_name = "Cisco-IOS-XR-ifmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

InterfaceProperties::~InterfaceProperties()
{
}

bool InterfaceProperties::has_data() const
{
    if (is_presence_container) return true;
    return (data_nodes !=  nullptr && data_nodes->has_data());
}

bool InterfaceProperties::has_operation() const
{
    return is_set(yfilter)
	|| (data_nodes !=  nullptr && data_nodes->has_operation());
}

std::string InterfaceProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-nodes")
    {
        if(data_nodes == nullptr)
        {
            data_nodes = std::make_shared<InterfaceProperties::DataNodes>();
        }
        return data_nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_nodes != nullptr)
    {
        _children["data-nodes"] = data_nodes;
    }

    return _children;
}

void InterfaceProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InterfaceProperties::clone_ptr() const
{
    return std::make_shared<InterfaceProperties>();
}

std::string InterfaceProperties::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceProperties::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceProperties::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InterfaceProperties::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InterfaceProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-nodes")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNodes()
    :
    data_node(this, {"data_node_name"})
{

    yang_name = "data-nodes"; yang_parent_name = "interface-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceProperties::DataNodes::~DataNodes()
{
}

bool InterfaceProperties::DataNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_node.len(); index++)
    {
        if(data_node[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::has_operation() const
{
    for (std::size_t index=0; index<data_node.len(); index++)
    {
        if(data_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceProperties::DataNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceProperties::DataNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-node")
    {
        auto ent_ = std::make_shared<InterfaceProperties::DataNodes::DataNode>();
        ent_->parent = this;
        data_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceProperties::DataNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-node")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::DataNode()
    :
    data_node_name{YType::str, "data-node-name"}
        ,
    locationviews(std::make_shared<InterfaceProperties::DataNodes::DataNode::Locationviews>())
    , pq_node_locations(std::make_shared<InterfaceProperties::DataNodes::DataNode::PqNodeLocations>())
    , system_view(std::make_shared<InterfaceProperties::DataNodes::DataNode::SystemView>())
{
    locationviews->parent = this;
    pq_node_locations->parent = this;
    system_view->parent = this;

    yang_name = "data-node"; yang_parent_name = "data-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceProperties::DataNodes::DataNode::~DataNode()
{
}

bool InterfaceProperties::DataNodes::DataNode::has_data() const
{
    if (is_presence_container) return true;
    return data_node_name.is_set
	|| (locationviews !=  nullptr && locationviews->has_data())
	|| (pq_node_locations !=  nullptr && pq_node_locations->has_data())
	|| (system_view !=  nullptr && system_view->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_node_name.yfilter)
	|| (locationviews !=  nullptr && locationviews->has_operation())
	|| (pq_node_locations !=  nullptr && pq_node_locations->has_operation())
	|| (system_view !=  nullptr && system_view->has_operation());
}

std::string InterfaceProperties::DataNodes::DataNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-properties/data-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceProperties::DataNodes::DataNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-node";
    ADD_KEY_TOKEN(data_node_name, "data-node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_node_name.is_set || is_set(data_node_name.yfilter)) leaf_name_data.push_back(data_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locationviews")
    {
        if(locationviews == nullptr)
        {
            locationviews = std::make_shared<InterfaceProperties::DataNodes::DataNode::Locationviews>();
        }
        return locationviews;
    }

    if(child_yang_name == "pq-node-locations")
    {
        if(pq_node_locations == nullptr)
        {
            pq_node_locations = std::make_shared<InterfaceProperties::DataNodes::DataNode::PqNodeLocations>();
        }
        return pq_node_locations;
    }

    if(child_yang_name == "system-view")
    {
        if(system_view == nullptr)
        {
            system_view = std::make_shared<InterfaceProperties::DataNodes::DataNode::SystemView>();
        }
        return system_view;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locationviews != nullptr)
    {
        _children["locationviews"] = locationviews;
    }

    if(pq_node_locations != nullptr)
    {
        _children["pq-node-locations"] = pq_node_locations;
    }

    if(system_view != nullptr)
    {
        _children["system-view"] = system_view;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-node-name")
    {
        data_node_name = value;
        data_node_name.value_namespace = name_space;
        data_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceProperties::DataNodes::DataNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-node-name")
    {
        data_node_name.yfilter = yfilter;
    }
}

bool InterfaceProperties::DataNodes::DataNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locationviews" || name == "pq-node-locations" || name == "system-view" || name == "data-node-name")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationviews()
    :
    locationview(this, {"locationview_name"})
{

    yang_name = "locationviews"; yang_parent_name = "data-node"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::Locationviews::~Locationviews()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locationview.len(); index++)
    {
        if(locationview[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::has_operation() const
{
    for (std::size_t index=0; index<locationview.len(); index++)
    {
        if(locationview[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locationviews";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::Locationviews::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::Locationviews::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locationview")
    {
        auto ent_ = std::make_shared<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview>();
        ent_->parent = this;
        locationview.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::Locationviews::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locationview.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locationview")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Locationview()
    :
    locationview_name{YType::str, "locationview-name"}
        ,
    interfaces(std::make_shared<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "locationview"; yang_parent_name = "locationviews"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::~Locationview()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::has_data() const
{
    if (is_presence_container) return true;
    return locationview_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locationview_name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locationview";
    ADD_KEY_TOKEN(locationview_name, "locationview-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locationview_name.is_set || is_set(locationview_name.yfilter)) leaf_name_data.push_back(locationview_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locationview-name")
    {
        locationview_name = value;
        locationview_name.value_namespace = name_space;
        locationview_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locationview-name")
    {
        locationview_name.yfilter = yfilter;
    }
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "locationview-name")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "locationview"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::~Interfaces()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    parent_interface{YType::str, "parent-interface"},
    type{YType::str, "type"},
    state{YType::enumeration, "state"},
    actual_state{YType::enumeration, "actual-state"},
    line_state{YType::enumeration, "line-state"},
    actual_line_state{YType::enumeration, "actual-line-state"},
    encapsulation{YType::str, "encapsulation"},
    encapsulation_type_string{YType::str, "encapsulation-type-string"},
    mtu{YType::uint32, "mtu"},
    sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
    l2_transport{YType::boolean, "l2-transport"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::~Interface()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface.is_set
	|| parent_interface.is_set
	|| type.is_set
	|| state.is_set
	|| actual_state.is_set
	|| line_state.is_set
	|| actual_line_state.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| mtu.is_set
	|| sub_interface_mtu_overhead.is_set
	|| l2_transport.is_set
	|| bandwidth.is_set;
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(actual_state.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(actual_line_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(encapsulation_type_string.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(sub_interface_mtu_overhead.yfilter)
	|| ydk::is_set(l2_transport.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.yfilter)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (actual_line_state.is_set || is_set(actual_line_state.yfilter)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.yfilter)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.yfilter)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.yfilter)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
        actual_state.value_namespace = name_space;
        actual_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
        actual_line_state.value_namespace = name_space;
        actual_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
        encapsulation_type_string.value_namespace = name_space;
        encapsulation_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
        sub_interface_mtu_overhead.value_namespace = name_space;
        sub_interface_mtu_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
        l2_transport.value_namespace = name_space;
        l2_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "actual-state")
    {
        actual_state.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead.yfilter = yfilter;
    }
    if(value_path == "l2-transport")
    {
        l2_transport.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface" || name == "parent-interface" || name == "type" || name == "state" || name == "actual-state" || name == "line-state" || name == "actual-line-state" || name == "encapsulation" || name == "encapsulation-type-string" || name == "mtu" || name == "sub-interface-mtu-overhead" || name == "l2-transport" || name == "bandwidth")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocations()
    :
    pq_node_location(this, {"pq_node_name"})
{

    yang_name = "pq-node-locations"; yang_parent_name = "data-node"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::~PqNodeLocations()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pq_node_location.len(); index++)
    {
        if(pq_node_location[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::has_operation() const
{
    for (std::size_t index=0; index<pq_node_location.len(); index++)
    {
        if(pq_node_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pq-node-locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pq-node-location")
    {
        auto ent_ = std::make_shared<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation>();
        ent_->parent = this;
        pq_node_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pq_node_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pq-node-location")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::PqNodeLocation()
    :
    pq_node_name{YType::str, "pq-node-name"}
        ,
    interfaces(std::make_shared<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "pq-node-location"; yang_parent_name = "pq-node-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::~PqNodeLocation()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::has_data() const
{
    if (is_presence_container) return true;
    return pq_node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pq_node_name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pq-node-location";
    ADD_KEY_TOKEN(pq_node_name, "pq-node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pq_node_name.is_set || is_set(pq_node_name.yfilter)) leaf_name_data.push_back(pq_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pq-node-name")
    {
        pq_node_name = value;
        pq_node_name.value_namespace = name_space;
        pq_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pq-node-name")
    {
        pq_node_name.yfilter = yfilter;
    }
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "pq-node-name")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "pq-node-location"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::~Interfaces()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    parent_interface{YType::str, "parent-interface"},
    type{YType::str, "type"},
    state{YType::enumeration, "state"},
    actual_state{YType::enumeration, "actual-state"},
    line_state{YType::enumeration, "line-state"},
    actual_line_state{YType::enumeration, "actual-line-state"},
    encapsulation{YType::str, "encapsulation"},
    encapsulation_type_string{YType::str, "encapsulation-type-string"},
    mtu{YType::uint32, "mtu"},
    sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
    l2_transport{YType::boolean, "l2-transport"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::~Interface()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface.is_set
	|| parent_interface.is_set
	|| type.is_set
	|| state.is_set
	|| actual_state.is_set
	|| line_state.is_set
	|| actual_line_state.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| mtu.is_set
	|| sub_interface_mtu_overhead.is_set
	|| l2_transport.is_set
	|| bandwidth.is_set;
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(actual_state.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(actual_line_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(encapsulation_type_string.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(sub_interface_mtu_overhead.yfilter)
	|| ydk::is_set(l2_transport.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.yfilter)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (actual_line_state.is_set || is_set(actual_line_state.yfilter)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.yfilter)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.yfilter)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.yfilter)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
        actual_state.value_namespace = name_space;
        actual_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
        actual_line_state.value_namespace = name_space;
        actual_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
        encapsulation_type_string.value_namespace = name_space;
        encapsulation_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
        sub_interface_mtu_overhead.value_namespace = name_space;
        sub_interface_mtu_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
        l2_transport.value_namespace = name_space;
        l2_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "actual-state")
    {
        actual_state.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead.yfilter = yfilter;
    }
    if(value_path == "l2-transport")
    {
        l2_transport.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface" || name == "parent-interface" || name == "type" || name == "state" || name == "actual-state" || name == "line-state" || name == "actual-line-state" || name == "encapsulation" || name == "encapsulation-type-string" || name == "mtu" || name == "sub-interface-mtu-overhead" || name == "l2-transport" || name == "bandwidth")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::SystemView::SystemView()
    :
    interfaces(std::make_shared<InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "system-view"; yang_parent_name = "data-node"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::SystemView::~SystemView()
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string InterfaceProperties::DataNodes::DataNode::SystemView::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-view";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::SystemView::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::SystemView::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::SystemView::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::SystemView::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::DataNode::SystemView::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "system-view"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::~Interfaces()
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    parent_interface{YType::str, "parent-interface"},
    type{YType::str, "type"},
    state{YType::enumeration, "state"},
    actual_state{YType::enumeration, "actual-state"},
    line_state{YType::enumeration, "line-state"},
    actual_line_state{YType::enumeration, "actual-line-state"},
    encapsulation{YType::str, "encapsulation"},
    encapsulation_type_string{YType::str, "encapsulation-type-string"},
    mtu{YType::uint32, "mtu"},
    sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
    l2_transport{YType::boolean, "l2-transport"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::~Interface()
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface.is_set
	|| parent_interface.is_set
	|| type.is_set
	|| state.is_set
	|| actual_state.is_set
	|| line_state.is_set
	|| actual_line_state.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| mtu.is_set
	|| sub_interface_mtu_overhead.is_set
	|| l2_transport.is_set
	|| bandwidth.is_set;
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(actual_state.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(actual_line_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(encapsulation_type_string.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(sub_interface_mtu_overhead.yfilter)
	|| ydk::is_set(l2_transport.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.yfilter)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (actual_line_state.is_set || is_set(actual_line_state.yfilter)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.yfilter)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.yfilter)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.yfilter)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
        actual_state.value_namespace = name_space;
        actual_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
        actual_line_state.value_namespace = name_space;
        actual_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
        encapsulation_type_string.value_namespace = name_space;
        encapsulation_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
        sub_interface_mtu_overhead.value_namespace = name_space;
        sub_interface_mtu_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
        l2_transport.value_namespace = name_space;
        l2_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "actual-state")
    {
        actual_state.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead.yfilter = yfilter;
    }
    if(value_path == "l2-transport")
    {
        l2_transport.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface" || name == "parent-interface" || name == "type" || name == "state" || name == "actual-state" || name == "line-state" || name == "actual-line-state" || name == "encapsulation" || name == "encapsulation-type-string" || name == "mtu" || name == "sub-interface-mtu-overhead" || name == "l2-transport" || name == "bandwidth")
        return true;
    return false;
}

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};


}
}

