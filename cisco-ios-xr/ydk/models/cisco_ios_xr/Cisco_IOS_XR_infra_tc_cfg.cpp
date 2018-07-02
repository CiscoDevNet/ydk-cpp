
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_tc_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_tc_cfg {

TrafficCollector::TrafficCollector()
    :
    enable_traffic_collector{YType::empty, "enable-traffic-collector"}
        ,
    external_interfaces(std::make_shared<TrafficCollector::ExternalInterfaces>())
    , statistics(std::make_shared<TrafficCollector::Statistics>())
{
    external_interfaces->parent = this;
    statistics->parent = this;

    yang_name = "traffic-collector"; yang_parent_name = "Cisco-IOS-XR-infra-tc-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

TrafficCollector::~TrafficCollector()
{
}

bool TrafficCollector::has_data() const
{
    if (is_presence_container) return true;
    return enable_traffic_collector.is_set
	|| (external_interfaces !=  nullptr && external_interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool TrafficCollector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_traffic_collector.yfilter)
	|| (external_interfaces !=  nullptr && external_interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string TrafficCollector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_traffic_collector.is_set || is_set(enable_traffic_collector.yfilter)) leaf_name_data.push_back(enable_traffic_collector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TrafficCollector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interfaces")
    {
        if(external_interfaces == nullptr)
        {
            external_interfaces = std::make_shared<TrafficCollector::ExternalInterfaces>();
        }
        return external_interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<TrafficCollector::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(external_interfaces != nullptr)
    {
        children["external-interfaces"] = external_interfaces;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void TrafficCollector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-traffic-collector")
    {
        enable_traffic_collector = value;
        enable_traffic_collector.value_namespace = name_space;
        enable_traffic_collector.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-traffic-collector")
    {
        enable_traffic_collector.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> TrafficCollector::clone_ptr() const
{
    return std::make_shared<TrafficCollector>();
}

std::string TrafficCollector::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TrafficCollector::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TrafficCollector::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TrafficCollector::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TrafficCollector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interfaces" || name == "statistics" || name == "enable-traffic-collector")
        return true;
    return false;
}

TrafficCollector::ExternalInterfaces::ExternalInterfaces()
    :
    external_interface(this, {"interface_name"})
{

    yang_name = "external-interfaces"; yang_parent_name = "traffic-collector"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::ExternalInterfaces::~ExternalInterfaces()
{
}

bool TrafficCollector::ExternalInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_interface.len(); index++)
    {
        if(external_interface[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::ExternalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<external_interface.len(); index++)
    {
        if(external_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TrafficCollector::ExternalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::ExternalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::ExternalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TrafficCollector::ExternalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interface")
    {
        auto c = std::make_shared<TrafficCollector::ExternalInterfaces::ExternalInterface>();
        c->parent = this;
        external_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::ExternalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : external_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TrafficCollector::ExternalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TrafficCollector::ExternalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TrafficCollector::ExternalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interface")
        return true;
    return false;
}

TrafficCollector::ExternalInterfaces::ExternalInterface::ExternalInterface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
{

    yang_name = "external-interface"; yang_parent_name = "external-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::ExternalInterfaces::ExternalInterface::~ExternalInterface()
{
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| enable.is_set;
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string TrafficCollector::ExternalInterfaces::ExternalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector/external-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::ExternalInterfaces::ExternalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::ExternalInterfaces::ExternalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TrafficCollector::ExternalInterfaces::ExternalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::ExternalInterfaces::ExternalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TrafficCollector::ExternalInterfaces::ExternalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::ExternalInterfaces::ExternalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "enable")
        return true;
    return false;
}

TrafficCollector::Statistics::Statistics()
    :
    history_size{YType::str, "history-size"},
    collection_interval{YType::enumeration, "collection-interval"},
    enable_traffic_collector_statistics{YType::empty, "enable-traffic-collector-statistics"},
    history_timeout{YType::str, "history-timeout"}
{

    yang_name = "statistics"; yang_parent_name = "traffic-collector"; is_top_level_class = false; has_list_ancestor = false; 
}

TrafficCollector::Statistics::~Statistics()
{
}

bool TrafficCollector::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return history_size.is_set
	|| collection_interval.is_set
	|| enable_traffic_collector_statistics.is_set
	|| history_timeout.is_set;
}

bool TrafficCollector::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| ydk::is_set(collection_interval.yfilter)
	|| ydk::is_set(enable_traffic_collector_statistics.yfilter)
	|| ydk::is_set(history_timeout.yfilter);
}

std::string TrafficCollector::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector/" << get_segment_path();
    return path_buffer.str();
}

std::string TrafficCollector::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TrafficCollector::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (collection_interval.is_set || is_set(collection_interval.yfilter)) leaf_name_data.push_back(collection_interval.get_name_leafdata());
    if (enable_traffic_collector_statistics.is_set || is_set(enable_traffic_collector_statistics.yfilter)) leaf_name_data.push_back(enable_traffic_collector_statistics.get_name_leafdata());
    if (history_timeout.is_set || is_set(history_timeout.yfilter)) leaf_name_data.push_back(history_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TrafficCollector::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TrafficCollector::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-interval")
    {
        collection_interval = value;
        collection_interval.value_namespace = name_space;
        collection_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-traffic-collector-statistics")
    {
        enable_traffic_collector_statistics = value;
        enable_traffic_collector_statistics.value_namespace = name_space;
        enable_traffic_collector_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-timeout")
    {
        history_timeout = value;
        history_timeout.value_namespace = name_space;
        history_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void TrafficCollector::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
    if(value_path == "collection-interval")
    {
        collection_interval.yfilter = yfilter;
    }
    if(value_path == "enable-traffic-collector-statistics")
    {
        enable_traffic_collector_statistics.yfilter = yfilter;
    }
    if(value_path == "history-timeout")
    {
        history_timeout.yfilter = yfilter;
    }
}

bool TrafficCollector::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-size" || name == "collection-interval" || name == "enable-traffic-collector-statistics" || name == "history-timeout")
        return true;
    return false;
}

const Enum::YLeaf HistoryTimeout::max {720, "max"};

const Enum::YLeaf HistorySize::max {10, "max"};

const Enum::YLeaf CollectIonInterval::Y_1_minute {1, "1-minute"};
const Enum::YLeaf CollectIonInterval::Y_2_minutes {2, "2-minutes"};
const Enum::YLeaf CollectIonInterval::Y_3_minutes {3, "3-minutes"};
const Enum::YLeaf CollectIonInterval::Y_4_minutes {4, "4-minutes"};
const Enum::YLeaf CollectIonInterval::Y_5_minutes {5, "5-minutes"};
const Enum::YLeaf CollectIonInterval::Y_6_minutes {6, "6-minutes"};
const Enum::YLeaf CollectIonInterval::Y_10_minutes {10, "10-minutes"};
const Enum::YLeaf CollectIonInterval::Y_12_minutes {12, "12-minutes"};
const Enum::YLeaf CollectIonInterval::Y_15_minutes {15, "15-minutes"};
const Enum::YLeaf CollectIonInterval::Y_20_minutes {20, "20-minutes"};
const Enum::YLeaf CollectIonInterval::Y_30_minutes {30, "30-minutes"};
const Enum::YLeaf CollectIonInterval::Y_60_minutes {60, "60-minutes"};


}
}

