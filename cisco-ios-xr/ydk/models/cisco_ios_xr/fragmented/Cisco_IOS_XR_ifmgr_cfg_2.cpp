
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::Cfm()
    :
    continuity_check_interval{YType::enumeration, "continuity-check-interval"},
    enable{YType::empty, "enable"},
    level{YType::uint32, "level"}
{

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_data() const
{
    return continuity_check_interval.is_set
	|| enable.is_set
	|| level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(continuity_check_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (continuity_check_interval.is_set || is_set(continuity_check_interval.yfilter)) leaf_name_data.push_back(continuity_check_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval = value;
        continuity_check_interval.value_namespace = name_space;
        continuity_check_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continuity-check-interval" || name == "enable" || name == "level")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::FrequencySynchronization()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "frequency-synchronization"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::~FrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-sat-cfg:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_data() const
{
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group" || name == "minimum-preferred-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePorts()
{

    yang_name = "remote-ports"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        for(auto const & c : remote_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "remote-port"; yang_parent_name = "remote-ports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::NvSatelliteFabricNetwork()
    :
    enable{YType::empty, "enable"}
    	,
    redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>())
	,satellites(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>())
{
    redundancy->parent = this;
    satellites->parent = this;

    yang_name = "nv-satellite-fabric-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::~NvSatelliteFabricNetwork()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_data() const
{
    return enable.is_set
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (satellites !=  nullptr && satellites->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (satellites !=  nullptr && satellites->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "satellites")
    {
        if(satellites == nullptr)
        {
            satellites = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>();
        }
        return satellites;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(satellites != nullptr)
    {
        children["satellites"] = satellites;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "satellites" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_data() const
{
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group" || name == "minimum-preferred-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellites()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>())
{
    qos->parent = this;

    yang_name = "satellites"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::~Satellites()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_data() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_operation() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    for (auto const & c : satellite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos" || name == "satellite")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "satellites"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::Satellite()
    :
    satellite_id{YType::uint32, "satellite-id"},
    enable{YType::empty, "enable"}
    	,
    remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>())
{
    remote_ports->parent = this;

    yang_name = "satellite"; yang_parent_name = "satellites"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::~Satellite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_data() const
{
    return satellite_id.is_set
	|| enable.is_set
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite" <<"[satellite-id='" <<satellite_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>();
        }
        return remote_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_ports != nullptr)
    {
        children["remote-ports"] = remote_ports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ports" || name == "satellite-id" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePorts()
{

    yang_name = "remote-ports"; yang_parent_name = "satellite"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        for(auto const & c : remote_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "remote-port"; yang_parent_name = "remote-ports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Nve()
    :
    ingress_replication_protocol{YType::enumeration, "ingress-replication-protocol"},
    overlay_encapsulation{YType::enumeration, "overlay-encapsulation"},
    source_interface{YType::str, "source-interface"},
    vx_lan_udp_port{YType::enumeration, "vx-lan-udp-port"}
    	,
    anycast(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>())
	,member_vnis(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>())
{
    anycast->parent = this;
    member_vnis->parent = this;
    redundancy->parent = this;

    yang_name = "nve"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::~Nve()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_data() const
{
    return ingress_replication_protocol.is_set
	|| overlay_encapsulation.is_set
	|| source_interface.is_set
	|| vx_lan_udp_port.is_set
	|| (anycast !=  nullptr && anycast->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_replication_protocol.yfilter)
	|| ydk::is_set(overlay_encapsulation.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vx_lan_udp_port.yfilter)
	|| (anycast !=  nullptr && anycast->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-cfg:nve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_replication_protocol.is_set || is_set(ingress_replication_protocol.yfilter)) leaf_name_data.push_back(ingress_replication_protocol.get_name_leafdata());
    if (overlay_encapsulation.is_set || is_set(overlay_encapsulation.yfilter)) leaf_name_data.push_back(overlay_encapsulation.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vx_lan_udp_port.is_set || is_set(vx_lan_udp_port.yfilter)) leaf_name_data.push_back(vx_lan_udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anycast")
    {
        if(anycast == nullptr)
        {
            anycast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>();
        }
        return anycast;
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis == nullptr)
        {
            member_vnis = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>();
        }
        return member_vnis;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anycast != nullptr)
    {
        children["anycast"] = anycast;
    }

    if(member_vnis != nullptr)
    {
        children["member-vnis"] = member_vnis;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-replication-protocol")
    {
        ingress_replication_protocol = value;
        ingress_replication_protocol.value_namespace = name_space;
        ingress_replication_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation = value;
        overlay_encapsulation.value_namespace = name_space;
        overlay_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port = value;
        vx_lan_udp_port.value_namespace = name_space;
        vx_lan_udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-replication-protocol")
    {
        ingress_replication_protocol.yfilter = yfilter;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast" || name == "member-vnis" || name == "redundancy" || name == "ingress-replication-protocol" || name == "overlay-encapsulation" || name == "source-interface" || name == "vx-lan-udp-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::Anycast()
    :
    source_interface{YType::str, "source-interface"},
    sync_group{YType::str, "sync-group"}
{

    yang_name = "anycast"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::~Anycast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_data() const
{
    return source_interface.is_set
	|| sync_group.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(sync_group.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (sync_group.is_set || is_set(sync_group.yfilter)) leaf_name_data.push_back(sync_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-group")
    {
        sync_group = value;
        sync_group.value_namespace = name_space;
        sync_group.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "sync-group")
    {
        sync_group.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "sync-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVnis()
{

    yang_name = "member-vnis"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::~MemberVnis()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_data() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni")
    {
        for(auto const & c : member_vni)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni>();
        c->parent = this;
        member_vni.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_vni)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::MemberVni()
    :
    vni_start{YType::uint32, "vni-start"},
    vni_end{YType::uint32, "vni-end"},
    enable{YType::empty, "enable"},
    host_reachability{YType::enumeration, "host-reachability"},
    load_balance_per_evi{YType::enumeration, "load-balance-per-evi"},
    unknown_unicast_flooding{YType::enumeration, "unknown-unicast-flooding"},
    vrf{YType::str, "vrf"}
    	,
    multicast(nullptr) // presence node
{

    yang_name = "member-vni"; yang_parent_name = "member-vnis"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::~MemberVni()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_data() const
{
    return vni_start.is_set
	|| vni_end.is_set
	|| enable.is_set
	|| host_reachability.is_set
	|| load_balance_per_evi.is_set
	|| unknown_unicast_flooding.is_set
	|| vrf.is_set
	|| (multicast !=  nullptr && multicast->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni_start.yfilter)
	|| ydk::is_set(vni_end.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(host_reachability.yfilter)
	|| ydk::is_set(load_balance_per_evi.yfilter)
	|| ydk::is_set(unknown_unicast_flooding.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni" <<"[vni-start='" <<vni_start <<"']" <<"[vni-end='" <<vni_end <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_start.is_set || is_set(vni_start.yfilter)) leaf_name_data.push_back(vni_start.get_name_leafdata());
    if (vni_end.is_set || is_set(vni_end.yfilter)) leaf_name_data.push_back(vni_end.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (host_reachability.is_set || is_set(host_reachability.yfilter)) leaf_name_data.push_back(host_reachability.get_name_leafdata());
    if (load_balance_per_evi.is_set || is_set(load_balance_per_evi.yfilter)) leaf_name_data.push_back(load_balance_per_evi.get_name_leafdata());
    if (unknown_unicast_flooding.is_set || is_set(unknown_unicast_flooding.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-start")
    {
        vni_start = value;
        vni_start.value_namespace = name_space;
        vni_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-end")
    {
        vni_end = value;
        vni_end.value_namespace = name_space;
        vni_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-reachability")
    {
        host_reachability = value;
        host_reachability.value_namespace = name_space;
        host_reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi = value;
        load_balance_per_evi.value_namespace = name_space;
        load_balance_per_evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding = value;
        unknown_unicast_flooding.value_namespace = name_space;
        unknown_unicast_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-start")
    {
        vni_start.yfilter = yfilter;
    }
    if(value_path == "vni-end")
    {
        vni_end.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "host-reachability")
    {
        host_reachability.yfilter = yfilter;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "vni-start" || name == "vni-end" || name == "enable" || name == "host-reachability" || name == "load-balance-per-evi" || name == "unknown-unicast-flooding" || name == "vrf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::Multicast()
    :
    multicast_group_max{YType::str, "multicast-group-max"},
    multicast_group_min{YType::str, "multicast-group-min"}
{

    yang_name = "multicast"; yang_parent_name = "member-vni"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::~Multicast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_data() const
{
    return multicast_group_max.is_set
	|| multicast_group_min.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_group_max.yfilter)
	|| ydk::is_set(multicast_group_min.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_group_max.is_set || is_set(multicast_group_max.yfilter)) leaf_name_data.push_back(multicast_group_max.get_name_leafdata());
    if (multicast_group_min.is_set || is_set(multicast_group_min.yfilter)) leaf_name_data.push_back(multicast_group_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-group-max")
    {
        multicast_group_max = value;
        multicast_group_max.value_namespace = name_space;
        multicast_group_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-group-min")
    {
        multicast_group_min = value;
        multicast_group_min.value_namespace = name_space;
        multicast_group_min.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-group-max")
    {
        multicast_group_max.yfilter = yfilter;
    }
    if(value_path == "multicast-group-min")
    {
        multicast_group_min.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-group-max" || name == "multicast-group-min")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    backbone_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>())
	,backbone_vx_lan(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>())
{
    backbone_mpls->parent = this;
    backbone_vx_lan->parent = this;

    yang_name = "redundancy"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_data() const
{
    return enable.is_set
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_data())
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_operation())
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbone-mpls")
    {
        if(backbone_mpls == nullptr)
        {
            backbone_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>();
        }
        return backbone_mpls;
    }

    if(child_yang_name == "backbone-vx-lan")
    {
        if(backbone_vx_lan == nullptr)
        {
            backbone_vx_lan = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>();
        }
        return backbone_vx_lan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backbone_mpls != nullptr)
    {
        children["backbone-mpls"] = backbone_mpls;
    }

    if(backbone_vx_lan != nullptr)
    {
        children["backbone-vx-lan"] = backbone_vx_lan;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-mpls" || name == "backbone-vx-lan" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::BackboneMpls()
    :
    backbone_mplsiccp{YType::int32, "backbone-mplsiccp"},
    enable{YType::empty, "enable"}
{

    yang_name = "backbone-mpls"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::~BackboneMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_data() const
{
    return backbone_mplsiccp.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_mplsiccp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_mplsiccp.is_set || is_set(backbone_mplsiccp.yfilter)) leaf_name_data.push_back(backbone_mplsiccp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp = value;
        backbone_mplsiccp.value_namespace = name_space;
        backbone_mplsiccp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-mplsiccp" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::BackboneVxLan()
    :
    backbone_vx_laniccp{YType::int32, "backbone-vx-laniccp"},
    enable{YType::empty, "enable"}
{

    yang_name = "backbone-vx-lan"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::~BackboneVxLan()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_data() const
{
    return backbone_vx_laniccp.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_vx_laniccp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-vx-lan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_vx_laniccp.is_set || is_set(backbone_vx_laniccp.yfilter)) leaf_name_data.push_back(backbone_vx_laniccp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp = value;
        backbone_vx_laniccp.value_namespace = name_space;
        backbone_vx_laniccp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-vx-laniccp" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::Optics()
    :
    breakout{YType::str, "Cisco-IOS-XR-optics-driver-cfg:breakout"},
    optics_cd_high_threshold{YType::int32, "optics-cd-high-threshold"},
    optics_cd_low_threshold{YType::int32, "optics-cd-low-threshold"},
    optics_cd_max{YType::int32, "optics-cd-max"},
    optics_cd_min{YType::int32, "optics-cd-min"},
    optics_description{YType::str, "optics-description"},
    optics_dgd_high_threshold{YType::int32, "optics-dgd-high-threshold"},
    optics_fec{YType::enumeration, "optics-fec"},
    optics_lbc_high_threshold{YType::int32, "optics-lbc-high-threshold"},
    optics_loopback{YType::enumeration, "optics-loopback"},
    optics_osnr_low_threshold{YType::int32, "optics-osnr-low-threshold"},
    optics_ots_amplifier_channel_power{YType::int32, "optics-ots-amplifier-channel-power"},
    optics_ots_amplifier_control_mode{YType::enumeration, "optics-ots-amplifier-control-mode"},
    optics_ots_amplifier_gain{YType::int32, "optics-ots-amplifier-gain"},
    optics_ots_amplifier_gain_degrade_high_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-high-threshold"},
    optics_ots_amplifier_gain_degrade_low_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-low-threshold"},
    optics_ots_amplifier_gain_range{YType::enumeration, "optics-ots-amplifier-gain-range"},
    optics_ots_amplifier_tilt{YType::int32, "optics-ots-amplifier-tilt"},
    optics_ots_channel_power_max_delta{YType::int32, "optics-ots-channel-power-max-delta"},
    optics_ots_osri{YType::boolean, "optics-ots-osri"},
    optics_ots_rx_voa_attenuation{YType::int32, "optics-ots-rx-voa-attenuation"},
    optics_ots_safety_control_mode{YType::enumeration, "optics-ots-safety-control-mode"},
    optics_ots_tx_voa_attenuation{YType::int32, "optics-ots-tx-voa-attenuation"},
    optics_performance_monitoring{YType::boolean, "optics-performance-monitoring"},
    optics_transmit_power{YType::int32, "optics-transmit-power"},
    optics_transmit_shutdown{YType::boolean, "optics-transmit-shutdown"}
    	,
    optics_dwdm_carrier(nullptr) // presence node
	,optics_lanes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>())
	,optics_network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>())
	,rx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>())
	,tx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>())
{
    optics_lanes->parent = this;
    optics_network_srlgs->parent = this;
    rx_thresholds->parent = this;
    tx_thresholds->parent = this;

    yang_name = "optics"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::~Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_data() const
{
    return breakout.is_set
	|| optics_cd_high_threshold.is_set
	|| optics_cd_low_threshold.is_set
	|| optics_cd_max.is_set
	|| optics_cd_min.is_set
	|| optics_description.is_set
	|| optics_dgd_high_threshold.is_set
	|| optics_fec.is_set
	|| optics_lbc_high_threshold.is_set
	|| optics_loopback.is_set
	|| optics_osnr_low_threshold.is_set
	|| optics_ots_amplifier_channel_power.is_set
	|| optics_ots_amplifier_control_mode.is_set
	|| optics_ots_amplifier_gain.is_set
	|| optics_ots_amplifier_gain_degrade_high_threshold.is_set
	|| optics_ots_amplifier_gain_degrade_low_threshold.is_set
	|| optics_ots_amplifier_gain_range.is_set
	|| optics_ots_amplifier_tilt.is_set
	|| optics_ots_channel_power_max_delta.is_set
	|| optics_ots_osri.is_set
	|| optics_ots_rx_voa_attenuation.is_set
	|| optics_ots_safety_control_mode.is_set
	|| optics_ots_tx_voa_attenuation.is_set
	|| optics_performance_monitoring.is_set
	|| optics_transmit_power.is_set
	|| optics_transmit_shutdown.is_set
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_data())
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_data())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(breakout.yfilter)
	|| ydk::is_set(optics_cd_high_threshold.yfilter)
	|| ydk::is_set(optics_cd_low_threshold.yfilter)
	|| ydk::is_set(optics_cd_max.yfilter)
	|| ydk::is_set(optics_cd_min.yfilter)
	|| ydk::is_set(optics_description.yfilter)
	|| ydk::is_set(optics_dgd_high_threshold.yfilter)
	|| ydk::is_set(optics_fec.yfilter)
	|| ydk::is_set(optics_lbc_high_threshold.yfilter)
	|| ydk::is_set(optics_loopback.yfilter)
	|| ydk::is_set(optics_osnr_low_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_channel_power.yfilter)
	|| ydk::is_set(optics_ots_amplifier_control_mode.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_degrade_high_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_degrade_low_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_range.yfilter)
	|| ydk::is_set(optics_ots_amplifier_tilt.yfilter)
	|| ydk::is_set(optics_ots_channel_power_max_delta.yfilter)
	|| ydk::is_set(optics_ots_osri.yfilter)
	|| ydk::is_set(optics_ots_rx_voa_attenuation.yfilter)
	|| ydk::is_set(optics_ots_safety_control_mode.yfilter)
	|| ydk::is_set(optics_ots_tx_voa_attenuation.yfilter)
	|| ydk::is_set(optics_performance_monitoring.yfilter)
	|| ydk::is_set(optics_transmit_power.yfilter)
	|| ydk::is_set(optics_transmit_shutdown.yfilter)
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_operation())
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_operation())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-cfg:optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (breakout.is_set || is_set(breakout.yfilter)) leaf_name_data.push_back(breakout.get_name_leafdata());
    if (optics_cd_high_threshold.is_set || is_set(optics_cd_high_threshold.yfilter)) leaf_name_data.push_back(optics_cd_high_threshold.get_name_leafdata());
    if (optics_cd_low_threshold.is_set || is_set(optics_cd_low_threshold.yfilter)) leaf_name_data.push_back(optics_cd_low_threshold.get_name_leafdata());
    if (optics_cd_max.is_set || is_set(optics_cd_max.yfilter)) leaf_name_data.push_back(optics_cd_max.get_name_leafdata());
    if (optics_cd_min.is_set || is_set(optics_cd_min.yfilter)) leaf_name_data.push_back(optics_cd_min.get_name_leafdata());
    if (optics_description.is_set || is_set(optics_description.yfilter)) leaf_name_data.push_back(optics_description.get_name_leafdata());
    if (optics_dgd_high_threshold.is_set || is_set(optics_dgd_high_threshold.yfilter)) leaf_name_data.push_back(optics_dgd_high_threshold.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.yfilter)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (optics_lbc_high_threshold.is_set || is_set(optics_lbc_high_threshold.yfilter)) leaf_name_data.push_back(optics_lbc_high_threshold.get_name_leafdata());
    if (optics_loopback.is_set || is_set(optics_loopback.yfilter)) leaf_name_data.push_back(optics_loopback.get_name_leafdata());
    if (optics_osnr_low_threshold.is_set || is_set(optics_osnr_low_threshold.yfilter)) leaf_name_data.push_back(optics_osnr_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_channel_power.is_set || is_set(optics_ots_amplifier_channel_power.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_channel_power.get_name_leafdata());
    if (optics_ots_amplifier_control_mode.is_set || is_set(optics_ots_amplifier_control_mode.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_control_mode.get_name_leafdata());
    if (optics_ots_amplifier_gain.is_set || is_set(optics_ots_amplifier_gain.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_high_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_high_threshold.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_high_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_low_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_low_threshold.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_range.is_set || is_set(optics_ots_amplifier_gain_range.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_range.get_name_leafdata());
    if (optics_ots_amplifier_tilt.is_set || is_set(optics_ots_amplifier_tilt.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_tilt.get_name_leafdata());
    if (optics_ots_channel_power_max_delta.is_set || is_set(optics_ots_channel_power_max_delta.yfilter)) leaf_name_data.push_back(optics_ots_channel_power_max_delta.get_name_leafdata());
    if (optics_ots_osri.is_set || is_set(optics_ots_osri.yfilter)) leaf_name_data.push_back(optics_ots_osri.get_name_leafdata());
    if (optics_ots_rx_voa_attenuation.is_set || is_set(optics_ots_rx_voa_attenuation.yfilter)) leaf_name_data.push_back(optics_ots_rx_voa_attenuation.get_name_leafdata());
    if (optics_ots_safety_control_mode.is_set || is_set(optics_ots_safety_control_mode.yfilter)) leaf_name_data.push_back(optics_ots_safety_control_mode.get_name_leafdata());
    if (optics_ots_tx_voa_attenuation.is_set || is_set(optics_ots_tx_voa_attenuation.yfilter)) leaf_name_data.push_back(optics_ots_tx_voa_attenuation.get_name_leafdata());
    if (optics_performance_monitoring.is_set || is_set(optics_performance_monitoring.yfilter)) leaf_name_data.push_back(optics_performance_monitoring.get_name_leafdata());
    if (optics_transmit_power.is_set || is_set(optics_transmit_power.yfilter)) leaf_name_data.push_back(optics_transmit_power.get_name_leafdata());
    if (optics_transmit_shutdown.is_set || is_set(optics_transmit_shutdown.yfilter)) leaf_name_data.push_back(optics_transmit_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-dwdm-carrier")
    {
        if(optics_dwdm_carrier == nullptr)
        {
            optics_dwdm_carrier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier>();
        }
        return optics_dwdm_carrier;
    }

    if(child_yang_name == "optics-lanes")
    {
        if(optics_lanes == nullptr)
        {
            optics_lanes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>();
        }
        return optics_lanes;
    }

    if(child_yang_name == "optics-network-srlgs")
    {
        if(optics_network_srlgs == nullptr)
        {
            optics_network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>();
        }
        return optics_network_srlgs;
    }

    if(child_yang_name == "rx-thresholds")
    {
        if(rx_thresholds == nullptr)
        {
            rx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>();
        }
        return rx_thresholds;
    }

    if(child_yang_name == "tx-thresholds")
    {
        if(tx_thresholds == nullptr)
        {
            tx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>();
        }
        return tx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_dwdm_carrier != nullptr)
    {
        children["optics-dwdm-carrier"] = optics_dwdm_carrier;
    }

    if(optics_lanes != nullptr)
    {
        children["optics-lanes"] = optics_lanes;
    }

    if(optics_network_srlgs != nullptr)
    {
        children["optics-network-srlgs"] = optics_network_srlgs;
    }

    if(rx_thresholds != nullptr)
    {
        children["rx-thresholds"] = rx_thresholds;
    }

    if(tx_thresholds != nullptr)
    {
        children["tx-thresholds"] = tx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "breakout")
    {
        breakout = value;
        breakout.value_namespace = name_space;
        breakout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold = value;
        optics_cd_high_threshold.value_namespace = name_space;
        optics_cd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold = value;
        optics_cd_low_threshold.value_namespace = name_space;
        optics_cd_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max = value;
        optics_cd_max.value_namespace = name_space;
        optics_cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min = value;
        optics_cd_min.value_namespace = name_space;
        optics_cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-description")
    {
        optics_description = value;
        optics_description.value_namespace = name_space;
        optics_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold = value;
        optics_dgd_high_threshold.value_namespace = name_space;
        optics_dgd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
        optics_fec.value_namespace = name_space;
        optics_fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold = value;
        optics_lbc_high_threshold.value_namespace = name_space;
        optics_lbc_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback = value;
        optics_loopback.value_namespace = name_space;
        optics_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold = value;
        optics_osnr_low_threshold.value_namespace = name_space;
        optics_osnr_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power = value;
        optics_ots_amplifier_channel_power.value_namespace = name_space;
        optics_ots_amplifier_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode = value;
        optics_ots_amplifier_control_mode.value_namespace = name_space;
        optics_ots_amplifier_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain = value;
        optics_ots_amplifier_gain.value_namespace = name_space;
        optics_ots_amplifier_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold = value;
        optics_ots_amplifier_gain_degrade_high_threshold.value_namespace = name_space;
        optics_ots_amplifier_gain_degrade_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold = value;
        optics_ots_amplifier_gain_degrade_low_threshold.value_namespace = name_space;
        optics_ots_amplifier_gain_degrade_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range = value;
        optics_ots_amplifier_gain_range.value_namespace = name_space;
        optics_ots_amplifier_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt = value;
        optics_ots_amplifier_tilt.value_namespace = name_space;
        optics_ots_amplifier_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta = value;
        optics_ots_channel_power_max_delta.value_namespace = name_space;
        optics_ots_channel_power_max_delta.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri = value;
        optics_ots_osri.value_namespace = name_space;
        optics_ots_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation = value;
        optics_ots_rx_voa_attenuation.value_namespace = name_space;
        optics_ots_rx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode = value;
        optics_ots_safety_control_mode.value_namespace = name_space;
        optics_ots_safety_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation = value;
        optics_ots_tx_voa_attenuation.value_namespace = name_space;
        optics_ots_tx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring = value;
        optics_performance_monitoring.value_namespace = name_space;
        optics_performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power = value;
        optics_transmit_power.value_namespace = name_space;
        optics_transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown = value;
        optics_transmit_shutdown.value_namespace = name_space;
        optics_transmit_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "breakout")
    {
        breakout.yfilter = yfilter;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max.yfilter = yfilter;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min.yfilter = yfilter;
    }
    if(value_path == "optics-description")
    {
        optics_description.yfilter = yfilter;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-fec")
    {
        optics_fec.yfilter = yfilter;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback.yfilter = yfilter;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt.yfilter = yfilter;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta.yfilter = yfilter;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri.yfilter = yfilter;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode.yfilter = yfilter;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power.yfilter = yfilter;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-dwdm-carrier" || name == "optics-lanes" || name == "optics-network-srlgs" || name == "rx-thresholds" || name == "tx-thresholds" || name == "breakout" || name == "optics-cd-high-threshold" || name == "optics-cd-low-threshold" || name == "optics-cd-max" || name == "optics-cd-min" || name == "optics-description" || name == "optics-dgd-high-threshold" || name == "optics-fec" || name == "optics-lbc-high-threshold" || name == "optics-loopback" || name == "optics-osnr-low-threshold" || name == "optics-ots-amplifier-channel-power" || name == "optics-ots-amplifier-control-mode" || name == "optics-ots-amplifier-gain" || name == "optics-ots-amplifier-gain-degrade-high-threshold" || name == "optics-ots-amplifier-gain-degrade-low-threshold" || name == "optics-ots-amplifier-gain-range" || name == "optics-ots-amplifier-tilt" || name == "optics-ots-channel-power-max-delta" || name == "optics-ots-osri" || name == "optics-ots-rx-voa-attenuation" || name == "optics-ots-safety-control-mode" || name == "optics-ots-tx-voa-attenuation" || name == "optics-performance-monitoring" || name == "optics-transmit-power" || name == "optics-transmit-shutdown")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::OpticsDwdmCarrier()
    :
    grid_type{YType::enumeration, "grid-type"},
    param_type{YType::enumeration, "param-type"},
    param_value{YType::uint32, "param-value"}
{

    yang_name = "optics-dwdm-carrier"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::~OpticsDwdmCarrier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_data() const
{
    return grid_type.is_set
	|| param_type.is_set
	|| param_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grid_type.yfilter)
	|| ydk::is_set(param_type.yfilter)
	|| ydk::is_set(param_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grid_type.is_set || is_set(grid_type.yfilter)) leaf_name_data.push_back(grid_type.get_name_leafdata());
    if (param_type.is_set || is_set(param_type.yfilter)) leaf_name_data.push_back(param_type.get_name_leafdata());
    if (param_value.is_set || is_set(param_value.yfilter)) leaf_name_data.push_back(param_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grid-type")
    {
        grid_type = value;
        grid_type.value_namespace = name_space;
        grid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-type")
    {
        param_type = value;
        param_type.value_namespace = name_space;
        param_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-value")
    {
        param_value = value;
        param_value.value_namespace = name_space;
        param_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grid-type")
    {
        grid_type.yfilter = yfilter;
    }
    if(value_path == "param-type")
    {
        param_type.yfilter = yfilter;
    }
    if(value_path == "param-value")
    {
        param_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grid-type" || name == "param-type" || name == "param-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLanes()
{

    yang_name = "optics-lanes"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::~OpticsLanes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_data() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_operation() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-lane")
    {
        for(auto const & c : optics_lane)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane>();
        c->parent = this;
        optics_lane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_lane)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-lane")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::OpticsLane()
    :
    index_{YType::int32, "index"},
    description{YType::str, "description"}
{

    yang_name = "optics-lane"; yang_parent_name = "optics-lanes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_data() const
{
    return index_.is_set
	|| description.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlgs()
{

    yang_name = "optics-network-srlgs"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::~OpticsNetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-network-srlg")
    {
        for(auto const & c : optics_network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg>();
        c->parent = this;
        optics_network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::OpticsNetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "optics-network-srlg"; yang_parent_name = "optics-network-srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::~OpticsNetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlg" <<"[set-id='" <<set_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThresholds()
{

    yang_name = "rx-thresholds"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::~RxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_data() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_operation() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-threshold")
    {
        for(auto const & c : rx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold>();
        c->parent = this;
        rx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::RxThreshold()
    :
    rx_threshold_type{YType::enumeration, "rx-threshold-type"},
    rx_threshold{YType::int32, "rx-threshold"}
{

    yang_name = "rx-threshold"; yang_parent_name = "rx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::~RxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_data() const
{
    return rx_threshold_type.is_set
	|| rx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_threshold_type.yfilter)
	|| ydk::is_set(rx_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-threshold" <<"[rx-threshold-type='" <<rx_threshold_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_threshold_type.is_set || is_set(rx_threshold_type.yfilter)) leaf_name_data.push_back(rx_threshold_type.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type = value;
        rx_threshold_type.value_namespace = name_space;
        rx_threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-threshold-type" || name == "rx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThresholds()
{

    yang_name = "tx-thresholds"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::~TxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_data() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_operation() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-threshold")
    {
        for(auto const & c : tx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold>();
        c->parent = this;
        tx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::TxThreshold()
    :
    tx_threshold_type{YType::enumeration, "tx-threshold-type"},
    tx_threshold{YType::int32, "tx-threshold"}
{

    yang_name = "tx-threshold"; yang_parent_name = "tx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::~TxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_data() const
{
    return tx_threshold_type.is_set
	|| tx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_threshold_type.yfilter)
	|| ydk::is_set(tx_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-threshold" <<"[tx-threshold-type='" <<tx_threshold_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_threshold_type.is_set || is_set(tx_threshold_type.yfilter)) leaf_name_data.push_back(tx_threshold_type.get_name_leafdata());
    if (tx_threshold.is_set || is_set(tx_threshold.yfilter)) leaf_name_data.push_back(tx_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type = value;
        tx_threshold_type.value_namespace = name_space;
        tx_threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold = value;
        tx_threshold.value_namespace = name_space;
        tx_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type.yfilter = yfilter;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-threshold-type" || name == "tx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Otu()
    :
    fec{YType::enumeration, "fec"},
    gcc{YType::empty, "gcc"},
    loopback{YType::enumeration, "loopback"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    sd{YType::uint32, "sd"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    sf{YType::uint32, "sf"}
    	,
    network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>())
	,otn_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>())
	,otn_expected_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>())
	,otn_expected_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>())
	,otn_expected_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>())
	,otn_send_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>())
	,otn_send_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>())
	,otn_send_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>())
	,otn_send_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>())
	,prbs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>())
	,proactive_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>())
{
    network_srlgs->parent = this;
    otn_expected_tti->parent = this;
    otn_expected_ttisapi->parent = this;
    otn_expected_ttitcmdapi->parent = this;
    otn_expected_ttitcmos->parent = this;
    otn_send_tti->parent = this;
    otn_send_ttisapi->parent = this;
    otn_send_ttitcmdapi->parent = this;
    otn_send_ttitcmos->parent = this;
    prbs->parent = this;
    proactive_protection->parent = this;

    yang_name = "otu"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_data() const
{
    return fec.is_set
	|| gcc.is_set
	|| loopback.is_set
	|| performance_monitoring.is_set
	|| sd.is_set
	|| secondary_admin_state.is_set
	|| sf.is_set
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_data())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_data())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_data())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_data())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_data())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_data())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_data())
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_data())
	|| (prbs !=  nullptr && prbs->has_data())
	|| (proactive_protection !=  nullptr && proactive_protection->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec.yfilter)
	|| ydk::is_set(gcc.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(performance_monitoring.yfilter)
	|| ydk::is_set(sd.yfilter)
	|| ydk::is_set(secondary_admin_state.yfilter)
	|| ydk::is_set(sf.yfilter)
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_operation())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_operation())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_operation())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_operation())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_operation())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_operation())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_operation())
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (proactive_protection !=  nullptr && proactive_protection->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-cfg:otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (gcc.is_set || is_set(gcc.yfilter)) leaf_name_data.push_back(gcc.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.yfilter)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (sd.is_set || is_set(sd.yfilter)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.yfilter)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (sf.is_set || is_set(sf.yfilter)) leaf_name_data.push_back(sf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "otn-expected-tti")
    {
        if(otn_expected_tti == nullptr)
        {
            otn_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>();
        }
        return otn_expected_tti;
    }

    if(child_yang_name == "otn-expected-ttisapi")
    {
        if(otn_expected_ttisapi == nullptr)
        {
            otn_expected_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>();
        }
        return otn_expected_ttisapi;
    }

    if(child_yang_name == "otn-expected-ttitcmdapi")
    {
        if(otn_expected_ttitcmdapi == nullptr)
        {
            otn_expected_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>();
        }
        return otn_expected_ttitcmdapi;
    }

    if(child_yang_name == "otn-expected-ttitcmos")
    {
        if(otn_expected_ttitcmos == nullptr)
        {
            otn_expected_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>();
        }
        return otn_expected_ttitcmos;
    }

    if(child_yang_name == "otn-send-tti")
    {
        if(otn_send_tti == nullptr)
        {
            otn_send_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>();
        }
        return otn_send_tti;
    }

    if(child_yang_name == "otn-send-ttisapi")
    {
        if(otn_send_ttisapi == nullptr)
        {
            otn_send_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>();
        }
        return otn_send_ttisapi;
    }

    if(child_yang_name == "otn-send-ttitcmdapi")
    {
        if(otn_send_ttitcmdapi == nullptr)
        {
            otn_send_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>();
        }
        return otn_send_ttitcmdapi;
    }

    if(child_yang_name == "otn-send-ttitcmos")
    {
        if(otn_send_ttitcmos == nullptr)
        {
            otn_send_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>();
        }
        return otn_send_ttitcmos;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "proactive-protection")
    {
        if(proactive_protection == nullptr)
        {
            proactive_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>();
        }
        return proactive_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_srlgs != nullptr)
    {
        children["network-srlgs"] = network_srlgs;
    }

    if(otn_expected_tti != nullptr)
    {
        children["otn-expected-tti"] = otn_expected_tti;
    }

    if(otn_expected_ttisapi != nullptr)
    {
        children["otn-expected-ttisapi"] = otn_expected_ttisapi;
    }

    if(otn_expected_ttitcmdapi != nullptr)
    {
        children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
    }

    if(otn_expected_ttitcmos != nullptr)
    {
        children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
    }

    if(otn_send_tti != nullptr)
    {
        children["otn-send-tti"] = otn_send_tti;
    }

    if(otn_send_ttisapi != nullptr)
    {
        children["otn-send-ttisapi"] = otn_send_ttisapi;
    }

    if(otn_send_ttitcmdapi != nullptr)
    {
        children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
    }

    if(otn_send_ttitcmos != nullptr)
    {
        children["otn-send-ttitcmos"] = otn_send_ttitcmos;
    }

    if(prbs != nullptr)
    {
        children["prbs"] = prbs;
    }

    if(proactive_protection != nullptr)
    {
        children["proactive-protection"] = proactive_protection;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gcc")
    {
        gcc = value;
        gcc.value_namespace = name_space;
        gcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
        performance_monitoring.value_namespace = name_space;
        performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd")
    {
        sd = value;
        sd.value_namespace = name_space;
        sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
        secondary_admin_state.value_namespace = name_space;
        secondary_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf")
    {
        sf = value;
        sf.value_namespace = name_space;
        sf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
    if(value_path == "gcc")
    {
        gcc.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "sd")
    {
        sd.yfilter = yfilter;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state.yfilter = yfilter;
    }
    if(value_path == "sf")
    {
        sf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlgs" || name == "otn-expected-tti" || name == "otn-expected-ttisapi" || name == "otn-expected-ttitcmdapi" || name == "otn-expected-ttitcmos" || name == "otn-send-tti" || name == "otn-send-ttisapi" || name == "otn-send-ttitcmdapi" || name == "otn-send-ttitcmos" || name == "prbs" || name == "proactive-protection" || name == "fec" || name == "gcc" || name == "loopback" || name == "performance-monitoring" || name == "sd" || name == "secondary-admin-state" || name == "sf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlgs()
{

    yang_name = "network-srlgs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        for(auto const & c : network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "network-srlg"; yang_parent_name = "network-srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::OtnExpectedTti()
    :
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-expected-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::~OtnExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_data() const
{
    return full_ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_ascii_string.is_set || is_set(full_ascii_string.yfilter)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
        full_ascii_string.value_namespace = name_space;
        full_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-ascii-string" || name == "hex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::OtnExpectedTtisapi()
    :
    sapi_ascii_string{YType::str, "sapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-expected-ttisapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::~OtnExpectedTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_data() const
{
    return sapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sapi_ascii_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttisapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.yfilter)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
        sapi_ascii_string.value_namespace = name_space;
        sapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi-ascii-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::OtnExpectedTtitcmdapi()
    :
    dapi_ascii_string{YType::str, "dapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-expected-ttitcmdapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::~OtnExpectedTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_data() const
{
    return dapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dapi_ascii_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmdapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.yfilter)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
        dapi_ascii_string.value_namespace = name_space;
        dapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dapi-ascii-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::OtnExpectedTtitcmos()
    :
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-expected-ttitcmos"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::~OtnExpectedTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_data() const
{
    return osascii_string.is_set
	|| oshex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(osascii_string.yfilter)
	|| ydk::is_set(oshex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (osascii_string.is_set || is_set(osascii_string.yfilter)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.yfilter)) leaf_name_data.push_back(oshex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "osascii-string")
    {
        osascii_string = value;
        osascii_string.value_namespace = name_space;
        osascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
        oshex_string.value_namespace = name_space;
        oshex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "osascii-string")
    {
        osascii_string.yfilter = yfilter;
    }
    if(value_path == "oshex-string")
    {
        oshex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "osascii-string" || name == "oshex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::OtnSendTti()
    :
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-send-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::~OtnSendTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_data() const
{
    return full_ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_ascii_string.is_set || is_set(full_ascii_string.yfilter)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
        full_ascii_string.value_namespace = name_space;
        full_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-ascii-string" || name == "hex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::OtnSendTtisapi()
    :
    sapi_ascii_string{YType::str, "sapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-send-ttisapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::~OtnSendTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_data() const
{
    return sapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sapi_ascii_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttisapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.yfilter)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
        sapi_ascii_string.value_namespace = name_space;
        sapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi-ascii-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::OtnSendTtitcmdapi()
    :
    dapi_ascii_string{YType::str, "dapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-send-ttitcmdapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::~OtnSendTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_data() const
{
    return dapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dapi_ascii_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmdapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.yfilter)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
        dapi_ascii_string.value_namespace = name_space;
        dapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dapi-ascii-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::OtnSendTtitcmos()
    :
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otn-send-ttitcmos"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::~OtnSendTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_data() const
{
    return osascii_string.is_set
	|| oshex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(osascii_string.yfilter)
	|| ydk::is_set(oshex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (osascii_string.is_set || is_set(osascii_string.yfilter)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.yfilter)) leaf_name_data.push_back(oshex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "osascii-string")
    {
        osascii_string = value;
        osascii_string.value_namespace = name_space;
        osascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
        oshex_string.value_namespace = name_space;
        oshex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "osascii-string")
    {
        osascii_string.yfilter = yfilter;
    }
    if(value_path == "oshex-string")
    {
        oshex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "osascii-string" || name == "oshex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::Prbs()
    :
    mode_value{YType::enumeration, "mode-value"},
    patternvalue{YType::enumeration, "patternvalue"}
{

    yang_name = "prbs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_data() const
{
    return mode_value.is_set
	|| patternvalue.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_value.yfilter)
	|| ydk::is_set(patternvalue.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_value.is_set || is_set(mode_value.yfilter)) leaf_name_data.push_back(mode_value.get_name_leafdata());
    if (patternvalue.is_set || is_set(patternvalue.yfilter)) leaf_name_data.push_back(patternvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-value")
    {
        mode_value = value;
        mode_value.value_namespace = name_space;
        mode_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "patternvalue")
    {
        patternvalue = value;
        patternvalue.value_namespace = name_space;
        patternvalue.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-value")
    {
        mode_value.yfilter = yfilter;
    }
    if(value_path == "patternvalue")
    {
        patternvalue.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-value" || name == "patternvalue")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::ProactiveProtection()
    :
    status{YType::empty, "status"}
    	,
    revert_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>())
	,revert_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>())
	,trigger_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>())
	,trigger_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>())
{
    revert_threshold->parent = this;
    revert_window->parent = this;
    trigger_threshold->parent = this;
    trigger_window->parent = this;

    yang_name = "proactive-protection"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::~ProactiveProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_data() const
{
    return status.is_set
	|| (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>();
        }
        return revert_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>();
        }
        return revert_window;
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>();
        }
        return trigger_window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_threshold != nullptr)
    {
        children["revert-threshold"] = revert_threshold;
    }

    if(revert_window != nullptr)
    {
        children["revert-window"] = revert_window;
    }

    if(trigger_threshold != nullptr)
    {
        children["trigger-threshold"] = trigger_threshold;
    }

    if(trigger_window != nullptr)
    {
        children["trigger-window"] = trigger_window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-threshold" || name == "revert-window" || name == "trigger-threshold" || name == "trigger-window" || name == "status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::RevertThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    enable{YType::empty, "enable"},
    power{YType::uint32, "power"}
{

    yang_name = "revert-threshold"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_data() const
{
    return coefficient.is_set
	|| enable.is_set
	|| power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coefficient.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.yfilter)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
        coefficient.value_namespace = name_space;
        coefficient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coefficient")
    {
        coefficient.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coefficient" || name == "enable" || name == "power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::RevertWindow()
    :
    enable{YType::empty, "enable"},
    value_{YType::uint32, "value"}
{

    yang_name = "revert-window"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_data() const
{
    return enable.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::TriggerThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    enable{YType::empty, "enable"},
    power{YType::uint32, "power"}
{

    yang_name = "trigger-threshold"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_data() const
{
    return coefficient.is_set
	|| enable.is_set
	|| power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coefficient.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.yfilter)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
        coefficient.value_namespace = name_space;
        coefficient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coefficient")
    {
        coefficient.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coefficient" || name == "enable" || name == "power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::TriggerWindow()
    :
    enable{YType::empty, "enable"},
    value_{YType::uint32, "value"}
{

    yang_name = "trigger-window"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_data() const
{
    return enable.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "pbr"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::~Pbr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_in.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-cfg:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-in")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{

    yang_name = "service-policy"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::PerformanceManagement()
    :
    ethernet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>())
	,ethernet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>())
	,ethernet_second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>())
	,ho_vc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>())
	,ho_vc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>())
	,hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>())
	,hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>())
	,hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>())
	,hour24otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms>())
	,minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>())
	,minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>())
	,minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>())
	,minute15otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms>())
	,oc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>())
	,oc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>())
	,second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>())
	,sonet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>())
	,sonet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>())
	,stm_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>())
	,stm_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>())
	,sts_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>())
	,sts_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>())
{
    ethernet_hour24->parent = this;
    ethernet_minute15->parent = this;
    ethernet_second30->parent = this;
    ho_vc_hour24->parent = this;
    ho_vc_minute15->parent = this;
    hour24->parent = this;
    hour24_gfp->parent = this;
    hour24_path->parent = this;
    hour24otn_tcms->parent = this;
    minute15->parent = this;
    minute15_gfp->parent = this;
    minute15_path->parent = this;
    minute15otn_tcms->parent = this;
    oc_hour24->parent = this;
    oc_minute15->parent = this;
    second30->parent = this;
    sonet_hour24->parent = this;
    sonet_minute15->parent = this;
    stm_hour24->parent = this;
    stm_minute15->parent = this;
    sts_hour24->parent = this;
    sts_minute15->parent = this;

    yang_name = "performance-management"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::~PerformanceManagement()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_data() const
{
    return (ethernet_hour24 !=  nullptr && ethernet_hour24->has_data())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_data())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_data())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data())
	|| (hour24 !=  nullptr && hour24->has_data())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_data())
	|| (hour24_path !=  nullptr && hour24_path->has_data())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_data())
	|| (minute15 !=  nullptr && minute15->has_data())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_data())
	|| (minute15_path !=  nullptr && minute15_path->has_data())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_data())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data())
	|| (second30 !=  nullptr && second30->has_data())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data())
	|| (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_data())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_operation())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_operation())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_operation())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation())
	|| (hour24 !=  nullptr && hour24->has_operation())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation())
	|| (hour24_path !=  nullptr && hour24_path->has_operation())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_operation())
	|| (minute15 !=  nullptr && minute15->has_operation())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation())
	|| (minute15_path !=  nullptr && minute15_path->has_operation())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_operation())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation())
	|| (second30 !=  nullptr && second30->has_operation())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation())
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-cfg:performance-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-hour24")
    {
        if(ethernet_hour24 == nullptr)
        {
            ethernet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>();
        }
        return ethernet_hour24;
    }

    if(child_yang_name == "ethernet-minute15")
    {
        if(ethernet_minute15 == nullptr)
        {
            ethernet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>();
        }
        return ethernet_minute15;
    }

    if(child_yang_name == "ethernet-second30")
    {
        if(ethernet_second30 == nullptr)
        {
            ethernet_second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>();
        }
        return ethernet_second30;
    }

    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 == nullptr)
        {
            ho_vc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>();
        }
        return ho_vc_hour24;
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 == nullptr)
        {
            ho_vc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>();
        }
        return ho_vc_minute15;
    }

    if(child_yang_name == "hour24")
    {
        if(hour24 == nullptr)
        {
            hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>();
        }
        return hour24;
    }

    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>();
        }
        return hour24_gfp;
    }

    if(child_yang_name == "hour24-path")
    {
        if(hour24_path == nullptr)
        {
            hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>();
        }
        return hour24_path;
    }

    if(child_yang_name == "hour24otn-tcms")
    {
        if(hour24otn_tcms == nullptr)
        {
            hour24otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms>();
        }
        return hour24otn_tcms;
    }

    if(child_yang_name == "minute15")
    {
        if(minute15 == nullptr)
        {
            minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>();
        }
        return minute15;
    }

    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>();
        }
        return minute15_gfp;
    }

    if(child_yang_name == "minute15-path")
    {
        if(minute15_path == nullptr)
        {
            minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>();
        }
        return minute15_path;
    }

    if(child_yang_name == "minute15otn-tcms")
    {
        if(minute15otn_tcms == nullptr)
        {
            minute15otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms>();
        }
        return minute15otn_tcms;
    }

    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 == nullptr)
        {
            oc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>();
        }
        return oc_hour24;
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 == nullptr)
        {
            oc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>();
        }
        return oc_minute15;
    }

    if(child_yang_name == "second30")
    {
        if(second30 == nullptr)
        {
            second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>();
        }
        return second30;
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 == nullptr)
        {
            sonet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>();
        }
        return sonet_hour24;
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 == nullptr)
        {
            sonet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>();
        }
        return sonet_minute15;
    }

    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 == nullptr)
        {
            stm_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>();
        }
        return stm_hour24;
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 == nullptr)
        {
            stm_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>();
        }
        return stm_minute15;
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 == nullptr)
        {
            sts_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>();
        }
        return sts_hour24;
    }

    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 == nullptr)
        {
            sts_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>();
        }
        return sts_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_hour24 != nullptr)
    {
        children["ethernet-hour24"] = ethernet_hour24;
    }

    if(ethernet_minute15 != nullptr)
    {
        children["ethernet-minute15"] = ethernet_minute15;
    }

    if(ethernet_second30 != nullptr)
    {
        children["ethernet-second30"] = ethernet_second30;
    }

    if(ho_vc_hour24 != nullptr)
    {
        children["ho-vc-hour24"] = ho_vc_hour24;
    }

    if(ho_vc_minute15 != nullptr)
    {
        children["ho-vc-minute15"] = ho_vc_minute15;
    }

    if(hour24 != nullptr)
    {
        children["hour24"] = hour24;
    }

    if(hour24_gfp != nullptr)
    {
        children["hour24-gfp"] = hour24_gfp;
    }

    if(hour24_path != nullptr)
    {
        children["hour24-path"] = hour24_path;
    }

    if(hour24otn_tcms != nullptr)
    {
        children["hour24otn-tcms"] = hour24otn_tcms;
    }

    if(minute15 != nullptr)
    {
        children["minute15"] = minute15;
    }

    if(minute15_gfp != nullptr)
    {
        children["minute15-gfp"] = minute15_gfp;
    }

    if(minute15_path != nullptr)
    {
        children["minute15-path"] = minute15_path;
    }

    if(minute15otn_tcms != nullptr)
    {
        children["minute15otn-tcms"] = minute15otn_tcms;
    }

    if(oc_hour24 != nullptr)
    {
        children["oc-hour24"] = oc_hour24;
    }

    if(oc_minute15 != nullptr)
    {
        children["oc-minute15"] = oc_minute15;
    }

    if(second30 != nullptr)
    {
        children["second30"] = second30;
    }

    if(sonet_hour24 != nullptr)
    {
        children["sonet-hour24"] = sonet_hour24;
    }

    if(sonet_minute15 != nullptr)
    {
        children["sonet-minute15"] = sonet_minute15;
    }

    if(stm_hour24 != nullptr)
    {
        children["stm-hour24"] = stm_hour24;
    }

    if(stm_minute15 != nullptr)
    {
        children["stm-minute15"] = stm_minute15;
    }

    if(sts_hour24 != nullptr)
    {
        children["sts-hour24"] = sts_hour24;
    }

    if(sts_minute15 != nullptr)
    {
        children["sts-minute15"] = sts_minute15;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-hour24" || name == "ethernet-minute15" || name == "ethernet-second30" || name == "ho-vc-hour24" || name == "ho-vc-minute15" || name == "hour24" || name == "hour24-gfp" || name == "hour24-path" || name == "hour24otn-tcms" || name == "minute15" || name == "minute15-gfp" || name == "minute15-path" || name == "minute15otn-tcms" || name == "oc-hour24" || name == "oc-minute15" || name == "second30" || name == "sonet-hour24" || name == "sonet-minute15" || name == "stm-hour24" || name == "stm-minute15" || name == "sts-hour24" || name == "sts-minute15")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::EthernetHour24()
    :
    hour24_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>())
{
    hour24_ether->parent = this;

    yang_name = "ethernet-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::~EthernetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_data() const
{
    return (hour24_ether !=  nullptr && hour24_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether !=  nullptr && hour24_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether")
    {
        if(hour24_ether == nullptr)
        {
            hour24_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>();
        }
        return hour24_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_ether != nullptr)
    {
        children["hour24-ether"] = hour24_ether;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24Ether()
    :
    hour24_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>())
	,hour24_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>())
{
    hour24_ether_reports->parent = this;
    hour24_ether_thresholds->parent = this;

    yang_name = "hour24-ether"; yang_parent_name = "ethernet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::~Hour24Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_data() const
{
    return (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_data())
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_operation())
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-reports")
    {
        if(hour24_ether_reports == nullptr)
        {
            hour24_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>();
        }
        return hour24_ether_reports;
    }

    if(child_yang_name == "hour24-ether-thresholds")
    {
        if(hour24_ether_thresholds == nullptr)
        {
            hour24_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>();
        }
        return hour24_ether_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_ether_reports != nullptr)
    {
        children["hour24-ether-reports"] = hour24_ether_reports;
    }

    if(hour24_ether_thresholds != nullptr)
    {
        children["hour24-ether-thresholds"] = hour24_ether_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-reports" || name == "hour24-ether-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReports()
{

    yang_name = "hour24-ether-reports"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::~Hour24EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_data() const
{
    for (std::size_t index=0; index<hour24_ether_report.size(); index++)
    {
        if(hour24_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_report.size(); index++)
    {
        if(hour24_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-report")
    {
        for(auto const & c : hour24_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport>();
        c->parent = this;
        hour24_ether_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_ether_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::Hour24EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "hour24-ether-report"; yang_parent_name = "hour24-ether-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::~Hour24EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-report" <<"[ether-report='" <<ether_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThresholds()
{

    yang_name = "hour24-ether-thresholds"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::~Hour24EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.size(); index++)
    {
        if(hour24_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.size(); index++)
    {
        if(hour24_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-threshold")
    {
        for(auto const & c : hour24_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold>();
        c->parent = this;
        hour24_ether_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_ether_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::Hour24EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{

    yang_name = "hour24-ether-threshold"; yang_parent_name = "hour24-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::~Hour24EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::EthernetMinute15()
    :
    minute15_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>())
{
    minute15_ether->parent = this;

    yang_name = "ethernet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::~EthernetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_data() const
{
    return (minute15_ether !=  nullptr && minute15_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether !=  nullptr && minute15_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether")
    {
        if(minute15_ether == nullptr)
        {
            minute15_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>();
        }
        return minute15_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether != nullptr)
    {
        children["minute15-ether"] = minute15_ether;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15Ether()
    :
    minute15_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>())
	,minute15_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>())
{
    minute15_ether_reports->parent = this;
    minute15_ether_thresholds->parent = this;

    yang_name = "minute15-ether"; yang_parent_name = "ethernet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::~Minute15Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_data() const
{
    return (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_data())
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_operation())
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-reports")
    {
        if(minute15_ether_reports == nullptr)
        {
            minute15_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>();
        }
        return minute15_ether_reports;
    }

    if(child_yang_name == "minute15-ether-thresholds")
    {
        if(minute15_ether_thresholds == nullptr)
        {
            minute15_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>();
        }
        return minute15_ether_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether_reports != nullptr)
    {
        children["minute15-ether-reports"] = minute15_ether_reports;
    }

    if(minute15_ether_thresholds != nullptr)
    {
        children["minute15-ether-thresholds"] = minute15_ether_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-reports" || name == "minute15-ether-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReports()
{

    yang_name = "minute15-ether-reports"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::~Minute15EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_report.size(); index++)
    {
        if(minute15_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_report.size(); index++)
    {
        if(minute15_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-report")
    {
        for(auto const & c : minute15_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport>();
        c->parent = this;
        minute15_ether_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::Minute15EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "minute15-ether-report"; yang_parent_name = "minute15-ether-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::~Minute15EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-report" <<"[ether-report='" <<ether_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThresholds()
{

    yang_name = "minute15-ether-thresholds"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::~Minute15EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.size(); index++)
    {
        if(minute15_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.size(); index++)
    {
        if(minute15_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-threshold")
    {
        for(auto const & c : minute15_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold>();
        c->parent = this;
        minute15_ether_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::Minute15EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{

    yang_name = "minute15-ether-threshold"; yang_parent_name = "minute15-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::~Minute15EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::EthernetSecond30()
    :
    second30_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether>())
{
    second30_ether->parent = this;

    yang_name = "ethernet-second30"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::~EthernetSecond30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::has_data() const
{
    return (second30_ether !=  nullptr && second30_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (second30_ether !=  nullptr && second30_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether")
    {
        if(second30_ether == nullptr)
        {
            second30_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether>();
        }
        return second30_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_ether != nullptr)
    {
        children["second30-ether"] = second30_ether;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30Ether()
    :
    second30_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>())
	,second30_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds>())
{
    second30_ether_reports->parent = this;
    second30_ether_thresholds->parent = this;

    yang_name = "second30-ether"; yang_parent_name = "ethernet-second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::~Second30Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_data() const
{
    return (second30_ether_reports !=  nullptr && second30_ether_reports->has_data())
	|| (second30_ether_thresholds !=  nullptr && second30_ether_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_operation() const
{
    return is_set(yfilter)
	|| (second30_ether_reports !=  nullptr && second30_ether_reports->has_operation())
	|| (second30_ether_thresholds !=  nullptr && second30_ether_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-reports")
    {
        if(second30_ether_reports == nullptr)
        {
            second30_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>();
        }
        return second30_ether_reports;
    }

    if(child_yang_name == "second30-ether-thresholds")
    {
        if(second30_ether_thresholds == nullptr)
        {
            second30_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds>();
        }
        return second30_ether_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_ether_reports != nullptr)
    {
        children["second30-ether-reports"] = second30_ether_reports;
    }

    if(second30_ether_thresholds != nullptr)
    {
        children["second30-ether-thresholds"] = second30_ether_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-reports" || name == "second30-ether-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReports()
{

    yang_name = "second30-ether-reports"; yang_parent_name = "second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::~Second30EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_data() const
{
    for (std::size_t index=0; index<second30_ether_report.size(); index++)
    {
        if(second30_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_report.size(); index++)
    {
        if(second30_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-report")
    {
        for(auto const & c : second30_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport>();
        c->parent = this;
        second30_ether_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_ether_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::Second30EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "second30-ether-report"; yang_parent_name = "second30-ether-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::~Second30EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-report" <<"[ether-report='" <<ether_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThresholds()
{

    yang_name = "second30-ether-thresholds"; yang_parent_name = "second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::~Second30EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<second30_ether_threshold.size(); index++)
    {
        if(second30_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_threshold.size(); index++)
    {
        if(second30_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-threshold")
    {
        for(auto const & c : second30_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold>();
        c->parent = this;
        second30_ether_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_ether_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::Second30EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{

    yang_name = "second30-ether-threshold"; yang_parent_name = "second30-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::~Second30EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc>())
{
    ho_vc_hour24ho_vc->parent = this;

    yang_name = "ho-vc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::~HoVcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_data() const
{
    return (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc")
    {
        if(ho_vc_hour24ho_vc == nullptr)
        {
            ho_vc_hour24ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc>();
        }
        return ho_vc_hour24ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24ho_vc != nullptr)
    {
        children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVc()
    :
    ho_vc_hour24ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports>())
	,ho_vc_hour24ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds>())
{
    ho_vc_hour24ho_vc_reports->parent = this;
    ho_vc_hour24ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-hour24ho-vc"; yang_parent_name = "ho-vc-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::~HoVcHour24HoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_data() const
{
    return (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_data())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_operation())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-reports")
    {
        if(ho_vc_hour24ho_vc_reports == nullptr)
        {
            ho_vc_hour24ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports>();
        }
        return ho_vc_hour24ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-thresholds")
    {
        if(ho_vc_hour24ho_vc_thresholds == nullptr)
        {
            ho_vc_hour24ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds>();
        }
        return ho_vc_hour24ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24ho_vc_reports != nullptr)
    {
        children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
    }

    if(ho_vc_hour24ho_vc_thresholds != nullptr)
    {
        children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-reports" || name == "ho-vc-hour24ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReports()
{

    yang_name = "ho-vc-hour24ho-vc-reports"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::~HoVcHour24HoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.size(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.size(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-report")
    {
        for(auto const & c : ho_vc_hour24ho_vc_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport>();
        c->parent = this;
        ho_vc_hour24ho_vc_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24ho_vc_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::HoVcHour24HoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-hour24ho-vc-report"; yang_parent_name = "ho-vc-hour24ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::~HoVcHour24HoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_data() const
{
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-report" <<"[ho-vc-report='" <<ho_vc_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
        ho_vc_report.value_namespace = name_space;
        ho_vc_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThresholds()
{

    yang_name = "ho-vc-hour24ho-vc-thresholds"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::~HoVcHour24HoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.size(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.size(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-threshold")
    {
        for(auto const & c : ho_vc_hour24ho_vc_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold>();
        c->parent = this;
        ho_vc_hour24ho_vc_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24ho_vc_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::HoVcHour24HoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::int32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-hour24ho-vc-threshold"; yang_parent_name = "ho-vc-hour24ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::~HoVcHour24HoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_data() const
{
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-threshold" <<"[ho-vc-threshold='" <<ho_vc_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
        ho_vc_threshold.value_namespace = name_space;
        ho_vc_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
        ho_vc_threshold_value.value_namespace = name_space;
        ho_vc_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold.yfilter = yfilter;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15()
    :
    ho_vc_minute15ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc>())
{
    ho_vc_minute15ho_vc->parent = this;

    yang_name = "ho-vc-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::~HoVcMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_data() const
{
    return (ho_vc_minute15ho_vc !=  nullptr && ho_vc_minute15ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15ho_vc !=  nullptr && ho_vc_minute15ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc")
    {
        if(ho_vc_minute15ho_vc == nullptr)
        {
            ho_vc_minute15ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc>();
        }
        return ho_vc_minute15ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_minute15ho_vc != nullptr)
    {
        children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVc()
    :
    ho_vc_minute15ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports>())
	,ho_vc_minute15ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds>())
{
    ho_vc_minute15ho_vc_reports->parent = this;
    ho_vc_minute15ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-minute15ho-vc"; yang_parent_name = "ho-vc-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::~HoVcMinute15HoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_data() const
{
    return (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_data())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_operation())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-reports")
    {
        if(ho_vc_minute15ho_vc_reports == nullptr)
        {
            ho_vc_minute15ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports>();
        }
        return ho_vc_minute15ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-thresholds")
    {
        if(ho_vc_minute15ho_vc_thresholds == nullptr)
        {
            ho_vc_minute15ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds>();
        }
        return ho_vc_minute15ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_minute15ho_vc_reports != nullptr)
    {
        children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;
    }

    if(ho_vc_minute15ho_vc_thresholds != nullptr)
    {
        children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-reports" || name == "ho-vc-minute15ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReports()
{

    yang_name = "ho-vc-minute15ho-vc-reports"; yang_parent_name = "ho-vc-minute15ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::~HoVcMinute15HoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.size(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.size(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-report")
    {
        for(auto const & c : ho_vc_minute15ho_vc_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport>();
        c->parent = this;
        ho_vc_minute15ho_vc_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_minute15ho_vc_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::HoVcMinute15HoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-minute15ho-vc-report"; yang_parent_name = "ho-vc-minute15ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::~HoVcMinute15HoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_data() const
{
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-report" <<"[ho-vc-report='" <<ho_vc_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
        ho_vc_report.value_namespace = name_space;
        ho_vc_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThresholds()
{

    yang_name = "ho-vc-minute15ho-vc-thresholds"; yang_parent_name = "ho-vc-minute15ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::~HoVcMinute15HoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.size(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.size(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-threshold")
    {
        for(auto const & c : ho_vc_minute15ho_vc_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold>();
        c->parent = this;
        ho_vc_minute15ho_vc_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_minute15ho_vc_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::HoVcMinute15HoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::int32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-minute15ho-vc-threshold"; yang_parent_name = "ho-vc-minute15ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::~HoVcMinute15HoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::has_data() const
{
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-threshold" <<"[ho-vc-threshold='" <<ho_vc_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
        ho_vc_threshold.value_namespace = name_space;
        ho_vc_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
        ho_vc_threshold_value.value_namespace = name_space;
        ho_vc_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold.yfilter = yfilter;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24()
    :
    hour24_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>())
	,hour24fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec>())
	,hour24otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn>())
	,hour24secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif>())
	,hour24secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx>())
	,hour24secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx>())
{
    hour24_optics->parent = this;
    hour24fec->parent = this;
    hour24otn->parent = this;
    hour24secyif->parent = this;
    hour24secyrx->parent = this;
    hour24secytx->parent = this;

    yang_name = "hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::~Hour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_data() const
{
    return (hour24_optics !=  nullptr && hour24_optics->has_data())
	|| (hour24fec !=  nullptr && hour24fec->has_data())
	|| (hour24otn !=  nullptr && hour24otn->has_data())
	|| (hour24secyif !=  nullptr && hour24secyif->has_data())
	|| (hour24secyrx !=  nullptr && hour24secyrx->has_data())
	|| (hour24secytx !=  nullptr && hour24secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_optics !=  nullptr && hour24_optics->has_operation())
	|| (hour24fec !=  nullptr && hour24fec->has_operation())
	|| (hour24otn !=  nullptr && hour24otn->has_operation())
	|| (hour24secyif !=  nullptr && hour24secyif->has_operation())
	|| (hour24secyrx !=  nullptr && hour24secyrx->has_operation())
	|| (hour24secytx !=  nullptr && hour24secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics")
    {
        if(hour24_optics == nullptr)
        {
            hour24_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>();
        }
        return hour24_optics;
    }

    if(child_yang_name == "hour24fec")
    {
        if(hour24fec == nullptr)
        {
            hour24fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec>();
        }
        return hour24fec;
    }

    if(child_yang_name == "hour24otn")
    {
        if(hour24otn == nullptr)
        {
            hour24otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn>();
        }
        return hour24otn;
    }

    if(child_yang_name == "hour24secyif")
    {
        if(hour24secyif == nullptr)
        {
            hour24secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif>();
        }
        return hour24secyif;
    }

    if(child_yang_name == "hour24secyrx")
    {
        if(hour24secyrx == nullptr)
        {
            hour24secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx>();
        }
        return hour24secyrx;
    }

    if(child_yang_name == "hour24secytx")
    {
        if(hour24secytx == nullptr)
        {
            hour24secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx>();
        }
        return hour24secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_optics != nullptr)
    {
        children["hour24-optics"] = hour24_optics;
    }

    if(hour24fec != nullptr)
    {
        children["hour24fec"] = hour24fec;
    }

    if(hour24otn != nullptr)
    {
        children["hour24otn"] = hour24otn;
    }

    if(hour24secyif != nullptr)
    {
        children["hour24secyif"] = hour24secyif;
    }

    if(hour24secyrx != nullptr)
    {
        children["hour24secyrx"] = hour24secyrx;
    }

    if(hour24secytx != nullptr)
    {
        children["hour24secytx"] = hour24secytx;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics" || name == "hour24fec" || name == "hour24otn" || name == "hour24secyif" || name == "hour24secyrx" || name == "hour24secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24Fec()
    :
    hour24fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports>())
	,hour24fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds>())
{
    hour24fec_reports->parent = this;
    hour24fec_thresholds->parent = this;

    yang_name = "hour24fec"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::~Hour24Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_data() const
{
    return (hour24fec_reports !=  nullptr && hour24fec_reports->has_data())
	|| (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_operation() const
{
    return is_set(yfilter)
	|| (hour24fec_reports !=  nullptr && hour24fec_reports->has_operation())
	|| (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-reports")
    {
        if(hour24fec_reports == nullptr)
        {
            hour24fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports>();
        }
        return hour24fec_reports;
    }

    if(child_yang_name == "hour24fec-thresholds")
    {
        if(hour24fec_thresholds == nullptr)
        {
            hour24fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds>();
        }
        return hour24fec_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24fec_reports != nullptr)
    {
        children["hour24fec-reports"] = hour24fec_reports;
    }

    if(hour24fec_thresholds != nullptr)
    {
        children["hour24fec-thresholds"] = hour24fec_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-reports" || name == "hour24fec-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReports()
{

    yang_name = "hour24fec-reports"; yang_parent_name = "hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::~Hour24FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_data() const
{
    for (std::size_t index=0; index<hour24fec_report.size(); index++)
    {
        if(hour24fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_report.size(); index++)
    {
        if(hour24fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-report")
    {
        for(auto const & c : hour24fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport>();
        c->parent = this;
        hour24fec_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24fec_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::Hour24FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24fec-report"; yang_parent_name = "hour24fec-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::~Hour24FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-report" <<"[fec-report='" <<fec_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
        fec_report.value_namespace = name_space;
        fec_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-report")
    {
        fec_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThresholds()
{

    yang_name = "hour24fec-thresholds"; yang_parent_name = "hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::~Hour24FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24fec_threshold.size(); index++)
    {
        if(hour24fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_threshold.size(); index++)
    {
        if(hour24fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-threshold")
    {
        for(auto const & c : hour24fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold>();
        c->parent = this;
        hour24fec_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24fec_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::Hour24FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "hour24fec-threshold"; yang_parent_name = "hour24fec-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::~Hour24FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
        fec_threshold.value_namespace = name_space;
        fec_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
        fec_threshold_value.value_namespace = name_space;
        fec_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold.yfilter = yfilter;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24Optics()
    :
    hour24_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>())
	,hour24_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>())
{
    hour24_optics_reports->parent = this;
    hour24_optics_thresholds->parent = this;

    yang_name = "hour24-optics"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::~Hour24Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_data() const
{
    return (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_data())
	|| (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_operation())
	|| (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-reports")
    {
        if(hour24_optics_reports == nullptr)
        {
            hour24_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>();
        }
        return hour24_optics_reports;
    }

    if(child_yang_name == "hour24-optics-thresholds")
    {
        if(hour24_optics_thresholds == nullptr)
        {
            hour24_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>();
        }
        return hour24_optics_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_optics_reports != nullptr)
    {
        children["hour24-optics-reports"] = hour24_optics_reports;
    }

    if(hour24_optics_thresholds != nullptr)
    {
        children["hour24-optics-thresholds"] = hour24_optics_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-reports" || name == "hour24-optics-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReports()
{

    yang_name = "hour24-optics-reports"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::~Hour24OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_data() const
{
    for (std::size_t index=0; index<hour24_optics_report.size(); index++)
    {
        if(hour24_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_report.size(); index++)
    {
        if(hour24_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-report")
    {
        for(auto const & c : hour24_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport>();
        c->parent = this;
        hour24_optics_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_optics_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::Hour24OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "hour24-optics-report"; yang_parent_name = "hour24-optics-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::~Hour24OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_data() const
{
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-report" <<"[optics-report='" <<optics_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThresholds()
{

    yang_name = "hour24-optics-thresholds"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::~Hour24OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.size(); index++)
    {
        if(hour24_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.size(); index++)
    {
        if(hour24_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-threshold")
    {
        for(auto const & c : hour24_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold>();
        c->parent = this;
        hour24_optics_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_optics_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::Hour24OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    dbm{YType::int32, "dbm"},
    optics_threshold_value{YType::int32, "optics-threshold-value"}
{

    yang_name = "hour24-optics-threshold"; yang_parent_name = "hour24-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::~Hour24OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| dbm.is_set
	|| optics_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(dbm.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
        optics_threshold.value_namespace = name_space;
        optics_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbm")
    {
        dbm = value;
        dbm.value_namespace = name_space;
        dbm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
        optics_threshold_value.value_namespace = name_space;
        optics_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold.yfilter = yfilter;
    }
    if(value_path == "dbm")
    {
        dbm.yfilter = yfilter;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "dbm" || name == "optics-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24Otn()
    :
    hour24otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports>())
	,hour24otn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds>())
{
    hour24otn_reports->parent = this;
    hour24otn_thresholds->parent = this;

    yang_name = "hour24otn"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::~Hour24Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_data() const
{
    return (hour24otn_reports !=  nullptr && hour24otn_reports->has_data())
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_operation())
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-reports")
    {
        if(hour24otn_reports == nullptr)
        {
            hour24otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports>();
        }
        return hour24otn_reports;
    }

    if(child_yang_name == "hour24otn-thresholds")
    {
        if(hour24otn_thresholds == nullptr)
        {
            hour24otn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds>();
        }
        return hour24otn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn_reports != nullptr)
    {
        children["hour24otn-reports"] = hour24otn_reports;
    }

    if(hour24otn_thresholds != nullptr)
    {
        children["hour24otn-thresholds"] = hour24otn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-reports" || name == "hour24otn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReports()
{

    yang_name = "hour24otn-reports"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::~Hour24OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_report.size(); index++)
    {
        if(hour24otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_report.size(); index++)
    {
        if(hour24otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-report")
    {
        for(auto const & c : hour24otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport>();
        c->parent = this;
        hour24otn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::Hour24OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-report"; yang_parent_name = "hour24otn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::~Hour24OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThresholds()
{

    yang_name = "hour24otn-thresholds"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::~Hour24OtnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_threshold.size(); index++)
    {
        if(hour24otn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_threshold.size(); index++)
    {
        if(hour24otn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-threshold")
    {
        for(auto const & c : hour24otn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold>();
        c->parent = this;
        hour24otn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::Hour24OtnThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "hour24otn-threshold"; yang_parent_name = "hour24otn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::~Hour24OtnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24Secyif()
    :
    hour24secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports>())
	,hour24secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds>())
{
    hour24secyif_reports->parent = this;
    hour24secyif_thresholds->parent = this;

    yang_name = "hour24secyif"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::~Hour24Secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::has_data() const
{
    return (hour24secyif_reports !=  nullptr && hour24secyif_reports->has_data())
	|| (hour24secyif_thresholds !=  nullptr && hour24secyif_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secyif_reports !=  nullptr && hour24secyif_reports->has_operation())
	|| (hour24secyif_thresholds !=  nullptr && hour24secyif_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-reports")
    {
        if(hour24secyif_reports == nullptr)
        {
            hour24secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports>();
        }
        return hour24secyif_reports;
    }

    if(child_yang_name == "hour24secyif-thresholds")
    {
        if(hour24secyif_thresholds == nullptr)
        {
            hour24secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds>();
        }
        return hour24secyif_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24secyif_reports != nullptr)
    {
        children["hour24secyif-reports"] = hour24secyif_reports;
    }

    if(hour24secyif_thresholds != nullptr)
    {
        children["hour24secyif-thresholds"] = hour24secyif_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-reports" || name == "hour24secyif-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReports()
{

    yang_name = "hour24secyif-reports"; yang_parent_name = "hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::~Hour24SecyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::has_data() const
{
    for (std::size_t index=0; index<hour24secyif_report.size(); index++)
    {
        if(hour24secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secyif_report.size(); index++)
    {
        if(hour24secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-report")
    {
        for(auto const & c : hour24secyif_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport>();
        c->parent = this;
        hour24secyif_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyif_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::Hour24SecyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secyif-report"; yang_parent_name = "hour24secyif-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::~Hour24SecyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::has_data() const
{
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-report" <<"[secyif-report='" <<secyif_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-report")
    {
        secyif_report = value;
        secyif_report.value_namespace = name_space;
        secyif_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-report")
    {
        secyif_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThresholds()
{

    yang_name = "hour24secyif-thresholds"; yang_parent_name = "hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::~Hour24SecyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24secyif_threshold.size(); index++)
    {
        if(hour24secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secyif_threshold.size(); index++)
    {
        if(hour24secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-threshold")
    {
        for(auto const & c : hour24secyif_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold>();
        c->parent = this;
        hour24secyif_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyif_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::Hour24SecyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::int32, "secyif-threshold-value"}
{

    yang_name = "hour24secyif-threshold"; yang_parent_name = "hour24secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::~Hour24SecyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::has_data() const
{
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-threshold" <<"[secyif-threshold='" <<secyif_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold = value;
        secyif_threshold.value_namespace = name_space;
        secyif_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value = value;
        secyif_threshold_value.value_namespace = name_space;
        secyif_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold.yfilter = yfilter;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24Secyrx()
    :
    hour24secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports>())
	,hour24secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds>())
{
    hour24secyrx_reports->parent = this;
    hour24secyrx_thresholds->parent = this;

    yang_name = "hour24secyrx"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::~Hour24Secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::has_data() const
{
    return (hour24secyrx_reports !=  nullptr && hour24secyrx_reports->has_data())
	|| (hour24secyrx_thresholds !=  nullptr && hour24secyrx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secyrx_reports !=  nullptr && hour24secyrx_reports->has_operation())
	|| (hour24secyrx_thresholds !=  nullptr && hour24secyrx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-reports")
    {
        if(hour24secyrx_reports == nullptr)
        {
            hour24secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports>();
        }
        return hour24secyrx_reports;
    }

    if(child_yang_name == "hour24secyrx-thresholds")
    {
        if(hour24secyrx_thresholds == nullptr)
        {
            hour24secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds>();
        }
        return hour24secyrx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24secyrx_reports != nullptr)
    {
        children["hour24secyrx-reports"] = hour24secyrx_reports;
    }

    if(hour24secyrx_thresholds != nullptr)
    {
        children["hour24secyrx-thresholds"] = hour24secyrx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-reports" || name == "hour24secyrx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReports()
{

    yang_name = "hour24secyrx-reports"; yang_parent_name = "hour24secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::~Hour24SecyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::has_data() const
{
    for (std::size_t index=0; index<hour24secyrx_report.size(); index++)
    {
        if(hour24secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secyrx_report.size(); index++)
    {
        if(hour24secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-report")
    {
        for(auto const & c : hour24secyrx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport>();
        c->parent = this;
        hour24secyrx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyrx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::Hour24SecyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secyrx-report"; yang_parent_name = "hour24secyrx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::~Hour24SecyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::has_data() const
{
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-report" <<"[secyrx-report='" <<secyrx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report = value;
        secyrx_report.value_namespace = name_space;
        secyrx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThresholds()
{

    yang_name = "hour24secyrx-thresholds"; yang_parent_name = "hour24secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::~Hour24SecyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24secyrx_threshold.size(); index++)
    {
        if(hour24secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secyrx_threshold.size(); index++)
    {
        if(hour24secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-threshold")
    {
        for(auto const & c : hour24secyrx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold>();
        c->parent = this;
        hour24secyrx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyrx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::Hour24SecyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::int32, "secyrx-threshold-value"}
{

    yang_name = "hour24secyrx-threshold"; yang_parent_name = "hour24secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::~Hour24SecyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::has_data() const
{
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-threshold" <<"[secyrx-threshold='" <<secyrx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold = value;
        secyrx_threshold.value_namespace = name_space;
        secyrx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value = value;
        secyrx_threshold_value.value_namespace = name_space;
        secyrx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold.yfilter = yfilter;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24Secytx()
    :
    hour24secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports>())
	,hour24secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds>())
{
    hour24secytx_reports->parent = this;
    hour24secytx_thresholds->parent = this;

    yang_name = "hour24secytx"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::~Hour24Secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::has_data() const
{
    return (hour24secytx_reports !=  nullptr && hour24secytx_reports->has_data())
	|| (hour24secytx_thresholds !=  nullptr && hour24secytx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secytx_reports !=  nullptr && hour24secytx_reports->has_operation())
	|| (hour24secytx_thresholds !=  nullptr && hour24secytx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-reports")
    {
        if(hour24secytx_reports == nullptr)
        {
            hour24secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports>();
        }
        return hour24secytx_reports;
    }

    if(child_yang_name == "hour24secytx-thresholds")
    {
        if(hour24secytx_thresholds == nullptr)
        {
            hour24secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds>();
        }
        return hour24secytx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24secytx_reports != nullptr)
    {
        children["hour24secytx-reports"] = hour24secytx_reports;
    }

    if(hour24secytx_thresholds != nullptr)
    {
        children["hour24secytx-thresholds"] = hour24secytx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-reports" || name == "hour24secytx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReports()
{

    yang_name = "hour24secytx-reports"; yang_parent_name = "hour24secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::~Hour24SecytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::has_data() const
{
    for (std::size_t index=0; index<hour24secytx_report.size(); index++)
    {
        if(hour24secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secytx_report.size(); index++)
    {
        if(hour24secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-report")
    {
        for(auto const & c : hour24secytx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport>();
        c->parent = this;
        hour24secytx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secytx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::Hour24SecytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secytx-report"; yang_parent_name = "hour24secytx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::~Hour24SecytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::has_data() const
{
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-report" <<"[secytx-report='" <<secytx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secytx-report")
    {
        secytx_report = value;
        secytx_report.value_namespace = name_space;
        secytx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secytx-report")
    {
        secytx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThresholds()
{

    yang_name = "hour24secytx-thresholds"; yang_parent_name = "hour24secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::~Hour24SecytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24secytx_threshold.size(); index++)
    {
        if(hour24secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secytx_threshold.size(); index++)
    {
        if(hour24secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-threshold")
    {
        for(auto const & c : hour24secytx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold>();
        c->parent = this;
        hour24secytx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secytx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::Hour24SecytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::int32, "secytx-threshold-value"}
{

    yang_name = "hour24secytx-threshold"; yang_parent_name = "hour24secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::~Hour24SecytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::has_data() const
{
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-threshold" <<"[secytx-threshold='" <<secytx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secytx-threshold")
    {
        secytx_threshold = value;
        secytx_threshold.value_namespace = name_space;
        secytx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secytx-threshold-value")
    {
        secytx_threshold_value = value;
        secytx_threshold_value.value_namespace = name_space;
        secytx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secytx-threshold")
    {
        secytx_threshold.yfilter = yfilter;
    }
    if(value_path == "secytx-threshold-value")
    {
        secytx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp()
    :
    hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>())
{
    hour24_gfp->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::~Hour24Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_data() const
{
    return (hour24_gfp !=  nullptr && hour24_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>();
        }
        return hour24_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_gfp != nullptr)
    {
        children["hour24-gfp"] = hour24_gfp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24Gfp_()
    :
    hour24_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>())
	,hour24_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>())
{
    hour24_gfp_reports->parent = this;
    hour24_gfp_thresholds->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::~Hour24Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_data() const
{
    return (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_data())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_operation())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-reports")
    {
        if(hour24_gfp_reports == nullptr)
        {
            hour24_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>();
        }
        return hour24_gfp_reports;
    }

    if(child_yang_name == "hour24-gfp-thresholds")
    {
        if(hour24_gfp_thresholds == nullptr)
        {
            hour24_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>();
        }
        return hour24_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_gfp_reports != nullptr)
    {
        children["hour24-gfp-reports"] = hour24_gfp_reports;
    }

    if(hour24_gfp_thresholds != nullptr)
    {
        children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-reports" || name == "hour24-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReports()
{

    yang_name = "hour24-gfp-reports"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::~Hour24GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_data() const
{
    for (std::size_t index=0; index<hour24_gfp_report.size(); index++)
    {
        if(hour24_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_report.size(); index++)
    {
        if(hour24_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-report")
    {
        for(auto const & c : hour24_gfp_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport>();
        c->parent = this;
        hour24_gfp_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_gfp_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::Hour24GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "hour24-gfp-report"; yang_parent_name = "hour24-gfp-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::~Hour24GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_data() const
{
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-report" <<"[gfp-report='" <<gfp_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThresholds()
{

    yang_name = "hour24-gfp-thresholds"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::~Hour24GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.size(); index++)
    {
        if(hour24_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.size(); index++)
    {
        if(hour24_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-threshold")
    {
        for(auto const & c : hour24_gfp_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold>();
        c->parent = this;
        hour24_gfp_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_gfp_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::Hour24GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::int32, "gfp-threshold-value"}
{

    yang_name = "hour24-gfp-threshold"; yang_parent_name = "hour24-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::~Hour24GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_data() const
{
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-threshold" <<"[gfp-threshold='" <<gfp_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcms()
{

    yang_name = "hour24otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::~Hour24OtnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm.size(); index++)
    {
        if(hour24otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm.size(); index++)
    {
        if(hour24otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm")
    {
        for(auto const & c : hour24otn_tcm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm>();
        c->parent = this;
        hour24otn_tcm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_tcm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcm()
    :
    tcm_number{YType::int32, "tcm-number"}
    	,
    hour24otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports>())
	,hour24otn_tcm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds>())
{
    hour24otn_tcm_reports->parent = this;
    hour24otn_tcm_thresholds->parent = this;

    yang_name = "hour24otn-tcm"; yang_parent_name = "hour24otn-tcms"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::~Hour24OtnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_data() const
{
    return tcm_number.is_set
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_data())
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_operation())
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm" <<"[tcm-number='" <<tcm_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-reports")
    {
        if(hour24otn_tcm_reports == nullptr)
        {
            hour24otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports>();
        }
        return hour24otn_tcm_reports;
    }

    if(child_yang_name == "hour24otn-tcm-thresholds")
    {
        if(hour24otn_tcm_thresholds == nullptr)
        {
            hour24otn_tcm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds>();
        }
        return hour24otn_tcm_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn_tcm_reports != nullptr)
    {
        children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
    }

    if(hour24otn_tcm_thresholds != nullptr)
    {
        children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-reports" || name == "hour24otn-tcm-thresholds" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReports()
{

    yang_name = "hour24otn-tcm-reports"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::~Hour24OtnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.size(); index++)
    {
        if(hour24otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.size(); index++)
    {
        if(hour24otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-report")
    {
        for(auto const & c : hour24otn_tcm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport>();
        c->parent = this;
        hour24otn_tcm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_tcm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::Hour24OtnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-tcm-report"; yang_parent_name = "hour24otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::~Hour24OtnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThresholds()
{

    yang_name = "hour24otn-tcm-thresholds"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::~Hour24OtnTcmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.size(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.size(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-threshold")
    {
        for(auto const & c : hour24otn_tcm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold>();
        c->parent = this;
        hour24otn_tcm_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_tcm_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::Hour24OtnTcmThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "hour24otn-tcm-threshold"; yang_parent_name = "hour24otn-tcm-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::~Hour24OtnTcmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24Path()
    :
    hour24otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath>())
{
    hour24otn_path->parent = this;

    yang_name = "hour24-path"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::~Hour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_data() const
{
    return (hour24otn_path !=  nullptr && hour24otn_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_path !=  nullptr && hour24otn_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path")
    {
        if(hour24otn_path == nullptr)
        {
            hour24otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath>();
        }
        return hour24otn_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn_path != nullptr)
    {
        children["hour24otn-path"] = hour24otn_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPath()
    :
    hour24otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports>())
	,hour24otn_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds>())
{
    hour24otn_path_reports->parent = this;
    hour24otn_path_thresholds->parent = this;

    yang_name = "hour24otn-path"; yang_parent_name = "hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::~Hour24OtnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::has_data() const
{
    return (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_data())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_operation())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-reports")
    {
        if(hour24otn_path_reports == nullptr)
        {
            hour24otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports>();
        }
        return hour24otn_path_reports;
    }

    if(child_yang_name == "hour24otn-path-thresholds")
    {
        if(hour24otn_path_thresholds == nullptr)
        {
            hour24otn_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds>();
        }
        return hour24otn_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn_path_reports != nullptr)
    {
        children["hour24otn-path-reports"] = hour24otn_path_reports;
    }

    if(hour24otn_path_thresholds != nullptr)
    {
        children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-reports" || name == "hour24otn-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReports()
{

    yang_name = "hour24otn-path-reports"; yang_parent_name = "hour24otn-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::~Hour24OtnPathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_path_report.size(); index++)
    {
        if(hour24otn_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_path_report.size(); index++)
    {
        if(hour24otn_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-report")
    {
        for(auto const & c : hour24otn_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport>();
        c->parent = this;
        hour24otn_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::Hour24OtnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-path-report"; yang_parent_name = "hour24otn-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::~Hour24OtnPathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThresholds()
{

    yang_name = "hour24otn-path-thresholds"; yang_parent_name = "hour24otn-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::~Hour24OtnPathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_path_threshold.size(); index++)
    {
        if(hour24otn_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_path_threshold.size(); index++)
    {
        if(hour24otn_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-threshold")
    {
        for(auto const & c : hour24otn_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold>();
        c->parent = this;
        hour24otn_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::Hour24OtnPathThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "hour24otn-path-threshold"; yang_parent_name = "hour24otn-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::~Hour24OtnPathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15()
    :
    minute15_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>())
	,minute15fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec>())
	,minute15otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn>())
	,minute15secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif>())
	,minute15secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx>())
	,minute15secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx>())
{
    minute15_optics->parent = this;
    minute15fec->parent = this;
    minute15otn->parent = this;
    minute15secyif->parent = this;
    minute15secyrx->parent = this;
    minute15secytx->parent = this;

    yang_name = "minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::~Minute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_data() const
{
    return (minute15_optics !=  nullptr && minute15_optics->has_data())
	|| (minute15fec !=  nullptr && minute15fec->has_data())
	|| (minute15otn !=  nullptr && minute15otn->has_data())
	|| (minute15secyif !=  nullptr && minute15secyif->has_data())
	|| (minute15secyrx !=  nullptr && minute15secyrx->has_data())
	|| (minute15secytx !=  nullptr && minute15secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_optics !=  nullptr && minute15_optics->has_operation())
	|| (minute15fec !=  nullptr && minute15fec->has_operation())
	|| (minute15otn !=  nullptr && minute15otn->has_operation())
	|| (minute15secyif !=  nullptr && minute15secyif->has_operation())
	|| (minute15secyrx !=  nullptr && minute15secyrx->has_operation())
	|| (minute15secytx !=  nullptr && minute15secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics")
    {
        if(minute15_optics == nullptr)
        {
            minute15_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>();
        }
        return minute15_optics;
    }

    if(child_yang_name == "minute15fec")
    {
        if(minute15fec == nullptr)
        {
            minute15fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec>();
        }
        return minute15fec;
    }

    if(child_yang_name == "minute15otn")
    {
        if(minute15otn == nullptr)
        {
            minute15otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn>();
        }
        return minute15otn;
    }

    if(child_yang_name == "minute15secyif")
    {
        if(minute15secyif == nullptr)
        {
            minute15secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif>();
        }
        return minute15secyif;
    }

    if(child_yang_name == "minute15secyrx")
    {
        if(minute15secyrx == nullptr)
        {
            minute15secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx>();
        }
        return minute15secyrx;
    }

    if(child_yang_name == "minute15secytx")
    {
        if(minute15secytx == nullptr)
        {
            minute15secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx>();
        }
        return minute15secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_optics != nullptr)
    {
        children["minute15-optics"] = minute15_optics;
    }

    if(minute15fec != nullptr)
    {
        children["minute15fec"] = minute15fec;
    }

    if(minute15otn != nullptr)
    {
        children["minute15otn"] = minute15otn;
    }

    if(minute15secyif != nullptr)
    {
        children["minute15secyif"] = minute15secyif;
    }

    if(minute15secyrx != nullptr)
    {
        children["minute15secyrx"] = minute15secyrx;
    }

    if(minute15secytx != nullptr)
    {
        children["minute15secytx"] = minute15secytx;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics" || name == "minute15fec" || name == "minute15otn" || name == "minute15secyif" || name == "minute15secyrx" || name == "minute15secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15Fec()
    :
    minute15fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports>())
	,minute15fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds>())
{
    minute15fec_reports->parent = this;
    minute15fec_thresholds->parent = this;

    yang_name = "minute15fec"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::~Minute15Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_data() const
{
    return (minute15fec_reports !=  nullptr && minute15fec_reports->has_data())
	|| (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_operation() const
{
    return is_set(yfilter)
	|| (minute15fec_reports !=  nullptr && minute15fec_reports->has_operation())
	|| (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-reports")
    {
        if(minute15fec_reports == nullptr)
        {
            minute15fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports>();
        }
        return minute15fec_reports;
    }

    if(child_yang_name == "minute15fec-thresholds")
    {
        if(minute15fec_thresholds == nullptr)
        {
            minute15fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds>();
        }
        return minute15fec_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15fec_reports != nullptr)
    {
        children["minute15fec-reports"] = minute15fec_reports;
    }

    if(minute15fec_thresholds != nullptr)
    {
        children["minute15fec-thresholds"] = minute15fec_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-reports" || name == "minute15fec-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReports()
{

    yang_name = "minute15fec-reports"; yang_parent_name = "minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::~Minute15FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::has_data() const
{
    for (std::size_t index=0; index<minute15fec_report.size(); index++)
    {
        if(minute15fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::has_operation() const
{
    for (std::size_t index=0; index<minute15fec_report.size(); index++)
    {
        if(minute15fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-report")
    {
        for(auto const & c : minute15fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport>();
        c->parent = this;
        minute15fec_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15fec_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::Minute15FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15fec-report"; yang_parent_name = "minute15fec-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::~Minute15FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-report" <<"[fec-report='" <<fec_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
        fec_report.value_namespace = name_space;
        fec_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-report")
    {
        fec_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThresholds()
{

    yang_name = "minute15fec-thresholds"; yang_parent_name = "minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::~Minute15FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15fec_threshold.size(); index++)
    {
        if(minute15fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15fec_threshold.size(); index++)
    {
        if(minute15fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-threshold")
    {
        for(auto const & c : minute15fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold>();
        c->parent = this;
        minute15fec_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15fec_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::Minute15FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "minute15fec-threshold"; yang_parent_name = "minute15fec-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::~Minute15FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
        fec_threshold.value_namespace = name_space;
        fec_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
        fec_threshold_value.value_namespace = name_space;
        fec_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold.yfilter = yfilter;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15Optics()
    :
    minute15_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>())
	,minute15_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>())
{
    minute15_optics_reports->parent = this;
    minute15_optics_thresholds->parent = this;

    yang_name = "minute15-optics"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::~Minute15Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_data() const
{
    return (minute15_optics_reports !=  nullptr && minute15_optics_reports->has_data())
	|| (minute15_optics_thresholds !=  nullptr && minute15_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_optics_reports !=  nullptr && minute15_optics_reports->has_operation())
	|| (minute15_optics_thresholds !=  nullptr && minute15_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics-reports")
    {
        if(minute15_optics_reports == nullptr)
        {
            minute15_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>();
        }
        return minute15_optics_reports;
    }

    if(child_yang_name == "minute15-optics-thresholds")
    {
        if(minute15_optics_thresholds == nullptr)
        {
            minute15_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>();
        }
        return minute15_optics_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_optics_reports != nullptr)
    {
        children["minute15-optics-reports"] = minute15_optics_reports;
    }

    if(minute15_optics_thresholds != nullptr)
    {
        children["minute15-optics-thresholds"] = minute15_optics_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics-reports" || name == "minute15-optics-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReports()
{

    yang_name = "minute15-optics-reports"; yang_parent_name = "minute15-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::~Minute15OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_data() const
{
    for (std::size_t index=0; index<minute15_optics_report.size(); index++)
    {
        if(minute15_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_optics_report.size(); index++)
    {
        if(minute15_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics-report")
    {
        for(auto const & c : minute15_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport>();
        c->parent = this;
        minute15_optics_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_optics_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::Minute15OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "minute15-optics-report"; yang_parent_name = "minute15-optics-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::~Minute15OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::has_data() const
{
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-report" <<"[optics-report='" <<optics_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThresholds()
{

    yang_name = "minute15-optics-thresholds"; yang_parent_name = "minute15-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::~Minute15OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_optics_threshold.size(); index++)
    {
        if(minute15_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_optics_threshold.size(); index++)
    {
        if(minute15_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics-threshold")
    {
        for(auto const & c : minute15_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold>();
        c->parent = this;
        minute15_optics_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_optics_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::Minute15OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    dbm{YType::int32, "dbm"},
    optics_threshold_value{YType::int32, "optics-threshold-value"}
{

    yang_name = "minute15-optics-threshold"; yang_parent_name = "minute15-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::~Minute15OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| dbm.is_set
	|| optics_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(dbm.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
        optics_threshold.value_namespace = name_space;
        optics_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbm")
    {
        dbm = value;
        dbm.value_namespace = name_space;
        dbm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
        optics_threshold_value.value_namespace = name_space;
        optics_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold.yfilter = yfilter;
    }
    if(value_path == "dbm")
    {
        dbm.yfilter = yfilter;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "dbm" || name == "optics-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15Otn()
    :
    min15_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes>())
	,minute15otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports>())
{
    min15_otn_threshes->parent = this;
    minute15otn_reports->parent = this;

    yang_name = "minute15otn"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::~Minute15Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_data() const
{
    return (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_data())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_operation() const
{
    return is_set(yfilter)
	|| (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_operation())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-threshes")
    {
        if(min15_otn_threshes == nullptr)
        {
            min15_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes>();
        }
        return min15_otn_threshes;
    }

    if(child_yang_name == "minute15otn-reports")
    {
        if(minute15otn_reports == nullptr)
        {
            minute15otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports>();
        }
        return minute15otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min15_otn_threshes != nullptr)
    {
        children["min15-otn-threshes"] = min15_otn_threshes;
    }

    if(minute15otn_reports != nullptr)
    {
        children["minute15otn-reports"] = minute15otn_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-threshes" || name == "minute15otn-reports")
        return true;
    return false;
}


}
}

