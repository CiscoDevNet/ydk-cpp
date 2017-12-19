
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_mda_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_mda_cfg {

ActiveNodes::ActiveNodes()
{

    yang_name = "active-nodes"; yang_parent_name = "Cisco-IOS-XR-config-mda-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

ActiveNodes::~ActiveNodes()
{
}

bool ActiveNodes::has_data() const
{
    for (std::size_t index=0; index<active_node.size(); index++)
    {
        if(active_node[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::has_operation() const
{
    for (std::size_t index=0; index<active_node.size(); index++)
    {
        if(active_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mda-cfg:active-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-node")
    {
        for(auto const & c : active_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode>();
        c->parent = this;
        active_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActiveNodes::clone_ptr() const
{
    return std::make_shared<ActiveNodes>();
}

std::string ActiveNodes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActiveNodes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActiveNodes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActiveNodes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActiveNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-node")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ActiveNode()
    :
    node_name{YType::str, "node-name"}
    	,
    clock_interface(std::make_shared<ActiveNodes::ActiveNode::ClockInterface>())
	,ltrace(std::make_shared<ActiveNodes::ActiveNode::Ltrace>())
	,lpts_local(std::make_shared<ActiveNodes::ActiveNode::LptsLocal>())
	,ssrp_group(std::make_shared<ActiveNodes::ActiveNode::SsrpGroup>())
	,cisco_ios_xr_watchd_cfg_watchdog_node_threshold(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>())
	,cisco_ios_xr_wd_cfg_watchdog_node_threshold_(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>())
{
    clock_interface->parent = this;
    ltrace->parent = this;
    lpts_local->parent = this;
    ssrp_group->parent = this;
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold->parent = this;
    cisco_ios_xr_wd_cfg_watchdog_node_threshold_->parent = this;

    yang_name = "active-node"; yang_parent_name = "active-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

ActiveNodes::ActiveNode::~ActiveNode()
{
}

bool ActiveNodes::ActiveNode::has_data() const
{
    return node_name.is_set
	|| (clock_interface !=  nullptr && clock_interface->has_data())
	|| (ltrace !=  nullptr && ltrace->has_data())
	|| (lpts_local !=  nullptr && lpts_local->has_data())
	|| (ssrp_group !=  nullptr && ssrp_group->has_data())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_data())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold_->has_data());
}

bool ActiveNodes::ActiveNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (clock_interface !=  nullptr && clock_interface->has_operation())
	|| (ltrace !=  nullptr && ltrace->has_operation())
	|| (lpts_local !=  nullptr && lpts_local->has_operation())
	|| (ssrp_group !=  nullptr && ssrp_group->has_operation())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_operation())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold_->has_operation());
}

std::string ActiveNodes::ActiveNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mda-cfg:active-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string ActiveNodes::ActiveNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:clock-interface")
    {
        if(clock_interface == nullptr)
        {
            clock_interface = std::make_shared<ActiveNodes::ActiveNode::ClockInterface>();
        }
        return clock_interface;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-ltrace-cfg:ltrace")
    {
        if(ltrace == nullptr)
        {
            ltrace = std::make_shared<ActiveNodes::ActiveNode::Ltrace>();
        }
        return ltrace;
    }

    if(child_yang_name == "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local")
    {
        if(lpts_local == nullptr)
        {
            lpts_local = std::make_shared<ActiveNodes::ActiveNode::LptsLocal>();
        }
        return lpts_local;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-group")
    {
        if(ssrp_group == nullptr)
        {
            ssrp_group = std::make_shared<ActiveNodes::ActiveNode::SsrpGroup>();
        }
        return ssrp_group;
    }

    if(child_yang_name == "Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold == nullptr)
        {
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
    }

    if(child_yang_name == "Cisco-IOS-XR-wd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold_ == nullptr)
        {
            cisco_ios_xr_wd_cfg_watchdog_node_threshold_ = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_wd_cfg_watchdog_node_threshold_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_interface != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg:clock-interface"] = clock_interface;
    }

    if(ltrace != nullptr)
    {
        children["Cisco-IOS-XR-infra-ltrace-cfg:ltrace"] = ltrace;
    }

    if(lpts_local != nullptr)
    {
        children["Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local"] = lpts_local;
    }

    if(ssrp_group != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-group"] = ssrp_group;
    }

    if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold != nullptr)
    {
        children["Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
    }

    if(cisco_ios_xr_wd_cfg_watchdog_node_threshold_ != nullptr)
    {
        children["Cisco-IOS-XR-wd-cfg:watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold_;
    }

    return children;
}

void ActiveNodes::ActiveNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface" || name == "ltrace" || name == "lpts-local" || name == "ssrp-group" || name == "watchdog-node-threshold" || name == "watchdog-node-threshold" || name == "node-name")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::ClockInterface()
    :
    clocks(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks>())
{
    clocks->parent = this;

    yang_name = "clock-interface"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::ClockInterface::~ClockInterface()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::has_data() const
{
    return (clocks !=  nullptr && clocks->has_data());
}

bool ActiveNodes::ActiveNode::ClockInterface::has_operation() const
{
    return is_set(yfilter)
	|| (clocks !=  nullptr && clocks->has_operation());
}

std::string ActiveNodes::ActiveNode::ClockInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:clock-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clocks")
    {
        if(clocks == nullptr)
        {
            clocks = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks>();
        }
        return clocks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clocks != nullptr)
    {
        children["clocks"] = clocks;
    }

    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::ClockInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::ClockInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clocks")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clocks()
{

    yang_name = "clocks"; yang_parent_name = "clock-interface"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::~Clocks()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::has_data() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::has_operation() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_>();
        c->parent = this;
        clock_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::Clock_()
    :
    clock_type{YType::enumeration, "clock-type"},
    port{YType::int32, "port"}
    	,
    frequency_synchronization(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization>())
{
    frequency_synchronization->parent = this;

    yang_name = "clock"; yang_parent_name = "clocks"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::~Clock_()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::has_data() const
{
    return clock_type.is_set
	|| port.is_set
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data());
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation());
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock" <<"[clock-type='" <<clock_type <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frequency_synchronization != nullptr)
    {
        children["frequency-synchronization"] = frequency_synchronization;
    }

    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-synchronization" || name == "clock-type" || name == "port")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::FrequencySynchronization()
    :
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    ssm_disable{YType::empty, "ssm-disable"}
    	,
    output_quality_level(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel>())
	,input_quality_level(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel>())
{
    output_quality_level->parent = this;
    input_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::~FrequencySynchronization()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::has_data() const
{
    return wait_to_restore_time.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| time_of_day_priority.is_set
	|| ssm_disable.is_set
	|| (output_quality_level !=  nullptr && output_quality_level->has_data())
	|| (input_quality_level !=  nullptr && input_quality_level->has_data());
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation())
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation());
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-quality-level" || name == "input-quality-level" || name == "wait-to-restore-time" || name == "priority" || name == "selection-input" || name == "time-of-day-priority" || name == "ssm-disable")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

ActiveNodes::ActiveNode::Ltrace::Ltrace()
    :
    allocation_params(std::make_shared<ActiveNodes::ActiveNode::Ltrace::AllocationParams>())
{
    allocation_params->parent = this;

    yang_name = "ltrace"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::Ltrace::~Ltrace()
{
}

bool ActiveNodes::ActiveNode::Ltrace::has_data() const
{
    return (allocation_params !=  nullptr && allocation_params->has_data());
}

bool ActiveNodes::ActiveNode::Ltrace::has_operation() const
{
    return is_set(yfilter)
	|| (allocation_params !=  nullptr && allocation_params->has_operation());
}

std::string ActiveNodes::ActiveNode::Ltrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ltrace-cfg:ltrace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::Ltrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::Ltrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation-params")
    {
        if(allocation_params == nullptr)
        {
            allocation_params = std::make_shared<ActiveNodes::ActiveNode::Ltrace::AllocationParams>();
        }
        return allocation_params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::Ltrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocation_params != nullptr)
    {
        children["allocation-params"] = allocation_params;
    }

    return children;
}

void ActiveNodes::ActiveNode::Ltrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::Ltrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::Ltrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-params")
        return true;
    return false;
}

ActiveNodes::ActiveNode::Ltrace::AllocationParams::AllocationParams()
    :
    mode{YType::enumeration, "mode"},
    scale_factor{YType::enumeration, "scale-factor"}
{

    yang_name = "allocation-params"; yang_parent_name = "ltrace"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::Ltrace::AllocationParams::~AllocationParams()
{
}

bool ActiveNodes::ActiveNode::Ltrace::AllocationParams::has_data() const
{
    return mode.is_set
	|| scale_factor.is_set;
}

bool ActiveNodes::ActiveNode::Ltrace::AllocationParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(scale_factor.yfilter);
}

std::string ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.yfilter)) leaf_name_data.push_back(scale_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::Ltrace::AllocationParams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::Ltrace::AllocationParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
        scale_factor.value_namespace = name_space;
        scale_factor.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::Ltrace::AllocationParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "scale-factor")
    {
        scale_factor.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::Ltrace::AllocationParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "scale-factor")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::LptsLocal()
    :
    ipolicer_local_tables(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables>())
	,dynamic_flows_tables(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables>())
	,ipolicer_local(nullptr) // presence node
{
    ipolicer_local_tables->parent = this;
    dynamic_flows_tables->parent = this;

    yang_name = "lpts-local"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::~LptsLocal()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::has_data() const
{
    return (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_data())
	|| (dynamic_flows_tables !=  nullptr && dynamic_flows_tables->has_data())
	|| (ipolicer_local !=  nullptr && ipolicer_local->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::has_operation() const
{
    return is_set(yfilter)
	|| (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_operation())
	|| (dynamic_flows_tables !=  nullptr && dynamic_flows_tables->has_operation())
	|| (ipolicer_local !=  nullptr && ipolicer_local->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipolicer-local-tables")
    {
        if(ipolicer_local_tables == nullptr)
        {
            ipolicer_local_tables = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables>();
        }
        return ipolicer_local_tables;
    }

    if(child_yang_name == "dynamic-flows-tables")
    {
        if(dynamic_flows_tables == nullptr)
        {
            dynamic_flows_tables = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables>();
        }
        return dynamic_flows_tables;
    }

    if(child_yang_name == "ipolicer-local")
    {
        if(ipolicer_local == nullptr)
        {
            ipolicer_local = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal>();
        }
        return ipolicer_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipolicer_local_tables != nullptr)
    {
        children["ipolicer-local-tables"] = ipolicer_local_tables;
    }

    if(dynamic_flows_tables != nullptr)
    {
        children["dynamic-flows-tables"] = dynamic_flows_tables;
    }

    if(ipolicer_local != nullptr)
    {
        children["ipolicer-local"] = ipolicer_local;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::LptsLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::LptsLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipolicer-local-tables" || name == "dynamic-flows-tables" || name == "ipolicer-local")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTables()
{

    yang_name = "ipolicer-local-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::~IpolicerLocalTables()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_data() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_operation() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipolicer-local-table")
    {
        for(auto const & c : ipolicer_local_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable>();
        c->parent = this;
        ipolicer_local_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipolicer_local_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipolicer-local-table")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::IpolicerLocalTable()
    :
    id1{YType::str, "id1"}
    	,
    nps(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>())
{
    nps->parent = this;

    yang_name = "ipolicer-local-table"; yang_parent_name = "ipolicer-local-tables"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::~IpolicerLocalTable()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_data() const
{
    return id1.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-table" <<"[id1='" <<id1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nps")
    {
        if(nps == nullptr)
        {
            nps = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>();
        }
        return nps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nps != nullptr)
    {
        children["nps"] = nps;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nps" || name == "id1")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Nps()
{

    yang_name = "nps"; yang_parent_name = "ipolicer-local-table"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::~Nps()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np>();
        c->parent = this;
        np.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : np)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::Np()
    :
    id1{YType::int32, "id1"},
    rate{YType::int32, "rate"}
{

    yang_name = "np"; yang_parent_name = "nps"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::~Np()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_data() const
{
    return id1.is_set
	|| rate.is_set;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[id1='" <<id1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id1" || name == "rate")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTables()
{

    yang_name = "dynamic-flows-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::~DynamicFlowsTables()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::has_data() const
{
    for (std::size_t index=0; index<dynamic_flows_table.size(); index++)
    {
        if(dynamic_flows_table[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::has_operation() const
{
    for (std::size_t index=0; index<dynamic_flows_table.size(); index++)
    {
        if(dynamic_flows_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-flows-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-flows-table")
    {
        for(auto const & c : dynamic_flows_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable>();
        c->parent = this;
        dynamic_flows_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dynamic_flows_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-flows-table")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::DynamicFlowsTable()
    :
    table_type{YType::enumeration, "table-type"}
{

    yang_name = "dynamic-flows-table"; yang_parent_name = "dynamic-flows-tables"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::~DynamicFlowsTable()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_data() const
{
    for (std::size_t index=0; index<flow_type.size(); index++)
    {
        if(flow_type[index]->has_data())
            return true;
    }
    return table_type.is_set;
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_operation() const
{
    for (std::size_t index=0; index<flow_type.size(); index++)
    {
        if(flow_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(table_type.yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-flows-table" <<"[table-type='" <<table_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_type.is_set || is_set(table_type.yfilter)) leaf_name_data.push_back(table_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-type")
    {
        for(auto const & c : flow_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType>();
        c->parent = this;
        flow_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-type")
    {
        table_type = value;
        table_type.value_namespace = name_space;
        table_type.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-type")
    {
        table_type.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-type" || name == "table-type")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::FlowType()
    :
    flow_type{YType::enumeration, "flow-type"},
    max{YType::int32, "max"}
{

    yang_name = "flow-type"; yang_parent_name = "dynamic-flows-table"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::~FlowType()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_data() const
{
    return flow_type.is_set
	|| max.is_set;
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-type" <<"[flow-type='" <<flow_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-type" || name == "max")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::IpolicerLocal()
    :
    enable{YType::empty, "enable"}
    	,
    flows(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows>())
{
    flows->parent = this;

    yang_name = "ipolicer-local"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::~IpolicerLocal()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::has_data() const
{
    return enable.is_set
	|| (flows !=  nullptr && flows->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flows !=  nullptr && flows->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows")
    {
        if(flows == nullptr)
        {
            flows = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows>();
        }
        return flows;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flows != nullptr)
    {
        children["flows"] = flows;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flows" || name == "enable")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flows()
{

    yang_name = "flows"; yang_parent_name = "ipolicer-local"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::~Flows()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow>();
        c->parent = this;
        flow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Flow()
    :
    flow_type{YType::enumeration, "flow-type"},
    rate{YType::int32, "rate"}
    	,
    precedences(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>())
{
    precedences->parent = this;

    yang_name = "flow"; yang_parent_name = "flows"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::~Flow()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::has_data() const
{
    return flow_type.is_set
	|| rate.is_set
	|| (precedences !=  nullptr && precedences->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| (precedences !=  nullptr && precedences->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "precedences")
    {
        if(precedences == nullptr)
        {
            precedences = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>();
        }
        return precedences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(precedences != nullptr)
    {
        children["precedences"] = precedences;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedences" || name == "flow-type" || name == "rate")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::Precedences()
    :
    precedence{YType::str, "precedence"}
{

    yang_name = "precedences"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::~Precedences()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_data() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence")
        return true;
    return false;
}

ActiveNodes::ActiveNode::SsrpGroup::SsrpGroup()
    :
    groups(std::make_shared<ActiveNodes::ActiveNode::SsrpGroup::Groups>())
{
    groups->parent = this;

    yang_name = "ssrp-group"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::SsrpGroup::~SsrpGroup()
{
}

bool ActiveNodes::ActiveNode::SsrpGroup::has_data() const
{
    return (groups !=  nullptr && groups->has_data());
}

bool ActiveNodes::ActiveNode::SsrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string ActiveNodes::ActiveNode::SsrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::SsrpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::SsrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<ActiveNodes::ActiveNode::SsrpGroup::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::SsrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void ActiveNodes::ActiveNode::SsrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::SsrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::SsrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups")
        return true;
    return false;
}

ActiveNodes::ActiveNode::SsrpGroup::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "ssrp-group"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::SsrpGroup::Groups::~Groups()
{
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::SsrpGroup::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::SsrpGroup::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::SsrpGroup::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ActiveNodes::ActiveNode::SsrpGroup::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::SsrpGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::SsrpGroup::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::SsrpGroup::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    profile{YType::str, "profile"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::~Group()
{
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::has_data() const
{
    return group_id.is_set
	|| profile.is_set;
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "profile")
        return true;
    return false;
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
    :
    memory_threshold(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;

    yang_name = "watchdog-node-threshold"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::~CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold == nullptr)
        {
            memory_threshold = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold>();
        }
        return memory_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory_threshold != nullptr)
    {
        children["memory-threshold"] = memory_threshold;
    }

    return children;
}

void ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-threshold")
        return true;
    return false;
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "memory-threshold"; yang_parent_name = "watchdog-node-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
        return true;
    return false;
}

ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::CiscoIOSXRWdCfgWatchdogNodeThreshold()
    :
    memory_threshold(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;

    yang_name = "watchdog-node-threshold"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::~CiscoIOSXRWdCfgWatchdogNodeThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-cfg:watchdog-node-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold == nullptr)
        {
            memory_threshold = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold>();
        }
        return memory_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory_threshold != nullptr)
    {
        children["memory-threshold"] = memory_threshold;
    }

    return children;
}

void ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-threshold")
        return true;
    return false;
}

ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "memory-threshold"; yang_parent_name = "watchdog-node-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNodes()
{

    yang_name = "preconfigured-nodes"; yang_parent_name = "Cisco-IOS-XR-config-mda-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

PreconfiguredNodes::~PreconfiguredNodes()
{
}

bool PreconfiguredNodes::has_data() const
{
    for (std::size_t index=0; index<preconfigured_node.size(); index++)
    {
        if(preconfigured_node[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::has_operation() const
{
    for (std::size_t index=0; index<preconfigured_node.size(); index++)
    {
        if(preconfigured_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mda-cfg:preconfigured-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preconfigured-node")
    {
        for(auto const & c : preconfigured_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode>();
        c->parent = this;
        preconfigured_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : preconfigured_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PreconfiguredNodes::clone_ptr() const
{
    return std::make_shared<PreconfiguredNodes>();
}

std::string PreconfiguredNodes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PreconfiguredNodes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PreconfiguredNodes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PreconfiguredNodes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PreconfiguredNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preconfigured-node")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::PreconfiguredNode()
    :
    node_name{YType::str, "node-name"}
    	,
    clock_interface(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface>())
	,ltrace(std::make_shared<PreconfiguredNodes::PreconfiguredNode::Ltrace>())
	,lpts_local(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal>())
	,cisco_ios_xr_watchd_cfg_watchdog_node_threshold(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>())
	,cisco_ios_xr_wd_cfg_watchdog_node_threshold_(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>())
{
    clock_interface->parent = this;
    ltrace->parent = this;
    lpts_local->parent = this;
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold->parent = this;
    cisco_ios_xr_wd_cfg_watchdog_node_threshold_->parent = this;

    yang_name = "preconfigured-node"; yang_parent_name = "preconfigured-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PreconfiguredNodes::PreconfiguredNode::~PreconfiguredNode()
{
}

bool PreconfiguredNodes::PreconfiguredNode::has_data() const
{
    return node_name.is_set
	|| (clock_interface !=  nullptr && clock_interface->has_data())
	|| (ltrace !=  nullptr && ltrace->has_data())
	|| (lpts_local !=  nullptr && lpts_local->has_data())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_data())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold_->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (clock_interface !=  nullptr && clock_interface->has_operation())
	|| (ltrace !=  nullptr && ltrace->has_operation())
	|| (lpts_local !=  nullptr && lpts_local->has_operation())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold->has_operation())
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold_->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mda-cfg:preconfigured-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PreconfiguredNodes::PreconfiguredNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preconfigured-node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:clock-interface")
    {
        if(clock_interface == nullptr)
        {
            clock_interface = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface>();
        }
        return clock_interface;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-ltrace-cfg:ltrace")
    {
        if(ltrace == nullptr)
        {
            ltrace = std::make_shared<PreconfiguredNodes::PreconfiguredNode::Ltrace>();
        }
        return ltrace;
    }

    if(child_yang_name == "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local")
    {
        if(lpts_local == nullptr)
        {
            lpts_local = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal>();
        }
        return lpts_local;
    }

    if(child_yang_name == "Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold == nullptr)
        {
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
    }

    if(child_yang_name == "Cisco-IOS-XR-wd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold_ == nullptr)
        {
            cisco_ios_xr_wd_cfg_watchdog_node_threshold_ = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_wd_cfg_watchdog_node_threshold_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_interface != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg:clock-interface"] = clock_interface;
    }

    if(ltrace != nullptr)
    {
        children["Cisco-IOS-XR-infra-ltrace-cfg:ltrace"] = ltrace;
    }

    if(lpts_local != nullptr)
    {
        children["Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local"] = lpts_local;
    }

    if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold != nullptr)
    {
        children["Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
    }

    if(cisco_ios_xr_wd_cfg_watchdog_node_threshold_ != nullptr)
    {
        children["Cisco-IOS-XR-wd-cfg:watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold_;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface" || name == "ltrace" || name == "lpts-local" || name == "watchdog-node-threshold" || name == "watchdog-node-threshold" || name == "node-name")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::ClockInterface()
    :
    clocks(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks>())
{
    clocks->parent = this;

    yang_name = "clock-interface"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::~ClockInterface()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::has_data() const
{
    return (clocks !=  nullptr && clocks->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::has_operation() const
{
    return is_set(yfilter)
	|| (clocks !=  nullptr && clocks->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:clock-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clocks")
    {
        if(clocks == nullptr)
        {
            clocks = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks>();
        }
        return clocks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clocks != nullptr)
    {
        children["clocks"] = clocks;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clocks")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clocks()
{

    yang_name = "clocks"; yang_parent_name = "clock-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::~Clocks()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::has_data() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::has_operation() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_>();
        c->parent = this;
        clock_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::Clock_()
    :
    clock_type{YType::enumeration, "clock-type"},
    port{YType::int32, "port"}
    	,
    frequency_synchronization(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization>())
{
    frequency_synchronization->parent = this;

    yang_name = "clock"; yang_parent_name = "clocks"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::~Clock_()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::has_data() const
{
    return clock_type.is_set
	|| port.is_set
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock" <<"[clock-type='" <<clock_type <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frequency_synchronization != nullptr)
    {
        children["frequency-synchronization"] = frequency_synchronization;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-synchronization" || name == "clock-type" || name == "port")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::FrequencySynchronization()
    :
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    ssm_disable{YType::empty, "ssm-disable"}
    	,
    output_quality_level(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel>())
	,input_quality_level(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel>())
{
    output_quality_level->parent = this;
    input_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::~FrequencySynchronization()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::has_data() const
{
    return wait_to_restore_time.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| time_of_day_priority.is_set
	|| ssm_disable.is_set
	|| (output_quality_level !=  nullptr && output_quality_level->has_data())
	|| (input_quality_level !=  nullptr && input_quality_level->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation())
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-quality-level" || name == "input-quality-level" || name == "wait-to-restore-time" || name == "priority" || name == "selection-input" || name == "time-of-day-priority" || name == "ssm-disable")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock_::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::Ltrace()
    :
    allocation_params(std::make_shared<PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams>())
{
    allocation_params->parent = this;

    yang_name = "ltrace"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::~Ltrace()
{
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::has_data() const
{
    return (allocation_params !=  nullptr && allocation_params->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::has_operation() const
{
    return is_set(yfilter)
	|| (allocation_params !=  nullptr && allocation_params->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::Ltrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ltrace-cfg:ltrace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::Ltrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::Ltrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation-params")
    {
        if(allocation_params == nullptr)
        {
            allocation_params = std::make_shared<PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams>();
        }
        return allocation_params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::Ltrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocation_params != nullptr)
    {
        children["allocation-params"] = allocation_params;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::Ltrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::Ltrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-params")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::AllocationParams()
    :
    mode{YType::enumeration, "mode"},
    scale_factor{YType::enumeration, "scale-factor"}
{

    yang_name = "allocation-params"; yang_parent_name = "ltrace"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::~AllocationParams()
{
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::has_data() const
{
    return mode.is_set
	|| scale_factor.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(scale_factor.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.yfilter)) leaf_name_data.push_back(scale_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
        scale_factor.value_namespace = name_space;
        scale_factor.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "scale-factor")
    {
        scale_factor.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "scale-factor")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::LptsLocal()
    :
    ipolicer_local_tables(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables>())
	,dynamic_flows_tables(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables>())
	,ipolicer_local(nullptr) // presence node
{
    ipolicer_local_tables->parent = this;
    dynamic_flows_tables->parent = this;

    yang_name = "lpts-local"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::~LptsLocal()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::has_data() const
{
    return (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_data())
	|| (dynamic_flows_tables !=  nullptr && dynamic_flows_tables->has_data())
	|| (ipolicer_local !=  nullptr && ipolicer_local->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::has_operation() const
{
    return is_set(yfilter)
	|| (ipolicer_local_tables !=  nullptr && ipolicer_local_tables->has_operation())
	|| (dynamic_flows_tables !=  nullptr && dynamic_flows_tables->has_operation())
	|| (ipolicer_local !=  nullptr && ipolicer_local->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipolicer-local-tables")
    {
        if(ipolicer_local_tables == nullptr)
        {
            ipolicer_local_tables = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables>();
        }
        return ipolicer_local_tables;
    }

    if(child_yang_name == "dynamic-flows-tables")
    {
        if(dynamic_flows_tables == nullptr)
        {
            dynamic_flows_tables = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables>();
        }
        return dynamic_flows_tables;
    }

    if(child_yang_name == "ipolicer-local")
    {
        if(ipolicer_local == nullptr)
        {
            ipolicer_local = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal>();
        }
        return ipolicer_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipolicer_local_tables != nullptr)
    {
        children["ipolicer-local-tables"] = ipolicer_local_tables;
    }

    if(dynamic_flows_tables != nullptr)
    {
        children["dynamic-flows-tables"] = dynamic_flows_tables;
    }

    if(ipolicer_local != nullptr)
    {
        children["ipolicer-local"] = ipolicer_local;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipolicer-local-tables" || name == "dynamic-flows-tables" || name == "ipolicer-local")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTables()
{

    yang_name = "ipolicer-local-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::~IpolicerLocalTables()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_data() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_operation() const
{
    for (std::size_t index=0; index<ipolicer_local_table.size(); index++)
    {
        if(ipolicer_local_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipolicer-local-table")
    {
        for(auto const & c : ipolicer_local_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable>();
        c->parent = this;
        ipolicer_local_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipolicer_local_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipolicer-local-table")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::IpolicerLocalTable()
    :
    id1{YType::str, "id1"}
    	,
    nps(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>())
{
    nps->parent = this;

    yang_name = "ipolicer-local-table"; yang_parent_name = "ipolicer-local-tables"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::~IpolicerLocalTable()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_data() const
{
    return id1.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-table" <<"[id1='" <<id1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nps")
    {
        if(nps == nullptr)
        {
            nps = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps>();
        }
        return nps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nps != nullptr)
    {
        children["nps"] = nps;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nps" || name == "id1")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Nps()
{

    yang_name = "nps"; yang_parent_name = "ipolicer-local-table"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::~Nps()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_data() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.size(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        for(auto const & c : np)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np>();
        c->parent = this;
        np.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : np)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::Np()
    :
    id1{YType::int32, "id1"},
    rate{YType::int32, "rate"}
{

    yang_name = "np"; yang_parent_name = "nps"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::~Np()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_data() const
{
    return id1.is_set
	|| rate.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np" <<"[id1='" <<id1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id1" || name == "rate")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTables()
{

    yang_name = "dynamic-flows-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::~DynamicFlowsTables()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::has_data() const
{
    for (std::size_t index=0; index<dynamic_flows_table.size(); index++)
    {
        if(dynamic_flows_table[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::has_operation() const
{
    for (std::size_t index=0; index<dynamic_flows_table.size(); index++)
    {
        if(dynamic_flows_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-flows-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-flows-table")
    {
        for(auto const & c : dynamic_flows_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable>();
        c->parent = this;
        dynamic_flows_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dynamic_flows_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-flows-table")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::DynamicFlowsTable()
    :
    table_type{YType::enumeration, "table-type"}
{

    yang_name = "dynamic-flows-table"; yang_parent_name = "dynamic-flows-tables"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::~DynamicFlowsTable()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_data() const
{
    for (std::size_t index=0; index<flow_type.size(); index++)
    {
        if(flow_type[index]->has_data())
            return true;
    }
    return table_type.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_operation() const
{
    for (std::size_t index=0; index<flow_type.size(); index++)
    {
        if(flow_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(table_type.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-flows-table" <<"[table-type='" <<table_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_type.is_set || is_set(table_type.yfilter)) leaf_name_data.push_back(table_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-type")
    {
        for(auto const & c : flow_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType>();
        c->parent = this;
        flow_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-type")
    {
        table_type = value;
        table_type.value_namespace = name_space;
        table_type.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-type")
    {
        table_type.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-type" || name == "table-type")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::FlowType()
    :
    flow_type{YType::enumeration, "flow-type"},
    max{YType::int32, "max"}
{

    yang_name = "flow-type"; yang_parent_name = "dynamic-flows-table"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::~FlowType()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_data() const
{
    return flow_type.is_set
	|| max.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-type" <<"[flow-type='" <<flow_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-type" || name == "max")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::IpolicerLocal()
    :
    enable{YType::empty, "enable"}
    	,
    flows(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows>())
{
    flows->parent = this;

    yang_name = "ipolicer-local"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::~IpolicerLocal()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::has_data() const
{
    return enable.is_set
	|| (flows !=  nullptr && flows->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flows !=  nullptr && flows->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows")
    {
        if(flows == nullptr)
        {
            flows = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows>();
        }
        return flows;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flows != nullptr)
    {
        children["flows"] = flows;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flows" || name == "enable")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flows()
{

    yang_name = "flows"; yang_parent_name = "ipolicer-local"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::~Flows()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow>();
        c->parent = this;
        flow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Flow()
    :
    flow_type{YType::enumeration, "flow-type"},
    rate{YType::int32, "rate"}
    	,
    precedences(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>())
{
    precedences->parent = this;

    yang_name = "flow"; yang_parent_name = "flows"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::~Flow()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::has_data() const
{
    return flow_type.is_set
	|| rate.is_set
	|| (precedences !=  nullptr && precedences->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| (precedences !=  nullptr && precedences->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "precedences")
    {
        if(precedences == nullptr)
        {
            precedences = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences>();
        }
        return precedences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(precedences != nullptr)
    {
        children["precedences"] = precedences;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedences" || name == "flow-type" || name == "rate")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::Precedences()
    :
    precedence{YType::str, "precedence"}
{

    yang_name = "precedences"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::~Precedences()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_data() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
    :
    memory_threshold(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;

    yang_name = "watchdog-node-threshold"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::~CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold == nullptr)
        {
            memory_threshold = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold>();
        }
        return memory_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory_threshold != nullptr)
    {
        children["memory-threshold"] = memory_threshold;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-threshold")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "memory-threshold"; yang_parent_name = "watchdog-node-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::CiscoIOSXRWdCfgWatchdogNodeThreshold()
    :
    memory_threshold(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold>())
{
    memory_threshold->parent = this;

    yang_name = "watchdog-node-threshold"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::~CiscoIOSXRWdCfgWatchdogNodeThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::has_data() const
{
    return (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (memory_threshold !=  nullptr && memory_threshold->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-cfg:watchdog-node-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-threshold")
    {
        if(memory_threshold == nullptr)
        {
            memory_threshold = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold>();
        }
        return memory_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory_threshold != nullptr)
    {
        children["memory-threshold"] = memory_threshold;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-threshold")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::MemoryThreshold()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "memory-threshold"; yang_parent_name = "watchdog-node-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::~MemoryThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::has_data() const
{
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold::MemoryThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
        return true;
    return false;
}


}
}

