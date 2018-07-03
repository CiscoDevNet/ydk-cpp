
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
    :
    active_node(this, {"node_name"})
{

    yang_name = "active-nodes"; yang_parent_name = "Cisco-IOS-XR-config-mda-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

ActiveNodes::~ActiveNodes()
{
}

bool ActiveNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_node.len(); index++)
    {
        if(active_node[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::has_operation() const
{
    for (std::size_t index=0; index<active_node.len(); index++)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode>();
        c->parent = this;
        active_node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : active_node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    cisco_ios_xr_wd_cfg_watchdog_node_threshold(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>())
    , ssrp_group(std::make_shared<ActiveNodes::ActiveNode::SsrpGroup>())
    , lpts_local(std::make_shared<ActiveNodes::ActiveNode::LptsLocal>())
    , ltrace(std::make_shared<ActiveNodes::ActiveNode::Ltrace>())
    , clock_interface(std::make_shared<ActiveNodes::ActiveNode::ClockInterface>())
    , fia_buffer_profile_cfg(std::make_shared<ActiveNodes::ActiveNode::FiaBufferProfileCfg>())
    , fia_vqi_shaper_cfg(std::make_shared<ActiveNodes::ActiveNode::FiaVqiShaperCfg>())
    , port_queue_remaps(std::make_shared<ActiveNodes::ActiveNode::PortQueueRemaps>())
    , cisco_ios_xr_watchd_cfg_watchdog_node_threshold_(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>())
{
    cisco_ios_xr_wd_cfg_watchdog_node_threshold->parent = this;
    ssrp_group->parent = this;
    lpts_local->parent = this;
    ltrace->parent = this;
    clock_interface->parent = this;
    fia_buffer_profile_cfg->parent = this;
    fia_vqi_shaper_cfg->parent = this;
    port_queue_remaps->parent = this;
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold_->parent = this;

    yang_name = "active-node"; yang_parent_name = "active-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

ActiveNodes::ActiveNode::~ActiveNode()
{
}

bool ActiveNodes::ActiveNode::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_data())
	|| (ssrp_group !=  nullptr && ssrp_group->has_data())
	|| (lpts_local !=  nullptr && lpts_local->has_data())
	|| (ltrace !=  nullptr && ltrace->has_data())
	|| (clock_interface !=  nullptr && clock_interface->has_data())
	|| (fia_buffer_profile_cfg !=  nullptr && fia_buffer_profile_cfg->has_data())
	|| (fia_vqi_shaper_cfg !=  nullptr && fia_vqi_shaper_cfg->has_data())
	|| (port_queue_remaps !=  nullptr && port_queue_remaps->has_data())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold_->has_data());
}

bool ActiveNodes::ActiveNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_operation())
	|| (ssrp_group !=  nullptr && ssrp_group->has_operation())
	|| (lpts_local !=  nullptr && lpts_local->has_operation())
	|| (ltrace !=  nullptr && ltrace->has_operation())
	|| (clock_interface !=  nullptr && clock_interface->has_operation())
	|| (fia_buffer_profile_cfg !=  nullptr && fia_buffer_profile_cfg->has_operation())
	|| (fia_vqi_shaper_cfg !=  nullptr && fia_vqi_shaper_cfg->has_operation())
	|| (port_queue_remaps !=  nullptr && port_queue_remaps->has_operation())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold_->has_operation());
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
    path_buffer << "active-node";
    ADD_KEY_TOKEN(node_name, "node-name");
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
    if(child_yang_name == "Cisco-IOS-XR-wd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold == nullptr)
        {
            cisco_ios_xr_wd_cfg_watchdog_node_threshold = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_wd_cfg_watchdog_node_threshold;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-group")
    {
        if(ssrp_group == nullptr)
        {
            ssrp_group = std::make_shared<ActiveNodes::ActiveNode::SsrpGroup>();
        }
        return ssrp_group;
    }

    if(child_yang_name == "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local")
    {
        if(lpts_local == nullptr)
        {
            lpts_local = std::make_shared<ActiveNodes::ActiveNode::LptsLocal>();
        }
        return lpts_local;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-ltrace-cfg:ltrace")
    {
        if(ltrace == nullptr)
        {
            ltrace = std::make_shared<ActiveNodes::ActiveNode::Ltrace>();
        }
        return ltrace;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:clock-interface")
    {
        if(clock_interface == nullptr)
        {
            clock_interface = std::make_shared<ActiveNodes::ActiveNode::ClockInterface>();
        }
        return clock_interface;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-fia-cfg:fia-buffer-profile-cfg")
    {
        if(fia_buffer_profile_cfg == nullptr)
        {
            fia_buffer_profile_cfg = std::make_shared<ActiveNodes::ActiveNode::FiaBufferProfileCfg>();
        }
        return fia_buffer_profile_cfg;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-fia-cfg:fia-vqi-shaper-cfg")
    {
        if(fia_vqi_shaper_cfg == nullptr)
        {
            fia_vqi_shaper_cfg = std::make_shared<ActiveNodes::ActiveNode::FiaVqiShaperCfg>();
        }
        return fia_vqi_shaper_cfg;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-fia-cfg:port-queue-remaps")
    {
        if(port_queue_remaps == nullptr)
        {
            port_queue_remaps = std::make_shared<ActiveNodes::ActiveNode::PortQueueRemaps>();
        }
        return port_queue_remaps;
    }

    if(child_yang_name == "Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ == nullptr)
        {
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_watchd_cfg_watchdog_node_threshold_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cisco_ios_xr_wd_cfg_watchdog_node_threshold != nullptr)
    {
        children["Cisco-IOS-XR-wd-cfg:watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold;
    }

    if(ssrp_group != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-group"] = ssrp_group;
    }

    if(lpts_local != nullptr)
    {
        children["Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local"] = lpts_local;
    }

    if(ltrace != nullptr)
    {
        children["Cisco-IOS-XR-infra-ltrace-cfg:ltrace"] = ltrace;
    }

    if(clock_interface != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg:clock-interface"] = clock_interface;
    }

    if(fia_buffer_profile_cfg != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-fia-cfg:fia-buffer-profile-cfg"] = fia_buffer_profile_cfg;
    }

    if(fia_vqi_shaper_cfg != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-fia-cfg:fia-vqi-shaper-cfg"] = fia_vqi_shaper_cfg;
    }

    if(port_queue_remaps != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-fia-cfg:port-queue-remaps"] = port_queue_remaps;
    }

    if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ != nullptr)
    {
        children["Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold_;
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
    if(name == "watchdog-node-threshold" || name == "ssrp-group" || name == "lpts-local" || name == "ltrace" || name == "clock-interface" || name == "fia-buffer-profile-cfg" || name == "fia-vqi-shaper-cfg" || name == "port-queue-remaps" || name == "watchdog-node-threshold" || name == "node-name")
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    group(this, {"group_id"})
{

    yang_name = "groups"; yang_parent_name = "ssrp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::SsrpGroup::Groups::~Groups()
{
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::SsrpGroup::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::SsrpGroup::Groups::Group>();
        c->parent = this;
        group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::SsrpGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "group";
    ADD_KEY_TOKEN(group_id, "group-id");
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
    char count=0;
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

ActiveNodes::ActiveNode::LptsLocal::LptsLocal()
    :
    ipolicer_local_tables(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables>())
    , dynamic_flows_tables(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables>())
    , ipolicer_local(nullptr) // presence node
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    ipolicer_local_table(this, {"id1"})
{

    yang_name = "ipolicer-local-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::~IpolicerLocalTables()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipolicer_local_table.len(); index++)
    {
        if(ipolicer_local_table[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::has_operation() const
{
    for (std::size_t index=0; index<ipolicer_local_table.len(); index++)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable>();
        c->parent = this;
        ipolicer_local_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipolicer_local_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    np_flows(std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows>())
{
    np_flows->parent = this;

    yang_name = "ipolicer-local-table"; yang_parent_name = "ipolicer-local-tables"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::~IpolicerLocalTable()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_data() const
{
    if (is_presence_container) return true;
    return id1.is_set
	|| (np_flows !=  nullptr && np_flows->has_data());
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| (np_flows !=  nullptr && np_flows->has_operation());
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-table";
    ADD_KEY_TOKEN(id1, "id1");
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
    if(child_yang_name == "np-flows")
    {
        if(np_flows == nullptr)
        {
            np_flows = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows>();
        }
        return np_flows;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(np_flows != nullptr)
    {
        children["np-flows"] = np_flows;
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
    if(name == "np-flows" || name == "id1")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlows()
    :
    np_flow(this, {"flow_type"})
{

    yang_name = "np-flows"; yang_parent_name = "ipolicer-local-table"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::~NpFlows()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np_flow.len(); index++)
    {
        if(np_flow[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::has_operation() const
{
    for (std::size_t index=0; index<np_flow.len(); index++)
    {
        if(np_flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np-flow")
    {
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow>();
        c->parent = this;
        np_flow.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : np_flow.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-flow")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::NpFlow()
    :
    flow_type{YType::enumeration, "flow-type"},
    np_rate{YType::uint32, "np-rate"}
{

    yang_name = "np-flow"; yang_parent_name = "np-flows"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::~NpFlow()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::has_data() const
{
    if (is_presence_container) return true;
    return flow_type.is_set
	|| np_rate.is_set;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(np_rate.yfilter);
}

std::string ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-flow";
    ADD_KEY_TOKEN(flow_type, "flow-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (np_rate.is_set || is_set(np_rate.yfilter)) leaf_name_data.push_back(np_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "np-rate")
    {
        np_rate = value;
        np_rate.value_namespace = name_space;
        np_rate.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "np-rate")
    {
        np_rate.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-type" || name == "np-rate")
        return true;
    return false;
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTables()
    :
    dynamic_flows_table(this, {"table_type"})
{

    yang_name = "dynamic-flows-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::~DynamicFlowsTables()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_flows_table.len(); index++)
    {
        if(dynamic_flows_table[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::has_operation() const
{
    for (std::size_t index=0; index<dynamic_flows_table.len(); index++)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable>();
        c->parent = this;
        dynamic_flows_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dynamic_flows_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
        ,
    flow_type(this, {"flow_type"})
{

    yang_name = "dynamic-flows-table"; yang_parent_name = "dynamic-flows-tables"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::~DynamicFlowsTable()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_type.len(); index++)
    {
        if(flow_type[index]->has_data())
            return true;
    }
    return table_type.is_set;
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_operation() const
{
    for (std::size_t index=0; index<flow_type.len(); index++)
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
    path_buffer << "dynamic-flows-table";
    ADD_KEY_TOKEN(table_type, "table-type");
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType>();
        c->parent = this;
        flow_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    max{YType::uint32, "max"}
{

    yang_name = "flow-type"; yang_parent_name = "dynamic-flows-table"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::~FlowType()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "flow-type";
    ADD_KEY_TOKEN(flow_type, "flow-type");
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
    char count=0;
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

    yang_name = "ipolicer-local"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::~IpolicerLocal()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    flow(this, {"flow_type"})
{

    yang_name = "flows"; yang_parent_name = "ipolicer-local"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::~Flows()
{
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow.len(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.len(); index++)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow>();
        c->parent = this;
        flow.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    rate{YType::uint32, "rate"}
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
    if (is_presence_container) return true;
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
    path_buffer << "flow";
    ADD_KEY_TOKEN(flow_type, "flow-type");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    clock_(this, {"clock_type", "port"})
{

    yang_name = "clocks"; yang_parent_name = "clock-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::~Clocks()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_.len(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::has_operation() const
{
    for (std::size_t index=0; index<clock_.len(); index++)
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
        auto c = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock>();
        c->parent = this;
        clock_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clock_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::Clock()
    :
    clock_type{YType::enumeration, "clock-type"},
    port{YType::uint32, "port"}
        ,
    frequency_synchronization(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization>())
{
    frequency_synchronization->parent = this;

    yang_name = "clock"; yang_parent_name = "clocks"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::~Clock()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::has_data() const
{
    if (is_presence_container) return true;
    return clock_type.is_set
	|| port.is_set
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data());
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation());
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    ADD_KEY_TOKEN(clock_type, "clock-type");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frequency_synchronization != nullptr)
    {
        children["frequency-synchronization"] = frequency_synchronization;
    }

    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-synchronization" || name == "clock-type" || name == "port")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::FrequencySynchronization()
    :
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    ssm_disable{YType::empty, "ssm-disable"}
        ,
    output_quality_level(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel>())
    , input_quality_level(std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel>())
{
    output_quality_level->parent = this;
    input_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::~FrequencySynchronization()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::has_data() const
{
    if (is_presence_container) return true;
    return wait_to_restore_time.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| time_of_day_priority.is_set
	|| ssm_disable.is_set
	|| (output_quality_level !=  nullptr && output_quality_level->has_data())
	|| (input_quality_level !=  nullptr && input_quality_level->has_data());
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::has_operation() const
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

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-quality-level" || name == "input-quality-level" || name == "wait-to-restore-time" || name == "priority" || name == "selection-input" || name == "time-of-day-priority" || name == "ssm-disable")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActiveNodes::ActiveNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

ActiveNodes::ActiveNode::FiaBufferProfileCfg::FiaBufferProfileCfg()
    :
    xl{YType::boolean, "xl"}
{

    yang_name = "fia-buffer-profile-cfg"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::FiaBufferProfileCfg::~FiaBufferProfileCfg()
{
}

bool ActiveNodes::ActiveNode::FiaBufferProfileCfg::has_data() const
{
    if (is_presence_container) return true;
    return xl.is_set;
}

bool ActiveNodes::ActiveNode::FiaBufferProfileCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xl.yfilter);
}

std::string ActiveNodes::ActiveNode::FiaBufferProfileCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:fia-buffer-profile-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::FiaBufferProfileCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xl.is_set || is_set(xl.yfilter)) leaf_name_data.push_back(xl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::FiaBufferProfileCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::FiaBufferProfileCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::FiaBufferProfileCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xl")
    {
        xl = value;
        xl.value_namespace = name_space;
        xl.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::FiaBufferProfileCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xl")
    {
        xl.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::FiaBufferProfileCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xl")
        return true;
    return false;
}

ActiveNodes::ActiveNode::FiaVqiShaperCfg::FiaVqiShaperCfg()
    :
    enhance{YType::boolean, "enhance"}
{

    yang_name = "fia-vqi-shaper-cfg"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::FiaVqiShaperCfg::~FiaVqiShaperCfg()
{
}

bool ActiveNodes::ActiveNode::FiaVqiShaperCfg::has_data() const
{
    if (is_presence_container) return true;
    return enhance.is_set;
}

bool ActiveNodes::ActiveNode::FiaVqiShaperCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enhance.yfilter);
}

std::string ActiveNodes::ActiveNode::FiaVqiShaperCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:fia-vqi-shaper-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::FiaVqiShaperCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enhance.is_set || is_set(enhance.yfilter)) leaf_name_data.push_back(enhance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::FiaVqiShaperCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::FiaVqiShaperCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::FiaVqiShaperCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enhance")
    {
        enhance = value;
        enhance.value_namespace = name_space;
        enhance.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::FiaVqiShaperCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enhance")
    {
        enhance.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::FiaVqiShaperCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhance")
        return true;
    return false;
}

ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemaps()
    :
    port_queue_remap(this, {"port"})
{

    yang_name = "port-queue-remaps"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::PortQueueRemaps::~PortQueueRemaps()
{
}

bool ActiveNodes::ActiveNode::PortQueueRemaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_queue_remap.len(); index++)
    {
        if(port_queue_remap[index]->has_data())
            return true;
    }
    return false;
}

bool ActiveNodes::ActiveNode::PortQueueRemaps::has_operation() const
{
    for (std::size_t index=0; index<port_queue_remap.len(); index++)
    {
        if(port_queue_remap[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ActiveNodes::ActiveNode::PortQueueRemaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:port-queue-remaps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::PortQueueRemaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::PortQueueRemaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-queue-remap")
    {
        auto c = std::make_shared<ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap>();
        c->parent = this;
        port_queue_remap.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::PortQueueRemaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_queue_remap.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ActiveNodes::ActiveNode::PortQueueRemaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActiveNodes::ActiveNode::PortQueueRemaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActiveNodes::ActiveNode::PortQueueRemaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-queue-remap")
        return true;
    return false;
}

ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::PortQueueRemap()
    :
    port{YType::uint32, "port"},
    fabric_queue{YType::uint32, "fabric-queue"}
{

    yang_name = "port-queue-remap"; yang_parent_name = "port-queue-remaps"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::~PortQueueRemap()
{
}

bool ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| fabric_queue.is_set;
}

bool ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(fabric_queue.yfilter);
}

std::string ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-queue-remap";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (fabric_queue.is_set || is_set(fabric_queue.yfilter)) leaf_name_data.push_back(fabric_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-queue")
    {
        fabric_queue = value;
        fabric_queue.value_namespace = name_space;
        fabric_queue.value_namespace_prefix = name_space_prefix;
    }
}

void ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "fabric-queue")
    {
        fabric_queue.yfilter = yfilter;
    }
}

bool ActiveNodes::ActiveNode::PortQueueRemaps::PortQueueRemap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "fabric-queue")
        return true;
    return false;
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
    :
    disk_threshold(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold>())
    , memory_threshold(std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold>())
{
    disk_threshold->parent = this;
    memory_threshold->parent = this;

    yang_name = "watchdog-node-threshold"; yang_parent_name = "active-node"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::~CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_data() const
{
    if (is_presence_container) return true;
    return (disk_threshold !=  nullptr && disk_threshold->has_data())
	|| (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (disk_threshold !=  nullptr && disk_threshold->has_operation())
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
    if(child_yang_name == "disk-threshold")
    {
        if(disk_threshold == nullptr)
        {
            disk_threshold = std::make_shared<ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold>();
        }
        return disk_threshold;
    }

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
    char count=0;
    if(disk_threshold != nullptr)
    {
        children["disk-threshold"] = disk_threshold;
    }

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
    if(name == "disk-threshold" || name == "memory-threshold")
        return true;
    return false;
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::DiskThreshold()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "disk-threshold"; yang_parent_name = "watchdog-node-threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::~DiskThreshold()
{
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::has_data() const
{
    if (is_presence_container) return true;
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disk-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActiveNodes::ActiveNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
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
    if (is_presence_container) return true;
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
    char count=0;
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

PreconfiguredNodes::PreconfiguredNodes()
    :
    preconfigured_node(this, {"node_name"})
{

    yang_name = "preconfigured-nodes"; yang_parent_name = "Cisco-IOS-XR-config-mda-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

PreconfiguredNodes::~PreconfiguredNodes()
{
}

bool PreconfiguredNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<preconfigured_node.len(); index++)
    {
        if(preconfigured_node[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::has_operation() const
{
    for (std::size_t index=0; index<preconfigured_node.len(); index++)
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode>();
        c->parent = this;
        preconfigured_node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : preconfigured_node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    cisco_ios_xr_wd_cfg_watchdog_node_threshold(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>())
    , lpts_local(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal>())
    , ltrace(std::make_shared<PreconfiguredNodes::PreconfiguredNode::Ltrace>())
    , clock_interface(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface>())
    , fia_buffer_profile_cfg(std::make_shared<PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg>())
    , fia_vqi_shaper_cfg(std::make_shared<PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg>())
    , port_queue_remaps(std::make_shared<PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps>())
    , cisco_ios_xr_watchd_cfg_watchdog_node_threshold_(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>())
{
    cisco_ios_xr_wd_cfg_watchdog_node_threshold->parent = this;
    lpts_local->parent = this;
    ltrace->parent = this;
    clock_interface->parent = this;
    fia_buffer_profile_cfg->parent = this;
    fia_vqi_shaper_cfg->parent = this;
    port_queue_remaps->parent = this;
    cisco_ios_xr_watchd_cfg_watchdog_node_threshold_->parent = this;

    yang_name = "preconfigured-node"; yang_parent_name = "preconfigured-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PreconfiguredNodes::PreconfiguredNode::~PreconfiguredNode()
{
}

bool PreconfiguredNodes::PreconfiguredNode::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_data())
	|| (lpts_local !=  nullptr && lpts_local->has_data())
	|| (ltrace !=  nullptr && ltrace->has_data())
	|| (clock_interface !=  nullptr && clock_interface->has_data())
	|| (fia_buffer_profile_cfg !=  nullptr && fia_buffer_profile_cfg->has_data())
	|| (fia_vqi_shaper_cfg !=  nullptr && fia_vqi_shaper_cfg->has_data())
	|| (port_queue_remaps !=  nullptr && port_queue_remaps->has_data())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold_->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (cisco_ios_xr_wd_cfg_watchdog_node_threshold !=  nullptr && cisco_ios_xr_wd_cfg_watchdog_node_threshold->has_operation())
	|| (lpts_local !=  nullptr && lpts_local->has_operation())
	|| (ltrace !=  nullptr && ltrace->has_operation())
	|| (clock_interface !=  nullptr && clock_interface->has_operation())
	|| (fia_buffer_profile_cfg !=  nullptr && fia_buffer_profile_cfg->has_operation())
	|| (fia_vqi_shaper_cfg !=  nullptr && fia_vqi_shaper_cfg->has_operation())
	|| (port_queue_remaps !=  nullptr && port_queue_remaps->has_operation())
	|| (cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ !=  nullptr && cisco_ios_xr_watchd_cfg_watchdog_node_threshold_->has_operation());
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
    path_buffer << "preconfigured-node";
    ADD_KEY_TOKEN(node_name, "node-name");
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
    if(child_yang_name == "Cisco-IOS-XR-wd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_wd_cfg_watchdog_node_threshold == nullptr)
        {
            cisco_ios_xr_wd_cfg_watchdog_node_threshold = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_wd_cfg_watchdog_node_threshold;
    }

    if(child_yang_name == "Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local")
    {
        if(lpts_local == nullptr)
        {
            lpts_local = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal>();
        }
        return lpts_local;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-ltrace-cfg:ltrace")
    {
        if(ltrace == nullptr)
        {
            ltrace = std::make_shared<PreconfiguredNodes::PreconfiguredNode::Ltrace>();
        }
        return ltrace;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:clock-interface")
    {
        if(clock_interface == nullptr)
        {
            clock_interface = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface>();
        }
        return clock_interface;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-fia-cfg:fia-buffer-profile-cfg")
    {
        if(fia_buffer_profile_cfg == nullptr)
        {
            fia_buffer_profile_cfg = std::make_shared<PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg>();
        }
        return fia_buffer_profile_cfg;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-fia-cfg:fia-vqi-shaper-cfg")
    {
        if(fia_vqi_shaper_cfg == nullptr)
        {
            fia_vqi_shaper_cfg = std::make_shared<PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg>();
        }
        return fia_vqi_shaper_cfg;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-fia-cfg:port-queue-remaps")
    {
        if(port_queue_remaps == nullptr)
        {
            port_queue_remaps = std::make_shared<PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps>();
        }
        return port_queue_remaps;
    }

    if(child_yang_name == "Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold")
    {
        if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ == nullptr)
        {
            cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold>();
        }
        return cisco_ios_xr_watchd_cfg_watchdog_node_threshold_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cisco_ios_xr_wd_cfg_watchdog_node_threshold != nullptr)
    {
        children["Cisco-IOS-XR-wd-cfg:watchdog-node-threshold"] = cisco_ios_xr_wd_cfg_watchdog_node_threshold;
    }

    if(lpts_local != nullptr)
    {
        children["Cisco-IOS-XR-lpts-pre-ifib-cfg:lpts-local"] = lpts_local;
    }

    if(ltrace != nullptr)
    {
        children["Cisco-IOS-XR-infra-ltrace-cfg:ltrace"] = ltrace;
    }

    if(clock_interface != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg:clock-interface"] = clock_interface;
    }

    if(fia_buffer_profile_cfg != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-fia-cfg:fia-buffer-profile-cfg"] = fia_buffer_profile_cfg;
    }

    if(fia_vqi_shaper_cfg != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-fia-cfg:fia-vqi-shaper-cfg"] = fia_vqi_shaper_cfg;
    }

    if(port_queue_remaps != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-fia-cfg:port-queue-remaps"] = port_queue_remaps;
    }

    if(cisco_ios_xr_watchd_cfg_watchdog_node_threshold_ != nullptr)
    {
        children["Cisco-IOS-XR-watchd-cfg:watchdog-node-threshold"] = cisco_ios_xr_watchd_cfg_watchdog_node_threshold_;
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
    if(name == "watchdog-node-threshold" || name == "lpts-local" || name == "ltrace" || name == "clock-interface" || name == "fia-buffer-profile-cfg" || name == "fia-vqi-shaper-cfg" || name == "port-queue-remaps" || name == "watchdog-node-threshold" || name == "node-name")
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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

PreconfiguredNodes::PreconfiguredNode::LptsLocal::LptsLocal()
    :
    ipolicer_local_tables(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables>())
    , dynamic_flows_tables(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables>())
    , ipolicer_local(nullptr) // presence node
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    ipolicer_local_table(this, {"id1"})
{

    yang_name = "ipolicer-local-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::~IpolicerLocalTables()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipolicer_local_table.len(); index++)
    {
        if(ipolicer_local_table[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::has_operation() const
{
    for (std::size_t index=0; index<ipolicer_local_table.len(); index++)
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable>();
        c->parent = this;
        ipolicer_local_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipolicer_local_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    np_flows(std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows>())
{
    np_flows->parent = this;

    yang_name = "ipolicer-local-table"; yang_parent_name = "ipolicer-local-tables"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::~IpolicerLocalTable()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_data() const
{
    if (is_presence_container) return true;
    return id1.is_set
	|| (np_flows !=  nullptr && np_flows->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| (np_flows !=  nullptr && np_flows->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipolicer-local-table";
    ADD_KEY_TOKEN(id1, "id1");
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
    if(child_yang_name == "np-flows")
    {
        if(np_flows == nullptr)
        {
            np_flows = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows>();
        }
        return np_flows;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(np_flows != nullptr)
    {
        children["np-flows"] = np_flows;
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
    if(name == "np-flows" || name == "id1")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlows()
    :
    np_flow(this, {"flow_type"})
{

    yang_name = "np-flows"; yang_parent_name = "ipolicer-local-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::~NpFlows()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np_flow.len(); index++)
    {
        if(np_flow[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::has_operation() const
{
    for (std::size_t index=0; index<np_flow.len(); index++)
    {
        if(np_flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np-flow")
    {
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow>();
        c->parent = this;
        np_flow.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : np_flow.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-flow")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::NpFlow()
    :
    flow_type{YType::enumeration, "flow-type"},
    np_rate{YType::uint32, "np-rate"}
{

    yang_name = "np-flow"; yang_parent_name = "np-flows"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::~NpFlow()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::has_data() const
{
    if (is_presence_container) return true;
    return flow_type.is_set
	|| np_rate.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(np_rate.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-flow";
    ADD_KEY_TOKEN(flow_type, "flow-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (np_rate.is_set || is_set(np_rate.yfilter)) leaf_name_data.push_back(np_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "np-rate")
    {
        np_rate = value;
        np_rate.value_namespace = name_space;
        np_rate.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "np-rate")
    {
        np_rate.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::NpFlows::NpFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-type" || name == "np-rate")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTables()
    :
    dynamic_flows_table(this, {"table_type"})
{

    yang_name = "dynamic-flows-tables"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::~DynamicFlowsTables()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_flows_table.len(); index++)
    {
        if(dynamic_flows_table[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::has_operation() const
{
    for (std::size_t index=0; index<dynamic_flows_table.len(); index++)
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable>();
        c->parent = this;
        dynamic_flows_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dynamic_flows_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
        ,
    flow_type(this, {"flow_type"})
{

    yang_name = "dynamic-flows-table"; yang_parent_name = "dynamic-flows-tables"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::~DynamicFlowsTable()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_type.len(); index++)
    {
        if(flow_type[index]->has_data())
            return true;
    }
    return table_type.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::has_operation() const
{
    for (std::size_t index=0; index<flow_type.len(); index++)
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
    path_buffer << "dynamic-flows-table";
    ADD_KEY_TOKEN(table_type, "table-type");
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType>();
        c->parent = this;
        flow_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    max{YType::uint32, "max"}
{

    yang_name = "flow-type"; yang_parent_name = "dynamic-flows-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::~FlowType()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::DynamicFlowsTables::DynamicFlowsTable::FlowType::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "flow-type";
    ADD_KEY_TOKEN(flow_type, "flow-type");
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
    char count=0;
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

    yang_name = "ipolicer-local"; yang_parent_name = "lpts-local"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::~IpolicerLocal()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::has_data() const
{
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    flow(this, {"flow_type"})
{

    yang_name = "flows"; yang_parent_name = "ipolicer-local"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::~Flows()
{
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow.len(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.len(); index++)
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow>();
        c->parent = this;
        flow.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    rate{YType::uint32, "rate"}
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
    if (is_presence_container) return true;
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
    path_buffer << "flow";
    ADD_KEY_TOKEN(flow_type, "flow-type");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    clock_(this, {"clock_type", "port"})
{

    yang_name = "clocks"; yang_parent_name = "clock-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::~Clocks()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_.len(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::has_operation() const
{
    for (std::size_t index=0; index<clock_.len(); index++)
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
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock>();
        c->parent = this;
        clock_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clock_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::Clock()
    :
    clock_type{YType::enumeration, "clock-type"},
    port{YType::uint32, "port"}
        ,
    frequency_synchronization(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization>())
{
    frequency_synchronization->parent = this;

    yang_name = "clock"; yang_parent_name = "clocks"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::~Clock()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::has_data() const
{
    if (is_presence_container) return true;
    return clock_type.is_set
	|| port.is_set
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation());
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    ADD_KEY_TOKEN(clock_type, "clock-type");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frequency_synchronization != nullptr)
    {
        children["frequency-synchronization"] = frequency_synchronization;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-synchronization" || name == "clock-type" || name == "port")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::FrequencySynchronization()
    :
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    ssm_disable{YType::empty, "ssm-disable"}
        ,
    output_quality_level(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel>())
    , input_quality_level(std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel>())
{
    output_quality_level->parent = this;
    input_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::~FrequencySynchronization()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::has_data() const
{
    if (is_presence_container) return true;
    return wait_to_restore_time.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| time_of_day_priority.is_set
	|| ssm_disable.is_set
	|| (output_quality_level !=  nullptr && output_quality_level->has_data())
	|| (input_quality_level !=  nullptr && input_quality_level->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::has_operation() const
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

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-quality-level" || name == "input-quality-level" || name == "wait-to-restore-time" || name == "priority" || name == "selection-input" || name == "time-of-day-priority" || name == "ssm-disable")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PreconfiguredNodes::PreconfiguredNode::ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::FiaBufferProfileCfg()
    :
    xl{YType::boolean, "xl"}
{

    yang_name = "fia-buffer-profile-cfg"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::~FiaBufferProfileCfg()
{
}

bool PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::has_data() const
{
    if (is_presence_container) return true;
    return xl.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xl.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:fia-buffer-profile-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xl.is_set || is_set(xl.yfilter)) leaf_name_data.push_back(xl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xl")
    {
        xl = value;
        xl.value_namespace = name_space;
        xl.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xl")
    {
        xl.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::FiaBufferProfileCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xl")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::FiaVqiShaperCfg()
    :
    enhance{YType::boolean, "enhance"}
{

    yang_name = "fia-vqi-shaper-cfg"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::~FiaVqiShaperCfg()
{
}

bool PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::has_data() const
{
    if (is_presence_container) return true;
    return enhance.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enhance.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:fia-vqi-shaper-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enhance.is_set || is_set(enhance.yfilter)) leaf_name_data.push_back(enhance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enhance")
    {
        enhance = value;
        enhance.value_namespace = name_space;
        enhance.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enhance")
    {
        enhance.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::FiaVqiShaperCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhance")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemaps()
    :
    port_queue_remap(this, {"port"})
{

    yang_name = "port-queue-remaps"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::~PortQueueRemaps()
{
}

bool PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_queue_remap.len(); index++)
    {
        if(port_queue_remap[index]->has_data())
            return true;
    }
    return false;
}

bool PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::has_operation() const
{
    for (std::size_t index=0; index<port_queue_remap.len(); index++)
    {
        if(port_queue_remap[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:port-queue-remaps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-queue-remap")
    {
        auto c = std::make_shared<PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap>();
        c->parent = this;
        port_queue_remap.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_queue_remap.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-queue-remap")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::PortQueueRemap()
    :
    port{YType::uint32, "port"},
    fabric_queue{YType::uint32, "fabric-queue"}
{

    yang_name = "port-queue-remap"; yang_parent_name = "port-queue-remaps"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::~PortQueueRemap()
{
}

bool PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| fabric_queue.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(fabric_queue.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-queue-remap";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (fabric_queue.is_set || is_set(fabric_queue.yfilter)) leaf_name_data.push_back(fabric_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-queue")
    {
        fabric_queue = value;
        fabric_queue.value_namespace = name_space;
        fabric_queue.value_namespace_prefix = name_space_prefix;
    }
}

void PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "fabric-queue")
    {
        fabric_queue.yfilter = yfilter;
    }
}

bool PreconfiguredNodes::PreconfiguredNode::PortQueueRemaps::PortQueueRemap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "fabric-queue")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
    :
    disk_threshold(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold>())
    , memory_threshold(std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::MemoryThreshold>())
{
    disk_threshold->parent = this;
    memory_threshold->parent = this;

    yang_name = "watchdog-node-threshold"; yang_parent_name = "preconfigured-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::~CiscoIOSXRWatchdCfgWatchdogNodeThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_data() const
{
    if (is_presence_container) return true;
    return (disk_threshold !=  nullptr && disk_threshold->has_data())
	|| (memory_threshold !=  nullptr && memory_threshold->has_data());
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (disk_threshold !=  nullptr && disk_threshold->has_operation())
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
    if(child_yang_name == "disk-threshold")
    {
        if(disk_threshold == nullptr)
        {
            disk_threshold = std::make_shared<PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold>();
        }
        return disk_threshold;
    }

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
    char count=0;
    if(disk_threshold != nullptr)
    {
        children["disk-threshold"] = disk_threshold;
    }

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
    if(name == "disk-threshold" || name == "memory-threshold")
        return true;
    return false;
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::DiskThreshold()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "disk-threshold"; yang_parent_name = "watchdog-node-threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::~DiskThreshold()
{
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::has_data() const
{
    if (is_presence_container) return true;
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disk-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PreconfiguredNodes::PreconfiguredNode::CiscoIOSXRWatchdCfgWatchdogNodeThreshold::DiskThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
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
    if (is_presence_container) return true;
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
    char count=0;
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


}
}

