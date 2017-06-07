
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_tc_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_tc_cfg {

TrafficCollector::TrafficCollector()
    :
    enable_traffic_collector{YType::empty, "enable-traffic-collector"}
    	,
    external_interfaces(std::make_shared<TrafficCollector::ExternalInterfaces>())
	,statistics(std::make_shared<TrafficCollector::Statistics>())
{
    external_interfaces->parent = this;

    statistics->parent = this;

    yang_name = "traffic-collector"; yang_parent_name = "Cisco-IOS-XR-infra-tc-cfg";
}

TrafficCollector::~TrafficCollector()
{
}

bool TrafficCollector::has_data() const
{
    return enable_traffic_collector.is_set
	|| (external_interfaces !=  nullptr && external_interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool TrafficCollector::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_traffic_collector.operation)
	|| (external_interfaces !=  nullptr && external_interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string TrafficCollector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector";

    return path_buffer.str();

}

const EntityPath TrafficCollector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_traffic_collector.is_set || is_set(enable_traffic_collector.operation)) leaf_name_data.push_back(enable_traffic_collector.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void TrafficCollector::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-traffic-collector")
    {
        enable_traffic_collector = value;
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

TrafficCollector::ExternalInterfaces::ExternalInterfaces()
{
    yang_name = "external-interfaces"; yang_parent_name = "traffic-collector";
}

TrafficCollector::ExternalInterfaces::~ExternalInterfaces()
{
}

bool TrafficCollector::ExternalInterfaces::has_data() const
{
    for (std::size_t index=0; index<external_interface.size(); index++)
    {
        if(external_interface[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::ExternalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<external_interface.size(); index++)
    {
        if(external_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::ExternalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interfaces";

    return path_buffer.str();

}

const EntityPath TrafficCollector::ExternalInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::ExternalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interface")
    {
        for(auto const & c : external_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrafficCollector::ExternalInterfaces::ExternalInterface>();
        c->parent = this;
        external_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::ExternalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrafficCollector::ExternalInterfaces::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::ExternalInterfaces::ExternalInterface::ExternalInterface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
{
    yang_name = "external-interface"; yang_parent_name = "external-interfaces";
}

TrafficCollector::ExternalInterfaces::ExternalInterface::~ExternalInterface()
{
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set;
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(enable.operation);
}

std::string TrafficCollector::ExternalInterfaces::ExternalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath TrafficCollector::ExternalInterfaces::ExternalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector/external-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::ExternalInterfaces::ExternalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::ExternalInterfaces::ExternalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrafficCollector::ExternalInterfaces::ExternalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

TrafficCollector::Statistics::Statistics()
    :
    collection_interval{YType::enumeration, "collection-interval"},
    enable_traffic_collector_statistics{YType::empty, "enable-traffic-collector-statistics"},
    history_size{YType::str, "history-size"},
    history_timeout{YType::str, "history-timeout"}
{
    yang_name = "statistics"; yang_parent_name = "traffic-collector";
}

TrafficCollector::Statistics::~Statistics()
{
}

bool TrafficCollector::Statistics::has_data() const
{
    return collection_interval.is_set
	|| enable_traffic_collector_statistics.is_set
	|| history_size.is_set
	|| history_timeout.is_set;
}

bool TrafficCollector::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(collection_interval.operation)
	|| is_set(enable_traffic_collector_statistics.operation)
	|| is_set(history_size.operation)
	|| is_set(history_timeout.operation);
}

std::string TrafficCollector::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath TrafficCollector::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-cfg:traffic-collector/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection_interval.is_set || is_set(collection_interval.operation)) leaf_name_data.push_back(collection_interval.get_name_leafdata());
    if (enable_traffic_collector_statistics.is_set || is_set(enable_traffic_collector_statistics.operation)) leaf_name_data.push_back(enable_traffic_collector_statistics.get_name_leafdata());
    if (history_size.is_set || is_set(history_size.operation)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (history_timeout.is_set || is_set(history_timeout.operation)) leaf_name_data.push_back(history_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrafficCollector::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrafficCollector::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collection-interval")
    {
        collection_interval = value;
    }
    if(value_path == "enable-traffic-collector-statistics")
    {
        enable_traffic_collector_statistics = value;
    }
    if(value_path == "history-size")
    {
        history_size = value;
    }
    if(value_path == "history-timeout")
    {
        history_timeout = value;
    }
}

const Enum::YLeaf HistoryTimeoutEnum::max {720, "max"};

const Enum::YLeaf HistorySizeEnum::max {10, "max"};

const Enum::YLeaf CollectIonIntervalEnum::Y_1_minute {1, "1-minute"};
const Enum::YLeaf CollectIonIntervalEnum::Y_2_minutes {2, "2-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_3_minutes {3, "3-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_4_minutes {4, "4-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_5_minutes {5, "5-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_6_minutes {6, "6-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_10_minutes {10, "10-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_12_minutes {12, "12-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_15_minutes {15, "15-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_20_minutes {20, "20-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_30_minutes {30, "30-minutes"};
const Enum::YLeaf CollectIonIntervalEnum::Y_60_minutes {60, "60-minutes"};


}
}

