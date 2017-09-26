
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_0.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

PerfMgmt::PerfMgmt()
    :
    enable(std::make_shared<PerfMgmt::Enable>())
	,reg_exp_groups(std::make_shared<PerfMgmt::RegExpGroups>())
	,resources(std::make_shared<PerfMgmt::Resources>())
	,statistics(std::make_shared<PerfMgmt::Statistics>())
	,threshold(std::make_shared<PerfMgmt::Threshold>())
{
    enable->parent = this;
    reg_exp_groups->parent = this;
    resources->parent = this;
    statistics->parent = this;
    threshold->parent = this;

    yang_name = "perf-mgmt"; yang_parent_name = "Cisco-IOS-XR-manageability-perfmgmt-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

PerfMgmt::~PerfMgmt()
{
}

bool PerfMgmt::has_data() const
{
    return (enable !=  nullptr && enable->has_data())
	|| (reg_exp_groups !=  nullptr && reg_exp_groups->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool PerfMgmt::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (reg_exp_groups !=  nullptr && reg_exp_groups->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string PerfMgmt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<PerfMgmt::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "reg-exp-groups")
    {
        if(reg_exp_groups == nullptr)
        {
            reg_exp_groups = std::make_shared<PerfMgmt::RegExpGroups>();
        }
        return reg_exp_groups;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<PerfMgmt::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<PerfMgmt::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<PerfMgmt::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(reg_exp_groups != nullptr)
    {
        children["reg-exp-groups"] = reg_exp_groups;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void PerfMgmt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PerfMgmt::clone_ptr() const
{
    return std::make_shared<PerfMgmt>();
}

std::string PerfMgmt::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerfMgmt::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerfMgmt::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerfMgmt::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerfMgmt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "reg-exp-groups" || name == "resources" || name == "statistics" || name == "threshold")
        return true;
    return false;
}

PerfMgmt::Enable::Enable()
    :
    monitor_enable(std::make_shared<PerfMgmt::Enable::MonitorEnable>())
	,statistics(std::make_shared<PerfMgmt::Enable::Statistics>())
	,threshold(std::make_shared<PerfMgmt::Enable::Threshold>())
{
    monitor_enable->parent = this;
    statistics->parent = this;
    threshold->parent = this;

    yang_name = "enable"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::~Enable()
{
}

bool PerfMgmt::Enable::has_data() const
{
    return (monitor_enable !=  nullptr && monitor_enable->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool PerfMgmt::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (monitor_enable !=  nullptr && monitor_enable->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string PerfMgmt::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-enable")
    {
        if(monitor_enable == nullptr)
        {
            monitor_enable = std::make_shared<PerfMgmt::Enable::MonitorEnable>();
        }
        return monitor_enable;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<PerfMgmt::Enable::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<PerfMgmt::Enable::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor_enable != nullptr)
    {
        children["monitor-enable"] = monitor_enable;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void PerfMgmt::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-enable" || name == "statistics" || name == "threshold")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::MonitorEnable()
    :
    basic_counters(std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters>())
	,bgp(std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp>())
	,cpu(std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu>())
	,data_rates(std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates>())
	,generic_counters(std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters>())
	,ldp_mpls(std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls>())
	,memory(std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol>())
	,process(std::make_shared<PerfMgmt::Enable::MonitorEnable::Process>())
{
    basic_counters->parent = this;
    bgp->parent = this;
    cpu->parent = this;
    data_rates->parent = this;
    generic_counters->parent = this;
    ldp_mpls->parent = this;
    memory->parent = this;
    ospfv2_protocol->parent = this;
    ospfv3_protocol->parent = this;
    process->parent = this;

    yang_name = "monitor-enable"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::~MonitorEnable()
{
}

bool PerfMgmt::Enable::MonitorEnable::has_data() const
{
    return (basic_counters !=  nullptr && basic_counters->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu !=  nullptr && cpu->has_data())
	|| (data_rates !=  nullptr && data_rates->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process !=  nullptr && process->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counters !=  nullptr && basic_counters->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (data_rates !=  nullptr && data_rates->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process !=  nullptr && process->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counters")
    {
        if(basic_counters == nullptr)
        {
            basic_counters = std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters>();
        }
        return basic_counters;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "data-rates")
    {
        if(data_rates == nullptr)
        {
            data_rates = std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates>();
        }
        return data_rates;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process>();
        }
        return process;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counters != nullptr)
    {
        children["basic-counters"] = basic_counters;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    if(data_rates != nullptr)
    {
        children["data-rates"] = data_rates;
    }

    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counters" || name == "bgp" || name == "cpu" || name == "data-rates" || name == "generic-counters" || name == "ldp-mpls" || name == "memory" || name == "ospfv2-protocol" || name == "ospfv3-protocol" || name == "process")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::BasicCounters()
    :
    interfaces(std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "basic-counters"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::~BasicCounters()
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::BasicCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::BasicCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::BasicCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "basic-counters"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::~Interfaces()
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/basic-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    template_name{YType::str, "template-name"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::~Interface()
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/basic-counters/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Bgp::Bgp()
    :
    neighbors(std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "bgp"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Bgp::~Bgp()
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::~Neighbors()
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::Neighbor()
    :
    peer_address{YType::str, "peer-address"},
    template_name{YType::str, "template-name"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::~Neighbor()
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::has_data() const
{
    return peer_address.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/bgp/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Cpu::Cpu()
    :
    nodes(std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu::Nodes>())
{
    nodes->parent = this;

    yang_name = "cpu"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Cpu::~Cpu()
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/cpu/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::DataRates::DataRates()
    :
    interfaces(std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "data-rates"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::DataRates::~DataRates()
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::DataRates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::DataRates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::DataRates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::DataRates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::DataRates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "data-rates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::~Interfaces()
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/data-rates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    template_name{YType::str, "template-name"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::~Interface()
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/data-rates/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::GenericCounters()
    :
    interfaces(std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "generic-counters"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::~GenericCounters()
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "generic-counters"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::~Interfaces()
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/generic-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    template_name{YType::str, "template-name"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::~Interface()
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/generic-counters/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::LdpMpls()
    :
    sessions(std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions>())
{
    sessions->parent = this;

    yang_name = "ldp-mpls"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::LdpMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Sessions()
{

    yang_name = "sessions"; yang_parent_name = "ldp-mpls"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::~Sessions()
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ldp-mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::Session()
    :
    session{YType::str, "session"},
    template_name{YType::str, "template-name"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::~Session()
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::has_data() const
{
    return session.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ldp-mpls/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session='" <<session <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Memory::Memory()
    :
    nodes(std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory::Nodes>())
{
    nodes->parent = this;

    yang_name = "memory"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Memory::~Memory()
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Memory::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Memory::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/memory/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::Ospfv2Protocol()
    :
    ospf_instances(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances>())
{
    ospf_instances->parent = this;

    yang_name = "ospfv2-protocol"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::has_data() const
{
    return (ospf_instances !=  nullptr && ospf_instances->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (ospf_instances !=  nullptr && ospf_instances->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instances")
    {
        if(ospf_instances == nullptr)
        {
            ospf_instances = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances>();
        }
        return ospf_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf_instances != nullptr)
    {
        children["ospf-instances"] = ospf_instances;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-instances")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstances()
{

    yang_name = "ospf-instances"; yang_parent_name = "ospfv2-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::~OspfInstances()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::has_data() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::has_operation() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv2-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instance")
    {
        for(auto const & c : ospf_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance>();
        c->parent = this;
        ospf_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-instance")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::OspfInstance()
    :
    instance_name{YType::str, "instance-name"},
    template_name{YType::str, "template-name"}
{

    yang_name = "ospf-instance"; yang_parent_name = "ospf-instances"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::~OspfInstance()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::has_data() const
{
    return instance_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv2-protocol/ospf-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instance" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::Ospfv3Protocol()
    :
    ospf_instances(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances>())
{
    ospf_instances->parent = this;

    yang_name = "ospfv3-protocol"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::has_data() const
{
    return (ospf_instances !=  nullptr && ospf_instances->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (ospf_instances !=  nullptr && ospf_instances->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instances")
    {
        if(ospf_instances == nullptr)
        {
            ospf_instances = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances>();
        }
        return ospf_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf_instances != nullptr)
    {
        children["ospf-instances"] = ospf_instances;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-instances")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstances()
{

    yang_name = "ospf-instances"; yang_parent_name = "ospfv3-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::~OspfInstances()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::has_data() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::has_operation() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv3-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instance")
    {
        for(auto const & c : ospf_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance>();
        c->parent = this;
        ospf_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-instance")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::OspfInstance()
    :
    instance_name{YType::str, "instance-name"},
    template_name{YType::str, "template-name"}
{

    yang_name = "ospf-instance"; yang_parent_name = "ospf-instances"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::~OspfInstance()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::has_data() const
{
    return instance_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv3-protocol/ospf-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instance" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Process::Process()
    :
    process_nodes(std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes>())
{
    process_nodes->parent = this;

    yang_name = "process"; yang_parent_name = "monitor-enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Process::~Process()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::has_data() const
{
    return (process_nodes !=  nullptr && process_nodes->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Process::has_operation() const
{
    return is_set(yfilter)
	|| (process_nodes !=  nullptr && process_nodes->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-nodes")
    {
        if(process_nodes == nullptr)
        {
            process_nodes = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes>();
        }
        return process_nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(process_nodes != nullptr)
    {
        children["process-nodes"] = process_nodes;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-nodes")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNodes()
{

    yang_name = "process-nodes"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::~ProcessNodes()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::has_data() const
{
    for (std::size_t index=0; index<process_node.size(); index++)
    {
        if(process_node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::has_operation() const
{
    for (std::size_t index=0; index<process_node.size(); index++)
    {
        if(process_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/process/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-node")
    {
        for(auto const & c : process_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode>();
        c->parent = this;
        process_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-node")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::ProcessNode()
    :
    node_id{YType::str, "node-id"}
    	,
    pids(std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids>())
{
    pids->parent = this;

    yang_name = "process-node"; yang_parent_name = "process-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::has_data() const
{
    return node_id.is_set
	|| (pids !=  nullptr && pids->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (pids !=  nullptr && pids->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/process/process-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pids")
    {
        if(pids == nullptr)
        {
            pids = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids>();
        }
        return pids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pids != nullptr)
    {
        children["pids"] = pids;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pids" || name == "node-id")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pids()
{

    yang_name = "pids"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::~Pids()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::has_data() const
{
    for (std::size_t index=0; index<pid.size(); index++)
    {
        if(pid[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::has_operation() const
{
    for (std::size_t index=0; index<pid.size(); index++)
    {
        if(pid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pid")
    {
        for(auto const & c : pid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid>();
        c->parent = this;
        pid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid")
        return true;
    return false;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::Pid()
    :
    pid{YType::uint32, "pid"},
    template_name{YType::str, "template-name"}
{

    yang_name = "pid"; yang_parent_name = "pids"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::~Pid()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::has_data() const
{
    return pid.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pid" <<"[pid='" <<pid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::Statistics()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Enable::Statistics::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Enable::Statistics::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Enable::Statistics::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Enable::Statistics::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Enable::Statistics::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Enable::Statistics::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Enable::Statistics::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Enable::Statistics::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode>())
{
    basic_counter_interface->parent = this;
    bgp->parent = this;
    cpu_node->parent = this;
    data_rate_interface->parent = this;
    generic_counter_interface->parent = this;
    ldp_mpls->parent = this;
    memory_node->parent = this;
    ospfv2_protocol->parent = this;
    ospfv3_protocol->parent = this;
    process_node->parent = this;

    yang_name = "statistics"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::~Statistics()
{
}

bool PerfMgmt::Enable::Statistics::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Enable::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Enable::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Enable::Statistics::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Enable::Statistics::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Enable::Statistics::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Enable::Statistics::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Enable::Statistics::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Enable::Statistics::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Enable::Statistics::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface" || name == "bgp" || name == "cpu-node" || name == "data-rate-interface" || name == "generic-counter-interface" || name == "ldp-mpls" || name == "memory-node" || name == "ospfv2-protocol" || name == "ospfv3-protocol" || name == "process-node")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::BasicCounterInterface::BasicCounterInterface()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "basic-counter-interface"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Enable::Statistics::BasicCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::Bgp::Bgp()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "bgp"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::Bgp::~Bgp()
{
}

bool PerfMgmt::Enable::Statistics::Bgp::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::CpuNode::CpuNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Statistics::CpuNode::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Statistics::CpuNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::CpuNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::CpuNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::CpuNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "node-all"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::CpuNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::CpuNode::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::CpuNode::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::CpuNode::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::CpuNode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/cpu-node/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::DataRateInterface::DataRateInterface()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "data-rate-interface"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Enable::Statistics::DataRateInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::GenericCounterInterface::GenericCounterInterface()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "generic-counter-interface"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Enable::Statistics::GenericCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::GenericCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::GenericCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::GenericCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::GenericCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::GenericCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::GenericCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::LdpMpls::LdpMpls()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "ldp-mpls"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Enable::Statistics::LdpMpls::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::LdpMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::LdpMpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::LdpMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::LdpMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::LdpMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::LdpMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::MemoryNode::MemoryNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "memory-node"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Statistics::MemoryNode::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::MemoryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::MemoryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "node-all"; yang_parent_name = "memory-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/memory-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "memory-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/memory-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::MemoryNode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/memory-node/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::Ospfv2Protocol::Ospfv2Protocol()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "ospfv2-protocol"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Enable::Statistics::Ospfv2Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::Ospfv2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::Ospfv2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::Ospfv2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::Ospfv2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::Ospfv3Protocol::Ospfv3Protocol()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "ospfv3-protocol"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Enable::Statistics::Ospfv3Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::Ospfv3Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::Ospfv3Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::Ospfv3Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::Ospfv3Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::ProcessNode::ProcessNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "process-node"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Statistics::ProcessNode::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::ProcessNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::ProcessNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "node-all"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/process-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/process-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Statistics::ProcessNode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/process-node/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::Threshold()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Enable::Threshold::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Enable::Threshold::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Enable::Threshold::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Enable::Threshold::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Enable::Threshold::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Enable::Threshold::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Enable::Threshold::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Enable::Threshold::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode>())
{
    basic_counter_interface->parent = this;
    bgp->parent = this;
    cpu_node->parent = this;
    data_rate_interface->parent = this;
    generic_counter_interface->parent = this;
    ldp_mpls->parent = this;
    memory_node->parent = this;
    ospfv2_protocol->parent = this;
    ospfv3_protocol->parent = this;
    process_node->parent = this;

    yang_name = "threshold"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::~Threshold()
{
}

bool PerfMgmt::Enable::Threshold::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Enable::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Enable::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Enable::Threshold::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Enable::Threshold::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Enable::Threshold::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Enable::Threshold::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Enable::Threshold::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Enable::Threshold::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Enable::Threshold::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface" || name == "bgp" || name == "cpu-node" || name == "data-rate-interface" || name == "generic-counter-interface" || name == "ldp-mpls" || name == "memory-node" || name == "ospfv2-protocol" || name == "ospfv3-protocol" || name == "process-node")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::BasicCounterInterface::BasicCounterInterface()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "basic-counter-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Enable::Threshold::BasicCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::Bgp::Bgp()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "bgp"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::Bgp::~Bgp()
{
}

bool PerfMgmt::Enable::Threshold::Bgp::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::CpuNode::CpuNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Threshold::CpuNode::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Threshold::CpuNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::CpuNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::CpuNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::CpuNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "node-all"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::CpuNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::CpuNode::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::CpuNode::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::CpuNode::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::CpuNode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/cpu-node/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::DataRateInterface::DataRateInterface()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "data-rate-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Enable::Threshold::DataRateInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::GenericCounterInterface::GenericCounterInterface()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "generic-counter-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Enable::Threshold::GenericCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::GenericCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::GenericCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::GenericCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::GenericCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::GenericCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::GenericCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::LdpMpls::LdpMpls()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "ldp-mpls"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Enable::Threshold::LdpMpls::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::LdpMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::LdpMpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::LdpMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::LdpMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::LdpMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::LdpMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::MemoryNode::MemoryNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "memory-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Threshold::MemoryNode::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::MemoryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::MemoryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "node-all"; yang_parent_name = "memory-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/memory-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "memory-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/memory-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::MemoryNode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/memory-node/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::Ospfv2Protocol::Ospfv2Protocol()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "ospfv2-protocol"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Enable::Threshold::Ospfv2Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::Ospfv2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::Ospfv2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::Ospfv2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::Ospfv2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::Ospfv3Protocol::Ospfv3Protocol()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "ospfv3-protocol"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Enable::Threshold::Ospfv3Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::Ospfv3Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::Ospfv3Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::Ospfv3Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::Ospfv3Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::ProcessNode::ProcessNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::Nodes>())
{
    node_all->parent = this;
    nodes->parent = this;

    yang_name = "process-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Threshold::ProcessNode::has_operation() const
{
    return is_set(yfilter)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::ProcessNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::ProcessNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-all" || name == "nodes")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{

    yang_name = "node-all"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/process-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/process-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Enable::Threshold::ProcessNode::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/process-node/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "template-name")
        return true;
    return false;
}

PerfMgmt::RegExpGroups::RegExpGroups()
{

    yang_name = "reg-exp-groups"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::RegExpGroups::~RegExpGroups()
{
}

bool PerfMgmt::RegExpGroups::has_data() const
{
    for (std::size_t index=0; index<reg_exp_group.size(); index++)
    {
        if(reg_exp_group[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::RegExpGroups::has_operation() const
{
    for (std::size_t index=0; index<reg_exp_group.size(); index++)
    {
        if(reg_exp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::RegExpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::RegExpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::RegExpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-exp-group")
    {
        for(auto const & c : reg_exp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup>();
        c->parent = this;
        reg_exp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reg_exp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::RegExpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::RegExpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::RegExpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg-exp-group")
        return true;
    return false;
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExpGroup()
    :
    reg_exp_group_name{YType::str, "reg-exp-group-name"}
    	,
    reg_exps(std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup::RegExps>())
{
    reg_exps->parent = this;

    yang_name = "reg-exp-group"; yang_parent_name = "reg-exp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::RegExpGroups::RegExpGroup::~RegExpGroup()
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::has_data() const
{
    return reg_exp_group_name.is_set
	|| (reg_exps !=  nullptr && reg_exps->has_data());
}

bool PerfMgmt::RegExpGroups::RegExpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reg_exp_group_name.yfilter)
	|| (reg_exps !=  nullptr && reg_exps->has_operation());
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/reg-exp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exp-group" <<"[reg-exp-group-name='" <<reg_exp_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::RegExpGroups::RegExpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reg_exp_group_name.is_set || is_set(reg_exp_group_name.yfilter)) leaf_name_data.push_back(reg_exp_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::RegExpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-exps")
    {
        if(reg_exps == nullptr)
        {
            reg_exps = std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup::RegExps>();
        }
        return reg_exps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::RegExpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reg_exps != nullptr)
    {
        children["reg-exps"] = reg_exps;
    }

    return children;
}

void PerfMgmt::RegExpGroups::RegExpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg-exp-group-name")
    {
        reg_exp_group_name = value;
        reg_exp_group_name.value_namespace = name_space;
        reg_exp_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::RegExpGroups::RegExpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg-exp-group-name")
    {
        reg_exp_group_name.yfilter = yfilter;
    }
}

bool PerfMgmt::RegExpGroups::RegExpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg-exps" || name == "reg-exp-group-name")
        return true;
    return false;
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExps()
{

    yang_name = "reg-exps"; yang_parent_name = "reg-exp-group"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::~RegExps()
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::has_data() const
{
    for (std::size_t index=0; index<reg_exp.size(); index++)
    {
        if(reg_exp[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::has_operation() const
{
    for (std::size_t index=0; index<reg_exp.size(); index++)
    {
        if(reg_exp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-exp")
    {
        for(auto const & c : reg_exp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp>();
        c->parent = this;
        reg_exp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reg_exp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::RegExpGroups::RegExpGroup::RegExps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::RegExpGroups::RegExpGroup::RegExps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg-exp")
        return true;
    return false;
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::RegExp()
    :
    reg_exp_index{YType::uint32, "reg-exp-index"},
    reg_exp_string{YType::str, "reg-exp-string"}
{

    yang_name = "reg-exp"; yang_parent_name = "reg-exps"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::~RegExp()
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::has_data() const
{
    return reg_exp_index.is_set
	|| reg_exp_string.is_set;
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reg_exp_index.yfilter)
	|| ydk::is_set(reg_exp_string.yfilter);
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exp" <<"[reg-exp-index='" <<reg_exp_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reg_exp_index.is_set || is_set(reg_exp_index.yfilter)) leaf_name_data.push_back(reg_exp_index.get_name_leafdata());
    if (reg_exp_string.is_set || is_set(reg_exp_string.yfilter)) leaf_name_data.push_back(reg_exp_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg-exp-index")
    {
        reg_exp_index = value;
        reg_exp_index.value_namespace = name_space;
        reg_exp_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-string")
    {
        reg_exp_string = value;
        reg_exp_string.value_namespace = name_space;
        reg_exp_string.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg-exp-index")
    {
        reg_exp_index.yfilter = yfilter;
    }
    if(value_path == "reg-exp-string")
    {
        reg_exp_string.yfilter = yfilter;
    }
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg-exp-index" || name == "reg-exp-string")
        return true;
    return false;
}

PerfMgmt::Resources::Resources()
    :
    dump_local(std::make_shared<PerfMgmt::Resources::DumpLocal>())
	,memory_resources(std::make_shared<PerfMgmt::Resources::MemoryResources>())
	,tftp_resources(nullptr) // presence node
{
    dump_local->parent = this;
    memory_resources->parent = this;

    yang_name = "resources"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Resources::~Resources()
{
}

bool PerfMgmt::Resources::has_data() const
{
    return (dump_local !=  nullptr && dump_local->has_data())
	|| (memory_resources !=  nullptr && memory_resources->has_data())
	|| (tftp_resources !=  nullptr && tftp_resources->has_data());
}

bool PerfMgmt::Resources::has_operation() const
{
    return is_set(yfilter)
	|| (dump_local !=  nullptr && dump_local->has_operation())
	|| (memory_resources !=  nullptr && memory_resources->has_operation())
	|| (tftp_resources !=  nullptr && tftp_resources->has_operation());
}

std::string PerfMgmt::Resources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dump-local")
    {
        if(dump_local == nullptr)
        {
            dump_local = std::make_shared<PerfMgmt::Resources::DumpLocal>();
        }
        return dump_local;
    }

    if(child_yang_name == "memory-resources")
    {
        if(memory_resources == nullptr)
        {
            memory_resources = std::make_shared<PerfMgmt::Resources::MemoryResources>();
        }
        return memory_resources;
    }

    if(child_yang_name == "tftp-resources")
    {
        if(tftp_resources == nullptr)
        {
            tftp_resources = std::make_shared<PerfMgmt::Resources::TftpResources>();
        }
        return tftp_resources;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dump_local != nullptr)
    {
        children["dump-local"] = dump_local;
    }

    if(memory_resources != nullptr)
    {
        children["memory-resources"] = memory_resources;
    }

    if(tftp_resources != nullptr)
    {
        children["tftp-resources"] = tftp_resources;
    }

    return children;
}

void PerfMgmt::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dump-local" || name == "memory-resources" || name == "tftp-resources")
        return true;
    return false;
}

PerfMgmt::Resources::DumpLocal::DumpLocal()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "dump-local"; yang_parent_name = "resources"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Resources::DumpLocal::~DumpLocal()
{
}

bool PerfMgmt::Resources::DumpLocal::has_data() const
{
    return enable.is_set;
}

bool PerfMgmt::Resources::DumpLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string PerfMgmt::Resources::DumpLocal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/resources/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Resources::DumpLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dump-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Resources::DumpLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Resources::DumpLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::DumpLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Resources::DumpLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Resources::DumpLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool PerfMgmt::Resources::DumpLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

PerfMgmt::Resources::MemoryResources::MemoryResources()
    :
    max_limit{YType::int32, "max-limit"},
    min_reserved{YType::int32, "min-reserved"}
{

    yang_name = "memory-resources"; yang_parent_name = "resources"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Resources::MemoryResources::~MemoryResources()
{
}

bool PerfMgmt::Resources::MemoryResources::has_data() const
{
    return max_limit.is_set
	|| min_reserved.is_set;
}

bool PerfMgmt::Resources::MemoryResources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(min_reserved.yfilter);
}

std::string PerfMgmt::Resources::MemoryResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/resources/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Resources::MemoryResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Resources::MemoryResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (min_reserved.is_set || is_set(min_reserved.yfilter)) leaf_name_data.push_back(min_reserved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Resources::MemoryResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::MemoryResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Resources::MemoryResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-reserved")
    {
        min_reserved = value;
        min_reserved.value_namespace = name_space;
        min_reserved.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Resources::MemoryResources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "min-reserved")
    {
        min_reserved.yfilter = yfilter;
    }
}

bool PerfMgmt::Resources::MemoryResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "min-reserved")
        return true;
    return false;
}

PerfMgmt::Resources::TftpResources::TftpResources()
    :
    directory{YType::str, "directory"},
    server_address{YType::str, "server-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "tftp-resources"; yang_parent_name = "resources"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Resources::TftpResources::~TftpResources()
{
}

bool PerfMgmt::Resources::TftpResources::has_data() const
{
    return directory.is_set
	|| server_address.is_set
	|| vrf_name.is_set;
}

bool PerfMgmt::Resources::TftpResources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directory.yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PerfMgmt::Resources::TftpResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/resources/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Resources::TftpResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Resources::TftpResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directory.is_set || is_set(directory.yfilter)) leaf_name_data.push_back(directory.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Resources::TftpResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::TftpResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Resources::TftpResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directory")
    {
        directory = value;
        directory.value_namespace = name_space;
        directory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Resources::TftpResources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directory")
    {
        directory.yfilter = yfilter;
    }
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PerfMgmt::Resources::TftpResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directory" || name == "server-address" || name == "vrf-name")
        return true;
    return false;
}

PerfMgmt::Statistics::Statistics()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Statistics::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Statistics::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Statistics::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Statistics::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Statistics::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Statistics::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Statistics::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Statistics::ProcessNode>())
{
    basic_counter_interface->parent = this;
    bgp->parent = this;
    cpu_node->parent = this;
    data_rate_interface->parent = this;
    generic_counter_interface->parent = this;
    ldp_mpls->parent = this;
    memory_node->parent = this;
    ospfv2_protocol->parent = this;
    ospfv3_protocol->parent = this;
    process_node->parent = this;

    yang_name = "statistics"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::~Statistics()
{
}

bool PerfMgmt::Statistics::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Statistics::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Statistics::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Statistics::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Statistics::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Statistics::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Statistics::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Statistics::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Statistics::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface" || name == "bgp" || name == "cpu-node" || name == "data-rate-interface" || name == "generic-counter-interface" || name == "ldp-mpls" || name == "memory-node" || name == "ospfv2-protocol" || name == "ospfv3-protocol" || name == "process-node")
        return true;
    return false;
}

PerfMgmt::Statistics::BasicCounterInterface::BasicCounterInterface()
    :
    templates(std::make_shared<PerfMgmt::Statistics::BasicCounterInterface::Templates>())
{
    templates->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::BasicCounterInterface::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "basic-counter-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::BasicCounterInterface::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/basic-counter-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::BasicCounterInterface::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::BasicCounterInterface::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::BasicCounterInterface::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::BasicCounterInterface::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::BasicCounterInterface::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::BasicCounterInterface::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/basic-counter-interface/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::Bgp::Bgp()
    :
    templates(std::make_shared<PerfMgmt::Statistics::Bgp::Templates>())
{
    templates->parent = this;

    yang_name = "bgp"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Bgp::~Bgp()
{
}

bool PerfMgmt::Statistics::Bgp::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::Bgp::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::Bgp::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Bgp::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::Bgp::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::Bgp::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::Bgp::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Bgp::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Bgp::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Bgp::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::Bgp::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Bgp::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::Bgp::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::Bgp::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::Bgp::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::Bgp::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Bgp::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::Bgp::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::Bgp::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::Bgp::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/bgp/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Bgp::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Bgp::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Bgp::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Bgp::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::Bgp::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::Bgp::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::Bgp::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::CpuNode::CpuNode()
    :
    templates(std::make_shared<PerfMgmt::Statistics::CpuNode::Templates>())
{
    templates->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Statistics::CpuNode::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::CpuNode::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::CpuNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::CpuNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::CpuNode::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::CpuNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::CpuNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::CpuNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::CpuNode::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::CpuNode::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::CpuNode::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::CpuNode::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::CpuNode::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::CpuNode::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::CpuNode::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::CpuNode::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::CpuNode::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::CpuNode::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::CpuNode::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::CpuNode::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::CpuNode::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::CpuNode::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::CpuNode::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::CpuNode::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::CpuNode::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::CpuNode::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/cpu-node/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::CpuNode::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::CpuNode::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::CpuNode::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::CpuNode::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::CpuNode::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::CpuNode::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::CpuNode::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::DataRateInterface::DataRateInterface()
    :
    templates(std::make_shared<PerfMgmt::Statistics::DataRateInterface::Templates>())
{
    templates->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Statistics::DataRateInterface::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::DataRateInterface::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::DataRateInterface::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "data-rate-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::DataRateInterface::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::DataRateInterface::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/data-rate-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::DataRateInterface::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::DataRateInterface::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::DataRateInterface::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::DataRateInterface::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::DataRateInterface::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::DataRateInterface::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::DataRateInterface::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::DataRateInterface::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::DataRateInterface::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/data-rate-interface/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::DataRateInterface::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::DataRateInterface::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::GenericCounterInterface::GenericCounterInterface()
    :
    templates(std::make_shared<PerfMgmt::Statistics::GenericCounterInterface::Templates>())
{
    templates->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::GenericCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::GenericCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::GenericCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::GenericCounterInterface::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::GenericCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::GenericCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "generic-counter-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::GenericCounterInterface::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/generic-counter-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::GenericCounterInterface::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::GenericCounterInterface::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::GenericCounterInterface::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::GenericCounterInterface::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::GenericCounterInterface::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::GenericCounterInterface::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/generic-counter-interface/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::LdpMpls::LdpMpls()
    :
    templates(std::make_shared<PerfMgmt::Statistics::LdpMpls::Templates>())
{
    templates->parent = this;

    yang_name = "ldp-mpls"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Statistics::LdpMpls::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::LdpMpls::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::LdpMpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::LdpMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::LdpMpls::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::LdpMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::LdpMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::LdpMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::LdpMpls::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "ldp-mpls"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::LdpMpls::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::LdpMpls::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::LdpMpls::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::LdpMpls::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ldp-mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::LdpMpls::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::LdpMpls::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::LdpMpls::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::LdpMpls::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::LdpMpls::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::LdpMpls::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::LdpMpls::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::LdpMpls::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::LdpMpls::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::LdpMpls::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::LdpMpls::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::LdpMpls::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ldp-mpls/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::LdpMpls::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::LdpMpls::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::LdpMpls::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::MemoryNode::MemoryNode()
    :
    templates(std::make_shared<PerfMgmt::Statistics::MemoryNode::Templates>())
{
    templates->parent = this;

    yang_name = "memory-node"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Statistics::MemoryNode::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::MemoryNode::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::MemoryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::MemoryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::MemoryNode::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::MemoryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::MemoryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::MemoryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::MemoryNode::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "memory-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::MemoryNode::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::MemoryNode::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::MemoryNode::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::MemoryNode::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/memory-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::MemoryNode::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::MemoryNode::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::MemoryNode::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::MemoryNode::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::MemoryNode::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::MemoryNode::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::MemoryNode::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::MemoryNode::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::MemoryNode::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::MemoryNode::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::MemoryNode::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::MemoryNode::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/memory-node/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::MemoryNode::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::MemoryNode::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::MemoryNode::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::Ospfv2Protocol::Ospfv2Protocol()
    :
    templates(std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol::Templates>())
{
    templates->parent = this;

    yang_name = "ospfv2-protocol"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::Ospfv2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Ospfv2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::Ospfv2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "ospfv2-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv2-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv2Protocol::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::Ospfv2Protocol::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv2-protocol/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::Ospfv3Protocol::Ospfv3Protocol()
    :
    templates(std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol::Templates>())
{
    templates->parent = this;

    yang_name = "ospfv3-protocol"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::Ospfv3Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Ospfv3Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv3Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::Ospfv3Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "ospfv3-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv3-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv3Protocol::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::Ospfv3Protocol::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv3-protocol/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Statistics::ProcessNode::ProcessNode()
    :
    templates(std::make_shared<PerfMgmt::Statistics::ProcessNode::Templates>())
{
    templates->parent = this;

    yang_name = "process-node"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Statistics::ProcessNode::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::ProcessNode::has_operation() const
{
    return is_set(yfilter)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::ProcessNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::ProcessNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::ProcessNode::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::ProcessNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::ProcessNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::ProcessNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templates")
        return true;
    return false;
}

PerfMgmt::Statistics::ProcessNode::Templates::Templates()
{

    yang_name = "templates"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::ProcessNode::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::ProcessNode::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::ProcessNode::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Statistics::ProcessNode::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/process-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::ProcessNode::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::ProcessNode::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::ProcessNode::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::ProcessNode::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::ProcessNode::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::ProcessNode::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Statistics::ProcessNode::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Statistics::ProcessNode::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

PerfMgmt::Statistics::ProcessNode::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Statistics::ProcessNode::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::ProcessNode::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::ProcessNode::Templates::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(history_persistent.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_size.yfilter)
	|| ydk::is_set(vrf_group.yfilter);
}

std::string PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/process-node/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.yfilter)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.yfilter)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::ProcessNode::Templates::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
        history_persistent.value_namespace = name_space;
        history_persistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
        sample_size.value_namespace = name_space;
        sample_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Statistics::ProcessNode::Templates::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "history-persistent")
    {
        history_persistent.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-size")
    {
        sample_size.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Statistics::ProcessNode::Templates::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-name" || name == "history-persistent" || name == "reg-exp-group" || name == "sample-interval" || name == "sample-size" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Threshold::Threshold()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Threshold::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Threshold::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Threshold::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Threshold::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Threshold::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Threshold::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Threshold::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Threshold::ProcessNode>())
{
    basic_counter_interface->parent = this;
    bgp->parent = this;
    cpu_node->parent = this;
    data_rate_interface->parent = this;
    generic_counter_interface->parent = this;
    ldp_mpls->parent = this;
    memory_node->parent = this;
    ospfv2_protocol->parent = this;
    ospfv3_protocol->parent = this;
    process_node->parent = this;

    yang_name = "threshold"; yang_parent_name = "perf-mgmt"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::~Threshold()
{
}

bool PerfMgmt::Threshold::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Threshold::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Threshold::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Threshold::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Threshold::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Threshold::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Threshold::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface" || name == "bgp" || name == "cpu-node" || name == "data-rate-interface" || name == "generic-counter-interface" || name == "ldp-mpls" || name == "memory-node" || name == "ospfv2-protocol" || name == "ospfv3-protocol" || name == "process-node")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterface()
    :
    basic_counter_interface_templates(std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates>())
{
    basic_counter_interface_templates->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::has_data() const
{
    return (basic_counter_interface_templates !=  nullptr && basic_counter_interface_templates->has_data());
}

bool PerfMgmt::Threshold::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counter_interface_templates !=  nullptr && basic_counter_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface-templates")
    {
        if(basic_counter_interface_templates == nullptr)
        {
            basic_counter_interface_templates = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates>();
        }
        return basic_counter_interface_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface_templates != nullptr)
    {
        children["basic-counter-interface-templates"] = basic_counter_interface_templates;
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplates()
{

    yang_name = "basic-counter-interface-templates"; yang_parent_name = "basic-counter-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::~BasicCounterInterfaceTemplates()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::has_data() const
{
    for (std::size_t index=0; index<basic_counter_interface_template.size(); index++)
    {
        if(basic_counter_interface_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::has_operation() const
{
    for (std::size_t index=0; index<basic_counter_interface_template.size(); index++)
    {
        if(basic_counter_interface_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/basic-counter-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface-template")
    {
        for(auto const & c : basic_counter_interface_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate>();
        c->parent = this;
        basic_counter_interface_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : basic_counter_interface_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface-template")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::BasicCounterInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    vrf_group{YType::str, "vrf-group"}
    	,
    in_octets(nullptr) // presence node
	,in_packets(nullptr) // presence node
	,input_queue_drops(nullptr) // presence node
	,input_total_drops(nullptr) // presence node
	,input_total_errors(nullptr) // presence node
	,out_octets(nullptr) // presence node
	,out_packets(nullptr) // presence node
	,output_queue_drops(nullptr) // presence node
	,output_total_drops(nullptr) // presence node
	,output_total_errors(nullptr) // presence node
{

    yang_name = "basic-counter-interface-template"; yang_parent_name = "basic-counter-interface-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::~BasicCounterInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| vrf_group.is_set
	|| (in_octets !=  nullptr && in_octets->has_data())
	|| (in_packets !=  nullptr && in_packets->has_data())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_data())
	|| (input_total_drops !=  nullptr && input_total_drops->has_data())
	|| (input_total_errors !=  nullptr && input_total_errors->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_packets !=  nullptr && out_packets->has_data())
	|| (output_queue_drops !=  nullptr && output_queue_drops->has_data())
	|| (output_total_drops !=  nullptr && output_total_drops->has_data())
	|| (output_total_errors !=  nullptr && output_total_errors->has_data());
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(vrf_group.yfilter)
	|| (in_octets !=  nullptr && in_octets->has_operation())
	|| (in_packets !=  nullptr && in_packets->has_operation())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_operation())
	|| (input_total_drops !=  nullptr && input_total_drops->has_operation())
	|| (input_total_errors !=  nullptr && input_total_errors->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_packets !=  nullptr && out_packets->has_operation())
	|| (output_queue_drops !=  nullptr && output_queue_drops->has_operation())
	|| (output_total_drops !=  nullptr && output_total_drops->has_operation())
	|| (output_total_errors !=  nullptr && output_total_errors->has_operation());
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/basic-counter-interface/basic-counter-interface-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets")
    {
        if(in_octets == nullptr)
        {
            in_octets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets>();
        }
        return in_octets;
    }

    if(child_yang_name == "in-packets")
    {
        if(in_packets == nullptr)
        {
            in_packets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets>();
        }
        return in_packets;
    }

    if(child_yang_name == "input-queue-drops")
    {
        if(input_queue_drops == nullptr)
        {
            input_queue_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops>();
        }
        return input_queue_drops;
    }

    if(child_yang_name == "input-total-drops")
    {
        if(input_total_drops == nullptr)
        {
            input_total_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops>();
        }
        return input_total_drops;
    }

    if(child_yang_name == "input-total-errors")
    {
        if(input_total_errors == nullptr)
        {
            input_total_errors = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors>();
        }
        return input_total_errors;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-packets")
    {
        if(out_packets == nullptr)
        {
            out_packets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets>();
        }
        return out_packets;
    }

    if(child_yang_name == "output-queue-drops")
    {
        if(output_queue_drops == nullptr)
        {
            output_queue_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops>();
        }
        return output_queue_drops;
    }

    if(child_yang_name == "output-total-drops")
    {
        if(output_total_drops == nullptr)
        {
            output_total_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops>();
        }
        return output_total_drops;
    }

    if(child_yang_name == "output-total-errors")
    {
        if(output_total_errors == nullptr)
        {
            output_total_errors = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors>();
        }
        return output_total_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_octets != nullptr)
    {
        children["in-octets"] = in_octets;
    }

    if(in_packets != nullptr)
    {
        children["in-packets"] = in_packets;
    }

    if(input_queue_drops != nullptr)
    {
        children["input-queue-drops"] = input_queue_drops;
    }

    if(input_total_drops != nullptr)
    {
        children["input-total-drops"] = input_total_drops;
    }

    if(input_total_errors != nullptr)
    {
        children["input-total-errors"] = input_total_errors;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(out_packets != nullptr)
    {
        children["out-packets"] = out_packets;
    }

    if(output_queue_drops != nullptr)
    {
        children["output-queue-drops"] = output_queue_drops;
    }

    if(output_total_drops != nullptr)
    {
        children["output-total-drops"] = output_total_drops;
    }

    if(output_total_errors != nullptr)
    {
        children["output-total-errors"] = output_total_errors;
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets" || name == "in-packets" || name == "input-queue-drops" || name == "input-total-drops" || name == "input-total-errors" || name == "out-octets" || name == "out-packets" || name == "output-queue-drops" || name == "output-total-drops" || name == "output-total-errors" || name == "template-name" || name == "reg-exp-group" || name == "sample-interval" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::InOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-octets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::~InOctets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::InPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-packets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::~InPackets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::InputQueueDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-queue-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::~InputQueueDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-queue-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::InputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-total-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::~InputTotalDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::InputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-total-errors"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::~InputTotalErrors()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::OutOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-octets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::~OutOctets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::OutPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-packets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::~OutPackets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::OutputQueueDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-queue-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::~OutputQueueDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-queue-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::OutputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-total-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::~OutputTotalDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::OutputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-total-errors"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::~OutputTotalErrors()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::Bgp()
    :
    bgp_templates(std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates>())
{
    bgp_templates->parent = this;

    yang_name = "bgp"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Bgp::~Bgp()
{
}

bool PerfMgmt::Threshold::Bgp::has_data() const
{
    return (bgp_templates !=  nullptr && bgp_templates->has_data());
}

bool PerfMgmt::Threshold::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_templates !=  nullptr && bgp_templates->has_operation());
}

std::string PerfMgmt::Threshold::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-templates")
    {
        if(bgp_templates == nullptr)
        {
            bgp_templates = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates>();
        }
        return bgp_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_templates != nullptr)
    {
        children["bgp-templates"] = bgp_templates;
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplates()
{

    yang_name = "bgp-templates"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::~BgpTemplates()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::has_data() const
{
    for (std::size_t index=0; index<bgp_template.size(); index++)
    {
        if(bgp_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::has_operation() const
{
    for (std::size_t index=0; index<bgp_template.size(); index++)
    {
        if(bgp_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-template")
    {
        for(auto const & c : bgp_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate>();
        c->parent = this;
        bgp_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-template")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::BgpTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    conn_dropped(nullptr) // presence node
	,conn_established(nullptr) // presence node
	,errors_received(nullptr) // presence node
	,errors_sent(nullptr) // presence node
	,input_messages(nullptr) // presence node
	,input_update_messages(nullptr) // presence node
	,output_messages(nullptr) // presence node
	,output_update_messages(nullptr) // presence node
{

    yang_name = "bgp-template"; yang_parent_name = "bgp-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::~BgpTemplate()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (conn_dropped !=  nullptr && conn_dropped->has_data())
	|| (conn_established !=  nullptr && conn_established->has_data())
	|| (errors_received !=  nullptr && errors_received->has_data())
	|| (errors_sent !=  nullptr && errors_sent->has_data())
	|| (input_messages !=  nullptr && input_messages->has_data())
	|| (input_update_messages !=  nullptr && input_update_messages->has_data())
	|| (output_messages !=  nullptr && output_messages->has_data())
	|| (output_update_messages !=  nullptr && output_update_messages->has_data());
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (conn_dropped !=  nullptr && conn_dropped->has_operation())
	|| (conn_established !=  nullptr && conn_established->has_operation())
	|| (errors_received !=  nullptr && errors_received->has_operation())
	|| (errors_sent !=  nullptr && errors_sent->has_operation())
	|| (input_messages !=  nullptr && input_messages->has_operation())
	|| (input_update_messages !=  nullptr && input_update_messages->has_operation())
	|| (output_messages !=  nullptr && output_messages->has_operation())
	|| (output_update_messages !=  nullptr && output_update_messages->has_operation());
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/bgp/bgp-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conn-dropped")
    {
        if(conn_dropped == nullptr)
        {
            conn_dropped = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped>();
        }
        return conn_dropped;
    }

    if(child_yang_name == "conn-established")
    {
        if(conn_established == nullptr)
        {
            conn_established = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished>();
        }
        return conn_established;
    }

    if(child_yang_name == "errors-received")
    {
        if(errors_received == nullptr)
        {
            errors_received = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived>();
        }
        return errors_received;
    }

    if(child_yang_name == "errors-sent")
    {
        if(errors_sent == nullptr)
        {
            errors_sent = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent>();
        }
        return errors_sent;
    }

    if(child_yang_name == "input-messages")
    {
        if(input_messages == nullptr)
        {
            input_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages>();
        }
        return input_messages;
    }

    if(child_yang_name == "input-update-messages")
    {
        if(input_update_messages == nullptr)
        {
            input_update_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages>();
        }
        return input_update_messages;
    }

    if(child_yang_name == "output-messages")
    {
        if(output_messages == nullptr)
        {
            output_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages>();
        }
        return output_messages;
    }

    if(child_yang_name == "output-update-messages")
    {
        if(output_update_messages == nullptr)
        {
            output_update_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages>();
        }
        return output_update_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conn_dropped != nullptr)
    {
        children["conn-dropped"] = conn_dropped;
    }

    if(conn_established != nullptr)
    {
        children["conn-established"] = conn_established;
    }

    if(errors_received != nullptr)
    {
        children["errors-received"] = errors_received;
    }

    if(errors_sent != nullptr)
    {
        children["errors-sent"] = errors_sent;
    }

    if(input_messages != nullptr)
    {
        children["input-messages"] = input_messages;
    }

    if(input_update_messages != nullptr)
    {
        children["input-update-messages"] = input_update_messages;
    }

    if(output_messages != nullptr)
    {
        children["output-messages"] = output_messages;
    }

    if(output_update_messages != nullptr)
    {
        children["output-update-messages"] = output_update_messages;
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conn-dropped" || name == "conn-established" || name == "errors-received" || name == "errors-sent" || name == "input-messages" || name == "input-update-messages" || name == "output-messages" || name == "output-update-messages" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::ConnDropped()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "conn-dropped"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::~ConnDropped()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::ConnEstablished()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "conn-established"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::~ConnEstablished()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-established";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::ErrorsReceived()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "errors-received"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::~ErrorsReceived()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::ErrorsSent()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "errors-sent"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::~ErrorsSent()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::InputMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::~InputMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::InputUpdateMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-update-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::~InputUpdateMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-update-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::OutputMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::~OutputMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::OutputUpdateMessages()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-update-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::~OutputUpdateMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-update-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNode()
    :
    cpu_node_templates(std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates>())
{
    cpu_node_templates->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Threshold::CpuNode::has_data() const
{
    return (cpu_node_templates !=  nullptr && cpu_node_templates->has_data());
}

bool PerfMgmt::Threshold::CpuNode::has_operation() const
{
    return is_set(yfilter)
	|| (cpu_node_templates !=  nullptr && cpu_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::CpuNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-node-templates")
    {
        if(cpu_node_templates == nullptr)
        {
            cpu_node_templates = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates>();
        }
        return cpu_node_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpu_node_templates != nullptr)
    {
        children["cpu-node-templates"] = cpu_node_templates;
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::CpuNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::CpuNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-node-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplates()
{

    yang_name = "cpu-node-templates"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::~CpuNodeTemplates()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::has_data() const
{
    for (std::size_t index=0; index<cpu_node_template.size(); index++)
    {
        if(cpu_node_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::has_operation() const
{
    for (std::size_t index=0; index<cpu_node_template.size(); index++)
    {
        if(cpu_node_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-node-template")
    {
        for(auto const & c : cpu_node_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate>();
        c->parent = this;
        cpu_node_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_node_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-node-template")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::CpuNodeTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    average_cpu_used(nullptr) // presence node
	,no_processes(nullptr) // presence node
{

    yang_name = "cpu-node-template"; yang_parent_name = "cpu-node-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::~CpuNodeTemplate()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_data())
	|| (no_processes !=  nullptr && no_processes->has_data());
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_operation())
	|| (no_processes !=  nullptr && no_processes->has_operation());
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/cpu-node/cpu-node-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average-cpu-used")
    {
        if(average_cpu_used == nullptr)
        {
            average_cpu_used = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed>();
        }
        return average_cpu_used;
    }

    if(child_yang_name == "no-processes")
    {
        if(no_processes == nullptr)
        {
            no_processes = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses>();
        }
        return no_processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average_cpu_used != nullptr)
    {
        children["average-cpu-used"] = average_cpu_used;
    }

    if(no_processes != nullptr)
    {
        children["no-processes"] = no_processes;
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-cpu-used" || name == "no-processes" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::AverageCpuUsed()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "average-cpu-used"; yang_parent_name = "cpu-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::~AverageCpuUsed()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-cpu-used";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::NoProcesses()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "no-processes"; yang_parent_name = "cpu-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::~NoProcesses()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterface()
    :
    data_rate_interface_templates(std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates>())
{
    data_rate_interface_templates->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Threshold::DataRateInterface::has_data() const
{
    return (data_rate_interface_templates !=  nullptr && data_rate_interface_templates->has_data());
}

bool PerfMgmt::Threshold::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| (data_rate_interface_templates !=  nullptr && data_rate_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface-templates")
    {
        if(data_rate_interface_templates == nullptr)
        {
            data_rate_interface_templates = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates>();
        }
        return data_rate_interface_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_rate_interface_templates != nullptr)
    {
        children["data-rate-interface-templates"] = data_rate_interface_templates;
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-rate-interface-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplates()
{

    yang_name = "data-rate-interface-templates"; yang_parent_name = "data-rate-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::~DataRateInterfaceTemplates()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::has_data() const
{
    for (std::size_t index=0; index<data_rate_interface_template.size(); index++)
    {
        if(data_rate_interface_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::has_operation() const
{
    for (std::size_t index=0; index<data_rate_interface_template.size(); index++)
    {
        if(data_rate_interface_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/data-rate-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface-template")
    {
        for(auto const & c : data_rate_interface_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate>();
        c->parent = this;
        data_rate_interface_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : data_rate_interface_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-rate-interface-template")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::DataRateInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    vrf_group{YType::str, "vrf-group"}
    	,
    bandwidth(nullptr) // presence node
	,input_data_rate(nullptr) // presence node
	,input_packet_rate(nullptr) // presence node
	,input_peak_pkts(nullptr) // presence node
	,input_peak_rate(nullptr) // presence node
	,output_data_rate(nullptr) // presence node
	,output_packet_rate(nullptr) // presence node
	,output_peak_pkts(nullptr) // presence node
	,output_peak_rate(nullptr) // presence node
{

    yang_name = "data-rate-interface-template"; yang_parent_name = "data-rate-interface-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::~DataRateInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| vrf_group.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (input_data_rate !=  nullptr && input_data_rate->has_data())
	|| (input_packet_rate !=  nullptr && input_packet_rate->has_data())
	|| (input_peak_pkts !=  nullptr && input_peak_pkts->has_data())
	|| (input_peak_rate !=  nullptr && input_peak_rate->has_data())
	|| (output_data_rate !=  nullptr && output_data_rate->has_data())
	|| (output_packet_rate !=  nullptr && output_packet_rate->has_data())
	|| (output_peak_pkts !=  nullptr && output_peak_pkts->has_data())
	|| (output_peak_rate !=  nullptr && output_peak_rate->has_data());
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(vrf_group.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (input_data_rate !=  nullptr && input_data_rate->has_operation())
	|| (input_packet_rate !=  nullptr && input_packet_rate->has_operation())
	|| (input_peak_pkts !=  nullptr && input_peak_pkts->has_operation())
	|| (input_peak_rate !=  nullptr && input_peak_rate->has_operation())
	|| (output_data_rate !=  nullptr && output_data_rate->has_operation())
	|| (output_packet_rate !=  nullptr && output_packet_rate->has_operation())
	|| (output_peak_pkts !=  nullptr && output_peak_pkts->has_operation())
	|| (output_peak_rate !=  nullptr && output_peak_rate->has_operation());
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/data-rate-interface/data-rate-interface-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "input-data-rate")
    {
        if(input_data_rate == nullptr)
        {
            input_data_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate>();
        }
        return input_data_rate;
    }

    if(child_yang_name == "input-packet-rate")
    {
        if(input_packet_rate == nullptr)
        {
            input_packet_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate>();
        }
        return input_packet_rate;
    }

    if(child_yang_name == "input-peak-pkts")
    {
        if(input_peak_pkts == nullptr)
        {
            input_peak_pkts = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts>();
        }
        return input_peak_pkts;
    }

    if(child_yang_name == "input-peak-rate")
    {
        if(input_peak_rate == nullptr)
        {
            input_peak_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate>();
        }
        return input_peak_rate;
    }

    if(child_yang_name == "output-data-rate")
    {
        if(output_data_rate == nullptr)
        {
            output_data_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate>();
        }
        return output_data_rate;
    }

    if(child_yang_name == "output-packet-rate")
    {
        if(output_packet_rate == nullptr)
        {
            output_packet_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate>();
        }
        return output_packet_rate;
    }

    if(child_yang_name == "output-peak-pkts")
    {
        if(output_peak_pkts == nullptr)
        {
            output_peak_pkts = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts>();
        }
        return output_peak_pkts;
    }

    if(child_yang_name == "output-peak-rate")
    {
        if(output_peak_rate == nullptr)
        {
            output_peak_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate>();
        }
        return output_peak_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(input_data_rate != nullptr)
    {
        children["input-data-rate"] = input_data_rate;
    }

    if(input_packet_rate != nullptr)
    {
        children["input-packet-rate"] = input_packet_rate;
    }

    if(input_peak_pkts != nullptr)
    {
        children["input-peak-pkts"] = input_peak_pkts;
    }

    if(input_peak_rate != nullptr)
    {
        children["input-peak-rate"] = input_peak_rate;
    }

    if(output_data_rate != nullptr)
    {
        children["output-data-rate"] = output_data_rate;
    }

    if(output_packet_rate != nullptr)
    {
        children["output-packet-rate"] = output_packet_rate;
    }

    if(output_peak_pkts != nullptr)
    {
        children["output-peak-pkts"] = output_peak_pkts;
    }

    if(output_peak_rate != nullptr)
    {
        children["output-peak-rate"] = output_peak_rate;
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "input-data-rate" || name == "input-packet-rate" || name == "input-peak-pkts" || name == "input-peak-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "output-peak-pkts" || name == "output-peak-rate" || name == "template-name" || name == "reg-exp-group" || name == "sample-interval" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::Bandwidth()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "bandwidth"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::~Bandwidth()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::InputDataRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-data-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::~InputDataRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::InputPacketRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-packet-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::~InputPacketRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packet-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

const Enum::YLeaf PmThresholdOp::eq {1, "eq"};
const Enum::YLeaf PmThresholdOp::ne {2, "ne"};
const Enum::YLeaf PmThresholdOp::lt {3, "lt"};
const Enum::YLeaf PmThresholdOp::le {4, "le"};
const Enum::YLeaf PmThresholdOp::gt {5, "gt"};
const Enum::YLeaf PmThresholdOp::ge {6, "ge"};
const Enum::YLeaf PmThresholdOp::rg {7, "rg"};

const Enum::YLeaf PmThresholdRearm::always {0, "always"};
const Enum::YLeaf PmThresholdRearm::window {1, "window"};
const Enum::YLeaf PmThresholdRearm::toggle {2, "toggle"};


}
}

