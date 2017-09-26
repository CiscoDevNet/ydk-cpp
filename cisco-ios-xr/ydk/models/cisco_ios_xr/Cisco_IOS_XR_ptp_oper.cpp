
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ptp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_oper {

Ptp::Ptp()
    :
    advertised_clock(std::make_shared<Ptp::AdvertisedClock>())
	,dataset(std::make_shared<Ptp::Dataset>())
	,global_configuration_error(std::make_shared<Ptp::GlobalConfigurationError>())
	,grandmaster(std::make_shared<Ptp::Grandmaster>())
	,interface_configuration_errors(std::make_shared<Ptp::InterfaceConfigurationErrors>())
	,interface_foreign_masters(std::make_shared<Ptp::InterfaceForeignMasters>())
	,interface_packet_counters(std::make_shared<Ptp::InterfacePacketCounters>())
	,interface_unicast_peers(std::make_shared<Ptp::InterfaceUnicastPeers>())
	,interfaces(std::make_shared<Ptp::Interfaces>())
	,leap_seconds(std::make_shared<Ptp::LeapSeconds>())
	,local_clock(std::make_shared<Ptp::LocalClock>())
	,nodes(std::make_shared<Ptp::Nodes>())
	,platform(std::make_shared<Ptp::Platform>())
{
    advertised_clock->parent = this;
    dataset->parent = this;
    global_configuration_error->parent = this;
    grandmaster->parent = this;
    interface_configuration_errors->parent = this;
    interface_foreign_masters->parent = this;
    interface_packet_counters->parent = this;
    interface_unicast_peers->parent = this;
    interfaces->parent = this;
    leap_seconds->parent = this;
    local_clock->parent = this;
    nodes->parent = this;
    platform->parent = this;

    yang_name = "ptp"; yang_parent_name = "Cisco-IOS-XR-ptp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ptp::~Ptp()
{
}

bool Ptp::has_data() const
{
    return (advertised_clock !=  nullptr && advertised_clock->has_data())
	|| (dataset !=  nullptr && dataset->has_data())
	|| (global_configuration_error !=  nullptr && global_configuration_error->has_data())
	|| (grandmaster !=  nullptr && grandmaster->has_data())
	|| (interface_configuration_errors !=  nullptr && interface_configuration_errors->has_data())
	|| (interface_foreign_masters !=  nullptr && interface_foreign_masters->has_data())
	|| (interface_packet_counters !=  nullptr && interface_packet_counters->has_data())
	|| (interface_unicast_peers !=  nullptr && interface_unicast_peers->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (leap_seconds !=  nullptr && leap_seconds->has_data())
	|| (local_clock !=  nullptr && local_clock->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (platform !=  nullptr && platform->has_data());
}

bool Ptp::has_operation() const
{
    return is_set(yfilter)
	|| (advertised_clock !=  nullptr && advertised_clock->has_operation())
	|| (dataset !=  nullptr && dataset->has_operation())
	|| (global_configuration_error !=  nullptr && global_configuration_error->has_operation())
	|| (grandmaster !=  nullptr && grandmaster->has_operation())
	|| (interface_configuration_errors !=  nullptr && interface_configuration_errors->has_operation())
	|| (interface_foreign_masters !=  nullptr && interface_foreign_masters->has_operation())
	|| (interface_packet_counters !=  nullptr && interface_packet_counters->has_operation())
	|| (interface_unicast_peers !=  nullptr && interface_unicast_peers->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (leap_seconds !=  nullptr && leap_seconds->has_operation())
	|| (local_clock !=  nullptr && local_clock->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (platform !=  nullptr && platform->has_operation());
}

std::string Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-clock")
    {
        if(advertised_clock == nullptr)
        {
            advertised_clock = std::make_shared<Ptp::AdvertisedClock>();
        }
        return advertised_clock;
    }

    if(child_yang_name == "dataset")
    {
        if(dataset == nullptr)
        {
            dataset = std::make_shared<Ptp::Dataset>();
        }
        return dataset;
    }

    if(child_yang_name == "global-configuration-error")
    {
        if(global_configuration_error == nullptr)
        {
            global_configuration_error = std::make_shared<Ptp::GlobalConfigurationError>();
        }
        return global_configuration_error;
    }

    if(child_yang_name == "grandmaster")
    {
        if(grandmaster == nullptr)
        {
            grandmaster = std::make_shared<Ptp::Grandmaster>();
        }
        return grandmaster;
    }

    if(child_yang_name == "interface-configuration-errors")
    {
        if(interface_configuration_errors == nullptr)
        {
            interface_configuration_errors = std::make_shared<Ptp::InterfaceConfigurationErrors>();
        }
        return interface_configuration_errors;
    }

    if(child_yang_name == "interface-foreign-masters")
    {
        if(interface_foreign_masters == nullptr)
        {
            interface_foreign_masters = std::make_shared<Ptp::InterfaceForeignMasters>();
        }
        return interface_foreign_masters;
    }

    if(child_yang_name == "interface-packet-counters")
    {
        if(interface_packet_counters == nullptr)
        {
            interface_packet_counters = std::make_shared<Ptp::InterfacePacketCounters>();
        }
        return interface_packet_counters;
    }

    if(child_yang_name == "interface-unicast-peers")
    {
        if(interface_unicast_peers == nullptr)
        {
            interface_unicast_peers = std::make_shared<Ptp::InterfaceUnicastPeers>();
        }
        return interface_unicast_peers;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ptp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "leap-seconds")
    {
        if(leap_seconds == nullptr)
        {
            leap_seconds = std::make_shared<Ptp::LeapSeconds>();
        }
        return leap_seconds;
    }

    if(child_yang_name == "local-clock")
    {
        if(local_clock == nullptr)
        {
            local_clock = std::make_shared<Ptp::LocalClock>();
        }
        return local_clock;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ptp::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Ptp::Platform>();
        }
        return platform;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertised_clock != nullptr)
    {
        children["advertised-clock"] = advertised_clock;
    }

    if(dataset != nullptr)
    {
        children["dataset"] = dataset;
    }

    if(global_configuration_error != nullptr)
    {
        children["global-configuration-error"] = global_configuration_error;
    }

    if(grandmaster != nullptr)
    {
        children["grandmaster"] = grandmaster;
    }

    if(interface_configuration_errors != nullptr)
    {
        children["interface-configuration-errors"] = interface_configuration_errors;
    }

    if(interface_foreign_masters != nullptr)
    {
        children["interface-foreign-masters"] = interface_foreign_masters;
    }

    if(interface_packet_counters != nullptr)
    {
        children["interface-packet-counters"] = interface_packet_counters;
    }

    if(interface_unicast_peers != nullptr)
    {
        children["interface-unicast-peers"] = interface_unicast_peers;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(leap_seconds != nullptr)
    {
        children["leap-seconds"] = leap_seconds;
    }

    if(local_clock != nullptr)
    {
        children["local-clock"] = local_clock;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(platform != nullptr)
    {
        children["platform"] = platform;
    }

    return children;
}

void Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ptp::clone_ptr() const
{
    return std::make_shared<Ptp>();
}

std::string Ptp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ptp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ptp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ptp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-clock" || name == "dataset" || name == "global-configuration-error" || name == "grandmaster" || name == "interface-configuration-errors" || name == "interface-foreign-masters" || name == "interface-packet-counters" || name == "interface-unicast-peers" || name == "interfaces" || name == "leap-seconds" || name == "local-clock" || name == "nodes" || name == "platform")
        return true;
    return false;
}

Ptp::AdvertisedClock::AdvertisedClock()
    :
    domain{YType::uint8, "domain"},
    received_time_source{YType::enumeration, "received-time-source"},
    received_timescale{YType::enumeration, "received-timescale"},
    time_source_configured{YType::boolean, "time-source-configured"},
    timescale_configured{YType::boolean, "timescale-configured"}
    	,
    clock_properties(std::make_shared<Ptp::AdvertisedClock::ClockProperties>())
{
    clock_properties->parent = this;

    yang_name = "advertised-clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::AdvertisedClock::~AdvertisedClock()
{
}

bool Ptp::AdvertisedClock::has_data() const
{
    return domain.is_set
	|| received_time_source.is_set
	|| received_timescale.is_set
	|| time_source_configured.is_set
	|| timescale_configured.is_set
	|| (clock_properties !=  nullptr && clock_properties->has_data());
}

bool Ptp::AdvertisedClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(received_time_source.yfilter)
	|| ydk::is_set(received_timescale.yfilter)
	|| ydk::is_set(time_source_configured.yfilter)
	|| ydk::is_set(timescale_configured.yfilter)
	|| (clock_properties !=  nullptr && clock_properties->has_operation());
}

std::string Ptp::AdvertisedClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (received_time_source.is_set || is_set(received_time_source.yfilter)) leaf_name_data.push_back(received_time_source.get_name_leafdata());
    if (received_timescale.is_set || is_set(received_timescale.yfilter)) leaf_name_data.push_back(received_timescale.get_name_leafdata());
    if (time_source_configured.is_set || is_set(time_source_configured.yfilter)) leaf_name_data.push_back(time_source_configured.get_name_leafdata());
    if (timescale_configured.is_set || is_set(timescale_configured.yfilter)) leaf_name_data.push_back(timescale_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::AdvertisedClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-properties")
    {
        if(clock_properties == nullptr)
        {
            clock_properties = std::make_shared<Ptp::AdvertisedClock::ClockProperties>();
        }
        return clock_properties;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::AdvertisedClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_properties != nullptr)
    {
        children["clock-properties"] = clock_properties;
    }

    return children;
}

void Ptp::AdvertisedClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-time-source")
    {
        received_time_source = value;
        received_time_source.value_namespace = name_space;
        received_time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-timescale")
    {
        received_timescale = value;
        received_timescale.value_namespace = name_space;
        received_timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source-configured")
    {
        time_source_configured = value;
        time_source_configured.value_namespace = name_space;
        time_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale-configured")
    {
        timescale_configured = value;
        timescale_configured.value_namespace = name_space;
        timescale_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "received-time-source")
    {
        received_time_source.yfilter = yfilter;
    }
    if(value_path == "received-timescale")
    {
        received_timescale.yfilter = yfilter;
    }
    if(value_path == "time-source-configured")
    {
        time_source_configured.yfilter = yfilter;
    }
    if(value_path == "timescale-configured")
    {
        timescale_configured.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-properties" || name == "domain" || name == "received-time-source" || name == "received-timescale" || name == "time-source-configured" || name == "timescale-configured")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::ClockProperties()
    :
    accuracy{YType::uint8, "accuracy"},
    class_{YType::uint8, "class"},
    clock_id{YType::uint64, "clock-id"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"}
    	,
    receiver(std::make_shared<Ptp::AdvertisedClock::ClockProperties::Receiver>())
	,sender(std::make_shared<Ptp::AdvertisedClock::ClockProperties::Sender>())
	,utc_offset(std::make_shared<Ptp::AdvertisedClock::ClockProperties::UtcOffset>())
{
    receiver->parent = this;
    sender->parent = this;
    utc_offset->parent = this;

    yang_name = "clock-properties"; yang_parent_name = "advertised-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::AdvertisedClock::ClockProperties::~ClockProperties()
{
}

bool Ptp::AdvertisedClock::ClockProperties::has_data() const
{
    return accuracy.is_set
	|| class_.is_set
	|| clock_id.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| frequency_traceable.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| offset_log_variance.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data())
	|| (utc_offset !=  nullptr && utc_offset->has_data());
}

bool Ptp::AdvertisedClock::ClockProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation())
	|| (utc_offset !=  nullptr && utc_offset->has_operation());
}

std::string Ptp::AdvertisedClock::ClockProperties::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::AdvertisedClock::ClockProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::AdvertisedClock::ClockProperties::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::AdvertisedClock::ClockProperties::Sender>();
        }
        return sender;
    }

    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::AdvertisedClock::ClockProperties::UtcOffset>();
        }
        return utc_offset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::AdvertisedClock::ClockProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receiver != nullptr)
    {
        children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        children["sender"] = sender;
    }

    if(utc_offset != nullptr)
    {
        children["utc-offset"] = utc_offset;
    }

    return children;
}

void Ptp::AdvertisedClock::ClockProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver" || name == "sender" || name == "utc-offset" || name == "accuracy" || name == "class" || name == "clock-id" || name == "configured-clock-class" || name == "configured-priority" || name == "frequency-traceable" || name == "leap-seconds" || name == "local" || name == "offset-log-variance" || name == "priority1" || name == "priority2" || name == "steps-removed" || name == "time-source" || name == "time-traceable" || name == "timescale")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::AdvertisedClock::ClockProperties::Receiver::~Receiver()
{
}

bool Ptp::AdvertisedClock::ClockProperties::Receiver::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::AdvertisedClock::ClockProperties::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::AdvertisedClock::ClockProperties::Receiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::AdvertisedClock::ClockProperties::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::AdvertisedClock::ClockProperties::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::AdvertisedClock::ClockProperties::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::AdvertisedClock::ClockProperties::Sender::~Sender()
{
}

bool Ptp::AdvertisedClock::ClockProperties::Sender::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::AdvertisedClock::ClockProperties::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::AdvertisedClock::ClockProperties::Sender::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::AdvertisedClock::ClockProperties::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::AdvertisedClock::ClockProperties::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::AdvertisedClock::ClockProperties::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::AdvertisedClock::ClockProperties::UtcOffset::~UtcOffset()
{
}

bool Ptp::AdvertisedClock::ClockProperties::UtcOffset::has_data() const
{
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::AdvertisedClock::ClockProperties::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::AdvertisedClock::ClockProperties::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::Dataset::Dataset()
    :
    current_ds(std::make_shared<Ptp::Dataset::CurrentDs>())
	,default_ds(std::make_shared<Ptp::Dataset::DefaultDs>())
	,parent_ds(std::make_shared<Ptp::Dataset::ParentDs>())
	,port_dses(std::make_shared<Ptp::Dataset::PortDses>())
	,time_properties_ds(std::make_shared<Ptp::Dataset::TimePropertiesDs>())
{
    current_ds->parent = this;
    default_ds->parent = this;
    parent_ds->parent = this;
    port_dses->parent = this;
    time_properties_ds->parent = this;

    yang_name = "dataset"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::~Dataset()
{
}

bool Ptp::Dataset::has_data() const
{
    return (current_ds !=  nullptr && current_ds->has_data())
	|| (default_ds !=  nullptr && default_ds->has_data())
	|| (parent_ds !=  nullptr && parent_ds->has_data())
	|| (port_dses !=  nullptr && port_dses->has_data())
	|| (time_properties_ds !=  nullptr && time_properties_ds->has_data());
}

bool Ptp::Dataset::has_operation() const
{
    return is_set(yfilter)
	|| (current_ds !=  nullptr && current_ds->has_operation())
	|| (default_ds !=  nullptr && default_ds->has_operation())
	|| (parent_ds !=  nullptr && parent_ds->has_operation())
	|| (port_dses !=  nullptr && port_dses->has_operation())
	|| (time_properties_ds !=  nullptr && time_properties_ds->has_operation());
}

std::string Ptp::Dataset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dataset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-ds")
    {
        if(current_ds == nullptr)
        {
            current_ds = std::make_shared<Ptp::Dataset::CurrentDs>();
        }
        return current_ds;
    }

    if(child_yang_name == "default-ds")
    {
        if(default_ds == nullptr)
        {
            default_ds = std::make_shared<Ptp::Dataset::DefaultDs>();
        }
        return default_ds;
    }

    if(child_yang_name == "parent-ds")
    {
        if(parent_ds == nullptr)
        {
            parent_ds = std::make_shared<Ptp::Dataset::ParentDs>();
        }
        return parent_ds;
    }

    if(child_yang_name == "port-dses")
    {
        if(port_dses == nullptr)
        {
            port_dses = std::make_shared<Ptp::Dataset::PortDses>();
        }
        return port_dses;
    }

    if(child_yang_name == "time-properties-ds")
    {
        if(time_properties_ds == nullptr)
        {
            time_properties_ds = std::make_shared<Ptp::Dataset::TimePropertiesDs>();
        }
        return time_properties_ds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_ds != nullptr)
    {
        children["current-ds"] = current_ds;
    }

    if(default_ds != nullptr)
    {
        children["default-ds"] = default_ds;
    }

    if(parent_ds != nullptr)
    {
        children["parent-ds"] = parent_ds;
    }

    if(port_dses != nullptr)
    {
        children["port-dses"] = port_dses;
    }

    if(time_properties_ds != nullptr)
    {
        children["time-properties-ds"] = time_properties_ds;
    }

    return children;
}

void Ptp::Dataset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Dataset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Dataset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-ds" || name == "default-ds" || name == "parent-ds" || name == "port-dses" || name == "time-properties-ds")
        return true;
    return false;
}

Ptp::Dataset::CurrentDs::CurrentDs()
    :
    mean_path_delay{YType::int64, "mean-path-delay"},
    offset_from_master{YType::int64, "offset-from-master"},
    steps_removed{YType::uint16, "steps-removed"}
{

    yang_name = "current-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::CurrentDs::~CurrentDs()
{
}

bool Ptp::Dataset::CurrentDs::has_data() const
{
    return mean_path_delay.is_set
	|| offset_from_master.is_set
	|| steps_removed.is_set;
}

bool Ptp::Dataset::CurrentDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mean_path_delay.yfilter)
	|| ydk::is_set(offset_from_master.yfilter)
	|| ydk::is_set(steps_removed.yfilter);
}

std::string Ptp::Dataset::CurrentDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::CurrentDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::CurrentDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mean_path_delay.is_set || is_set(mean_path_delay.yfilter)) leaf_name_data.push_back(mean_path_delay.get_name_leafdata());
    if (offset_from_master.is_set || is_set(offset_from_master.yfilter)) leaf_name_data.push_back(offset_from_master.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::CurrentDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::CurrentDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Dataset::CurrentDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mean-path-delay")
    {
        mean_path_delay = value;
        mean_path_delay.value_namespace = name_space;
        mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master = value;
        offset_from_master.value_namespace = name_space;
        offset_from_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::CurrentDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mean-path-delay")
    {
        mean_path_delay.yfilter = yfilter;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
}

bool Ptp::Dataset::CurrentDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mean-path-delay" || name == "offset-from-master" || name == "steps-removed")
        return true;
    return false;
}

Ptp::Dataset::DefaultDs::DefaultDs()
    :
    clock_accuracy{YType::uint8, "clock-accuracy"},
    clock_class{YType::uint8, "clock-class"},
    clock_id{YType::uint64, "clock-id"},
    domain_number{YType::uint8, "domain-number"},
    local_priority{YType::uint32, "local-priority"},
    number_ports{YType::uint32, "number-ports"},
    oslv{YType::uint16, "oslv"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    signal_fail{YType::boolean, "signal-fail"},
    slave_only{YType::boolean, "slave-only"},
    two_step_flag{YType::boolean, "two-step-flag"}
{

    yang_name = "default-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::DefaultDs::~DefaultDs()
{
}

bool Ptp::Dataset::DefaultDs::has_data() const
{
    return clock_accuracy.is_set
	|| clock_class.is_set
	|| clock_id.is_set
	|| domain_number.is_set
	|| local_priority.is_set
	|| number_ports.is_set
	|| oslv.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| signal_fail.is_set
	|| slave_only.is_set
	|| two_step_flag.is_set;
}

bool Ptp::Dataset::DefaultDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(clock_class.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(domain_number.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(number_ports.yfilter)
	|| ydk::is_set(oslv.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(signal_fail.yfilter)
	|| ydk::is_set(slave_only.yfilter)
	|| ydk::is_set(two_step_flag.yfilter);
}

std::string Ptp::Dataset::DefaultDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::DefaultDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::DefaultDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (clock_class.is_set || is_set(clock_class.yfilter)) leaf_name_data.push_back(clock_class.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (domain_number.is_set || is_set(domain_number.yfilter)) leaf_name_data.push_back(domain_number.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (number_ports.is_set || is_set(number_ports.yfilter)) leaf_name_data.push_back(number_ports.get_name_leafdata());
    if (oslv.is_set || is_set(oslv.yfilter)) leaf_name_data.push_back(oslv.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());
    if (slave_only.is_set || is_set(slave_only.yfilter)) leaf_name_data.push_back(slave_only.get_name_leafdata());
    if (two_step_flag.is_set || is_set(two_step_flag.yfilter)) leaf_name_data.push_back(two_step_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::DefaultDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::DefaultDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Dataset::DefaultDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class")
    {
        clock_class = value;
        clock_class.value_namespace = name_space;
        clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-number")
    {
        domain_number = value;
        domain_number.value_namespace = name_space;
        domain_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ports")
    {
        number_ports = value;
        number_ports.value_namespace = name_space;
        number_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oslv")
    {
        oslv = value;
        oslv.value_namespace = name_space;
        oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-only")
    {
        slave_only = value;
        slave_only.value_namespace = name_space;
        slave_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-step-flag")
    {
        two_step_flag = value;
        two_step_flag.value_namespace = name_space;
        two_step_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::DefaultDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "clock-class")
    {
        clock_class.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "domain-number")
    {
        domain_number.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "number-ports")
    {
        number_ports.yfilter = yfilter;
    }
    if(value_path == "oslv")
    {
        oslv.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
    if(value_path == "slave-only")
    {
        slave_only.yfilter = yfilter;
    }
    if(value_path == "two-step-flag")
    {
        two_step_flag.yfilter = yfilter;
    }
}

bool Ptp::Dataset::DefaultDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-accuracy" || name == "clock-class" || name == "clock-id" || name == "domain-number" || name == "local-priority" || name == "number-ports" || name == "oslv" || name == "priority1" || name == "priority2" || name == "signal-fail" || name == "slave-only" || name == "two-step-flag")
        return true;
    return false;
}

Ptp::Dataset::ParentDs::ParentDs()
    :
    gm_clock_accuracy{YType::uint8, "gm-clock-accuracy"},
    gm_clock_class{YType::uint8, "gm-clock-class"},
    gm_clock_id{YType::uint64, "gm-clock-id"},
    gm_priority1{YType::uint8, "gm-priority1"},
    gm_priority2{YType::uint8, "gm-priority2"},
    gmoslv{YType::uint16, "gmoslv"},
    observed_parent_clock_phase_change_rate{YType::uint32, "observed-parent-clock-phase-change-rate"},
    observed_parent_oslv{YType::uint16, "observed-parent-oslv"},
    parent_clock_id{YType::uint64, "parent-clock-id"},
    parent_port_number{YType::uint16, "parent-port-number"},
    parent_stats{YType::boolean, "parent-stats"}
{

    yang_name = "parent-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::ParentDs::~ParentDs()
{
}

bool Ptp::Dataset::ParentDs::has_data() const
{
    return gm_clock_accuracy.is_set
	|| gm_clock_class.is_set
	|| gm_clock_id.is_set
	|| gm_priority1.is_set
	|| gm_priority2.is_set
	|| gmoslv.is_set
	|| observed_parent_clock_phase_change_rate.is_set
	|| observed_parent_oslv.is_set
	|| parent_clock_id.is_set
	|| parent_port_number.is_set
	|| parent_stats.is_set;
}

bool Ptp::Dataset::ParentDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gm_clock_accuracy.yfilter)
	|| ydk::is_set(gm_clock_class.yfilter)
	|| ydk::is_set(gm_clock_id.yfilter)
	|| ydk::is_set(gm_priority1.yfilter)
	|| ydk::is_set(gm_priority2.yfilter)
	|| ydk::is_set(gmoslv.yfilter)
	|| ydk::is_set(observed_parent_clock_phase_change_rate.yfilter)
	|| ydk::is_set(observed_parent_oslv.yfilter)
	|| ydk::is_set(parent_clock_id.yfilter)
	|| ydk::is_set(parent_port_number.yfilter)
	|| ydk::is_set(parent_stats.yfilter);
}

std::string Ptp::Dataset::ParentDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::ParentDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::ParentDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gm_clock_accuracy.is_set || is_set(gm_clock_accuracy.yfilter)) leaf_name_data.push_back(gm_clock_accuracy.get_name_leafdata());
    if (gm_clock_class.is_set || is_set(gm_clock_class.yfilter)) leaf_name_data.push_back(gm_clock_class.get_name_leafdata());
    if (gm_clock_id.is_set || is_set(gm_clock_id.yfilter)) leaf_name_data.push_back(gm_clock_id.get_name_leafdata());
    if (gm_priority1.is_set || is_set(gm_priority1.yfilter)) leaf_name_data.push_back(gm_priority1.get_name_leafdata());
    if (gm_priority2.is_set || is_set(gm_priority2.yfilter)) leaf_name_data.push_back(gm_priority2.get_name_leafdata());
    if (gmoslv.is_set || is_set(gmoslv.yfilter)) leaf_name_data.push_back(gmoslv.get_name_leafdata());
    if (observed_parent_clock_phase_change_rate.is_set || is_set(observed_parent_clock_phase_change_rate.yfilter)) leaf_name_data.push_back(observed_parent_clock_phase_change_rate.get_name_leafdata());
    if (observed_parent_oslv.is_set || is_set(observed_parent_oslv.yfilter)) leaf_name_data.push_back(observed_parent_oslv.get_name_leafdata());
    if (parent_clock_id.is_set || is_set(parent_clock_id.yfilter)) leaf_name_data.push_back(parent_clock_id.get_name_leafdata());
    if (parent_port_number.is_set || is_set(parent_port_number.yfilter)) leaf_name_data.push_back(parent_port_number.get_name_leafdata());
    if (parent_stats.is_set || is_set(parent_stats.yfilter)) leaf_name_data.push_back(parent_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::ParentDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::ParentDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Dataset::ParentDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gm-clock-accuracy")
    {
        gm_clock_accuracy = value;
        gm_clock_accuracy.value_namespace = name_space;
        gm_clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-clock-class")
    {
        gm_clock_class = value;
        gm_clock_class.value_namespace = name_space;
        gm_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-clock-id")
    {
        gm_clock_id = value;
        gm_clock_id.value_namespace = name_space;
        gm_clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-priority1")
    {
        gm_priority1 = value;
        gm_priority1.value_namespace = name_space;
        gm_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-priority2")
    {
        gm_priority2 = value;
        gm_priority2.value_namespace = name_space;
        gm_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmoslv")
    {
        gmoslv = value;
        gmoslv.value_namespace = name_space;
        gmoslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observed-parent-clock-phase-change-rate")
    {
        observed_parent_clock_phase_change_rate = value;
        observed_parent_clock_phase_change_rate.value_namespace = name_space;
        observed_parent_clock_phase_change_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observed-parent-oslv")
    {
        observed_parent_oslv = value;
        observed_parent_oslv.value_namespace = name_space;
        observed_parent_oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-clock-id")
    {
        parent_clock_id = value;
        parent_clock_id.value_namespace = name_space;
        parent_clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-port-number")
    {
        parent_port_number = value;
        parent_port_number.value_namespace = name_space;
        parent_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-stats")
    {
        parent_stats = value;
        parent_stats.value_namespace = name_space;
        parent_stats.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::ParentDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gm-clock-accuracy")
    {
        gm_clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "gm-clock-class")
    {
        gm_clock_class.yfilter = yfilter;
    }
    if(value_path == "gm-clock-id")
    {
        gm_clock_id.yfilter = yfilter;
    }
    if(value_path == "gm-priority1")
    {
        gm_priority1.yfilter = yfilter;
    }
    if(value_path == "gm-priority2")
    {
        gm_priority2.yfilter = yfilter;
    }
    if(value_path == "gmoslv")
    {
        gmoslv.yfilter = yfilter;
    }
    if(value_path == "observed-parent-clock-phase-change-rate")
    {
        observed_parent_clock_phase_change_rate.yfilter = yfilter;
    }
    if(value_path == "observed-parent-oslv")
    {
        observed_parent_oslv.yfilter = yfilter;
    }
    if(value_path == "parent-clock-id")
    {
        parent_clock_id.yfilter = yfilter;
    }
    if(value_path == "parent-port-number")
    {
        parent_port_number.yfilter = yfilter;
    }
    if(value_path == "parent-stats")
    {
        parent_stats.yfilter = yfilter;
    }
}

bool Ptp::Dataset::ParentDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gm-clock-accuracy" || name == "gm-clock-class" || name == "gm-clock-id" || name == "gm-priority1" || name == "gm-priority2" || name == "gmoslv" || name == "observed-parent-clock-phase-change-rate" || name == "observed-parent-oslv" || name == "parent-clock-id" || name == "parent-port-number" || name == "parent-stats")
        return true;
    return false;
}

Ptp::Dataset::PortDses::PortDses()
{

    yang_name = "port-dses"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::PortDses::~PortDses()
{
}

bool Ptp::Dataset::PortDses::has_data() const
{
    for (std::size_t index=0; index<port_ds.size(); index++)
    {
        if(port_ds[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Dataset::PortDses::has_operation() const
{
    for (std::size_t index=0; index<port_ds.size(); index++)
    {
        if(port_ds[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Dataset::PortDses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::PortDses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-dses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::PortDses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::PortDses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-ds")
    {
        for(auto const & c : port_ds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Dataset::PortDses::PortDs>();
        c->parent = this;
        port_ds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::PortDses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_ds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Dataset::PortDses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Dataset::PortDses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Dataset::PortDses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-ds")
        return true;
    return false;
}

Ptp::Dataset::PortDses::PortDs::PortDs()
    :
    interface_name{YType::str, "interface-name"},
    annoucne_receipt_timeout{YType::uint32, "annoucne-receipt-timeout"},
    clock_id{YType::uint64, "clock-id"},
    delay_mechanism{YType::enumeration, "delay-mechanism"},
    local_priority{YType::uint32, "local-priority"},
    log_announce_interval{YType::int16, "log-announce-interval"},
    log_min_delay_req_interval{YType::int16, "log-min-delay-req-interval"},
    log_min_p_delay_req_interval{YType::int16, "log-min-p-delay-req-interval"},
    log_sync_interval{YType::int16, "log-sync-interval"},
    master_only{YType::boolean, "master-only"},
    peer_mean_path_delay{YType::int64, "peer-mean-path-delay"},
    port_number{YType::uint16, "port-number"},
    port_state{YType::enumeration, "port-state"},
    signal_fail{YType::boolean, "signal-fail"},
    version_number{YType::uint8, "version-number"}
{

    yang_name = "port-ds"; yang_parent_name = "port-dses"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::PortDses::PortDs::~PortDs()
{
}

bool Ptp::Dataset::PortDses::PortDs::has_data() const
{
    return interface_name.is_set
	|| annoucne_receipt_timeout.is_set
	|| clock_id.is_set
	|| delay_mechanism.is_set
	|| local_priority.is_set
	|| log_announce_interval.is_set
	|| log_min_delay_req_interval.is_set
	|| log_min_p_delay_req_interval.is_set
	|| log_sync_interval.is_set
	|| master_only.is_set
	|| peer_mean_path_delay.is_set
	|| port_number.is_set
	|| port_state.is_set
	|| signal_fail.is_set
	|| version_number.is_set;
}

bool Ptp::Dataset::PortDses::PortDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(annoucne_receipt_timeout.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(delay_mechanism.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(log_announce_interval.yfilter)
	|| ydk::is_set(log_min_delay_req_interval.yfilter)
	|| ydk::is_set(log_min_p_delay_req_interval.yfilter)
	|| ydk::is_set(log_sync_interval.yfilter)
	|| ydk::is_set(master_only.yfilter)
	|| ydk::is_set(peer_mean_path_delay.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(signal_fail.yfilter)
	|| ydk::is_set(version_number.yfilter);
}

std::string Ptp::Dataset::PortDses::PortDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/port-dses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::PortDses::PortDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-ds" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::PortDses::PortDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (annoucne_receipt_timeout.is_set || is_set(annoucne_receipt_timeout.yfilter)) leaf_name_data.push_back(annoucne_receipt_timeout.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (delay_mechanism.is_set || is_set(delay_mechanism.yfilter)) leaf_name_data.push_back(delay_mechanism.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (log_announce_interval.is_set || is_set(log_announce_interval.yfilter)) leaf_name_data.push_back(log_announce_interval.get_name_leafdata());
    if (log_min_delay_req_interval.is_set || is_set(log_min_delay_req_interval.yfilter)) leaf_name_data.push_back(log_min_delay_req_interval.get_name_leafdata());
    if (log_min_p_delay_req_interval.is_set || is_set(log_min_p_delay_req_interval.yfilter)) leaf_name_data.push_back(log_min_p_delay_req_interval.get_name_leafdata());
    if (log_sync_interval.is_set || is_set(log_sync_interval.yfilter)) leaf_name_data.push_back(log_sync_interval.get_name_leafdata());
    if (master_only.is_set || is_set(master_only.yfilter)) leaf_name_data.push_back(master_only.get_name_leafdata());
    if (peer_mean_path_delay.is_set || is_set(peer_mean_path_delay.yfilter)) leaf_name_data.push_back(peer_mean_path_delay.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::PortDses::PortDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::PortDses::PortDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Dataset::PortDses::PortDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "annoucne-receipt-timeout")
    {
        annoucne_receipt_timeout = value;
        annoucne_receipt_timeout.value_namespace = name_space;
        annoucne_receipt_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-mechanism")
    {
        delay_mechanism = value;
        delay_mechanism.value_namespace = name_space;
        delay_mechanism.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval = value;
        log_announce_interval.value_namespace = name_space;
        log_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-delay-req-interval")
    {
        log_min_delay_req_interval = value;
        log_min_delay_req_interval.value_namespace = name_space;
        log_min_delay_req_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-p-delay-req-interval")
    {
        log_min_p_delay_req_interval = value;
        log_min_p_delay_req_interval.value_namespace = name_space;
        log_min_p_delay_req_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval = value;
        log_sync_interval.value_namespace = name_space;
        log_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-only")
    {
        master_only = value;
        master_only.value_namespace = name_space;
        master_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mean-path-delay")
    {
        peer_mean_path_delay = value;
        peer_mean_path_delay.value_namespace = name_space;
        peer_mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::PortDses::PortDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "annoucne-receipt-timeout")
    {
        annoucne_receipt_timeout.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "delay-mechanism")
    {
        delay_mechanism.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval.yfilter = yfilter;
    }
    if(value_path == "log-min-delay-req-interval")
    {
        log_min_delay_req_interval.yfilter = yfilter;
    }
    if(value_path == "log-min-p-delay-req-interval")
    {
        log_min_p_delay_req_interval.yfilter = yfilter;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval.yfilter = yfilter;
    }
    if(value_path == "master-only")
    {
        master_only.yfilter = yfilter;
    }
    if(value_path == "peer-mean-path-delay")
    {
        peer_mean_path_delay.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
}

bool Ptp::Dataset::PortDses::PortDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "annoucne-receipt-timeout" || name == "clock-id" || name == "delay-mechanism" || name == "local-priority" || name == "log-announce-interval" || name == "log-min-delay-req-interval" || name == "log-min-p-delay-req-interval" || name == "log-sync-interval" || name == "master-only" || name == "peer-mean-path-delay" || name == "port-number" || name == "port-state" || name == "signal-fail" || name == "version-number")
        return true;
    return false;
}

Ptp::Dataset::TimePropertiesDs::TimePropertiesDs()
    :
    current_utc_offset{YType::int16, "current-utc-offset"},
    current_utc_offset_valid{YType::boolean, "current-utc-offset-valid"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    leap59{YType::boolean, "leap59"},
    leap61{YType::boolean, "leap61"},
    ptp_timescale{YType::boolean, "ptp-timescale"},
    time_source{YType::enumeration, "time-source"},
    time_traceable{YType::boolean, "time-traceable"}
{

    yang_name = "time-properties-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Dataset::TimePropertiesDs::~TimePropertiesDs()
{
}

bool Ptp::Dataset::TimePropertiesDs::has_data() const
{
    return current_utc_offset.is_set
	|| current_utc_offset_valid.is_set
	|| frequency_traceable.is_set
	|| leap59.is_set
	|| leap61.is_set
	|| ptp_timescale.is_set
	|| time_source.is_set
	|| time_traceable.is_set;
}

bool Ptp::Dataset::TimePropertiesDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_utc_offset.yfilter)
	|| ydk::is_set(current_utc_offset_valid.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(leap59.yfilter)
	|| ydk::is_set(leap61.yfilter)
	|| ydk::is_set(ptp_timescale.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(time_traceable.yfilter);
}

std::string Ptp::Dataset::TimePropertiesDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::TimePropertiesDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-properties-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::TimePropertiesDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_utc_offset.is_set || is_set(current_utc_offset.yfilter)) leaf_name_data.push_back(current_utc_offset.get_name_leafdata());
    if (current_utc_offset_valid.is_set || is_set(current_utc_offset_valid.yfilter)) leaf_name_data.push_back(current_utc_offset_valid.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (leap59.is_set || is_set(leap59.yfilter)) leaf_name_data.push_back(leap59.get_name_leafdata());
    if (leap61.is_set || is_set(leap61.yfilter)) leaf_name_data.push_back(leap61.get_name_leafdata());
    if (ptp_timescale.is_set || is_set(ptp_timescale.yfilter)) leaf_name_data.push_back(ptp_timescale.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Dataset::TimePropertiesDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Dataset::TimePropertiesDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Dataset::TimePropertiesDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-utc-offset")
    {
        current_utc_offset = value;
        current_utc_offset.value_namespace = name_space;
        current_utc_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-utc-offset-valid")
    {
        current_utc_offset_valid = value;
        current_utc_offset_valid.value_namespace = name_space;
        current_utc_offset_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap59")
    {
        leap59 = value;
        leap59.value_namespace = name_space;
        leap59.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap61")
    {
        leap61 = value;
        leap61.value_namespace = name_space;
        leap61.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-timescale")
    {
        ptp_timescale = value;
        ptp_timescale.value_namespace = name_space;
        ptp_timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::TimePropertiesDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-utc-offset")
    {
        current_utc_offset.yfilter = yfilter;
    }
    if(value_path == "current-utc-offset-valid")
    {
        current_utc_offset_valid.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "leap59")
    {
        leap59.yfilter = yfilter;
    }
    if(value_path == "leap61")
    {
        leap61.yfilter = yfilter;
    }
    if(value_path == "ptp-timescale")
    {
        ptp_timescale.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
}

bool Ptp::Dataset::TimePropertiesDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-utc-offset" || name == "current-utc-offset-valid" || name == "frequency-traceable" || name == "leap59" || name == "leap61" || name == "ptp-timescale" || name == "time-source" || name == "time-traceable")
        return true;
    return false;
}

Ptp::GlobalConfigurationError::GlobalConfigurationError()
    :
    clock_profile{YType::enumeration, "clock-profile"},
    clock_profile_set{YType::boolean, "clock-profile-set"},
    domain_number{YType::uint8, "domain-number"},
    priority2{YType::uint8, "priority2"},
    telecom_clock_type{YType::enumeration, "telecom-clock-type"}
    	,
    configuration_errors(std::make_shared<Ptp::GlobalConfigurationError::ConfigurationErrors>())
{
    configuration_errors->parent = this;

    yang_name = "global-configuration-error"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::GlobalConfigurationError::~GlobalConfigurationError()
{
}

bool Ptp::GlobalConfigurationError::has_data() const
{
    return clock_profile.is_set
	|| clock_profile_set.is_set
	|| domain_number.is_set
	|| priority2.is_set
	|| telecom_clock_type.is_set
	|| (configuration_errors !=  nullptr && configuration_errors->has_data());
}

bool Ptp::GlobalConfigurationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_profile.yfilter)
	|| ydk::is_set(clock_profile_set.yfilter)
	|| ydk::is_set(domain_number.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(telecom_clock_type.yfilter)
	|| (configuration_errors !=  nullptr && configuration_errors->has_operation());
}

std::string Ptp::GlobalConfigurationError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::GlobalConfigurationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-configuration-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::GlobalConfigurationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_profile.is_set || is_set(clock_profile.yfilter)) leaf_name_data.push_back(clock_profile.get_name_leafdata());
    if (clock_profile_set.is_set || is_set(clock_profile_set.yfilter)) leaf_name_data.push_back(clock_profile_set.get_name_leafdata());
    if (domain_number.is_set || is_set(domain_number.yfilter)) leaf_name_data.push_back(domain_number.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (telecom_clock_type.is_set || is_set(telecom_clock_type.yfilter)) leaf_name_data.push_back(telecom_clock_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::GlobalConfigurationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-errors")
    {
        if(configuration_errors == nullptr)
        {
            configuration_errors = std::make_shared<Ptp::GlobalConfigurationError::ConfigurationErrors>();
        }
        return configuration_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::GlobalConfigurationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration_errors != nullptr)
    {
        children["configuration-errors"] = configuration_errors;
    }

    return children;
}

void Ptp::GlobalConfigurationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-profile")
    {
        clock_profile = value;
        clock_profile.value_namespace = name_space;
        clock_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-profile-set")
    {
        clock_profile_set = value;
        clock_profile_set.value_namespace = name_space;
        clock_profile_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-number")
    {
        domain_number = value;
        domain_number.value_namespace = name_space;
        domain_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type = value;
        telecom_clock_type.value_namespace = name_space;
        telecom_clock_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::GlobalConfigurationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-profile")
    {
        clock_profile.yfilter = yfilter;
    }
    if(value_path == "clock-profile-set")
    {
        clock_profile_set.yfilter = yfilter;
    }
    if(value_path == "domain-number")
    {
        domain_number.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type.yfilter = yfilter;
    }
}

bool Ptp::GlobalConfigurationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-errors" || name == "clock-profile" || name == "clock-profile-set" || name == "domain-number" || name == "priority2" || name == "telecom-clock-type")
        return true;
    return false;
}

Ptp::GlobalConfigurationError::ConfigurationErrors::ConfigurationErrors()
    :
    domain{YType::boolean, "domain"},
    profile_priority1_config{YType::boolean, "profile-priority1-config"},
    profile_priority2_value{YType::boolean, "profile-priority2-value"}
{

    yang_name = "configuration-errors"; yang_parent_name = "global-configuration-error"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::GlobalConfigurationError::ConfigurationErrors::~ConfigurationErrors()
{
}

bool Ptp::GlobalConfigurationError::ConfigurationErrors::has_data() const
{
    return domain.is_set
	|| profile_priority1_config.is_set
	|| profile_priority2_value.is_set;
}

bool Ptp::GlobalConfigurationError::ConfigurationErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(profile_priority1_config.yfilter)
	|| ydk::is_set(profile_priority2_value.yfilter);
}

std::string Ptp::GlobalConfigurationError::ConfigurationErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/global-configuration-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::GlobalConfigurationError::ConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::GlobalConfigurationError::ConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (profile_priority1_config.is_set || is_set(profile_priority1_config.yfilter)) leaf_name_data.push_back(profile_priority1_config.get_name_leafdata());
    if (profile_priority2_value.is_set || is_set(profile_priority2_value.yfilter)) leaf_name_data.push_back(profile_priority2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::GlobalConfigurationError::ConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::GlobalConfigurationError::ConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::GlobalConfigurationError::ConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-priority1-config")
    {
        profile_priority1_config = value;
        profile_priority1_config.value_namespace = name_space;
        profile_priority1_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-priority2-value")
    {
        profile_priority2_value = value;
        profile_priority2_value.value_namespace = name_space;
        profile_priority2_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::GlobalConfigurationError::ConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "profile-priority1-config")
    {
        profile_priority1_config.yfilter = yfilter;
    }
    if(value_path == "profile-priority2-value")
    {
        profile_priority2_value.yfilter = yfilter;
    }
}

bool Ptp::GlobalConfigurationError::ConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "profile-priority1-config" || name == "profile-priority2-value")
        return true;
    return false;
}

Ptp::Grandmaster::Grandmaster()
    :
    domain{YType::uint8, "domain"},
    known_for_time{YType::uint32, "known-for-time"},
    used_for_frequency{YType::boolean, "used-for-frequency"},
    used_for_time{YType::boolean, "used-for-time"}
    	,
    address(std::make_shared<Ptp::Grandmaster::Address>())
	,clock_properties(std::make_shared<Ptp::Grandmaster::ClockProperties>())
{
    address->parent = this;
    clock_properties->parent = this;

    yang_name = "grandmaster"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::~Grandmaster()
{
}

bool Ptp::Grandmaster::has_data() const
{
    return domain.is_set
	|| known_for_time.is_set
	|| used_for_frequency.is_set
	|| used_for_time.is_set
	|| (address !=  nullptr && address->has_data())
	|| (clock_properties !=  nullptr && clock_properties->has_data());
}

bool Ptp::Grandmaster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(known_for_time.yfilter)
	|| ydk::is_set(used_for_frequency.yfilter)
	|| ydk::is_set(used_for_time.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (clock_properties !=  nullptr && clock_properties->has_operation());
}

std::string Ptp::Grandmaster::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grandmaster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (known_for_time.is_set || is_set(known_for_time.yfilter)) leaf_name_data.push_back(known_for_time.get_name_leafdata());
    if (used_for_frequency.is_set || is_set(used_for_frequency.yfilter)) leaf_name_data.push_back(used_for_frequency.get_name_leafdata());
    if (used_for_time.is_set || is_set(used_for_time.yfilter)) leaf_name_data.push_back(used_for_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Grandmaster::Address>();
        }
        return address;
    }

    if(child_yang_name == "clock-properties")
    {
        if(clock_properties == nullptr)
        {
            clock_properties = std::make_shared<Ptp::Grandmaster::ClockProperties>();
        }
        return clock_properties;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(clock_properties != nullptr)
    {
        children["clock-properties"] = clock_properties;
    }

    return children;
}

void Ptp::Grandmaster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known-for-time")
    {
        known_for_time = value;
        known_for_time.value_namespace = name_space;
        known_for_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-for-frequency")
    {
        used_for_frequency = value;
        used_for_frequency.value_namespace = name_space;
        used_for_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-for-time")
    {
        used_for_time = value;
        used_for_time.value_namespace = name_space;
        used_for_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "known-for-time")
    {
        known_for_time.yfilter = yfilter;
    }
    if(value_path == "used-for-frequency")
    {
        used_for_frequency.yfilter = yfilter;
    }
    if(value_path == "used-for-time")
    {
        used_for_time.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "clock-properties" || name == "domain" || name == "known-for-time" || name == "used-for-frequency" || name == "used-for-time")
        return true;
    return false;
}

Ptp::Grandmaster::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::Grandmaster::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::Grandmaster::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "grandmaster"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::Address::~Address()
{
}

bool Ptp::Grandmaster::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Grandmaster::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Grandmaster::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Grandmaster::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Grandmaster::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::Grandmaster::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Grandmaster::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Grandmaster::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::Grandmaster::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Grandmaster::Address::Ipv6Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Grandmaster::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Grandmaster::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Grandmaster::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Grandmaster::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Grandmaster::Address::MacAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Grandmaster::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::ClockProperties()
    :
    accuracy{YType::uint8, "accuracy"},
    class_{YType::uint8, "class"},
    clock_id{YType::uint64, "clock-id"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"}
    	,
    receiver(std::make_shared<Ptp::Grandmaster::ClockProperties::Receiver>())
	,sender(std::make_shared<Ptp::Grandmaster::ClockProperties::Sender>())
	,utc_offset(std::make_shared<Ptp::Grandmaster::ClockProperties::UtcOffset>())
{
    receiver->parent = this;
    sender->parent = this;
    utc_offset->parent = this;

    yang_name = "clock-properties"; yang_parent_name = "grandmaster"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::ClockProperties::~ClockProperties()
{
}

bool Ptp::Grandmaster::ClockProperties::has_data() const
{
    return accuracy.is_set
	|| class_.is_set
	|| clock_id.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| frequency_traceable.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| offset_log_variance.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data())
	|| (utc_offset !=  nullptr && utc_offset->has_data());
}

bool Ptp::Grandmaster::ClockProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation())
	|| (utc_offset !=  nullptr && utc_offset->has_operation());
}

std::string Ptp::Grandmaster::ClockProperties::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::ClockProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::Grandmaster::ClockProperties::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::Grandmaster::ClockProperties::Sender>();
        }
        return sender;
    }

    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::Grandmaster::ClockProperties::UtcOffset>();
        }
        return utc_offset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::ClockProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receiver != nullptr)
    {
        children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        children["sender"] = sender;
    }

    if(utc_offset != nullptr)
    {
        children["utc-offset"] = utc_offset;
    }

    return children;
}

void Ptp::Grandmaster::ClockProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver" || name == "sender" || name == "utc-offset" || name == "accuracy" || name == "class" || name == "clock-id" || name == "configured-clock-class" || name == "configured-priority" || name == "frequency-traceable" || name == "leap-seconds" || name == "local" || name == "offset-log-variance" || name == "priority1" || name == "priority2" || name == "steps-removed" || name == "time-source" || name == "time-traceable" || name == "timescale")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::ClockProperties::Receiver::~Receiver()
{
}

bool Ptp::Grandmaster::ClockProperties::Receiver::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Grandmaster::ClockProperties::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Grandmaster::ClockProperties::Receiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::ClockProperties::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::ClockProperties::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Grandmaster::ClockProperties::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::ClockProperties::Sender::~Sender()
{
}

bool Ptp::Grandmaster::ClockProperties::Sender::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Grandmaster::ClockProperties::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Grandmaster::ClockProperties::Sender::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::ClockProperties::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::ClockProperties::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Grandmaster::ClockProperties::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Grandmaster::ClockProperties::UtcOffset::~UtcOffset()
{
}

bool Ptp::Grandmaster::ClockProperties::UtcOffset::has_data() const
{
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::Grandmaster::ClockProperties::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::Grandmaster::ClockProperties::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Grandmaster::ClockProperties::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Grandmaster::ClockProperties::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Grandmaster::ClockProperties::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationErrors()
{

    yang_name = "interface-configuration-errors"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfaceConfigurationErrors::~InterfaceConfigurationErrors()
{
}

bool Ptp::InterfaceConfigurationErrors::has_data() const
{
    for (std::size_t index=0; index<interface_configuration_error.size(); index++)
    {
        if(interface_configuration_error[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceConfigurationErrors::has_operation() const
{
    for (std::size_t index=0; index<interface_configuration_error.size(); index++)
    {
        if(interface_configuration_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceConfigurationErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-configuration-error")
    {
        for(auto const & c : interface_configuration_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError>();
        c->parent = this;
        interface_configuration_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_configuration_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfaceConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-configuration-error")
        return true;
    return false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::InterfaceConfigurationError()
    :
    interface_name{YType::str, "interface-name"},
    clock_profile{YType::enumeration, "clock-profile"},
    configuration_profile_name{YType::str, "configuration-profile-name"},
    restrict_port_state{YType::enumeration, "restrict-port-state"},
    telecom_clock_type{YType::enumeration, "telecom-clock-type"}
    	,
    configuration_errors(std::make_shared<Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors>())
{
    configuration_errors->parent = this;

    yang_name = "interface-configuration-error"; yang_parent_name = "interface-configuration-errors"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::~InterfaceConfigurationError()
{
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::has_data() const
{
    return interface_name.is_set
	|| clock_profile.is_set
	|| configuration_profile_name.is_set
	|| restrict_port_state.is_set
	|| telecom_clock_type.is_set
	|| (configuration_errors !=  nullptr && configuration_errors->has_data());
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(clock_profile.yfilter)
	|| ydk::is_set(configuration_profile_name.yfilter)
	|| ydk::is_set(restrict_port_state.yfilter)
	|| ydk::is_set(telecom_clock_type.yfilter)
	|| (configuration_errors !=  nullptr && configuration_errors->has_operation());
}

std::string Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-configuration-errors/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration-error" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (clock_profile.is_set || is_set(clock_profile.yfilter)) leaf_name_data.push_back(clock_profile.get_name_leafdata());
    if (configuration_profile_name.is_set || is_set(configuration_profile_name.yfilter)) leaf_name_data.push_back(configuration_profile_name.get_name_leafdata());
    if (restrict_port_state.is_set || is_set(restrict_port_state.yfilter)) leaf_name_data.push_back(restrict_port_state.get_name_leafdata());
    if (telecom_clock_type.is_set || is_set(telecom_clock_type.yfilter)) leaf_name_data.push_back(telecom_clock_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-errors")
    {
        if(configuration_errors == nullptr)
        {
            configuration_errors = std::make_shared<Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors>();
        }
        return configuration_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration_errors != nullptr)
    {
        children["configuration-errors"] = configuration_errors;
    }

    return children;
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-profile")
    {
        clock_profile = value;
        clock_profile.value_namespace = name_space;
        clock_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-profile-name")
    {
        configuration_profile_name = value;
        configuration_profile_name.value_namespace = name_space;
        configuration_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrict-port-state")
    {
        restrict_port_state = value;
        restrict_port_state.value_namespace = name_space;
        restrict_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type = value;
        telecom_clock_type.value_namespace = name_space;
        telecom_clock_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "clock-profile")
    {
        clock_profile.yfilter = yfilter;
    }
    if(value_path == "configuration-profile-name")
    {
        configuration_profile_name.yfilter = yfilter;
    }
    if(value_path == "restrict-port-state")
    {
        restrict_port_state.yfilter = yfilter;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type.yfilter = yfilter;
    }
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-errors" || name == "interface-name" || name == "clock-profile" || name == "configuration-profile-name" || name == "restrict-port-state" || name == "telecom-clock-type")
        return true;
    return false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::ConfigurationErrors()
    :
    ethernet_transport{YType::boolean, "ethernet-transport"},
    global_ptp{YType::boolean, "global-ptp"},
    invalid_grant_reduction{YType::boolean, "invalid-grant-reduction"},
    ipv6{YType::boolean, "ipv6"},
    local_priority{YType::boolean, "local-priority"},
    multicast{YType::boolean, "multicast"},
    one_step{YType::boolean, "one-step"},
    profile_announce_interval{YType::boolean, "profile-announce-interval"},
    profile_delay_req_interval{YType::boolean, "profile-delay-req-interval"},
    profile_delay_resp_timeout{YType::boolean, "profile-delay-resp-timeout"},
    profile_ethernet{YType::boolean, "profile-ethernet"},
    profile_ipv4{YType::boolean, "profile-ipv4"},
    profile_ipv6{YType::boolean, "profile-ipv6"},
    profile_master_mixed{YType::boolean, "profile-master-mixed"},
    profile_master_multicast{YType::boolean, "profile-master-multicast"},
    profile_master_unicast{YType::boolean, "profile-master-unicast"},
    profile_mixed{YType::boolean, "profile-mixed"},
    profile_multicast{YType::boolean, "profile-multicast"},
    profile_not_global{YType::boolean, "profile-not-global"},
    profile_port_state{YType::boolean, "profile-port-state"},
    profile_sync_interval{YType::boolean, "profile-sync-interval"},
    profile_sync_timeout{YType::boolean, "profile-sync-timeout"},
    profile_unicast{YType::boolean, "profile-unicast"},
    slave{YType::boolean, "slave"},
    target_address_ipv4{YType::boolean, "target-address-ipv4"},
    target_address_ipv6{YType::boolean, "target-address-ipv6"}
{

    yang_name = "configuration-errors"; yang_parent_name = "interface-configuration-error"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::~ConfigurationErrors()
{
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::has_data() const
{
    return ethernet_transport.is_set
	|| global_ptp.is_set
	|| invalid_grant_reduction.is_set
	|| ipv6.is_set
	|| local_priority.is_set
	|| multicast.is_set
	|| one_step.is_set
	|| profile_announce_interval.is_set
	|| profile_delay_req_interval.is_set
	|| profile_delay_resp_timeout.is_set
	|| profile_ethernet.is_set
	|| profile_ipv4.is_set
	|| profile_ipv6.is_set
	|| profile_master_mixed.is_set
	|| profile_master_multicast.is_set
	|| profile_master_unicast.is_set
	|| profile_mixed.is_set
	|| profile_multicast.is_set
	|| profile_not_global.is_set
	|| profile_port_state.is_set
	|| profile_sync_interval.is_set
	|| profile_sync_timeout.is_set
	|| profile_unicast.is_set
	|| slave.is_set
	|| target_address_ipv4.is_set
	|| target_address_ipv6.is_set;
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_transport.yfilter)
	|| ydk::is_set(global_ptp.yfilter)
	|| ydk::is_set(invalid_grant_reduction.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(one_step.yfilter)
	|| ydk::is_set(profile_announce_interval.yfilter)
	|| ydk::is_set(profile_delay_req_interval.yfilter)
	|| ydk::is_set(profile_delay_resp_timeout.yfilter)
	|| ydk::is_set(profile_ethernet.yfilter)
	|| ydk::is_set(profile_ipv4.yfilter)
	|| ydk::is_set(profile_ipv6.yfilter)
	|| ydk::is_set(profile_master_mixed.yfilter)
	|| ydk::is_set(profile_master_multicast.yfilter)
	|| ydk::is_set(profile_master_unicast.yfilter)
	|| ydk::is_set(profile_mixed.yfilter)
	|| ydk::is_set(profile_multicast.yfilter)
	|| ydk::is_set(profile_not_global.yfilter)
	|| ydk::is_set(profile_port_state.yfilter)
	|| ydk::is_set(profile_sync_interval.yfilter)
	|| ydk::is_set(profile_sync_timeout.yfilter)
	|| ydk::is_set(profile_unicast.yfilter)
	|| ydk::is_set(slave.yfilter)
	|| ydk::is_set(target_address_ipv4.yfilter)
	|| ydk::is_set(target_address_ipv6.yfilter);
}

std::string Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_transport.is_set || is_set(ethernet_transport.yfilter)) leaf_name_data.push_back(ethernet_transport.get_name_leafdata());
    if (global_ptp.is_set || is_set(global_ptp.yfilter)) leaf_name_data.push_back(global_ptp.get_name_leafdata());
    if (invalid_grant_reduction.is_set || is_set(invalid_grant_reduction.yfilter)) leaf_name_data.push_back(invalid_grant_reduction.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (one_step.is_set || is_set(one_step.yfilter)) leaf_name_data.push_back(one_step.get_name_leafdata());
    if (profile_announce_interval.is_set || is_set(profile_announce_interval.yfilter)) leaf_name_data.push_back(profile_announce_interval.get_name_leafdata());
    if (profile_delay_req_interval.is_set || is_set(profile_delay_req_interval.yfilter)) leaf_name_data.push_back(profile_delay_req_interval.get_name_leafdata());
    if (profile_delay_resp_timeout.is_set || is_set(profile_delay_resp_timeout.yfilter)) leaf_name_data.push_back(profile_delay_resp_timeout.get_name_leafdata());
    if (profile_ethernet.is_set || is_set(profile_ethernet.yfilter)) leaf_name_data.push_back(profile_ethernet.get_name_leafdata());
    if (profile_ipv4.is_set || is_set(profile_ipv4.yfilter)) leaf_name_data.push_back(profile_ipv4.get_name_leafdata());
    if (profile_ipv6.is_set || is_set(profile_ipv6.yfilter)) leaf_name_data.push_back(profile_ipv6.get_name_leafdata());
    if (profile_master_mixed.is_set || is_set(profile_master_mixed.yfilter)) leaf_name_data.push_back(profile_master_mixed.get_name_leafdata());
    if (profile_master_multicast.is_set || is_set(profile_master_multicast.yfilter)) leaf_name_data.push_back(profile_master_multicast.get_name_leafdata());
    if (profile_master_unicast.is_set || is_set(profile_master_unicast.yfilter)) leaf_name_data.push_back(profile_master_unicast.get_name_leafdata());
    if (profile_mixed.is_set || is_set(profile_mixed.yfilter)) leaf_name_data.push_back(profile_mixed.get_name_leafdata());
    if (profile_multicast.is_set || is_set(profile_multicast.yfilter)) leaf_name_data.push_back(profile_multicast.get_name_leafdata());
    if (profile_not_global.is_set || is_set(profile_not_global.yfilter)) leaf_name_data.push_back(profile_not_global.get_name_leafdata());
    if (profile_port_state.is_set || is_set(profile_port_state.yfilter)) leaf_name_data.push_back(profile_port_state.get_name_leafdata());
    if (profile_sync_interval.is_set || is_set(profile_sync_interval.yfilter)) leaf_name_data.push_back(profile_sync_interval.get_name_leafdata());
    if (profile_sync_timeout.is_set || is_set(profile_sync_timeout.yfilter)) leaf_name_data.push_back(profile_sync_timeout.get_name_leafdata());
    if (profile_unicast.is_set || is_set(profile_unicast.yfilter)) leaf_name_data.push_back(profile_unicast.get_name_leafdata());
    if (slave.is_set || is_set(slave.yfilter)) leaf_name_data.push_back(slave.get_name_leafdata());
    if (target_address_ipv4.is_set || is_set(target_address_ipv4.yfilter)) leaf_name_data.push_back(target_address_ipv4.get_name_leafdata());
    if (target_address_ipv6.is_set || is_set(target_address_ipv6.yfilter)) leaf_name_data.push_back(target_address_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-transport")
    {
        ethernet_transport = value;
        ethernet_transport.value_namespace = name_space;
        ethernet_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ptp")
    {
        global_ptp = value;
        global_ptp.value_namespace = name_space;
        global_ptp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-grant-reduction")
    {
        invalid_grant_reduction = value;
        invalid_grant_reduction.value_namespace = name_space;
        invalid_grant_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-step")
    {
        one_step = value;
        one_step.value_namespace = name_space;
        one_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-announce-interval")
    {
        profile_announce_interval = value;
        profile_announce_interval.value_namespace = name_space;
        profile_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-delay-req-interval")
    {
        profile_delay_req_interval = value;
        profile_delay_req_interval.value_namespace = name_space;
        profile_delay_req_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-delay-resp-timeout")
    {
        profile_delay_resp_timeout = value;
        profile_delay_resp_timeout.value_namespace = name_space;
        profile_delay_resp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-ethernet")
    {
        profile_ethernet = value;
        profile_ethernet.value_namespace = name_space;
        profile_ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-ipv4")
    {
        profile_ipv4 = value;
        profile_ipv4.value_namespace = name_space;
        profile_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-ipv6")
    {
        profile_ipv6 = value;
        profile_ipv6.value_namespace = name_space;
        profile_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-master-mixed")
    {
        profile_master_mixed = value;
        profile_master_mixed.value_namespace = name_space;
        profile_master_mixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-master-multicast")
    {
        profile_master_multicast = value;
        profile_master_multicast.value_namespace = name_space;
        profile_master_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-master-unicast")
    {
        profile_master_unicast = value;
        profile_master_unicast.value_namespace = name_space;
        profile_master_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-mixed")
    {
        profile_mixed = value;
        profile_mixed.value_namespace = name_space;
        profile_mixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-multicast")
    {
        profile_multicast = value;
        profile_multicast.value_namespace = name_space;
        profile_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-not-global")
    {
        profile_not_global = value;
        profile_not_global.value_namespace = name_space;
        profile_not_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-port-state")
    {
        profile_port_state = value;
        profile_port_state.value_namespace = name_space;
        profile_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-sync-interval")
    {
        profile_sync_interval = value;
        profile_sync_interval.value_namespace = name_space;
        profile_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-sync-timeout")
    {
        profile_sync_timeout = value;
        profile_sync_timeout.value_namespace = name_space;
        profile_sync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-unicast")
    {
        profile_unicast = value;
        profile_unicast.value_namespace = name_space;
        profile_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave")
    {
        slave = value;
        slave.value_namespace = name_space;
        slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-ipv4")
    {
        target_address_ipv4 = value;
        target_address_ipv4.value_namespace = name_space;
        target_address_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-ipv6")
    {
        target_address_ipv6 = value;
        target_address_ipv6.value_namespace = name_space;
        target_address_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-transport")
    {
        ethernet_transport.yfilter = yfilter;
    }
    if(value_path == "global-ptp")
    {
        global_ptp.yfilter = yfilter;
    }
    if(value_path == "invalid-grant-reduction")
    {
        invalid_grant_reduction.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "one-step")
    {
        one_step.yfilter = yfilter;
    }
    if(value_path == "profile-announce-interval")
    {
        profile_announce_interval.yfilter = yfilter;
    }
    if(value_path == "profile-delay-req-interval")
    {
        profile_delay_req_interval.yfilter = yfilter;
    }
    if(value_path == "profile-delay-resp-timeout")
    {
        profile_delay_resp_timeout.yfilter = yfilter;
    }
    if(value_path == "profile-ethernet")
    {
        profile_ethernet.yfilter = yfilter;
    }
    if(value_path == "profile-ipv4")
    {
        profile_ipv4.yfilter = yfilter;
    }
    if(value_path == "profile-ipv6")
    {
        profile_ipv6.yfilter = yfilter;
    }
    if(value_path == "profile-master-mixed")
    {
        profile_master_mixed.yfilter = yfilter;
    }
    if(value_path == "profile-master-multicast")
    {
        profile_master_multicast.yfilter = yfilter;
    }
    if(value_path == "profile-master-unicast")
    {
        profile_master_unicast.yfilter = yfilter;
    }
    if(value_path == "profile-mixed")
    {
        profile_mixed.yfilter = yfilter;
    }
    if(value_path == "profile-multicast")
    {
        profile_multicast.yfilter = yfilter;
    }
    if(value_path == "profile-not-global")
    {
        profile_not_global.yfilter = yfilter;
    }
    if(value_path == "profile-port-state")
    {
        profile_port_state.yfilter = yfilter;
    }
    if(value_path == "profile-sync-interval")
    {
        profile_sync_interval.yfilter = yfilter;
    }
    if(value_path == "profile-sync-timeout")
    {
        profile_sync_timeout.yfilter = yfilter;
    }
    if(value_path == "profile-unicast")
    {
        profile_unicast.yfilter = yfilter;
    }
    if(value_path == "slave")
    {
        slave.yfilter = yfilter;
    }
    if(value_path == "target-address-ipv4")
    {
        target_address_ipv4.yfilter = yfilter;
    }
    if(value_path == "target-address-ipv6")
    {
        target_address_ipv6.yfilter = yfilter;
    }
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-transport" || name == "global-ptp" || name == "invalid-grant-reduction" || name == "ipv6" || name == "local-priority" || name == "multicast" || name == "one-step" || name == "profile-announce-interval" || name == "profile-delay-req-interval" || name == "profile-delay-resp-timeout" || name == "profile-ethernet" || name == "profile-ipv4" || name == "profile-ipv6" || name == "profile-master-mixed" || name == "profile-master-multicast" || name == "profile-master-unicast" || name == "profile-mixed" || name == "profile-multicast" || name == "profile-not-global" || name == "profile-port-state" || name == "profile-sync-interval" || name == "profile-sync-timeout" || name == "profile-unicast" || name == "slave" || name == "target-address-ipv4" || name == "target-address-ipv6")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMasters()
{

    yang_name = "interface-foreign-masters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfaceForeignMasters::~InterfaceForeignMasters()
{
}

bool Ptp::InterfaceForeignMasters::has_data() const
{
    for (std::size_t index=0; index<interface_foreign_master.size(); index++)
    {
        if(interface_foreign_master[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceForeignMasters::has_operation() const
{
    for (std::size_t index=0; index<interface_foreign_master.size(); index++)
    {
        if(interface_foreign_master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceForeignMasters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceForeignMasters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-foreign-masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-foreign-master")
    {
        for(auto const & c : interface_foreign_master)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster>();
        c->parent = this;
        interface_foreign_master.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_foreign_master)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfaceForeignMasters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceForeignMasters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceForeignMasters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-foreign-master")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::InterfaceForeignMaster()
    :
    interface_name{YType::str, "interface-name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "interface-foreign-master"; yang_parent_name = "interface-foreign-masters"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::~InterfaceForeignMaster()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::has_data() const
{
    for (std::size_t index=0; index<foreign_clock.size(); index++)
    {
        if(foreign_clock[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::has_operation() const
{
    for (std::size_t index=0; index<foreign_clock.size(); index++)
    {
        if(foreign_clock[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-foreign-masters/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-foreign-master" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-clock")
    {
        for(auto const & c : foreign_clock)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock>();
        c->parent = this;
        foreign_clock.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : foreign_clock)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-clock" || name == "interface-name" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock()
    :
    communication_model{YType::enumeration, "communication-model"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    delay_asymmetry{YType::int32, "delay-asymmetry"},
    foreign_domain{YType::uint8, "foreign-domain"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    is_known{YType::boolean, "is-known"},
    is_qualified{YType::boolean, "is-qualified"},
    ptsf_loss_announce{YType::boolean, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::boolean, "ptsf-loss-sync"},
    time_known_for{YType::uint32, "time-known-for"}
    	,
    address(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address>())
	,announce_grant(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant>())
	,delay_response_grant(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant>())
	,foreign_clock(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_>())
	,sync_grant(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant>())
{
    address->parent = this;
    announce_grant->parent = this;
    delay_response_grant->parent = this;
    foreign_clock->parent = this;
    sync_grant->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "interface-foreign-master"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::~ForeignClock()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::has_data() const
{
    return communication_model.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| delay_asymmetry.is_set
	|| foreign_domain.is_set
	|| is_grandmaster.is_set
	|| is_known.is_set
	|| is_qualified.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| time_known_for.is_set
	|| (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data())
	|| (foreign_clock !=  nullptr && foreign_clock->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data());
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(delay_asymmetry.yfilter)
	|| ydk::is_set(foreign_domain.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(is_known.yfilter)
	|| ydk::is_set(is_qualified.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| ydk::is_set(time_known_for.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation())
	|| (foreign_clock !=  nullptr && foreign_clock->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation());
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (delay_asymmetry.is_set || is_set(delay_asymmetry.yfilter)) leaf_name_data.push_back(delay_asymmetry.get_name_leafdata());
    if (foreign_domain.is_set || is_set(foreign_domain.yfilter)) leaf_name_data.push_back(foreign_domain.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (is_known.is_set || is_set(is_known.yfilter)) leaf_name_data.push_back(is_known.get_name_leafdata());
    if (is_qualified.is_set || is_set(is_qualified.yfilter)) leaf_name_data.push_back(is_qualified.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());
    if (time_known_for.is_set || is_set(time_known_for.yfilter)) leaf_name_data.push_back(time_known_for.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    if(child_yang_name == "foreign-clock")
    {
        if(foreign_clock == nullptr)
        {
            foreign_clock = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_>();
        }
        return foreign_clock;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant>();
        }
        return sync_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        children["announce-grant"] = announce_grant;
    }

    if(delay_response_grant != nullptr)
    {
        children["delay-response-grant"] = delay_response_grant;
    }

    if(foreign_clock != nullptr)
    {
        children["foreign-clock"] = foreign_clock;
    }

    if(sync_grant != nullptr)
    {
        children["sync-grant"] = sync_grant;
    }

    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry = value;
        delay_asymmetry.value_namespace = name_space;
        delay_asymmetry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain = value;
        foreign_domain.value_namespace = name_space;
        foreign_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-known")
    {
        is_known = value;
        is_known.value_namespace = name_space;
        is_known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-qualified")
    {
        is_qualified = value;
        is_qualified.value_namespace = name_space;
        is_qualified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-known-for")
    {
        time_known_for = value;
        time_known_for.value_namespace = name_space;
        time_known_for.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry.yfilter = yfilter;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "is-known")
    {
        is_known.yfilter = yfilter;
    }
    if(value_path == "is-qualified")
    {
        is_qualified.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
    if(value_path == "time-known-for")
    {
        time_known_for.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "announce-grant" || name == "delay-response-grant" || name == "foreign-clock" || name == "sync-grant" || name == "communication-model" || name == "configured-clock-class" || name == "configured-priority" || name == "delay-asymmetry" || name == "foreign-domain" || name == "is-grandmaster" || name == "is-known" || name == "is-qualified" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync" || name == "time-known-for")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::~Address()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::AnnounceGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "announce-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::DelayResponseGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::ForeignClock_()
    :
    accuracy{YType::uint8, "accuracy"},
    class_{YType::uint8, "class"},
    clock_id{YType::uint64, "clock-id"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"}
    	,
    receiver(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>())
	,sender(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>())
	,utc_offset(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>())
{
    receiver->parent = this;
    sender->parent = this;
    utc_offset->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::~ForeignClock_()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::has_data() const
{
    return accuracy.is_set
	|| class_.is_set
	|| clock_id.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| frequency_traceable.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| offset_log_variance.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data())
	|| (utc_offset !=  nullptr && utc_offset->has_data());
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation())
	|| (utc_offset !=  nullptr && utc_offset->has_operation());
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>();
        }
        return sender;
    }

    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>();
        }
        return utc_offset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receiver != nullptr)
    {
        children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        children["sender"] = sender;
    }

    if(utc_offset != nullptr)
    {
        children["utc-offset"] = utc_offset;
    }

    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver" || name == "sender" || name == "utc-offset" || name == "accuracy" || name == "class" || name == "clock-id" || name == "configured-clock-class" || name == "configured-priority" || name == "frequency-traceable" || name == "leap-seconds" || name == "local" || name == "offset-log-variance" || name == "priority1" || name == "priority2" || name == "steps-removed" || name == "time-source" || name == "time-traceable" || name == "timescale")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::~Receiver()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::~Sender()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::~UtcOffset()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_data() const
{
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::SyncGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "sync-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::~SyncGrant()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounters()
{

    yang_name = "interface-packet-counters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfacePacketCounters::~InterfacePacketCounters()
{
}

bool Ptp::InterfacePacketCounters::has_data() const
{
    for (std::size_t index=0; index<interface_packet_counter.size(); index++)
    {
        if(interface_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfacePacketCounters::has_operation() const
{
    for (std::size_t index=0; index<interface_packet_counter.size(); index++)
    {
        if(interface_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfacePacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfacePacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-packet-counter")
    {
        for(auto const & c : interface_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter>();
        c->parent = this;
        interface_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfacePacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfacePacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfacePacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-packet-counter")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::InterfacePacketCounter()
    :
    interface_name{YType::str, "interface-name"}
    	,
    counters(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters>())
{
    counters->parent = this;

    yang_name = "interface-packet-counter"; yang_parent_name = "interface-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::~InterfacePacketCounter()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::has_data() const
{
    for (std::size_t index=0; index<peer_counter.size(); index++)
    {
        if(peer_counter[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::has_operation() const
{
    for (std::size_t index=0; index<peer_counter.size(); index++)
    {
        if(peer_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-packet-counter" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "peer-counter")
    {
        for(auto const & c : peer_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter>();
        c->parent = this;
        peer_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    for (auto const & c : peer_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "peer-counter" || name == "interface-name")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::Counters()
    :
    announce_dropped{YType::uint32, "announce-dropped"},
    announce_received{YType::uint32, "announce-received"},
    announce_sent{YType::uint32, "announce-sent"},
    delay_request_dropped{YType::uint32, "delay-request-dropped"},
    delay_request_received{YType::uint32, "delay-request-received"},
    delay_request_sent{YType::uint32, "delay-request-sent"},
    delay_response_dropped{YType::uint32, "delay-response-dropped"},
    delay_response_received{YType::uint32, "delay-response-received"},
    delay_response_sent{YType::uint32, "delay-response-sent"},
    follow_up_dropped{YType::uint32, "follow-up-dropped"},
    follow_up_received{YType::uint32, "follow-up-received"},
    follow_up_sent{YType::uint32, "follow-up-sent"},
    management_dropped{YType::uint32, "management-dropped"},
    management_received{YType::uint32, "management-received"},
    management_sent{YType::uint32, "management-sent"},
    other_packets_dropped{YType::uint32, "other-packets-dropped"},
    other_packets_received{YType::uint32, "other-packets-received"},
    other_packets_sent{YType::uint32, "other-packets-sent"},
    peer_delay_request_dropped{YType::uint32, "peer-delay-request-dropped"},
    peer_delay_request_received{YType::uint32, "peer-delay-request-received"},
    peer_delay_request_sent{YType::uint32, "peer-delay-request-sent"},
    peer_delay_response_dropped{YType::uint32, "peer-delay-response-dropped"},
    peer_delay_response_follow_up_dropped{YType::uint32, "peer-delay-response-follow-up-dropped"},
    peer_delay_response_follow_up_received{YType::uint32, "peer-delay-response-follow-up-received"},
    peer_delay_response_follow_up_sent{YType::uint32, "peer-delay-response-follow-up-sent"},
    peer_delay_response_received{YType::uint32, "peer-delay-response-received"},
    peer_delay_response_sent{YType::uint32, "peer-delay-response-sent"},
    signaling_dropped{YType::uint32, "signaling-dropped"},
    signaling_received{YType::uint32, "signaling-received"},
    signaling_sent{YType::uint32, "signaling-sent"},
    sync_dropped{YType::uint32, "sync-dropped"},
    sync_received{YType::uint32, "sync-received"},
    sync_sent{YType::uint32, "sync-sent"},
    total_packets_dropped{YType::uint32, "total-packets-dropped"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_packets_sent{YType::uint32, "total-packets-sent"}
{

    yang_name = "counters"; yang_parent_name = "interface-packet-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::~Counters()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::has_data() const
{
    return announce_dropped.is_set
	|| announce_received.is_set
	|| announce_sent.is_set
	|| delay_request_dropped.is_set
	|| delay_request_received.is_set
	|| delay_request_sent.is_set
	|| delay_response_dropped.is_set
	|| delay_response_received.is_set
	|| delay_response_sent.is_set
	|| follow_up_dropped.is_set
	|| follow_up_received.is_set
	|| follow_up_sent.is_set
	|| management_dropped.is_set
	|| management_received.is_set
	|| management_sent.is_set
	|| other_packets_dropped.is_set
	|| other_packets_received.is_set
	|| other_packets_sent.is_set
	|| peer_delay_request_dropped.is_set
	|| peer_delay_request_received.is_set
	|| peer_delay_request_sent.is_set
	|| peer_delay_response_dropped.is_set
	|| peer_delay_response_follow_up_dropped.is_set
	|| peer_delay_response_follow_up_received.is_set
	|| peer_delay_response_follow_up_sent.is_set
	|| peer_delay_response_received.is_set
	|| peer_delay_response_sent.is_set
	|| signaling_dropped.is_set
	|| signaling_received.is_set
	|| signaling_sent.is_set
	|| sync_dropped.is_set
	|| sync_received.is_set
	|| sync_sent.is_set
	|| total_packets_dropped.is_set
	|| total_packets_received.is_set
	|| total_packets_sent.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_dropped.yfilter)
	|| ydk::is_set(announce_received.yfilter)
	|| ydk::is_set(announce_sent.yfilter)
	|| ydk::is_set(delay_request_dropped.yfilter)
	|| ydk::is_set(delay_request_received.yfilter)
	|| ydk::is_set(delay_request_sent.yfilter)
	|| ydk::is_set(delay_response_dropped.yfilter)
	|| ydk::is_set(delay_response_received.yfilter)
	|| ydk::is_set(delay_response_sent.yfilter)
	|| ydk::is_set(follow_up_dropped.yfilter)
	|| ydk::is_set(follow_up_received.yfilter)
	|| ydk::is_set(follow_up_sent.yfilter)
	|| ydk::is_set(management_dropped.yfilter)
	|| ydk::is_set(management_received.yfilter)
	|| ydk::is_set(management_sent.yfilter)
	|| ydk::is_set(other_packets_dropped.yfilter)
	|| ydk::is_set(other_packets_received.yfilter)
	|| ydk::is_set(other_packets_sent.yfilter)
	|| ydk::is_set(peer_delay_request_dropped.yfilter)
	|| ydk::is_set(peer_delay_request_received.yfilter)
	|| ydk::is_set(peer_delay_request_sent.yfilter)
	|| ydk::is_set(peer_delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_received.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_sent.yfilter)
	|| ydk::is_set(peer_delay_response_received.yfilter)
	|| ydk::is_set(peer_delay_response_sent.yfilter)
	|| ydk::is_set(signaling_dropped.yfilter)
	|| ydk::is_set(signaling_received.yfilter)
	|| ydk::is_set(signaling_sent.yfilter)
	|| ydk::is_set(sync_dropped.yfilter)
	|| ydk::is_set(sync_received.yfilter)
	|| ydk::is_set(sync_sent.yfilter)
	|| ydk::is_set(total_packets_dropped.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_dropped.is_set || is_set(announce_dropped.yfilter)) leaf_name_data.push_back(announce_dropped.get_name_leafdata());
    if (announce_received.is_set || is_set(announce_received.yfilter)) leaf_name_data.push_back(announce_received.get_name_leafdata());
    if (announce_sent.is_set || is_set(announce_sent.yfilter)) leaf_name_data.push_back(announce_sent.get_name_leafdata());
    if (delay_request_dropped.is_set || is_set(delay_request_dropped.yfilter)) leaf_name_data.push_back(delay_request_dropped.get_name_leafdata());
    if (delay_request_received.is_set || is_set(delay_request_received.yfilter)) leaf_name_data.push_back(delay_request_received.get_name_leafdata());
    if (delay_request_sent.is_set || is_set(delay_request_sent.yfilter)) leaf_name_data.push_back(delay_request_sent.get_name_leafdata());
    if (delay_response_dropped.is_set || is_set(delay_response_dropped.yfilter)) leaf_name_data.push_back(delay_response_dropped.get_name_leafdata());
    if (delay_response_received.is_set || is_set(delay_response_received.yfilter)) leaf_name_data.push_back(delay_response_received.get_name_leafdata());
    if (delay_response_sent.is_set || is_set(delay_response_sent.yfilter)) leaf_name_data.push_back(delay_response_sent.get_name_leafdata());
    if (follow_up_dropped.is_set || is_set(follow_up_dropped.yfilter)) leaf_name_data.push_back(follow_up_dropped.get_name_leafdata());
    if (follow_up_received.is_set || is_set(follow_up_received.yfilter)) leaf_name_data.push_back(follow_up_received.get_name_leafdata());
    if (follow_up_sent.is_set || is_set(follow_up_sent.yfilter)) leaf_name_data.push_back(follow_up_sent.get_name_leafdata());
    if (management_dropped.is_set || is_set(management_dropped.yfilter)) leaf_name_data.push_back(management_dropped.get_name_leafdata());
    if (management_received.is_set || is_set(management_received.yfilter)) leaf_name_data.push_back(management_received.get_name_leafdata());
    if (management_sent.is_set || is_set(management_sent.yfilter)) leaf_name_data.push_back(management_sent.get_name_leafdata());
    if (other_packets_dropped.is_set || is_set(other_packets_dropped.yfilter)) leaf_name_data.push_back(other_packets_dropped.get_name_leafdata());
    if (other_packets_received.is_set || is_set(other_packets_received.yfilter)) leaf_name_data.push_back(other_packets_received.get_name_leafdata());
    if (other_packets_sent.is_set || is_set(other_packets_sent.yfilter)) leaf_name_data.push_back(other_packets_sent.get_name_leafdata());
    if (peer_delay_request_dropped.is_set || is_set(peer_delay_request_dropped.yfilter)) leaf_name_data.push_back(peer_delay_request_dropped.get_name_leafdata());
    if (peer_delay_request_received.is_set || is_set(peer_delay_request_received.yfilter)) leaf_name_data.push_back(peer_delay_request_received.get_name_leafdata());
    if (peer_delay_request_sent.is_set || is_set(peer_delay_request_sent.yfilter)) leaf_name_data.push_back(peer_delay_request_sent.get_name_leafdata());
    if (peer_delay_response_dropped.is_set || is_set(peer_delay_response_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_dropped.is_set || is_set(peer_delay_response_follow_up_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_received.is_set || is_set(peer_delay_response_follow_up_received.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_received.get_name_leafdata());
    if (peer_delay_response_follow_up_sent.is_set || is_set(peer_delay_response_follow_up_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_sent.get_name_leafdata());
    if (peer_delay_response_received.is_set || is_set(peer_delay_response_received.yfilter)) leaf_name_data.push_back(peer_delay_response_received.get_name_leafdata());
    if (peer_delay_response_sent.is_set || is_set(peer_delay_response_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_sent.get_name_leafdata());
    if (signaling_dropped.is_set || is_set(signaling_dropped.yfilter)) leaf_name_data.push_back(signaling_dropped.get_name_leafdata());
    if (signaling_received.is_set || is_set(signaling_received.yfilter)) leaf_name_data.push_back(signaling_received.get_name_leafdata());
    if (signaling_sent.is_set || is_set(signaling_sent.yfilter)) leaf_name_data.push_back(signaling_sent.get_name_leafdata());
    if (sync_dropped.is_set || is_set(sync_dropped.yfilter)) leaf_name_data.push_back(sync_dropped.get_name_leafdata());
    if (sync_received.is_set || is_set(sync_received.yfilter)) leaf_name_data.push_back(sync_received.get_name_leafdata());
    if (sync_sent.is_set || is_set(sync_sent.yfilter)) leaf_name_data.push_back(sync_sent.get_name_leafdata());
    if (total_packets_dropped.is_set || is_set(total_packets_dropped.yfilter)) leaf_name_data.push_back(total_packets_dropped.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-dropped")
    {
        announce_dropped = value;
        announce_dropped.value_namespace = name_space;
        announce_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-received")
    {
        announce_received = value;
        announce_received.value_namespace = name_space;
        announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-sent")
    {
        announce_sent = value;
        announce_sent.value_namespace = name_space;
        announce_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped = value;
        delay_request_dropped.value_namespace = name_space;
        delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received = value;
        delay_request_received.value_namespace = name_space;
        delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent = value;
        delay_request_sent.value_namespace = name_space;
        delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped = value;
        delay_response_dropped.value_namespace = name_space;
        delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received = value;
        delay_response_received.value_namespace = name_space;
        delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent = value;
        delay_response_sent.value_namespace = name_space;
        delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped = value;
        follow_up_dropped.value_namespace = name_space;
        follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received = value;
        follow_up_received.value_namespace = name_space;
        follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent = value;
        follow_up_sent.value_namespace = name_space;
        follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-dropped")
    {
        management_dropped = value;
        management_dropped.value_namespace = name_space;
        management_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-received")
    {
        management_received = value;
        management_received.value_namespace = name_space;
        management_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-sent")
    {
        management_sent = value;
        management_sent.value_namespace = name_space;
        management_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped = value;
        other_packets_dropped.value_namespace = name_space;
        other_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received = value;
        other_packets_received.value_namespace = name_space;
        other_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent = value;
        other_packets_sent.value_namespace = name_space;
        other_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped = value;
        peer_delay_request_dropped.value_namespace = name_space;
        peer_delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received = value;
        peer_delay_request_received.value_namespace = name_space;
        peer_delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent = value;
        peer_delay_request_sent.value_namespace = name_space;
        peer_delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped = value;
        peer_delay_response_dropped.value_namespace = name_space;
        peer_delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped = value;
        peer_delay_response_follow_up_dropped.value_namespace = name_space;
        peer_delay_response_follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received = value;
        peer_delay_response_follow_up_received.value_namespace = name_space;
        peer_delay_response_follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent = value;
        peer_delay_response_follow_up_sent.value_namespace = name_space;
        peer_delay_response_follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received = value;
        peer_delay_response_received.value_namespace = name_space;
        peer_delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent = value;
        peer_delay_response_sent.value_namespace = name_space;
        peer_delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped = value;
        signaling_dropped.value_namespace = name_space;
        signaling_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-received")
    {
        signaling_received = value;
        signaling_received.value_namespace = name_space;
        signaling_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent = value;
        signaling_sent.value_namespace = name_space;
        signaling_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped = value;
        sync_dropped.value_namespace = name_space;
        sync_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-received")
    {
        sync_received = value;
        sync_received.value_namespace = name_space;
        sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-sent")
    {
        sync_sent = value;
        sync_sent.value_namespace = name_space;
        sync_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped = value;
        total_packets_dropped.value_namespace = name_space;
        total_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-dropped")
    {
        announce_dropped.yfilter = yfilter;
    }
    if(value_path == "announce-received")
    {
        announce_received.yfilter = yfilter;
    }
    if(value_path == "announce-sent")
    {
        announce_sent.yfilter = yfilter;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received.yfilter = yfilter;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received.yfilter = yfilter;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received.yfilter = yfilter;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "management-dropped")
    {
        management_dropped.yfilter = yfilter;
    }
    if(value_path == "management-received")
    {
        management_received.yfilter = yfilter;
    }
    if(value_path == "management-sent")
    {
        management_sent.yfilter = yfilter;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received.yfilter = yfilter;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped.yfilter = yfilter;
    }
    if(value_path == "signaling-received")
    {
        signaling_received.yfilter = yfilter;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent.yfilter = yfilter;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped.yfilter = yfilter;
    }
    if(value_path == "sync-received")
    {
        sync_received.yfilter = yfilter;
    }
    if(value_path == "sync-sent")
    {
        sync_sent.yfilter = yfilter;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dropped" || name == "announce-received" || name == "announce-sent" || name == "delay-request-dropped" || name == "delay-request-received" || name == "delay-request-sent" || name == "delay-response-dropped" || name == "delay-response-received" || name == "delay-response-sent" || name == "follow-up-dropped" || name == "follow-up-received" || name == "follow-up-sent" || name == "management-dropped" || name == "management-received" || name == "management-sent" || name == "other-packets-dropped" || name == "other-packets-received" || name == "other-packets-sent" || name == "peer-delay-request-dropped" || name == "peer-delay-request-received" || name == "peer-delay-request-sent" || name == "peer-delay-response-dropped" || name == "peer-delay-response-follow-up-dropped" || name == "peer-delay-response-follow-up-received" || name == "peer-delay-response-follow-up-sent" || name == "peer-delay-response-received" || name == "peer-delay-response-sent" || name == "signaling-dropped" || name == "signaling-received" || name == "signaling-sent" || name == "sync-dropped" || name == "sync-received" || name == "sync-sent" || name == "total-packets-dropped" || name == "total-packets-received" || name == "total-packets-sent")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::PeerCounter()
    :
    address(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address>())
	,counters(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters>())
{
    address->parent = this;
    counters->parent = this;

    yang_name = "peer-counter"; yang_parent_name = "interface-packet-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::~PeerCounter()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (counters !=  nullptr && counters->has_data());
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address>();
        }
        return address;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "counters")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "peer-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::~Address()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::Counters()
    :
    announce_dropped{YType::uint32, "announce-dropped"},
    announce_received{YType::uint32, "announce-received"},
    announce_sent{YType::uint32, "announce-sent"},
    delay_request_dropped{YType::uint32, "delay-request-dropped"},
    delay_request_received{YType::uint32, "delay-request-received"},
    delay_request_sent{YType::uint32, "delay-request-sent"},
    delay_response_dropped{YType::uint32, "delay-response-dropped"},
    delay_response_received{YType::uint32, "delay-response-received"},
    delay_response_sent{YType::uint32, "delay-response-sent"},
    follow_up_dropped{YType::uint32, "follow-up-dropped"},
    follow_up_received{YType::uint32, "follow-up-received"},
    follow_up_sent{YType::uint32, "follow-up-sent"},
    management_dropped{YType::uint32, "management-dropped"},
    management_received{YType::uint32, "management-received"},
    management_sent{YType::uint32, "management-sent"},
    other_packets_dropped{YType::uint32, "other-packets-dropped"},
    other_packets_received{YType::uint32, "other-packets-received"},
    other_packets_sent{YType::uint32, "other-packets-sent"},
    peer_delay_request_dropped{YType::uint32, "peer-delay-request-dropped"},
    peer_delay_request_received{YType::uint32, "peer-delay-request-received"},
    peer_delay_request_sent{YType::uint32, "peer-delay-request-sent"},
    peer_delay_response_dropped{YType::uint32, "peer-delay-response-dropped"},
    peer_delay_response_follow_up_dropped{YType::uint32, "peer-delay-response-follow-up-dropped"},
    peer_delay_response_follow_up_received{YType::uint32, "peer-delay-response-follow-up-received"},
    peer_delay_response_follow_up_sent{YType::uint32, "peer-delay-response-follow-up-sent"},
    peer_delay_response_received{YType::uint32, "peer-delay-response-received"},
    peer_delay_response_sent{YType::uint32, "peer-delay-response-sent"},
    signaling_dropped{YType::uint32, "signaling-dropped"},
    signaling_received{YType::uint32, "signaling-received"},
    signaling_sent{YType::uint32, "signaling-sent"},
    sync_dropped{YType::uint32, "sync-dropped"},
    sync_received{YType::uint32, "sync-received"},
    sync_sent{YType::uint32, "sync-sent"},
    total_packets_dropped{YType::uint32, "total-packets-dropped"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_packets_sent{YType::uint32, "total-packets-sent"}
{

    yang_name = "counters"; yang_parent_name = "peer-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::~Counters()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::has_data() const
{
    return announce_dropped.is_set
	|| announce_received.is_set
	|| announce_sent.is_set
	|| delay_request_dropped.is_set
	|| delay_request_received.is_set
	|| delay_request_sent.is_set
	|| delay_response_dropped.is_set
	|| delay_response_received.is_set
	|| delay_response_sent.is_set
	|| follow_up_dropped.is_set
	|| follow_up_received.is_set
	|| follow_up_sent.is_set
	|| management_dropped.is_set
	|| management_received.is_set
	|| management_sent.is_set
	|| other_packets_dropped.is_set
	|| other_packets_received.is_set
	|| other_packets_sent.is_set
	|| peer_delay_request_dropped.is_set
	|| peer_delay_request_received.is_set
	|| peer_delay_request_sent.is_set
	|| peer_delay_response_dropped.is_set
	|| peer_delay_response_follow_up_dropped.is_set
	|| peer_delay_response_follow_up_received.is_set
	|| peer_delay_response_follow_up_sent.is_set
	|| peer_delay_response_received.is_set
	|| peer_delay_response_sent.is_set
	|| signaling_dropped.is_set
	|| signaling_received.is_set
	|| signaling_sent.is_set
	|| sync_dropped.is_set
	|| sync_received.is_set
	|| sync_sent.is_set
	|| total_packets_dropped.is_set
	|| total_packets_received.is_set
	|| total_packets_sent.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_dropped.yfilter)
	|| ydk::is_set(announce_received.yfilter)
	|| ydk::is_set(announce_sent.yfilter)
	|| ydk::is_set(delay_request_dropped.yfilter)
	|| ydk::is_set(delay_request_received.yfilter)
	|| ydk::is_set(delay_request_sent.yfilter)
	|| ydk::is_set(delay_response_dropped.yfilter)
	|| ydk::is_set(delay_response_received.yfilter)
	|| ydk::is_set(delay_response_sent.yfilter)
	|| ydk::is_set(follow_up_dropped.yfilter)
	|| ydk::is_set(follow_up_received.yfilter)
	|| ydk::is_set(follow_up_sent.yfilter)
	|| ydk::is_set(management_dropped.yfilter)
	|| ydk::is_set(management_received.yfilter)
	|| ydk::is_set(management_sent.yfilter)
	|| ydk::is_set(other_packets_dropped.yfilter)
	|| ydk::is_set(other_packets_received.yfilter)
	|| ydk::is_set(other_packets_sent.yfilter)
	|| ydk::is_set(peer_delay_request_dropped.yfilter)
	|| ydk::is_set(peer_delay_request_received.yfilter)
	|| ydk::is_set(peer_delay_request_sent.yfilter)
	|| ydk::is_set(peer_delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_received.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_sent.yfilter)
	|| ydk::is_set(peer_delay_response_received.yfilter)
	|| ydk::is_set(peer_delay_response_sent.yfilter)
	|| ydk::is_set(signaling_dropped.yfilter)
	|| ydk::is_set(signaling_received.yfilter)
	|| ydk::is_set(signaling_sent.yfilter)
	|| ydk::is_set(sync_dropped.yfilter)
	|| ydk::is_set(sync_received.yfilter)
	|| ydk::is_set(sync_sent.yfilter)
	|| ydk::is_set(total_packets_dropped.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_dropped.is_set || is_set(announce_dropped.yfilter)) leaf_name_data.push_back(announce_dropped.get_name_leafdata());
    if (announce_received.is_set || is_set(announce_received.yfilter)) leaf_name_data.push_back(announce_received.get_name_leafdata());
    if (announce_sent.is_set || is_set(announce_sent.yfilter)) leaf_name_data.push_back(announce_sent.get_name_leafdata());
    if (delay_request_dropped.is_set || is_set(delay_request_dropped.yfilter)) leaf_name_data.push_back(delay_request_dropped.get_name_leafdata());
    if (delay_request_received.is_set || is_set(delay_request_received.yfilter)) leaf_name_data.push_back(delay_request_received.get_name_leafdata());
    if (delay_request_sent.is_set || is_set(delay_request_sent.yfilter)) leaf_name_data.push_back(delay_request_sent.get_name_leafdata());
    if (delay_response_dropped.is_set || is_set(delay_response_dropped.yfilter)) leaf_name_data.push_back(delay_response_dropped.get_name_leafdata());
    if (delay_response_received.is_set || is_set(delay_response_received.yfilter)) leaf_name_data.push_back(delay_response_received.get_name_leafdata());
    if (delay_response_sent.is_set || is_set(delay_response_sent.yfilter)) leaf_name_data.push_back(delay_response_sent.get_name_leafdata());
    if (follow_up_dropped.is_set || is_set(follow_up_dropped.yfilter)) leaf_name_data.push_back(follow_up_dropped.get_name_leafdata());
    if (follow_up_received.is_set || is_set(follow_up_received.yfilter)) leaf_name_data.push_back(follow_up_received.get_name_leafdata());
    if (follow_up_sent.is_set || is_set(follow_up_sent.yfilter)) leaf_name_data.push_back(follow_up_sent.get_name_leafdata());
    if (management_dropped.is_set || is_set(management_dropped.yfilter)) leaf_name_data.push_back(management_dropped.get_name_leafdata());
    if (management_received.is_set || is_set(management_received.yfilter)) leaf_name_data.push_back(management_received.get_name_leafdata());
    if (management_sent.is_set || is_set(management_sent.yfilter)) leaf_name_data.push_back(management_sent.get_name_leafdata());
    if (other_packets_dropped.is_set || is_set(other_packets_dropped.yfilter)) leaf_name_data.push_back(other_packets_dropped.get_name_leafdata());
    if (other_packets_received.is_set || is_set(other_packets_received.yfilter)) leaf_name_data.push_back(other_packets_received.get_name_leafdata());
    if (other_packets_sent.is_set || is_set(other_packets_sent.yfilter)) leaf_name_data.push_back(other_packets_sent.get_name_leafdata());
    if (peer_delay_request_dropped.is_set || is_set(peer_delay_request_dropped.yfilter)) leaf_name_data.push_back(peer_delay_request_dropped.get_name_leafdata());
    if (peer_delay_request_received.is_set || is_set(peer_delay_request_received.yfilter)) leaf_name_data.push_back(peer_delay_request_received.get_name_leafdata());
    if (peer_delay_request_sent.is_set || is_set(peer_delay_request_sent.yfilter)) leaf_name_data.push_back(peer_delay_request_sent.get_name_leafdata());
    if (peer_delay_response_dropped.is_set || is_set(peer_delay_response_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_dropped.is_set || is_set(peer_delay_response_follow_up_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_received.is_set || is_set(peer_delay_response_follow_up_received.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_received.get_name_leafdata());
    if (peer_delay_response_follow_up_sent.is_set || is_set(peer_delay_response_follow_up_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_sent.get_name_leafdata());
    if (peer_delay_response_received.is_set || is_set(peer_delay_response_received.yfilter)) leaf_name_data.push_back(peer_delay_response_received.get_name_leafdata());
    if (peer_delay_response_sent.is_set || is_set(peer_delay_response_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_sent.get_name_leafdata());
    if (signaling_dropped.is_set || is_set(signaling_dropped.yfilter)) leaf_name_data.push_back(signaling_dropped.get_name_leafdata());
    if (signaling_received.is_set || is_set(signaling_received.yfilter)) leaf_name_data.push_back(signaling_received.get_name_leafdata());
    if (signaling_sent.is_set || is_set(signaling_sent.yfilter)) leaf_name_data.push_back(signaling_sent.get_name_leafdata());
    if (sync_dropped.is_set || is_set(sync_dropped.yfilter)) leaf_name_data.push_back(sync_dropped.get_name_leafdata());
    if (sync_received.is_set || is_set(sync_received.yfilter)) leaf_name_data.push_back(sync_received.get_name_leafdata());
    if (sync_sent.is_set || is_set(sync_sent.yfilter)) leaf_name_data.push_back(sync_sent.get_name_leafdata());
    if (total_packets_dropped.is_set || is_set(total_packets_dropped.yfilter)) leaf_name_data.push_back(total_packets_dropped.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-dropped")
    {
        announce_dropped = value;
        announce_dropped.value_namespace = name_space;
        announce_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-received")
    {
        announce_received = value;
        announce_received.value_namespace = name_space;
        announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-sent")
    {
        announce_sent = value;
        announce_sent.value_namespace = name_space;
        announce_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped = value;
        delay_request_dropped.value_namespace = name_space;
        delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received = value;
        delay_request_received.value_namespace = name_space;
        delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent = value;
        delay_request_sent.value_namespace = name_space;
        delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped = value;
        delay_response_dropped.value_namespace = name_space;
        delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received = value;
        delay_response_received.value_namespace = name_space;
        delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent = value;
        delay_response_sent.value_namespace = name_space;
        delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped = value;
        follow_up_dropped.value_namespace = name_space;
        follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received = value;
        follow_up_received.value_namespace = name_space;
        follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent = value;
        follow_up_sent.value_namespace = name_space;
        follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-dropped")
    {
        management_dropped = value;
        management_dropped.value_namespace = name_space;
        management_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-received")
    {
        management_received = value;
        management_received.value_namespace = name_space;
        management_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-sent")
    {
        management_sent = value;
        management_sent.value_namespace = name_space;
        management_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped = value;
        other_packets_dropped.value_namespace = name_space;
        other_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received = value;
        other_packets_received.value_namespace = name_space;
        other_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent = value;
        other_packets_sent.value_namespace = name_space;
        other_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped = value;
        peer_delay_request_dropped.value_namespace = name_space;
        peer_delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received = value;
        peer_delay_request_received.value_namespace = name_space;
        peer_delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent = value;
        peer_delay_request_sent.value_namespace = name_space;
        peer_delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped = value;
        peer_delay_response_dropped.value_namespace = name_space;
        peer_delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped = value;
        peer_delay_response_follow_up_dropped.value_namespace = name_space;
        peer_delay_response_follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received = value;
        peer_delay_response_follow_up_received.value_namespace = name_space;
        peer_delay_response_follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent = value;
        peer_delay_response_follow_up_sent.value_namespace = name_space;
        peer_delay_response_follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received = value;
        peer_delay_response_received.value_namespace = name_space;
        peer_delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent = value;
        peer_delay_response_sent.value_namespace = name_space;
        peer_delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped = value;
        signaling_dropped.value_namespace = name_space;
        signaling_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-received")
    {
        signaling_received = value;
        signaling_received.value_namespace = name_space;
        signaling_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent = value;
        signaling_sent.value_namespace = name_space;
        signaling_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped = value;
        sync_dropped.value_namespace = name_space;
        sync_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-received")
    {
        sync_received = value;
        sync_received.value_namespace = name_space;
        sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-sent")
    {
        sync_sent = value;
        sync_sent.value_namespace = name_space;
        sync_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped = value;
        total_packets_dropped.value_namespace = name_space;
        total_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-dropped")
    {
        announce_dropped.yfilter = yfilter;
    }
    if(value_path == "announce-received")
    {
        announce_received.yfilter = yfilter;
    }
    if(value_path == "announce-sent")
    {
        announce_sent.yfilter = yfilter;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received.yfilter = yfilter;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received.yfilter = yfilter;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received.yfilter = yfilter;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "management-dropped")
    {
        management_dropped.yfilter = yfilter;
    }
    if(value_path == "management-received")
    {
        management_received.yfilter = yfilter;
    }
    if(value_path == "management-sent")
    {
        management_sent.yfilter = yfilter;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received.yfilter = yfilter;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped.yfilter = yfilter;
    }
    if(value_path == "signaling-received")
    {
        signaling_received.yfilter = yfilter;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent.yfilter = yfilter;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped.yfilter = yfilter;
    }
    if(value_path == "sync-received")
    {
        sync_received.yfilter = yfilter;
    }
    if(value_path == "sync-sent")
    {
        sync_sent.yfilter = yfilter;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dropped" || name == "announce-received" || name == "announce-sent" || name == "delay-request-dropped" || name == "delay-request-received" || name == "delay-request-sent" || name == "delay-response-dropped" || name == "delay-response-received" || name == "delay-response-sent" || name == "follow-up-dropped" || name == "follow-up-received" || name == "follow-up-sent" || name == "management-dropped" || name == "management-received" || name == "management-sent" || name == "other-packets-dropped" || name == "other-packets-received" || name == "other-packets-sent" || name == "peer-delay-request-dropped" || name == "peer-delay-request-received" || name == "peer-delay-request-sent" || name == "peer-delay-response-dropped" || name == "peer-delay-response-follow-up-dropped" || name == "peer-delay-response-follow-up-received" || name == "peer-delay-response-follow-up-sent" || name == "peer-delay-response-received" || name == "peer-delay-response-sent" || name == "signaling-dropped" || name == "signaling-received" || name == "signaling-sent" || name == "sync-dropped" || name == "sync-received" || name == "sync-sent" || name == "total-packets-dropped" || name == "total-packets-received" || name == "total-packets-sent")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeers()
{

    yang_name = "interface-unicast-peers"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfaceUnicastPeers::~InterfaceUnicastPeers()
{
}

bool Ptp::InterfaceUnicastPeers::has_data() const
{
    for (std::size_t index=0; index<interface_unicast_peer.size(); index++)
    {
        if(interface_unicast_peer[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceUnicastPeers::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_peer.size(); index++)
    {
        if(interface_unicast_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceUnicastPeers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceUnicastPeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-unicast-peer")
    {
        for(auto const & c : interface_unicast_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer>();
        c->parent = this;
        interface_unicast_peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_unicast_peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfaceUnicastPeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceUnicastPeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceUnicastPeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-unicast-peer")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::InterfaceUnicastPeer()
    :
    interface_name{YType::str, "interface-name"},
    name{YType::str, "name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "interface-unicast-peer"; yang_parent_name = "interface-unicast-peers"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::~InterfaceUnicastPeer()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::has_data() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| name.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::has_operation() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-unicast-peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-peer" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers>();
        c->parent = this;
        peers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "interface-name" || name == "name" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Peers()
    :
    address(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address>())
	,announce_grant(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant>())
	,delay_response_grant(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant>())
	,sync_grant(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant>())
{
    address->parent = this;
    announce_grant->parent = this;
    delay_response_grant->parent = this;
    sync_grant->parent = this;

    yang_name = "peers"; yang_parent_name = "interface-unicast-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::~Peers()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data());
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation());
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant>();
        }
        return sync_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        children["announce-grant"] = announce_grant;
    }

    if(delay_response_grant != nullptr)
    {
        children["delay-response-grant"] = delay_response_grant;
    }

    if(sync_grant != nullptr)
    {
        children["sync-grant"] = sync_grant;
    }

    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "announce-grant" || name == "delay-response-grant" || name == "sync-grant")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::~Address()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::AnnounceGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "announce-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::DelayResponseGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::SyncGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "sync-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::~SyncGrant()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Interfaces::~Interfaces()
{
}

bool Ptp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ptp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ptp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    announce_timeout{YType::uint32, "announce-timeout"},
    communication_model{YType::enumeration, "communication-model"},
    configured_port_state{YType::enumeration, "configured-port-state"},
    encapsulation{YType::enumeration, "encapsulation"},
    event_cos{YType::uint32, "event-cos"},
    event_dscp{YType::uint32, "event-dscp"},
    general_cos{YType::uint32, "general-cos"},
    general_dscp{YType::uint32, "general-dscp"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    line_state{YType::uint32, "line-state"},
    local_priority{YType::uint8, "local-priority"},
    log_announce_interval{YType::int32, "log-announce-interval"},
    log_min_delay_request_interval{YType::int32, "log-min-delay-request-interval"},
    log_sync_interval{YType::int32, "log-sync-interval"},
    max_sync_rate{YType::uint8, "max-sync-rate"},
    port_number{YType::uint16, "port-number"},
    port_state{YType::enumeration, "port-state"},
    signal_fail{YType::boolean, "signal-fail"},
    supports_ethernet{YType::boolean, "supports-ethernet"},
    supports_ipv6{YType::boolean, "supports-ipv6"},
    supports_multicast{YType::boolean, "supports-multicast"},
    supports_one_step{YType::boolean, "supports-one-step"},
    supports_slave{YType::boolean, "supports-slave"},
    supports_source_ip{YType::boolean, "supports-source-ip"},
    supports_two_step{YType::boolean, "supports-two-step"},
    two_step{YType::boolean, "two-step"},
    unicast_peers{YType::uint32, "unicast-peers"}
    	,
    mac_address(std::make_shared<Ptp::Interfaces::Interface::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Interfaces::Interface::~Interface()
{
}

bool Ptp::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<master_table.size(); index++)
    {
        if(master_table[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| announce_timeout.is_set
	|| communication_model.is_set
	|| configured_port_state.is_set
	|| encapsulation.is_set
	|| event_cos.is_set
	|| event_dscp.is_set
	|| general_cos.is_set
	|| general_dscp.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| line_state.is_set
	|| local_priority.is_set
	|| log_announce_interval.is_set
	|| log_min_delay_request_interval.is_set
	|| log_sync_interval.is_set
	|| max_sync_rate.is_set
	|| port_number.is_set
	|| port_state.is_set
	|| signal_fail.is_set
	|| supports_ethernet.is_set
	|| supports_ipv6.is_set
	|| supports_multicast.is_set
	|| supports_one_step.is_set
	|| supports_slave.is_set
	|| supports_source_ip.is_set
	|| supports_two_step.is_set
	|| two_step.is_set
	|| unicast_peers.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<master_table.size(); index++)
    {
        if(master_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(configured_port_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(log_announce_interval.yfilter)
	|| ydk::is_set(log_min_delay_request_interval.yfilter)
	|| ydk::is_set(log_sync_interval.yfilter)
	|| ydk::is_set(max_sync_rate.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(signal_fail.yfilter)
	|| ydk::is_set(supports_ethernet.yfilter)
	|| ydk::is_set(supports_ipv6.yfilter)
	|| ydk::is_set(supports_multicast.yfilter)
	|| ydk::is_set(supports_one_step.yfilter)
	|| ydk::is_set(supports_slave.yfilter)
	|| ydk::is_set(supports_source_ip.yfilter)
	|| ydk::is_set(supports_two_step.yfilter)
	|| ydk::is_set(two_step.yfilter)
	|| ydk::is_set(unicast_peers.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (configured_port_state.is_set || is_set(configured_port_state.yfilter)) leaf_name_data.push_back(configured_port_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (log_announce_interval.is_set || is_set(log_announce_interval.yfilter)) leaf_name_data.push_back(log_announce_interval.get_name_leafdata());
    if (log_min_delay_request_interval.is_set || is_set(log_min_delay_request_interval.yfilter)) leaf_name_data.push_back(log_min_delay_request_interval.get_name_leafdata());
    if (log_sync_interval.is_set || is_set(log_sync_interval.yfilter)) leaf_name_data.push_back(log_sync_interval.get_name_leafdata());
    if (max_sync_rate.is_set || is_set(max_sync_rate.yfilter)) leaf_name_data.push_back(max_sync_rate.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());
    if (supports_ethernet.is_set || is_set(supports_ethernet.yfilter)) leaf_name_data.push_back(supports_ethernet.get_name_leafdata());
    if (supports_ipv6.is_set || is_set(supports_ipv6.yfilter)) leaf_name_data.push_back(supports_ipv6.get_name_leafdata());
    if (supports_multicast.is_set || is_set(supports_multicast.yfilter)) leaf_name_data.push_back(supports_multicast.get_name_leafdata());
    if (supports_one_step.is_set || is_set(supports_one_step.yfilter)) leaf_name_data.push_back(supports_one_step.get_name_leafdata());
    if (supports_slave.is_set || is_set(supports_slave.yfilter)) leaf_name_data.push_back(supports_slave.get_name_leafdata());
    if (supports_source_ip.is_set || is_set(supports_source_ip.yfilter)) leaf_name_data.push_back(supports_source_ip.get_name_leafdata());
    if (supports_two_step.is_set || is_set(supports_two_step.yfilter)) leaf_name_data.push_back(supports_two_step.get_name_leafdata());
    if (two_step.is_set || is_set(two_step.yfilter)) leaf_name_data.push_back(two_step.get_name_leafdata());
    if (unicast_peers.is_set || is_set(unicast_peers.yfilter)) leaf_name_data.push_back(unicast_peers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Interfaces::Interface::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "master-table")
    {
        for(auto const & c : master_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Interfaces::Interface::MasterTable>();
        c->parent = this;
        master_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    for (auto const & c : master_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state = value;
        configured_port_state.value_namespace = name_space;
        configured_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval = value;
        log_announce_interval.value_namespace = name_space;
        log_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval = value;
        log_min_delay_request_interval.value_namespace = name_space;
        log_min_delay_request_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval = value;
        log_sync_interval.value_namespace = name_space;
        log_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate = value;
        max_sync_rate.value_namespace = name_space;
        max_sync_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet = value;
        supports_ethernet.value_namespace = name_space;
        supports_ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6 = value;
        supports_ipv6.value_namespace = name_space;
        supports_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast = value;
        supports_multicast.value_namespace = name_space;
        supports_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step = value;
        supports_one_step.value_namespace = name_space;
        supports_one_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-slave")
    {
        supports_slave = value;
        supports_slave.value_namespace = name_space;
        supports_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip = value;
        supports_source_ip.value_namespace = name_space;
        supports_source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step = value;
        supports_two_step.value_namespace = name_space;
        supports_two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-step")
    {
        two_step = value;
        two_step.value_namespace = name_space;
        two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers = value;
        unicast_peers.value_namespace = name_space;
        unicast_peers.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval.yfilter = yfilter;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval.yfilter = yfilter;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval.yfilter = yfilter;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet.yfilter = yfilter;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6.yfilter = yfilter;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast.yfilter = yfilter;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step.yfilter = yfilter;
    }
    if(value_path == "supports-slave")
    {
        supports_slave.yfilter = yfilter;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip.yfilter = yfilter;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step.yfilter = yfilter;
    }
    if(value_path == "two-step")
    {
        two_step.yfilter = yfilter;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "master-table" || name == "interface-name" || name == "announce-timeout" || name == "communication-model" || name == "configured-port-state" || name == "encapsulation" || name == "event-cos" || name == "event-dscp" || name == "general-cos" || name == "general-dscp" || name == "ipv4-address" || name == "ipv6-address" || name == "line-state" || name == "local-priority" || name == "log-announce-interval" || name == "log-min-delay-request-interval" || name == "log-sync-interval" || name == "max-sync-rate" || name == "port-number" || name == "port-state" || name == "signal-fail" || name == "supports-ethernet" || name == "supports-ipv6" || name == "supports-multicast" || name == "supports-one-step" || name == "supports-slave" || name == "supports-source-ip" || name == "supports-two-step" || name == "two-step" || name == "unicast-peers")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Interfaces::Interface::MacAddress::~MacAddress()
{
}

bool Ptp::Interfaces::Interface::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Interfaces::Interface::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Interfaces::Interface::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::Interface::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::Interface::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Interfaces::Interface::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::MasterTable()
    :
    communication_model{YType::enumeration, "communication-model"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    is_nonnegotiated{YType::boolean, "is-nonnegotiated"},
    known{YType::boolean, "known"},
    priority{YType::uint8, "priority"},
    ptsf_loss_announce{YType::uint8, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::uint8, "ptsf-loss-sync"},
    qualified{YType::boolean, "qualified"}
    	,
    address(std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address>())
{
    address->parent = this;

    yang_name = "master-table"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Interfaces::Interface::MasterTable::~MasterTable()
{
}

bool Ptp::Interfaces::Interface::MasterTable::has_data() const
{
    return communication_model.is_set
	|| is_grandmaster.is_set
	|| is_nonnegotiated.is_set
	|| known.is_set
	|| priority.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| qualified.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ptp::Interfaces::Interface::MasterTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(is_nonnegotiated.yfilter)
	|| ydk::is_set(known.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| ydk::is_set(qualified.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ptp::Interfaces::Interface::MasterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (is_nonnegotiated.is_set || is_set(is_nonnegotiated.yfilter)) leaf_name_data.push_back(is_nonnegotiated.get_name_leafdata());
    if (known.is_set || is_set(known.yfilter)) leaf_name_data.push_back(known.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());
    if (qualified.is_set || is_set(qualified.yfilter)) leaf_name_data.push_back(qualified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::Interface::MasterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::Interface::MasterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Ptp::Interfaces::Interface::MasterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated = value;
        is_nonnegotiated.value_namespace = name_space;
        is_nonnegotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known")
    {
        known = value;
        known.value_namespace = name_space;
        known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualified")
    {
        qualified = value;
        qualified.value_namespace = name_space;
        qualified.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated.yfilter = yfilter;
    }
    if(value_path == "known")
    {
        known.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
    if(value_path == "qualified")
    {
        qualified.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "communication-model" || name == "is-grandmaster" || name == "is-nonnegotiated" || name == "known" || name == "priority" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync" || name == "qualified")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "master-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Interfaces::Interface::MasterTable::Address::~Address()
{
}

bool Ptp::Interfaces::Interface::MasterTable::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Interfaces::Interface::MasterTable::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Interfaces::Interface::MasterTable::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::Interface::MasterTable::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::Interface::MasterTable::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::Interfaces::Interface::MasterTable::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::LeapSeconds::LeapSeconds()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"},
    polling_frequency{YType::uint32, "polling-frequency"},
    source_expiry_date{YType::uint32, "source-expiry-date"},
    source_file{YType::str, "source-file"}
{

    yang_name = "leap-seconds"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LeapSeconds::~LeapSeconds()
{
}

bool Ptp::LeapSeconds::has_data() const
{
    for (std::size_t index=0; index<leap_second.size(); index++)
    {
        if(leap_second[index]->has_data())
            return true;
    }
    return current_offset.is_set
	|| offset_valid.is_set
	|| polling_frequency.is_set
	|| source_expiry_date.is_set
	|| source_file.is_set;
}

bool Ptp::LeapSeconds::has_operation() const
{
    for (std::size_t index=0; index<leap_second.size(); index++)
    {
        if(leap_second[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter)
	|| ydk::is_set(polling_frequency.yfilter)
	|| ydk::is_set(source_expiry_date.yfilter)
	|| ydk::is_set(source_file.yfilter);
}

std::string Ptp::LeapSeconds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LeapSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leap-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LeapSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());
    if (polling_frequency.is_set || is_set(polling_frequency.yfilter)) leaf_name_data.push_back(polling_frequency.get_name_leafdata());
    if (source_expiry_date.is_set || is_set(source_expiry_date.yfilter)) leaf_name_data.push_back(source_expiry_date.get_name_leafdata());
    if (source_file.is_set || is_set(source_file.yfilter)) leaf_name_data.push_back(source_file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LeapSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "leap-second")
    {
        for(auto const & c : leap_second)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::LeapSeconds::LeapSecond>();
        c->parent = this;
        leap_second.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LeapSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : leap_second)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::LeapSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polling-frequency")
    {
        polling_frequency = value;
        polling_frequency.value_namespace = name_space;
        polling_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-expiry-date")
    {
        source_expiry_date = value;
        source_expiry_date.value_namespace = name_space;
        source_expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-file")
    {
        source_file = value;
        source_file.value_namespace = name_space;
        source_file.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LeapSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
    if(value_path == "polling-frequency")
    {
        polling_frequency.yfilter = yfilter;
    }
    if(value_path == "source-expiry-date")
    {
        source_expiry_date.yfilter = yfilter;
    }
    if(value_path == "source-file")
    {
        source_file.yfilter = yfilter;
    }
}

bool Ptp::LeapSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leap-second" || name == "current-offset" || name == "offset-valid" || name == "polling-frequency" || name == "source-expiry-date" || name == "source-file")
        return true;
    return false;
}

Ptp::LeapSeconds::LeapSecond::LeapSecond()
    :
    offset{YType::int16, "offset"},
    offset_applied{YType::boolean, "offset-applied"},
    offset_start_date{YType::uint64, "offset-start-date"}
{

    yang_name = "leap-second"; yang_parent_name = "leap-seconds"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LeapSeconds::LeapSecond::~LeapSecond()
{
}

bool Ptp::LeapSeconds::LeapSecond::has_data() const
{
    return offset.is_set
	|| offset_applied.is_set
	|| offset_start_date.is_set;
}

bool Ptp::LeapSeconds::LeapSecond::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(offset_applied.yfilter)
	|| ydk::is_set(offset_start_date.yfilter);
}

std::string Ptp::LeapSeconds::LeapSecond::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/leap-seconds/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LeapSeconds::LeapSecond::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leap-second";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LeapSeconds::LeapSecond::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (offset_applied.is_set || is_set(offset_applied.yfilter)) leaf_name_data.push_back(offset_applied.get_name_leafdata());
    if (offset_start_date.is_set || is_set(offset_start_date.yfilter)) leaf_name_data.push_back(offset_start_date.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LeapSeconds::LeapSecond::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LeapSeconds::LeapSecond::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::LeapSeconds::LeapSecond::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-applied")
    {
        offset_applied = value;
        offset_applied.value_namespace = name_space;
        offset_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-start-date")
    {
        offset_start_date = value;
        offset_start_date.value_namespace = name_space;
        offset_start_date.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LeapSeconds::LeapSecond::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "offset-applied")
    {
        offset_applied.yfilter = yfilter;
    }
    if(value_path == "offset-start-date")
    {
        offset_start_date.yfilter = yfilter;
    }
}

bool Ptp::LeapSeconds::LeapSecond::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "offset-applied" || name == "offset-start-date")
        return true;
    return false;
}

Ptp::LocalClock::LocalClock()
    :
    domain{YType::uint8, "domain"}
    	,
    clock_properties(std::make_shared<Ptp::LocalClock::ClockProperties>())
{
    clock_properties->parent = this;

    yang_name = "local-clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LocalClock::~LocalClock()
{
}

bool Ptp::LocalClock::has_data() const
{
    return domain.is_set
	|| (clock_properties !=  nullptr && clock_properties->has_data());
}

bool Ptp::LocalClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (clock_properties !=  nullptr && clock_properties->has_operation());
}

std::string Ptp::LocalClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LocalClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-properties")
    {
        if(clock_properties == nullptr)
        {
            clock_properties = std::make_shared<Ptp::LocalClock::ClockProperties>();
        }
        return clock_properties;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LocalClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_properties != nullptr)
    {
        children["clock-properties"] = clock_properties;
    }

    return children;
}

void Ptp::LocalClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-properties" || name == "domain")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::ClockProperties()
    :
    accuracy{YType::uint8, "accuracy"},
    class_{YType::uint8, "class"},
    clock_id{YType::uint64, "clock-id"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"}
    	,
    receiver(std::make_shared<Ptp::LocalClock::ClockProperties::Receiver>())
	,sender(std::make_shared<Ptp::LocalClock::ClockProperties::Sender>())
	,utc_offset(std::make_shared<Ptp::LocalClock::ClockProperties::UtcOffset>())
{
    receiver->parent = this;
    sender->parent = this;
    utc_offset->parent = this;

    yang_name = "clock-properties"; yang_parent_name = "local-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LocalClock::ClockProperties::~ClockProperties()
{
}

bool Ptp::LocalClock::ClockProperties::has_data() const
{
    return accuracy.is_set
	|| class_.is_set
	|| clock_id.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| frequency_traceable.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| offset_log_variance.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data())
	|| (utc_offset !=  nullptr && utc_offset->has_data());
}

bool Ptp::LocalClock::ClockProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation())
	|| (utc_offset !=  nullptr && utc_offset->has_operation());
}

std::string Ptp::LocalClock::ClockProperties::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LocalClock::ClockProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::LocalClock::ClockProperties::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::LocalClock::ClockProperties::Sender>();
        }
        return sender;
    }

    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::LocalClock::ClockProperties::UtcOffset>();
        }
        return utc_offset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LocalClock::ClockProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receiver != nullptr)
    {
        children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        children["sender"] = sender;
    }

    if(utc_offset != nullptr)
    {
        children["utc-offset"] = utc_offset;
    }

    return children;
}

void Ptp::LocalClock::ClockProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver" || name == "sender" || name == "utc-offset" || name == "accuracy" || name == "class" || name == "clock-id" || name == "configured-clock-class" || name == "configured-priority" || name == "frequency-traceable" || name == "leap-seconds" || name == "local" || name == "offset-log-variance" || name == "priority1" || name == "priority2" || name == "steps-removed" || name == "time-source" || name == "time-traceable" || name == "timescale")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LocalClock::ClockProperties::Receiver::~Receiver()
{
}

bool Ptp::LocalClock::ClockProperties::Receiver::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::LocalClock::ClockProperties::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::LocalClock::ClockProperties::Receiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LocalClock::ClockProperties::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LocalClock::ClockProperties::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::LocalClock::ClockProperties::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LocalClock::ClockProperties::Sender::~Sender()
{
}

bool Ptp::LocalClock::ClockProperties::Sender::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::LocalClock::ClockProperties::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::LocalClock::ClockProperties::Sender::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LocalClock::ClockProperties::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LocalClock::ClockProperties::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::LocalClock::ClockProperties::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::LocalClock::ClockProperties::UtcOffset::~UtcOffset()
{
}

bool Ptp::LocalClock::ClockProperties::UtcOffset::has_data() const
{
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::LocalClock::ClockProperties::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::LocalClock::ClockProperties::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::LocalClock::ClockProperties::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::LocalClock::ClockProperties::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::LocalClock::ClockProperties::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Nodes::~Nodes()
{
}

bool Ptp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ptp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ptp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    node_interface_foreign_masters(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters>())
	,node_interface_unicast_peers(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers>())
	,node_interfaces(std::make_shared<Ptp::Nodes::Node::NodeInterfaces>())
	,packet_counters(std::make_shared<Ptp::Nodes::Node::PacketCounters>())
	,summary(std::make_shared<Ptp::Nodes::Node::Summary>())
{
    node_interface_foreign_masters->parent = this;
    node_interface_unicast_peers->parent = this;
    node_interfaces->parent = this;
    packet_counters->parent = this;
    summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Nodes::Node::~Node()
{
}

bool Ptp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (node_interface_foreign_masters !=  nullptr && node_interface_foreign_masters->has_data())
	|| (node_interface_unicast_peers !=  nullptr && node_interface_unicast_peers->has_data())
	|| (node_interfaces !=  nullptr && node_interfaces->has_data())
	|| (packet_counters !=  nullptr && packet_counters->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Ptp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (node_interface_foreign_masters !=  nullptr && node_interface_foreign_masters->has_operation())
	|| (node_interface_unicast_peers !=  nullptr && node_interface_unicast_peers->has_operation())
	|| (node_interfaces !=  nullptr && node_interfaces->has_operation())
	|| (packet_counters !=  nullptr && packet_counters->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Ptp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-foreign-masters")
    {
        if(node_interface_foreign_masters == nullptr)
        {
            node_interface_foreign_masters = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters>();
        }
        return node_interface_foreign_masters;
    }

    if(child_yang_name == "node-interface-unicast-peers")
    {
        if(node_interface_unicast_peers == nullptr)
        {
            node_interface_unicast_peers = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers>();
        }
        return node_interface_unicast_peers;
    }

    if(child_yang_name == "node-interfaces")
    {
        if(node_interfaces == nullptr)
        {
            node_interfaces = std::make_shared<Ptp::Nodes::Node::NodeInterfaces>();
        }
        return node_interfaces;
    }

    if(child_yang_name == "packet-counters")
    {
        if(packet_counters == nullptr)
        {
            packet_counters = std::make_shared<Ptp::Nodes::Node::PacketCounters>();
        }
        return packet_counters;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ptp::Nodes::Node::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_interface_foreign_masters != nullptr)
    {
        children["node-interface-foreign-masters"] = node_interface_foreign_masters;
    }

    if(node_interface_unicast_peers != nullptr)
    {
        children["node-interface-unicast-peers"] = node_interface_unicast_peers;
    }

    if(node_interfaces != nullptr)
    {
        children["node-interfaces"] = node_interfaces;
    }

    if(packet_counters != nullptr)
    {
        children["packet-counters"] = packet_counters;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Ptp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface-foreign-masters" || name == "node-interface-unicast-peers" || name == "node-interfaces" || name == "packet-counters" || name == "summary" || name == "node-name")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMasters()
{

    yang_name = "node-interface-foreign-masters"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::~NodeInterfaceForeignMasters()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::has_data() const
{
    for (std::size_t index=0; index<node_interface_foreign_master.size(); index++)
    {
        if(node_interface_foreign_master[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::has_operation() const
{
    for (std::size_t index=0; index<node_interface_foreign_master.size(); index++)
    {
        if(node_interface_foreign_master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-foreign-masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-foreign-master")
    {
        for(auto const & c : node_interface_foreign_master)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster>();
        c->parent = this;
        node_interface_foreign_master.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_interface_foreign_master)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface-foreign-master")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::NodeInterfaceForeignMaster()
    :
    interface_name{YType::str, "interface-name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "node-interface-foreign-master"; yang_parent_name = "node-interface-foreign-masters"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::~NodeInterfaceForeignMaster()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::has_data() const
{
    for (std::size_t index=0; index<foreign_clock.size(); index++)
    {
        if(foreign_clock[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::has_operation() const
{
    for (std::size_t index=0; index<foreign_clock.size(); index++)
    {
        if(foreign_clock[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-foreign-master" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-clock")
    {
        for(auto const & c : foreign_clock)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock>();
        c->parent = this;
        foreign_clock.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : foreign_clock)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-clock" || name == "interface-name" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock()
    :
    communication_model{YType::enumeration, "communication-model"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    delay_asymmetry{YType::int32, "delay-asymmetry"},
    foreign_domain{YType::uint8, "foreign-domain"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    is_known{YType::boolean, "is-known"},
    is_qualified{YType::boolean, "is-qualified"},
    ptsf_loss_announce{YType::boolean, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::boolean, "ptsf-loss-sync"},
    time_known_for{YType::uint32, "time-known-for"}
    	,
    address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address>())
	,announce_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant>())
	,delay_response_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant>())
	,foreign_clock(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_>())
	,sync_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant>())
{
    address->parent = this;
    announce_grant->parent = this;
    delay_response_grant->parent = this;
    foreign_clock->parent = this;
    sync_grant->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "node-interface-foreign-master"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::~ForeignClock()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::has_data() const
{
    return communication_model.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| delay_asymmetry.is_set
	|| foreign_domain.is_set
	|| is_grandmaster.is_set
	|| is_known.is_set
	|| is_qualified.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| time_known_for.is_set
	|| (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data())
	|| (foreign_clock !=  nullptr && foreign_clock->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(delay_asymmetry.yfilter)
	|| ydk::is_set(foreign_domain.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(is_known.yfilter)
	|| ydk::is_set(is_qualified.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| ydk::is_set(time_known_for.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation())
	|| (foreign_clock !=  nullptr && foreign_clock->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (delay_asymmetry.is_set || is_set(delay_asymmetry.yfilter)) leaf_name_data.push_back(delay_asymmetry.get_name_leafdata());
    if (foreign_domain.is_set || is_set(foreign_domain.yfilter)) leaf_name_data.push_back(foreign_domain.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (is_known.is_set || is_set(is_known.yfilter)) leaf_name_data.push_back(is_known.get_name_leafdata());
    if (is_qualified.is_set || is_set(is_qualified.yfilter)) leaf_name_data.push_back(is_qualified.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());
    if (time_known_for.is_set || is_set(time_known_for.yfilter)) leaf_name_data.push_back(time_known_for.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    if(child_yang_name == "foreign-clock")
    {
        if(foreign_clock == nullptr)
        {
            foreign_clock = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_>();
        }
        return foreign_clock;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant>();
        }
        return sync_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        children["announce-grant"] = announce_grant;
    }

    if(delay_response_grant != nullptr)
    {
        children["delay-response-grant"] = delay_response_grant;
    }

    if(foreign_clock != nullptr)
    {
        children["foreign-clock"] = foreign_clock;
    }

    if(sync_grant != nullptr)
    {
        children["sync-grant"] = sync_grant;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry = value;
        delay_asymmetry.value_namespace = name_space;
        delay_asymmetry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain = value;
        foreign_domain.value_namespace = name_space;
        foreign_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-known")
    {
        is_known = value;
        is_known.value_namespace = name_space;
        is_known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-qualified")
    {
        is_qualified = value;
        is_qualified.value_namespace = name_space;
        is_qualified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-known-for")
    {
        time_known_for = value;
        time_known_for.value_namespace = name_space;
        time_known_for.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry.yfilter = yfilter;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "is-known")
    {
        is_known.yfilter = yfilter;
    }
    if(value_path == "is-qualified")
    {
        is_qualified.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
    if(value_path == "time-known-for")
    {
        time_known_for.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "announce-grant" || name == "delay-response-grant" || name == "foreign-clock" || name == "sync-grant" || name == "communication-model" || name == "configured-clock-class" || name == "configured-priority" || name == "delay-asymmetry" || name == "foreign-domain" || name == "is-grandmaster" || name == "is-known" || name == "is-qualified" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync" || name == "time-known-for")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::~Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::AnnounceGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "announce-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::DelayResponseGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::ForeignClock_()
    :
    accuracy{YType::uint8, "accuracy"},
    class_{YType::uint8, "class"},
    clock_id{YType::uint64, "clock-id"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"}
    	,
    receiver(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>())
	,sender(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>())
	,utc_offset(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>())
{
    receiver->parent = this;
    sender->parent = this;
    utc_offset->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::~ForeignClock_()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::has_data() const
{
    return accuracy.is_set
	|| class_.is_set
	|| clock_id.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| frequency_traceable.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| offset_log_variance.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data())
	|| (utc_offset !=  nullptr && utc_offset->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation())
	|| (utc_offset !=  nullptr && utc_offset->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>();
        }
        return sender;
    }

    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>();
        }
        return utc_offset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receiver != nullptr)
    {
        children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        children["sender"] = sender;
    }

    if(utc_offset != nullptr)
    {
        children["utc-offset"] = utc_offset;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver" || name == "sender" || name == "utc-offset" || name == "accuracy" || name == "class" || name == "clock-id" || name == "configured-clock-class" || name == "configured-priority" || name == "frequency-traceable" || name == "leap-seconds" || name == "local" || name == "offset-log-variance" || name == "priority1" || name == "priority2" || name == "steps-removed" || name == "time-source" || name == "time-traceable" || name == "timescale")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::~Receiver()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::~Sender()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_data() const
{
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::~UtcOffset()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_data() const
{
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::SyncGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "sync-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::~SyncGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeers()
{

    yang_name = "node-interface-unicast-peers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::~NodeInterfaceUnicastPeers()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::has_data() const
{
    for (std::size_t index=0; index<node_interface_unicast_peer.size(); index++)
    {
        if(node_interface_unicast_peer[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::has_operation() const
{
    for (std::size_t index=0; index<node_interface_unicast_peer.size(); index++)
    {
        if(node_interface_unicast_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-unicast-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-unicast-peer")
    {
        for(auto const & c : node_interface_unicast_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer>();
        c->parent = this;
        node_interface_unicast_peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_interface_unicast_peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface-unicast-peer")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::NodeInterfaceUnicastPeer()
    :
    interface_name{YType::str, "interface-name"},
    name{YType::str, "name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "node-interface-unicast-peer"; yang_parent_name = "node-interface-unicast-peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::~NodeInterfaceUnicastPeer()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::has_data() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| name.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::has_operation() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-unicast-peer" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers>();
        c->parent = this;
        peers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "interface-name" || name == "name" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Peers()
    :
    address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address>())
	,announce_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant>())
	,delay_response_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant>())
	,sync_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant>())
{
    address->parent = this;
    announce_grant->parent = this;
    delay_response_grant->parent = this;
    sync_grant->parent = this;

    yang_name = "peers"; yang_parent_name = "node-interface-unicast-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::~Peers()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant>();
        }
        return sync_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        children["announce-grant"] = announce_grant;
    }

    if(delay_response_grant != nullptr)
    {
        children["delay-response-grant"] = delay_response_grant;
    }

    if(sync_grant != nullptr)
    {
        children["sync-grant"] = sync_grant;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "announce-grant" || name == "delay-response-grant" || name == "sync-grant")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::~Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::AnnounceGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "announce-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::DelayResponseGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::SyncGrant()
    :
    grant_duration{YType::uint32, "grant-duration"},
    log_grant_interval{YType::int8, "log-grant-interval"}
{

    yang_name = "sync-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::~SyncGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::has_data() const
{
    return grant_duration.is_set
	|| log_grant_interval.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grant_duration.yfilter)
	|| ydk::is_set(log_grant_interval.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());
    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grant-duration" || name == "log-grant-interval")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterfaces()
{

    yang_name = "node-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::~NodeInterfaces()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::has_data() const
{
    for (std::size_t index=0; index<node_interface.size(); index++)
    {
        if(node_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<node_interface.size(); index++)
    {
        if(node_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface")
    {
        for(auto const & c : node_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface>();
        c->parent = this;
        node_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::NodeInterface()
    :
    interface_name{YType::str, "interface-name"},
    announce_timeout{YType::uint32, "announce-timeout"},
    communication_model{YType::enumeration, "communication-model"},
    configured_port_state{YType::enumeration, "configured-port-state"},
    encapsulation{YType::enumeration, "encapsulation"},
    event_cos{YType::uint32, "event-cos"},
    event_dscp{YType::uint32, "event-dscp"},
    general_cos{YType::uint32, "general-cos"},
    general_dscp{YType::uint32, "general-dscp"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    line_state{YType::uint32, "line-state"},
    local_priority{YType::uint8, "local-priority"},
    log_announce_interval{YType::int32, "log-announce-interval"},
    log_min_delay_request_interval{YType::int32, "log-min-delay-request-interval"},
    log_sync_interval{YType::int32, "log-sync-interval"},
    max_sync_rate{YType::uint8, "max-sync-rate"},
    port_number{YType::uint16, "port-number"},
    port_state{YType::enumeration, "port-state"},
    signal_fail{YType::boolean, "signal-fail"},
    supports_ethernet{YType::boolean, "supports-ethernet"},
    supports_ipv6{YType::boolean, "supports-ipv6"},
    supports_multicast{YType::boolean, "supports-multicast"},
    supports_one_step{YType::boolean, "supports-one-step"},
    supports_slave{YType::boolean, "supports-slave"},
    supports_source_ip{YType::boolean, "supports-source-ip"},
    supports_two_step{YType::boolean, "supports-two-step"},
    two_step{YType::boolean, "two-step"},
    unicast_peers{YType::uint32, "unicast-peers"}
    	,
    mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "node-interface"; yang_parent_name = "node-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::~NodeInterface()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::has_data() const
{
    for (std::size_t index=0; index<master_table.size(); index++)
    {
        if(master_table[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| announce_timeout.is_set
	|| communication_model.is_set
	|| configured_port_state.is_set
	|| encapsulation.is_set
	|| event_cos.is_set
	|| event_dscp.is_set
	|| general_cos.is_set
	|| general_dscp.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| line_state.is_set
	|| local_priority.is_set
	|| log_announce_interval.is_set
	|| log_min_delay_request_interval.is_set
	|| log_sync_interval.is_set
	|| max_sync_rate.is_set
	|| port_number.is_set
	|| port_state.is_set
	|| signal_fail.is_set
	|| supports_ethernet.is_set
	|| supports_ipv6.is_set
	|| supports_multicast.is_set
	|| supports_one_step.is_set
	|| supports_slave.is_set
	|| supports_source_ip.is_set
	|| supports_two_step.is_set
	|| two_step.is_set
	|| unicast_peers.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::has_operation() const
{
    for (std::size_t index=0; index<master_table.size(); index++)
    {
        if(master_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(configured_port_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(log_announce_interval.yfilter)
	|| ydk::is_set(log_min_delay_request_interval.yfilter)
	|| ydk::is_set(log_sync_interval.yfilter)
	|| ydk::is_set(max_sync_rate.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(signal_fail.yfilter)
	|| ydk::is_set(supports_ethernet.yfilter)
	|| ydk::is_set(supports_ipv6.yfilter)
	|| ydk::is_set(supports_multicast.yfilter)
	|| ydk::is_set(supports_one_step.yfilter)
	|| ydk::is_set(supports_slave.yfilter)
	|| ydk::is_set(supports_source_ip.yfilter)
	|| ydk::is_set(supports_two_step.yfilter)
	|| ydk::is_set(two_step.yfilter)
	|| ydk::is_set(unicast_peers.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (configured_port_state.is_set || is_set(configured_port_state.yfilter)) leaf_name_data.push_back(configured_port_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (log_announce_interval.is_set || is_set(log_announce_interval.yfilter)) leaf_name_data.push_back(log_announce_interval.get_name_leafdata());
    if (log_min_delay_request_interval.is_set || is_set(log_min_delay_request_interval.yfilter)) leaf_name_data.push_back(log_min_delay_request_interval.get_name_leafdata());
    if (log_sync_interval.is_set || is_set(log_sync_interval.yfilter)) leaf_name_data.push_back(log_sync_interval.get_name_leafdata());
    if (max_sync_rate.is_set || is_set(max_sync_rate.yfilter)) leaf_name_data.push_back(max_sync_rate.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());
    if (supports_ethernet.is_set || is_set(supports_ethernet.yfilter)) leaf_name_data.push_back(supports_ethernet.get_name_leafdata());
    if (supports_ipv6.is_set || is_set(supports_ipv6.yfilter)) leaf_name_data.push_back(supports_ipv6.get_name_leafdata());
    if (supports_multicast.is_set || is_set(supports_multicast.yfilter)) leaf_name_data.push_back(supports_multicast.get_name_leafdata());
    if (supports_one_step.is_set || is_set(supports_one_step.yfilter)) leaf_name_data.push_back(supports_one_step.get_name_leafdata());
    if (supports_slave.is_set || is_set(supports_slave.yfilter)) leaf_name_data.push_back(supports_slave.get_name_leafdata());
    if (supports_source_ip.is_set || is_set(supports_source_ip.yfilter)) leaf_name_data.push_back(supports_source_ip.get_name_leafdata());
    if (supports_two_step.is_set || is_set(supports_two_step.yfilter)) leaf_name_data.push_back(supports_two_step.get_name_leafdata());
    if (two_step.is_set || is_set(two_step.yfilter)) leaf_name_data.push_back(two_step.get_name_leafdata());
    if (unicast_peers.is_set || is_set(unicast_peers.yfilter)) leaf_name_data.push_back(unicast_peers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "master-table")
    {
        for(auto const & c : master_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable>();
        c->parent = this;
        master_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    for (auto const & c : master_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state = value;
        configured_port_state.value_namespace = name_space;
        configured_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval = value;
        log_announce_interval.value_namespace = name_space;
        log_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval = value;
        log_min_delay_request_interval.value_namespace = name_space;
        log_min_delay_request_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval = value;
        log_sync_interval.value_namespace = name_space;
        log_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate = value;
        max_sync_rate.value_namespace = name_space;
        max_sync_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet = value;
        supports_ethernet.value_namespace = name_space;
        supports_ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6 = value;
        supports_ipv6.value_namespace = name_space;
        supports_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast = value;
        supports_multicast.value_namespace = name_space;
        supports_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step = value;
        supports_one_step.value_namespace = name_space;
        supports_one_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-slave")
    {
        supports_slave = value;
        supports_slave.value_namespace = name_space;
        supports_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip = value;
        supports_source_ip.value_namespace = name_space;
        supports_source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step = value;
        supports_two_step.value_namespace = name_space;
        supports_two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-step")
    {
        two_step = value;
        two_step.value_namespace = name_space;
        two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers = value;
        unicast_peers.value_namespace = name_space;
        unicast_peers.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval.yfilter = yfilter;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval.yfilter = yfilter;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval.yfilter = yfilter;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet.yfilter = yfilter;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6.yfilter = yfilter;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast.yfilter = yfilter;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step.yfilter = yfilter;
    }
    if(value_path == "supports-slave")
    {
        supports_slave.yfilter = yfilter;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip.yfilter = yfilter;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step.yfilter = yfilter;
    }
    if(value_path == "two-step")
    {
        two_step.yfilter = yfilter;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "master-table" || name == "interface-name" || name == "announce-timeout" || name == "communication-model" || name == "configured-port-state" || name == "encapsulation" || name == "event-cos" || name == "event-dscp" || name == "general-cos" || name == "general-dscp" || name == "ipv4-address" || name == "ipv6-address" || name == "line-state" || name == "local-priority" || name == "log-announce-interval" || name == "log-min-delay-request-interval" || name == "log-sync-interval" || name == "max-sync-rate" || name == "port-number" || name == "port-state" || name == "signal-fail" || name == "supports-ethernet" || name == "supports-ipv6" || name == "supports-multicast" || name == "supports-one-step" || name == "supports-slave" || name == "supports-source-ip" || name == "supports-two-step" || name == "two-step" || name == "unicast-peers")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::MasterTable()
    :
    communication_model{YType::enumeration, "communication-model"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    is_nonnegotiated{YType::boolean, "is-nonnegotiated"},
    known{YType::boolean, "known"},
    priority{YType::uint8, "priority"},
    ptsf_loss_announce{YType::uint8, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::uint8, "ptsf-loss-sync"},
    qualified{YType::boolean, "qualified"}
    	,
    address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address>())
{
    address->parent = this;

    yang_name = "master-table"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::~MasterTable()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::has_data() const
{
    return communication_model.is_set
	|| is_grandmaster.is_set
	|| is_nonnegotiated.is_set
	|| known.is_set
	|| priority.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| qualified.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(is_nonnegotiated.yfilter)
	|| ydk::is_set(known.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| ydk::is_set(qualified.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (is_nonnegotiated.is_set || is_set(is_nonnegotiated.yfilter)) leaf_name_data.push_back(is_nonnegotiated.get_name_leafdata());
    if (known.is_set || is_set(known.yfilter)) leaf_name_data.push_back(known.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());
    if (qualified.is_set || is_set(qualified.yfilter)) leaf_name_data.push_back(qualified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated = value;
        is_nonnegotiated.value_namespace = name_space;
        is_nonnegotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known")
    {
        known = value;
        known.value_namespace = name_space;
        known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualified")
    {
        qualified = value;
        qualified.value_namespace = name_space;
        qualified.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated.yfilter = yfilter;
    }
    if(value_path == "known")
    {
        known.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
    if(value_path == "qualified")
    {
        qualified.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "communication-model" || name == "is-grandmaster" || name == "is-nonnegotiated" || name == "known" || name == "priority" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync" || name == "qualified")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Address()
    :
    address_unknown{YType::boolean, "address-unknown"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv6_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address>())
	,mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress>())
{
    ipv6_address->parent = this;
    mac_address->parent = this;

    yang_name = "address"; yang_parent_name = "master-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::~Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::has_data() const
{
    return address_unknown.is_set
	|| encapsulation.is_set
	|| ipv4_address.is_set
	|| (ipv6_address !=  nullptr && ipv6_address->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "mac-address" || name == "address-unknown" || name == "encapsulation" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::has_data() const
{
    return ipv6_address.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::has_data() const
{
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::PacketCounters::PacketCounters()
    :
    counters(std::make_shared<Ptp::Nodes::Node::PacketCounters::Counters>())
	,drop_reasons(std::make_shared<Ptp::Nodes::Node::PacketCounters::DropReasons>())
{
    counters->parent = this;
    drop_reasons->parent = this;

    yang_name = "packet-counters"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::PacketCounters::~PacketCounters()
{
}

bool Ptp::Nodes::Node::PacketCounters::has_data() const
{
    return (counters !=  nullptr && counters->has_data())
	|| (drop_reasons !=  nullptr && drop_reasons->has_data());
}

bool Ptp::Nodes::Node::PacketCounters::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (drop_reasons !=  nullptr && drop_reasons->has_operation());
}

std::string Ptp::Nodes::Node::PacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::PacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::PacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Ptp::Nodes::Node::PacketCounters::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "drop-reasons")
    {
        if(drop_reasons == nullptr)
        {
            drop_reasons = std::make_shared<Ptp::Nodes::Node::PacketCounters::DropReasons>();
        }
        return drop_reasons;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::PacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(drop_reasons != nullptr)
    {
        children["drop-reasons"] = drop_reasons;
    }

    return children;
}

void Ptp::Nodes::Node::PacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::PacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::PacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "drop-reasons")
        return true;
    return false;
}

Ptp::Nodes::Node::PacketCounters::Counters::Counters()
    :
    announce_dropped{YType::uint32, "announce-dropped"},
    announce_received{YType::uint32, "announce-received"},
    announce_sent{YType::uint32, "announce-sent"},
    delay_request_dropped{YType::uint32, "delay-request-dropped"},
    delay_request_received{YType::uint32, "delay-request-received"},
    delay_request_sent{YType::uint32, "delay-request-sent"},
    delay_response_dropped{YType::uint32, "delay-response-dropped"},
    delay_response_received{YType::uint32, "delay-response-received"},
    delay_response_sent{YType::uint32, "delay-response-sent"},
    follow_up_dropped{YType::uint32, "follow-up-dropped"},
    follow_up_received{YType::uint32, "follow-up-received"},
    follow_up_sent{YType::uint32, "follow-up-sent"},
    management_dropped{YType::uint32, "management-dropped"},
    management_received{YType::uint32, "management-received"},
    management_sent{YType::uint32, "management-sent"},
    other_packets_dropped{YType::uint32, "other-packets-dropped"},
    other_packets_received{YType::uint32, "other-packets-received"},
    other_packets_sent{YType::uint32, "other-packets-sent"},
    peer_delay_request_dropped{YType::uint32, "peer-delay-request-dropped"},
    peer_delay_request_received{YType::uint32, "peer-delay-request-received"},
    peer_delay_request_sent{YType::uint32, "peer-delay-request-sent"},
    peer_delay_response_dropped{YType::uint32, "peer-delay-response-dropped"},
    peer_delay_response_follow_up_dropped{YType::uint32, "peer-delay-response-follow-up-dropped"},
    peer_delay_response_follow_up_received{YType::uint32, "peer-delay-response-follow-up-received"},
    peer_delay_response_follow_up_sent{YType::uint32, "peer-delay-response-follow-up-sent"},
    peer_delay_response_received{YType::uint32, "peer-delay-response-received"},
    peer_delay_response_sent{YType::uint32, "peer-delay-response-sent"},
    signaling_dropped{YType::uint32, "signaling-dropped"},
    signaling_received{YType::uint32, "signaling-received"},
    signaling_sent{YType::uint32, "signaling-sent"},
    sync_dropped{YType::uint32, "sync-dropped"},
    sync_received{YType::uint32, "sync-received"},
    sync_sent{YType::uint32, "sync-sent"},
    total_packets_dropped{YType::uint32, "total-packets-dropped"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_packets_sent{YType::uint32, "total-packets-sent"}
{

    yang_name = "counters"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::PacketCounters::Counters::~Counters()
{
}

bool Ptp::Nodes::Node::PacketCounters::Counters::has_data() const
{
    return announce_dropped.is_set
	|| announce_received.is_set
	|| announce_sent.is_set
	|| delay_request_dropped.is_set
	|| delay_request_received.is_set
	|| delay_request_sent.is_set
	|| delay_response_dropped.is_set
	|| delay_response_received.is_set
	|| delay_response_sent.is_set
	|| follow_up_dropped.is_set
	|| follow_up_received.is_set
	|| follow_up_sent.is_set
	|| management_dropped.is_set
	|| management_received.is_set
	|| management_sent.is_set
	|| other_packets_dropped.is_set
	|| other_packets_received.is_set
	|| other_packets_sent.is_set
	|| peer_delay_request_dropped.is_set
	|| peer_delay_request_received.is_set
	|| peer_delay_request_sent.is_set
	|| peer_delay_response_dropped.is_set
	|| peer_delay_response_follow_up_dropped.is_set
	|| peer_delay_response_follow_up_received.is_set
	|| peer_delay_response_follow_up_sent.is_set
	|| peer_delay_response_received.is_set
	|| peer_delay_response_sent.is_set
	|| signaling_dropped.is_set
	|| signaling_received.is_set
	|| signaling_sent.is_set
	|| sync_dropped.is_set
	|| sync_received.is_set
	|| sync_sent.is_set
	|| total_packets_dropped.is_set
	|| total_packets_received.is_set
	|| total_packets_sent.is_set;
}

bool Ptp::Nodes::Node::PacketCounters::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_dropped.yfilter)
	|| ydk::is_set(announce_received.yfilter)
	|| ydk::is_set(announce_sent.yfilter)
	|| ydk::is_set(delay_request_dropped.yfilter)
	|| ydk::is_set(delay_request_received.yfilter)
	|| ydk::is_set(delay_request_sent.yfilter)
	|| ydk::is_set(delay_response_dropped.yfilter)
	|| ydk::is_set(delay_response_received.yfilter)
	|| ydk::is_set(delay_response_sent.yfilter)
	|| ydk::is_set(follow_up_dropped.yfilter)
	|| ydk::is_set(follow_up_received.yfilter)
	|| ydk::is_set(follow_up_sent.yfilter)
	|| ydk::is_set(management_dropped.yfilter)
	|| ydk::is_set(management_received.yfilter)
	|| ydk::is_set(management_sent.yfilter)
	|| ydk::is_set(other_packets_dropped.yfilter)
	|| ydk::is_set(other_packets_received.yfilter)
	|| ydk::is_set(other_packets_sent.yfilter)
	|| ydk::is_set(peer_delay_request_dropped.yfilter)
	|| ydk::is_set(peer_delay_request_received.yfilter)
	|| ydk::is_set(peer_delay_request_sent.yfilter)
	|| ydk::is_set(peer_delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_received.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_sent.yfilter)
	|| ydk::is_set(peer_delay_response_received.yfilter)
	|| ydk::is_set(peer_delay_response_sent.yfilter)
	|| ydk::is_set(signaling_dropped.yfilter)
	|| ydk::is_set(signaling_received.yfilter)
	|| ydk::is_set(signaling_sent.yfilter)
	|| ydk::is_set(sync_dropped.yfilter)
	|| ydk::is_set(sync_received.yfilter)
	|| ydk::is_set(sync_sent.yfilter)
	|| ydk::is_set(total_packets_dropped.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter);
}

std::string Ptp::Nodes::Node::PacketCounters::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::PacketCounters::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_dropped.is_set || is_set(announce_dropped.yfilter)) leaf_name_data.push_back(announce_dropped.get_name_leafdata());
    if (announce_received.is_set || is_set(announce_received.yfilter)) leaf_name_data.push_back(announce_received.get_name_leafdata());
    if (announce_sent.is_set || is_set(announce_sent.yfilter)) leaf_name_data.push_back(announce_sent.get_name_leafdata());
    if (delay_request_dropped.is_set || is_set(delay_request_dropped.yfilter)) leaf_name_data.push_back(delay_request_dropped.get_name_leafdata());
    if (delay_request_received.is_set || is_set(delay_request_received.yfilter)) leaf_name_data.push_back(delay_request_received.get_name_leafdata());
    if (delay_request_sent.is_set || is_set(delay_request_sent.yfilter)) leaf_name_data.push_back(delay_request_sent.get_name_leafdata());
    if (delay_response_dropped.is_set || is_set(delay_response_dropped.yfilter)) leaf_name_data.push_back(delay_response_dropped.get_name_leafdata());
    if (delay_response_received.is_set || is_set(delay_response_received.yfilter)) leaf_name_data.push_back(delay_response_received.get_name_leafdata());
    if (delay_response_sent.is_set || is_set(delay_response_sent.yfilter)) leaf_name_data.push_back(delay_response_sent.get_name_leafdata());
    if (follow_up_dropped.is_set || is_set(follow_up_dropped.yfilter)) leaf_name_data.push_back(follow_up_dropped.get_name_leafdata());
    if (follow_up_received.is_set || is_set(follow_up_received.yfilter)) leaf_name_data.push_back(follow_up_received.get_name_leafdata());
    if (follow_up_sent.is_set || is_set(follow_up_sent.yfilter)) leaf_name_data.push_back(follow_up_sent.get_name_leafdata());
    if (management_dropped.is_set || is_set(management_dropped.yfilter)) leaf_name_data.push_back(management_dropped.get_name_leafdata());
    if (management_received.is_set || is_set(management_received.yfilter)) leaf_name_data.push_back(management_received.get_name_leafdata());
    if (management_sent.is_set || is_set(management_sent.yfilter)) leaf_name_data.push_back(management_sent.get_name_leafdata());
    if (other_packets_dropped.is_set || is_set(other_packets_dropped.yfilter)) leaf_name_data.push_back(other_packets_dropped.get_name_leafdata());
    if (other_packets_received.is_set || is_set(other_packets_received.yfilter)) leaf_name_data.push_back(other_packets_received.get_name_leafdata());
    if (other_packets_sent.is_set || is_set(other_packets_sent.yfilter)) leaf_name_data.push_back(other_packets_sent.get_name_leafdata());
    if (peer_delay_request_dropped.is_set || is_set(peer_delay_request_dropped.yfilter)) leaf_name_data.push_back(peer_delay_request_dropped.get_name_leafdata());
    if (peer_delay_request_received.is_set || is_set(peer_delay_request_received.yfilter)) leaf_name_data.push_back(peer_delay_request_received.get_name_leafdata());
    if (peer_delay_request_sent.is_set || is_set(peer_delay_request_sent.yfilter)) leaf_name_data.push_back(peer_delay_request_sent.get_name_leafdata());
    if (peer_delay_response_dropped.is_set || is_set(peer_delay_response_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_dropped.is_set || is_set(peer_delay_response_follow_up_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_received.is_set || is_set(peer_delay_response_follow_up_received.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_received.get_name_leafdata());
    if (peer_delay_response_follow_up_sent.is_set || is_set(peer_delay_response_follow_up_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_sent.get_name_leafdata());
    if (peer_delay_response_received.is_set || is_set(peer_delay_response_received.yfilter)) leaf_name_data.push_back(peer_delay_response_received.get_name_leafdata());
    if (peer_delay_response_sent.is_set || is_set(peer_delay_response_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_sent.get_name_leafdata());
    if (signaling_dropped.is_set || is_set(signaling_dropped.yfilter)) leaf_name_data.push_back(signaling_dropped.get_name_leafdata());
    if (signaling_received.is_set || is_set(signaling_received.yfilter)) leaf_name_data.push_back(signaling_received.get_name_leafdata());
    if (signaling_sent.is_set || is_set(signaling_sent.yfilter)) leaf_name_data.push_back(signaling_sent.get_name_leafdata());
    if (sync_dropped.is_set || is_set(sync_dropped.yfilter)) leaf_name_data.push_back(sync_dropped.get_name_leafdata());
    if (sync_received.is_set || is_set(sync_received.yfilter)) leaf_name_data.push_back(sync_received.get_name_leafdata());
    if (sync_sent.is_set || is_set(sync_sent.yfilter)) leaf_name_data.push_back(sync_sent.get_name_leafdata());
    if (total_packets_dropped.is_set || is_set(total_packets_dropped.yfilter)) leaf_name_data.push_back(total_packets_dropped.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::PacketCounters::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::PacketCounters::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::PacketCounters::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-dropped")
    {
        announce_dropped = value;
        announce_dropped.value_namespace = name_space;
        announce_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-received")
    {
        announce_received = value;
        announce_received.value_namespace = name_space;
        announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-sent")
    {
        announce_sent = value;
        announce_sent.value_namespace = name_space;
        announce_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped = value;
        delay_request_dropped.value_namespace = name_space;
        delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received = value;
        delay_request_received.value_namespace = name_space;
        delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent = value;
        delay_request_sent.value_namespace = name_space;
        delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped = value;
        delay_response_dropped.value_namespace = name_space;
        delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received = value;
        delay_response_received.value_namespace = name_space;
        delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent = value;
        delay_response_sent.value_namespace = name_space;
        delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped = value;
        follow_up_dropped.value_namespace = name_space;
        follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received = value;
        follow_up_received.value_namespace = name_space;
        follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent = value;
        follow_up_sent.value_namespace = name_space;
        follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-dropped")
    {
        management_dropped = value;
        management_dropped.value_namespace = name_space;
        management_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-received")
    {
        management_received = value;
        management_received.value_namespace = name_space;
        management_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-sent")
    {
        management_sent = value;
        management_sent.value_namespace = name_space;
        management_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped = value;
        other_packets_dropped.value_namespace = name_space;
        other_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received = value;
        other_packets_received.value_namespace = name_space;
        other_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent = value;
        other_packets_sent.value_namespace = name_space;
        other_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped = value;
        peer_delay_request_dropped.value_namespace = name_space;
        peer_delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received = value;
        peer_delay_request_received.value_namespace = name_space;
        peer_delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent = value;
        peer_delay_request_sent.value_namespace = name_space;
        peer_delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped = value;
        peer_delay_response_dropped.value_namespace = name_space;
        peer_delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped = value;
        peer_delay_response_follow_up_dropped.value_namespace = name_space;
        peer_delay_response_follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received = value;
        peer_delay_response_follow_up_received.value_namespace = name_space;
        peer_delay_response_follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent = value;
        peer_delay_response_follow_up_sent.value_namespace = name_space;
        peer_delay_response_follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received = value;
        peer_delay_response_received.value_namespace = name_space;
        peer_delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent = value;
        peer_delay_response_sent.value_namespace = name_space;
        peer_delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped = value;
        signaling_dropped.value_namespace = name_space;
        signaling_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-received")
    {
        signaling_received = value;
        signaling_received.value_namespace = name_space;
        signaling_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent = value;
        signaling_sent.value_namespace = name_space;
        signaling_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped = value;
        sync_dropped.value_namespace = name_space;
        sync_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-received")
    {
        sync_received = value;
        sync_received.value_namespace = name_space;
        sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-sent")
    {
        sync_sent = value;
        sync_sent.value_namespace = name_space;
        sync_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped = value;
        total_packets_dropped.value_namespace = name_space;
        total_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::PacketCounters::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-dropped")
    {
        announce_dropped.yfilter = yfilter;
    }
    if(value_path == "announce-received")
    {
        announce_received.yfilter = yfilter;
    }
    if(value_path == "announce-sent")
    {
        announce_sent.yfilter = yfilter;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received.yfilter = yfilter;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received.yfilter = yfilter;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received.yfilter = yfilter;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "management-dropped")
    {
        management_dropped.yfilter = yfilter;
    }
    if(value_path == "management-received")
    {
        management_received.yfilter = yfilter;
    }
    if(value_path == "management-sent")
    {
        management_sent.yfilter = yfilter;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received.yfilter = yfilter;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped.yfilter = yfilter;
    }
    if(value_path == "signaling-received")
    {
        signaling_received.yfilter = yfilter;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent.yfilter = yfilter;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped.yfilter = yfilter;
    }
    if(value_path == "sync-received")
    {
        sync_received.yfilter = yfilter;
    }
    if(value_path == "sync-sent")
    {
        sync_sent.yfilter = yfilter;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::PacketCounters::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dropped" || name == "announce-received" || name == "announce-sent" || name == "delay-request-dropped" || name == "delay-request-received" || name == "delay-request-sent" || name == "delay-response-dropped" || name == "delay-response-received" || name == "delay-response-sent" || name == "follow-up-dropped" || name == "follow-up-received" || name == "follow-up-sent" || name == "management-dropped" || name == "management-received" || name == "management-sent" || name == "other-packets-dropped" || name == "other-packets-received" || name == "other-packets-sent" || name == "peer-delay-request-dropped" || name == "peer-delay-request-received" || name == "peer-delay-request-sent" || name == "peer-delay-response-dropped" || name == "peer-delay-response-follow-up-dropped" || name == "peer-delay-response-follow-up-received" || name == "peer-delay-response-follow-up-sent" || name == "peer-delay-response-received" || name == "peer-delay-response-sent" || name == "signaling-dropped" || name == "signaling-received" || name == "signaling-sent" || name == "sync-dropped" || name == "sync-received" || name == "sync-sent" || name == "total-packets-dropped" || name == "total-packets-received" || name == "total-packets-sent")
        return true;
    return false;
}

Ptp::Nodes::Node::PacketCounters::DropReasons::DropReasons()
    :
    g8275_1_incompatible{YType::uint32, "g8275-1-incompatible"},
    g8275_2_incompatible{YType::uint32, "g8275-2-incompatible"},
    invalid_packet{YType::uint32, "invalid-packet"},
    invalid_tl_vs{YType::uint32, "invalid-tl-vs"},
    looped_higher_port{YType::uint32, "looped-higher-port"},
    looped_lower_port{YType::uint32, "looped-lower-port"},
    looped_same_port{YType::uint32, "looped-same-port"},
    min_clock_class{YType::uint32, "min-clock-class"},
    no_offload_session{YType::uint32, "no-offload-session"},
    no_timestamp{YType::uint32, "no-timestamp"},
    not_for_us{YType::uint32, "not-for-us"},
    not_granted{YType::uint32, "not-granted"},
    not_listening{YType::uint32, "not-listening"},
    not_master{YType::uint32, "not-master"},
    not_ready{YType::uint32, "not-ready"},
    not_slave{YType::uint32, "not-slave"},
    not_supported{YType::uint32, "not-supported"},
    too_short{YType::uint32, "too-short"},
    too_slow{YType::uint32, "too-slow"},
    unknown_master{YType::uint32, "unknown-master"},
    wrong_domain{YType::uint32, "wrong-domain"},
    wrong_master{YType::uint32, "wrong-master"},
    wrong_sequence_id{YType::uint32, "wrong-sequence-id"},
    zero_timestamp{YType::uint32, "zero-timestamp"}
{

    yang_name = "drop-reasons"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::PacketCounters::DropReasons::~DropReasons()
{
}

bool Ptp::Nodes::Node::PacketCounters::DropReasons::has_data() const
{
    return g8275_1_incompatible.is_set
	|| g8275_2_incompatible.is_set
	|| invalid_packet.is_set
	|| invalid_tl_vs.is_set
	|| looped_higher_port.is_set
	|| looped_lower_port.is_set
	|| looped_same_port.is_set
	|| min_clock_class.is_set
	|| no_offload_session.is_set
	|| no_timestamp.is_set
	|| not_for_us.is_set
	|| not_granted.is_set
	|| not_listening.is_set
	|| not_master.is_set
	|| not_ready.is_set
	|| not_slave.is_set
	|| not_supported.is_set
	|| too_short.is_set
	|| too_slow.is_set
	|| unknown_master.is_set
	|| wrong_domain.is_set
	|| wrong_master.is_set
	|| wrong_sequence_id.is_set
	|| zero_timestamp.is_set;
}

bool Ptp::Nodes::Node::PacketCounters::DropReasons::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(g8275_1_incompatible.yfilter)
	|| ydk::is_set(g8275_2_incompatible.yfilter)
	|| ydk::is_set(invalid_packet.yfilter)
	|| ydk::is_set(invalid_tl_vs.yfilter)
	|| ydk::is_set(looped_higher_port.yfilter)
	|| ydk::is_set(looped_lower_port.yfilter)
	|| ydk::is_set(looped_same_port.yfilter)
	|| ydk::is_set(min_clock_class.yfilter)
	|| ydk::is_set(no_offload_session.yfilter)
	|| ydk::is_set(no_timestamp.yfilter)
	|| ydk::is_set(not_for_us.yfilter)
	|| ydk::is_set(not_granted.yfilter)
	|| ydk::is_set(not_listening.yfilter)
	|| ydk::is_set(not_master.yfilter)
	|| ydk::is_set(not_ready.yfilter)
	|| ydk::is_set(not_slave.yfilter)
	|| ydk::is_set(not_supported.yfilter)
	|| ydk::is_set(too_short.yfilter)
	|| ydk::is_set(too_slow.yfilter)
	|| ydk::is_set(unknown_master.yfilter)
	|| ydk::is_set(wrong_domain.yfilter)
	|| ydk::is_set(wrong_master.yfilter)
	|| ydk::is_set(wrong_sequence_id.yfilter)
	|| ydk::is_set(zero_timestamp.yfilter);
}

std::string Ptp::Nodes::Node::PacketCounters::DropReasons::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-reasons";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::PacketCounters::DropReasons::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g8275_1_incompatible.is_set || is_set(g8275_1_incompatible.yfilter)) leaf_name_data.push_back(g8275_1_incompatible.get_name_leafdata());
    if (g8275_2_incompatible.is_set || is_set(g8275_2_incompatible.yfilter)) leaf_name_data.push_back(g8275_2_incompatible.get_name_leafdata());
    if (invalid_packet.is_set || is_set(invalid_packet.yfilter)) leaf_name_data.push_back(invalid_packet.get_name_leafdata());
    if (invalid_tl_vs.is_set || is_set(invalid_tl_vs.yfilter)) leaf_name_data.push_back(invalid_tl_vs.get_name_leafdata());
    if (looped_higher_port.is_set || is_set(looped_higher_port.yfilter)) leaf_name_data.push_back(looped_higher_port.get_name_leafdata());
    if (looped_lower_port.is_set || is_set(looped_lower_port.yfilter)) leaf_name_data.push_back(looped_lower_port.get_name_leafdata());
    if (looped_same_port.is_set || is_set(looped_same_port.yfilter)) leaf_name_data.push_back(looped_same_port.get_name_leafdata());
    if (min_clock_class.is_set || is_set(min_clock_class.yfilter)) leaf_name_data.push_back(min_clock_class.get_name_leafdata());
    if (no_offload_session.is_set || is_set(no_offload_session.yfilter)) leaf_name_data.push_back(no_offload_session.get_name_leafdata());
    if (no_timestamp.is_set || is_set(no_timestamp.yfilter)) leaf_name_data.push_back(no_timestamp.get_name_leafdata());
    if (not_for_us.is_set || is_set(not_for_us.yfilter)) leaf_name_data.push_back(not_for_us.get_name_leafdata());
    if (not_granted.is_set || is_set(not_granted.yfilter)) leaf_name_data.push_back(not_granted.get_name_leafdata());
    if (not_listening.is_set || is_set(not_listening.yfilter)) leaf_name_data.push_back(not_listening.get_name_leafdata());
    if (not_master.is_set || is_set(not_master.yfilter)) leaf_name_data.push_back(not_master.get_name_leafdata());
    if (not_ready.is_set || is_set(not_ready.yfilter)) leaf_name_data.push_back(not_ready.get_name_leafdata());
    if (not_slave.is_set || is_set(not_slave.yfilter)) leaf_name_data.push_back(not_slave.get_name_leafdata());
    if (not_supported.is_set || is_set(not_supported.yfilter)) leaf_name_data.push_back(not_supported.get_name_leafdata());
    if (too_short.is_set || is_set(too_short.yfilter)) leaf_name_data.push_back(too_short.get_name_leafdata());
    if (too_slow.is_set || is_set(too_slow.yfilter)) leaf_name_data.push_back(too_slow.get_name_leafdata());
    if (unknown_master.is_set || is_set(unknown_master.yfilter)) leaf_name_data.push_back(unknown_master.get_name_leafdata());
    if (wrong_domain.is_set || is_set(wrong_domain.yfilter)) leaf_name_data.push_back(wrong_domain.get_name_leafdata());
    if (wrong_master.is_set || is_set(wrong_master.yfilter)) leaf_name_data.push_back(wrong_master.get_name_leafdata());
    if (wrong_sequence_id.is_set || is_set(wrong_sequence_id.yfilter)) leaf_name_data.push_back(wrong_sequence_id.get_name_leafdata());
    if (zero_timestamp.is_set || is_set(zero_timestamp.yfilter)) leaf_name_data.push_back(zero_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::PacketCounters::DropReasons::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::PacketCounters::DropReasons::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::PacketCounters::DropReasons::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "g8275-1-incompatible")
    {
        g8275_1_incompatible = value;
        g8275_1_incompatible.value_namespace = name_space;
        g8275_1_incompatible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g8275-2-incompatible")
    {
        g8275_2_incompatible = value;
        g8275_2_incompatible.value_namespace = name_space;
        g8275_2_incompatible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packet")
    {
        invalid_packet = value;
        invalid_packet.value_namespace = name_space;
        invalid_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-tl-vs")
    {
        invalid_tl_vs = value;
        invalid_tl_vs.value_namespace = name_space;
        invalid_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped-higher-port")
    {
        looped_higher_port = value;
        looped_higher_port.value_namespace = name_space;
        looped_higher_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped-lower-port")
    {
        looped_lower_port = value;
        looped_lower_port.value_namespace = name_space;
        looped_lower_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped-same-port")
    {
        looped_same_port = value;
        looped_same_port.value_namespace = name_space;
        looped_same_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class = value;
        min_clock_class.value_namespace = name_space;
        min_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-offload-session")
    {
        no_offload_session = value;
        no_offload_session.value_namespace = name_space;
        no_offload_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-timestamp")
    {
        no_timestamp = value;
        no_timestamp.value_namespace = name_space;
        no_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-for-us")
    {
        not_for_us = value;
        not_for_us.value_namespace = name_space;
        not_for_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-granted")
    {
        not_granted = value;
        not_granted.value_namespace = name_space;
        not_granted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-listening")
    {
        not_listening = value;
        not_listening.value_namespace = name_space;
        not_listening.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-master")
    {
        not_master = value;
        not_master.value_namespace = name_space;
        not_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready")
    {
        not_ready = value;
        not_ready.value_namespace = name_space;
        not_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-slave")
    {
        not_slave = value;
        not_slave.value_namespace = name_space;
        not_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported")
    {
        not_supported = value;
        not_supported.value_namespace = name_space;
        not_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-short")
    {
        too_short = value;
        too_short.value_namespace = name_space;
        too_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-slow")
    {
        too_slow = value;
        too_slow.value_namespace = name_space;
        too_slow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-master")
    {
        unknown_master = value;
        unknown_master.value_namespace = name_space;
        unknown_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-domain")
    {
        wrong_domain = value;
        wrong_domain.value_namespace = name_space;
        wrong_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-master")
    {
        wrong_master = value;
        wrong_master.value_namespace = name_space;
        wrong_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-sequence-id")
    {
        wrong_sequence_id = value;
        wrong_sequence_id.value_namespace = name_space;
        wrong_sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-timestamp")
    {
        zero_timestamp = value;
        zero_timestamp.value_namespace = name_space;
        zero_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::PacketCounters::DropReasons::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "g8275-1-incompatible")
    {
        g8275_1_incompatible.yfilter = yfilter;
    }
    if(value_path == "g8275-2-incompatible")
    {
        g8275_2_incompatible.yfilter = yfilter;
    }
    if(value_path == "invalid-packet")
    {
        invalid_packet.yfilter = yfilter;
    }
    if(value_path == "invalid-tl-vs")
    {
        invalid_tl_vs.yfilter = yfilter;
    }
    if(value_path == "looped-higher-port")
    {
        looped_higher_port.yfilter = yfilter;
    }
    if(value_path == "looped-lower-port")
    {
        looped_lower_port.yfilter = yfilter;
    }
    if(value_path == "looped-same-port")
    {
        looped_same_port.yfilter = yfilter;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class.yfilter = yfilter;
    }
    if(value_path == "no-offload-session")
    {
        no_offload_session.yfilter = yfilter;
    }
    if(value_path == "no-timestamp")
    {
        no_timestamp.yfilter = yfilter;
    }
    if(value_path == "not-for-us")
    {
        not_for_us.yfilter = yfilter;
    }
    if(value_path == "not-granted")
    {
        not_granted.yfilter = yfilter;
    }
    if(value_path == "not-listening")
    {
        not_listening.yfilter = yfilter;
    }
    if(value_path == "not-master")
    {
        not_master.yfilter = yfilter;
    }
    if(value_path == "not-ready")
    {
        not_ready.yfilter = yfilter;
    }
    if(value_path == "not-slave")
    {
        not_slave.yfilter = yfilter;
    }
    if(value_path == "not-supported")
    {
        not_supported.yfilter = yfilter;
    }
    if(value_path == "too-short")
    {
        too_short.yfilter = yfilter;
    }
    if(value_path == "too-slow")
    {
        too_slow.yfilter = yfilter;
    }
    if(value_path == "unknown-master")
    {
        unknown_master.yfilter = yfilter;
    }
    if(value_path == "wrong-domain")
    {
        wrong_domain.yfilter = yfilter;
    }
    if(value_path == "wrong-master")
    {
        wrong_master.yfilter = yfilter;
    }
    if(value_path == "wrong-sequence-id")
    {
        wrong_sequence_id.yfilter = yfilter;
    }
    if(value_path == "zero-timestamp")
    {
        zero_timestamp.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::PacketCounters::DropReasons::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8275-1-incompatible" || name == "g8275-2-incompatible" || name == "invalid-packet" || name == "invalid-tl-vs" || name == "looped-higher-port" || name == "looped-lower-port" || name == "looped-same-port" || name == "min-clock-class" || name == "no-offload-session" || name == "no-timestamp" || name == "not-for-us" || name == "not-granted" || name == "not-listening" || name == "not-master" || name == "not-ready" || name == "not-slave" || name == "not-supported" || name == "too-short" || name == "too-slow" || name == "unknown-master" || name == "wrong-domain" || name == "wrong-master" || name == "wrong-sequence-id" || name == "zero-timestamp")
        return true;
    return false;
}

Ptp::Nodes::Node::Summary::Summary()
    :
    port_state_faulty_count{YType::uint32, "port-state-faulty-count"},
    port_state_init_count{YType::uint32, "port-state-init-count"},
    port_state_listening_count{YType::uint32, "port-state-listening-count"},
    port_state_master_count{YType::uint32, "port-state-master-count"},
    port_state_passive_count{YType::uint32, "port-state-passive-count"},
    port_state_pre_master_count{YType::uint32, "port-state-pre-master-count"},
    port_state_slave_count{YType::uint32, "port-state-slave-count"},
    port_state_uncalibrated_count{YType::uint32, "port-state-uncalibrated-count"},
    total_interfaces{YType::uint32, "total-interfaces"},
    total_interfaces_valid_port_num{YType::uint32, "total-interfaces-valid-port-num"}
{

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ptp::Nodes::Node::Summary::~Summary()
{
}

bool Ptp::Nodes::Node::Summary::has_data() const
{
    return port_state_faulty_count.is_set
	|| port_state_init_count.is_set
	|| port_state_listening_count.is_set
	|| port_state_master_count.is_set
	|| port_state_passive_count.is_set
	|| port_state_pre_master_count.is_set
	|| port_state_slave_count.is_set
	|| port_state_uncalibrated_count.is_set
	|| total_interfaces.is_set
	|| total_interfaces_valid_port_num.is_set;
}

bool Ptp::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state_faulty_count.yfilter)
	|| ydk::is_set(port_state_init_count.yfilter)
	|| ydk::is_set(port_state_listening_count.yfilter)
	|| ydk::is_set(port_state_master_count.yfilter)
	|| ydk::is_set(port_state_passive_count.yfilter)
	|| ydk::is_set(port_state_pre_master_count.yfilter)
	|| ydk::is_set(port_state_slave_count.yfilter)
	|| ydk::is_set(port_state_uncalibrated_count.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(total_interfaces_valid_port_num.yfilter);
}

std::string Ptp::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state_faulty_count.is_set || is_set(port_state_faulty_count.yfilter)) leaf_name_data.push_back(port_state_faulty_count.get_name_leafdata());
    if (port_state_init_count.is_set || is_set(port_state_init_count.yfilter)) leaf_name_data.push_back(port_state_init_count.get_name_leafdata());
    if (port_state_listening_count.is_set || is_set(port_state_listening_count.yfilter)) leaf_name_data.push_back(port_state_listening_count.get_name_leafdata());
    if (port_state_master_count.is_set || is_set(port_state_master_count.yfilter)) leaf_name_data.push_back(port_state_master_count.get_name_leafdata());
    if (port_state_passive_count.is_set || is_set(port_state_passive_count.yfilter)) leaf_name_data.push_back(port_state_passive_count.get_name_leafdata());
    if (port_state_pre_master_count.is_set || is_set(port_state_pre_master_count.yfilter)) leaf_name_data.push_back(port_state_pre_master_count.get_name_leafdata());
    if (port_state_slave_count.is_set || is_set(port_state_slave_count.yfilter)) leaf_name_data.push_back(port_state_slave_count.get_name_leafdata());
    if (port_state_uncalibrated_count.is_set || is_set(port_state_uncalibrated_count.yfilter)) leaf_name_data.push_back(port_state_uncalibrated_count.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (total_interfaces_valid_port_num.is_set || is_set(total_interfaces_valid_port_num.yfilter)) leaf_name_data.push_back(total_interfaces_valid_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state-faulty-count")
    {
        port_state_faulty_count = value;
        port_state_faulty_count.value_namespace = name_space;
        port_state_faulty_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-init-count")
    {
        port_state_init_count = value;
        port_state_init_count.value_namespace = name_space;
        port_state_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-listening-count")
    {
        port_state_listening_count = value;
        port_state_listening_count.value_namespace = name_space;
        port_state_listening_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-master-count")
    {
        port_state_master_count = value;
        port_state_master_count.value_namespace = name_space;
        port_state_master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-passive-count")
    {
        port_state_passive_count = value;
        port_state_passive_count.value_namespace = name_space;
        port_state_passive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-pre-master-count")
    {
        port_state_pre_master_count = value;
        port_state_pre_master_count.value_namespace = name_space;
        port_state_pre_master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-slave-count")
    {
        port_state_slave_count = value;
        port_state_slave_count.value_namespace = name_space;
        port_state_slave_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-uncalibrated-count")
    {
        port_state_uncalibrated_count = value;
        port_state_uncalibrated_count.value_namespace = name_space;
        port_state_uncalibrated_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-valid-port-num")
    {
        total_interfaces_valid_port_num = value;
        total_interfaces_valid_port_num.value_namespace = name_space;
        total_interfaces_valid_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state-faulty-count")
    {
        port_state_faulty_count.yfilter = yfilter;
    }
    if(value_path == "port-state-init-count")
    {
        port_state_init_count.yfilter = yfilter;
    }
    if(value_path == "port-state-listening-count")
    {
        port_state_listening_count.yfilter = yfilter;
    }
    if(value_path == "port-state-master-count")
    {
        port_state_master_count.yfilter = yfilter;
    }
    if(value_path == "port-state-passive-count")
    {
        port_state_passive_count.yfilter = yfilter;
    }
    if(value_path == "port-state-pre-master-count")
    {
        port_state_pre_master_count.yfilter = yfilter;
    }
    if(value_path == "port-state-slave-count")
    {
        port_state_slave_count.yfilter = yfilter;
    }
    if(value_path == "port-state-uncalibrated-count")
    {
        port_state_uncalibrated_count.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-valid-port-num")
    {
        total_interfaces_valid_port_num.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state-faulty-count" || name == "port-state-init-count" || name == "port-state-listening-count" || name == "port-state-master-count" || name == "port-state-passive-count" || name == "port-state-pre-master-count" || name == "port-state-slave-count" || name == "port-state-uncalibrated-count" || name == "total-interfaces" || name == "total-interfaces-valid-port-num")
        return true;
    return false;
}

Ptp::Platform::Platform()
    :
    servo(std::make_shared<Ptp::Platform::Servo>())
{
    servo->parent = this;

    yang_name = "platform"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::~Platform()
{
}

bool Ptp::Platform::has_data() const
{
    return (servo !=  nullptr && servo->has_data());
}

bool Ptp::Platform::has_operation() const
{
    return is_set(yfilter)
	|| (servo !=  nullptr && servo->has_operation());
}

std::string Ptp::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-pd-oper:platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "servo")
    {
        if(servo == nullptr)
        {
            servo = std::make_shared<Ptp::Platform::Servo>();
        }
        return servo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(servo != nullptr)
    {
        children["servo"] = servo;
    }

    return children;
}

void Ptp::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servo")
        return true;
    return false;
}

Ptp::Platform::Servo::Servo()
    :
    device_status{YType::str, "device-status"},
    flagof_last_set_time{YType::boolean, "flagof-last-set-time"},
    last_adjust_freq{YType::int32, "last-adjust-freq"},
    last_step_time{YType::int32, "last-step-time"},
    lock_status{YType::uint16, "lock-status"},
    log_level{YType::uint16, "log-level"},
    mean_path_delay{YType::int64, "mean-path-delay"},
    num_adjust_freq{YType::uint32, "num-adjust-freq"},
    num_adjust_freq_time{YType::uint32, "num-adjust-freq-time"},
    num_delay_timestamp{YType::uint32, "num-delay-timestamp"},
    num_discard_delay_timestamp{YType::uint32, "num-discard-delay-timestamp"},
    num_discard_sync_timestamp{YType::uint32, "num-discard-sync-timestamp"},
    num_set_time{YType::uint32, "num-set-time"},
    num_step_time{YType::uint32, "num-step-time"},
    num_sync_timestamp{YType::uint32, "num-sync-timestamp"},
    offset_from_master{YType::int64, "offset-from-master"},
    phase_accuracy_last{YType::int64, "phase-accuracy-last"},
    running{YType::boolean, "running"}
    	,
    last_received_t1(std::make_shared<Ptp::Platform::Servo::LastReceivedT1>())
	,last_received_t2(std::make_shared<Ptp::Platform::Servo::LastReceivedT2>())
	,last_received_t3(std::make_shared<Ptp::Platform::Servo::LastReceivedT3>())
	,last_received_t4(std::make_shared<Ptp::Platform::Servo::LastReceivedT4>())
	,last_set_time(std::make_shared<Ptp::Platform::Servo::LastSetTime>())
	,pre_received_t1(std::make_shared<Ptp::Platform::Servo::PreReceivedT1>())
	,pre_received_t2(std::make_shared<Ptp::Platform::Servo::PreReceivedT2>())
	,pre_received_t3(std::make_shared<Ptp::Platform::Servo::PreReceivedT3>())
	,pre_received_t4(std::make_shared<Ptp::Platform::Servo::PreReceivedT4>())
{
    last_received_t1->parent = this;
    last_received_t2->parent = this;
    last_received_t3->parent = this;
    last_received_t4->parent = this;
    last_set_time->parent = this;
    pre_received_t1->parent = this;
    pre_received_t2->parent = this;
    pre_received_t3->parent = this;
    pre_received_t4->parent = this;

    yang_name = "servo"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::~Servo()
{
}

bool Ptp::Platform::Servo::has_data() const
{
    return device_status.is_set
	|| flagof_last_set_time.is_set
	|| last_adjust_freq.is_set
	|| last_step_time.is_set
	|| lock_status.is_set
	|| log_level.is_set
	|| mean_path_delay.is_set
	|| num_adjust_freq.is_set
	|| num_adjust_freq_time.is_set
	|| num_delay_timestamp.is_set
	|| num_discard_delay_timestamp.is_set
	|| num_discard_sync_timestamp.is_set
	|| num_set_time.is_set
	|| num_step_time.is_set
	|| num_sync_timestamp.is_set
	|| offset_from_master.is_set
	|| phase_accuracy_last.is_set
	|| running.is_set
	|| (last_received_t1 !=  nullptr && last_received_t1->has_data())
	|| (last_received_t2 !=  nullptr && last_received_t2->has_data())
	|| (last_received_t3 !=  nullptr && last_received_t3->has_data())
	|| (last_received_t4 !=  nullptr && last_received_t4->has_data())
	|| (last_set_time !=  nullptr && last_set_time->has_data())
	|| (pre_received_t1 !=  nullptr && pre_received_t1->has_data())
	|| (pre_received_t2 !=  nullptr && pre_received_t2->has_data())
	|| (pre_received_t3 !=  nullptr && pre_received_t3->has_data())
	|| (pre_received_t4 !=  nullptr && pre_received_t4->has_data());
}

bool Ptp::Platform::Servo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_status.yfilter)
	|| ydk::is_set(flagof_last_set_time.yfilter)
	|| ydk::is_set(last_adjust_freq.yfilter)
	|| ydk::is_set(last_step_time.yfilter)
	|| ydk::is_set(lock_status.yfilter)
	|| ydk::is_set(log_level.yfilter)
	|| ydk::is_set(mean_path_delay.yfilter)
	|| ydk::is_set(num_adjust_freq.yfilter)
	|| ydk::is_set(num_adjust_freq_time.yfilter)
	|| ydk::is_set(num_delay_timestamp.yfilter)
	|| ydk::is_set(num_discard_delay_timestamp.yfilter)
	|| ydk::is_set(num_discard_sync_timestamp.yfilter)
	|| ydk::is_set(num_set_time.yfilter)
	|| ydk::is_set(num_step_time.yfilter)
	|| ydk::is_set(num_sync_timestamp.yfilter)
	|| ydk::is_set(offset_from_master.yfilter)
	|| ydk::is_set(phase_accuracy_last.yfilter)
	|| ydk::is_set(running.yfilter)
	|| (last_received_t1 !=  nullptr && last_received_t1->has_operation())
	|| (last_received_t2 !=  nullptr && last_received_t2->has_operation())
	|| (last_received_t3 !=  nullptr && last_received_t3->has_operation())
	|| (last_received_t4 !=  nullptr && last_received_t4->has_operation())
	|| (last_set_time !=  nullptr && last_set_time->has_operation())
	|| (pre_received_t1 !=  nullptr && pre_received_t1->has_operation())
	|| (pre_received_t2 !=  nullptr && pre_received_t2->has_operation())
	|| (pre_received_t3 !=  nullptr && pre_received_t3->has_operation())
	|| (pre_received_t4 !=  nullptr && pre_received_t4->has_operation());
}

std::string Ptp::Platform::Servo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_status.is_set || is_set(device_status.yfilter)) leaf_name_data.push_back(device_status.get_name_leafdata());
    if (flagof_last_set_time.is_set || is_set(flagof_last_set_time.yfilter)) leaf_name_data.push_back(flagof_last_set_time.get_name_leafdata());
    if (last_adjust_freq.is_set || is_set(last_adjust_freq.yfilter)) leaf_name_data.push_back(last_adjust_freq.get_name_leafdata());
    if (last_step_time.is_set || is_set(last_step_time.yfilter)) leaf_name_data.push_back(last_step_time.get_name_leafdata());
    if (lock_status.is_set || is_set(lock_status.yfilter)) leaf_name_data.push_back(lock_status.get_name_leafdata());
    if (log_level.is_set || is_set(log_level.yfilter)) leaf_name_data.push_back(log_level.get_name_leafdata());
    if (mean_path_delay.is_set || is_set(mean_path_delay.yfilter)) leaf_name_data.push_back(mean_path_delay.get_name_leafdata());
    if (num_adjust_freq.is_set || is_set(num_adjust_freq.yfilter)) leaf_name_data.push_back(num_adjust_freq.get_name_leafdata());
    if (num_adjust_freq_time.is_set || is_set(num_adjust_freq_time.yfilter)) leaf_name_data.push_back(num_adjust_freq_time.get_name_leafdata());
    if (num_delay_timestamp.is_set || is_set(num_delay_timestamp.yfilter)) leaf_name_data.push_back(num_delay_timestamp.get_name_leafdata());
    if (num_discard_delay_timestamp.is_set || is_set(num_discard_delay_timestamp.yfilter)) leaf_name_data.push_back(num_discard_delay_timestamp.get_name_leafdata());
    if (num_discard_sync_timestamp.is_set || is_set(num_discard_sync_timestamp.yfilter)) leaf_name_data.push_back(num_discard_sync_timestamp.get_name_leafdata());
    if (num_set_time.is_set || is_set(num_set_time.yfilter)) leaf_name_data.push_back(num_set_time.get_name_leafdata());
    if (num_step_time.is_set || is_set(num_step_time.yfilter)) leaf_name_data.push_back(num_step_time.get_name_leafdata());
    if (num_sync_timestamp.is_set || is_set(num_sync_timestamp.yfilter)) leaf_name_data.push_back(num_sync_timestamp.get_name_leafdata());
    if (offset_from_master.is_set || is_set(offset_from_master.yfilter)) leaf_name_data.push_back(offset_from_master.get_name_leafdata());
    if (phase_accuracy_last.is_set || is_set(phase_accuracy_last.yfilter)) leaf_name_data.push_back(phase_accuracy_last.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-received-t1")
    {
        if(last_received_t1 == nullptr)
        {
            last_received_t1 = std::make_shared<Ptp::Platform::Servo::LastReceivedT1>();
        }
        return last_received_t1;
    }

    if(child_yang_name == "last-received-t2")
    {
        if(last_received_t2 == nullptr)
        {
            last_received_t2 = std::make_shared<Ptp::Platform::Servo::LastReceivedT2>();
        }
        return last_received_t2;
    }

    if(child_yang_name == "last-received-t3")
    {
        if(last_received_t3 == nullptr)
        {
            last_received_t3 = std::make_shared<Ptp::Platform::Servo::LastReceivedT3>();
        }
        return last_received_t3;
    }

    if(child_yang_name == "last-received-t4")
    {
        if(last_received_t4 == nullptr)
        {
            last_received_t4 = std::make_shared<Ptp::Platform::Servo::LastReceivedT4>();
        }
        return last_received_t4;
    }

    if(child_yang_name == "last-set-time")
    {
        if(last_set_time == nullptr)
        {
            last_set_time = std::make_shared<Ptp::Platform::Servo::LastSetTime>();
        }
        return last_set_time;
    }

    if(child_yang_name == "pre-received-t1")
    {
        if(pre_received_t1 == nullptr)
        {
            pre_received_t1 = std::make_shared<Ptp::Platform::Servo::PreReceivedT1>();
        }
        return pre_received_t1;
    }

    if(child_yang_name == "pre-received-t2")
    {
        if(pre_received_t2 == nullptr)
        {
            pre_received_t2 = std::make_shared<Ptp::Platform::Servo::PreReceivedT2>();
        }
        return pre_received_t2;
    }

    if(child_yang_name == "pre-received-t3")
    {
        if(pre_received_t3 == nullptr)
        {
            pre_received_t3 = std::make_shared<Ptp::Platform::Servo::PreReceivedT3>();
        }
        return pre_received_t3;
    }

    if(child_yang_name == "pre-received-t4")
    {
        if(pre_received_t4 == nullptr)
        {
            pre_received_t4 = std::make_shared<Ptp::Platform::Servo::PreReceivedT4>();
        }
        return pre_received_t4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_received_t1 != nullptr)
    {
        children["last-received-t1"] = last_received_t1;
    }

    if(last_received_t2 != nullptr)
    {
        children["last-received-t2"] = last_received_t2;
    }

    if(last_received_t3 != nullptr)
    {
        children["last-received-t3"] = last_received_t3;
    }

    if(last_received_t4 != nullptr)
    {
        children["last-received-t4"] = last_received_t4;
    }

    if(last_set_time != nullptr)
    {
        children["last-set-time"] = last_set_time;
    }

    if(pre_received_t1 != nullptr)
    {
        children["pre-received-t1"] = pre_received_t1;
    }

    if(pre_received_t2 != nullptr)
    {
        children["pre-received-t2"] = pre_received_t2;
    }

    if(pre_received_t3 != nullptr)
    {
        children["pre-received-t3"] = pre_received_t3;
    }

    if(pre_received_t4 != nullptr)
    {
        children["pre-received-t4"] = pre_received_t4;
    }

    return children;
}

void Ptp::Platform::Servo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-status")
    {
        device_status = value;
        device_status.value_namespace = name_space;
        device_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flagof-last-set-time")
    {
        flagof_last_set_time = value;
        flagof_last_set_time.value_namespace = name_space;
        flagof_last_set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-adjust-freq")
    {
        last_adjust_freq = value;
        last_adjust_freq.value_namespace = name_space;
        last_adjust_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-step-time")
    {
        last_step_time = value;
        last_step_time.value_namespace = name_space;
        last_step_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-status")
    {
        lock_status = value;
        lock_status.value_namespace = name_space;
        lock_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-level")
    {
        log_level = value;
        log_level.value_namespace = name_space;
        log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay = value;
        mean_path_delay.value_namespace = name_space;
        mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-adjust-freq")
    {
        num_adjust_freq = value;
        num_adjust_freq.value_namespace = name_space;
        num_adjust_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-adjust-freq-time")
    {
        num_adjust_freq_time = value;
        num_adjust_freq_time.value_namespace = name_space;
        num_adjust_freq_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-delay-timestamp")
    {
        num_delay_timestamp = value;
        num_delay_timestamp.value_namespace = name_space;
        num_delay_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discard-delay-timestamp")
    {
        num_discard_delay_timestamp = value;
        num_discard_delay_timestamp.value_namespace = name_space;
        num_discard_delay_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discard-sync-timestamp")
    {
        num_discard_sync_timestamp = value;
        num_discard_sync_timestamp.value_namespace = name_space;
        num_discard_sync_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-set-time")
    {
        num_set_time = value;
        num_set_time.value_namespace = name_space;
        num_set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-step-time")
    {
        num_step_time = value;
        num_step_time.value_namespace = name_space;
        num_step_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sync-timestamp")
    {
        num_sync_timestamp = value;
        num_sync_timestamp.value_namespace = name_space;
        num_sync_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master = value;
        offset_from_master.value_namespace = name_space;
        offset_from_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase-accuracy-last")
    {
        phase_accuracy_last = value;
        phase_accuracy_last.value_namespace = name_space;
        phase_accuracy_last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-status")
    {
        device_status.yfilter = yfilter;
    }
    if(value_path == "flagof-last-set-time")
    {
        flagof_last_set_time.yfilter = yfilter;
    }
    if(value_path == "last-adjust-freq")
    {
        last_adjust_freq.yfilter = yfilter;
    }
    if(value_path == "last-step-time")
    {
        last_step_time.yfilter = yfilter;
    }
    if(value_path == "lock-status")
    {
        lock_status.yfilter = yfilter;
    }
    if(value_path == "log-level")
    {
        log_level.yfilter = yfilter;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay.yfilter = yfilter;
    }
    if(value_path == "num-adjust-freq")
    {
        num_adjust_freq.yfilter = yfilter;
    }
    if(value_path == "num-adjust-freq-time")
    {
        num_adjust_freq_time.yfilter = yfilter;
    }
    if(value_path == "num-delay-timestamp")
    {
        num_delay_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-discard-delay-timestamp")
    {
        num_discard_delay_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-discard-sync-timestamp")
    {
        num_discard_sync_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-set-time")
    {
        num_set_time.yfilter = yfilter;
    }
    if(value_path == "num-step-time")
    {
        num_step_time.yfilter = yfilter;
    }
    if(value_path == "num-sync-timestamp")
    {
        num_sync_timestamp.yfilter = yfilter;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master.yfilter = yfilter;
    }
    if(value_path == "phase-accuracy-last")
    {
        phase_accuracy_last.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-received-t1" || name == "last-received-t2" || name == "last-received-t3" || name == "last-received-t4" || name == "last-set-time" || name == "pre-received-t1" || name == "pre-received-t2" || name == "pre-received-t3" || name == "pre-received-t4" || name == "device-status" || name == "flagof-last-set-time" || name == "last-adjust-freq" || name == "last-step-time" || name == "lock-status" || name == "log-level" || name == "mean-path-delay" || name == "num-adjust-freq" || name == "num-adjust-freq-time" || name == "num-delay-timestamp" || name == "num-discard-delay-timestamp" || name == "num-discard-sync-timestamp" || name == "num-set-time" || name == "num-step-time" || name == "num-sync-timestamp" || name == "offset-from-master" || name == "phase-accuracy-last" || name == "running")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT1::LastReceivedT1()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "last-received-t1"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::LastReceivedT1::~LastReceivedT1()
{
}

bool Ptp::Platform::Servo::LastReceivedT1::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::LastReceivedT1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::LastReceivedT1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::LastReceivedT1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT2::LastReceivedT2()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "last-received-t2"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::LastReceivedT2::~LastReceivedT2()
{
}

bool Ptp::Platform::Servo::LastReceivedT2::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::LastReceivedT2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::LastReceivedT2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::LastReceivedT2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT3::LastReceivedT3()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "last-received-t3"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::LastReceivedT3::~LastReceivedT3()
{
}

bool Ptp::Platform::Servo::LastReceivedT3::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::LastReceivedT3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::LastReceivedT3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::LastReceivedT3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT4::LastReceivedT4()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "last-received-t4"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::LastReceivedT4::~LastReceivedT4()
{
}

bool Ptp::Platform::Servo::LastReceivedT4::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::LastReceivedT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::LastReceivedT4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::LastReceivedT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastSetTime::LastSetTime()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "last-set-time"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::LastSetTime::~LastSetTime()
{
}

bool Ptp::Platform::Servo::LastSetTime::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::LastSetTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::LastSetTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastSetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-set-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastSetTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::LastSetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::LastSetTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::LastSetTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastSetTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastSetTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT1::PreReceivedT1()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "pre-received-t1"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::PreReceivedT1::~PreReceivedT1()
{
}

bool Ptp::Platform::Servo::PreReceivedT1::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::PreReceivedT1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::PreReceivedT1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::PreReceivedT1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT2::PreReceivedT2()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "pre-received-t2"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::PreReceivedT2::~PreReceivedT2()
{
}

bool Ptp::Platform::Servo::PreReceivedT2::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::PreReceivedT2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::PreReceivedT2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::PreReceivedT2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT3::PreReceivedT3()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "pre-received-t3"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::PreReceivedT3::~PreReceivedT3()
{
}

bool Ptp::Platform::Servo::PreReceivedT3::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::PreReceivedT3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::PreReceivedT3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::PreReceivedT3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT4::PreReceivedT4()
    :
    nano_second{YType::uint32, "nano-second"},
    second{YType::uint32, "second"}
{

    yang_name = "pre-received-t4"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false;
}

Ptp::Platform::Servo::PreReceivedT4::~PreReceivedT4()
{
}

bool Ptp::Platform::Servo::PreReceivedT4::has_data() const
{
    return nano_second.is_set
	|| second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_second.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ptp::Platform::Servo::PreReceivedT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ptp::Platform::Servo::PreReceivedT4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ptp::Platform::Servo::PreReceivedT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-second" || name == "second")
        return true;
    return false;
}

const Enum::YLeaf PtpBagEncap::unknown {0, "unknown"};
const Enum::YLeaf PtpBagEncap::ethernet {1, "ethernet"};
const Enum::YLeaf PtpBagEncap::ipv4 {2, "ipv4"};
const Enum::YLeaf PtpBagEncap::ipv6 {3, "ipv6"};

const Enum::YLeaf PtpBagRestrictPortState::any {0, "any"};
const Enum::YLeaf PtpBagRestrictPortState::slave_only {1, "slave-only"};
const Enum::YLeaf PtpBagRestrictPortState::master_only {2, "master-only"};

const Enum::YLeaf PtpBagDelayMechanism::e2e {0, "e2e"};
const Enum::YLeaf PtpBagDelayMechanism::p2p {1, "p2p"};

const Enum::YLeaf PtpBagProfile::default_ {0, "default"};
const Enum::YLeaf PtpBagProfile::g82651 {1, "g82651"};
const Enum::YLeaf PtpBagProfile::g82751 {2, "g82751"};
const Enum::YLeaf PtpBagProfile::g82752 {3, "g82752"};

const Enum::YLeaf PtpBagClockTimeSource::unknown {0, "unknown"};
const Enum::YLeaf PtpBagClockTimeSource::atomic {16, "atomic"};
const Enum::YLeaf PtpBagClockTimeSource::gps {32, "gps"};
const Enum::YLeaf PtpBagClockTimeSource::terrestrial_radio {48, "terrestrial-radio"};
const Enum::YLeaf PtpBagClockTimeSource::ptp {64, "ptp"};
const Enum::YLeaf PtpBagClockTimeSource::ntp {80, "ntp"};
const Enum::YLeaf PtpBagClockTimeSource::hand_set {96, "hand-set"};
const Enum::YLeaf PtpBagClockTimeSource::other {144, "other"};
const Enum::YLeaf PtpBagClockTimeSource::internal_oscillator {160, "internal-oscillator"};

const Enum::YLeaf PtpBagTelecomClock::grandmaster {0, "grandmaster"};
const Enum::YLeaf PtpBagTelecomClock::boundary {1, "boundary"};
const Enum::YLeaf PtpBagTelecomClock::slave {2, "slave"};

const Enum::YLeaf PtpBagClockTimescale::ptp {0, "ptp"};
const Enum::YLeaf PtpBagClockTimescale::arb {1, "arb"};

const Enum::YLeaf PtpBagPortState::initializing {0, "initializing"};
const Enum::YLeaf PtpBagPortState::listen {1, "listen"};
const Enum::YLeaf PtpBagPortState::passive {2, "passive"};
const Enum::YLeaf PtpBagPortState::pre_master {3, "pre-master"};
const Enum::YLeaf PtpBagPortState::master {4, "master"};
const Enum::YLeaf PtpBagPortState::uncalibrated {5, "uncalibrated"};
const Enum::YLeaf PtpBagPortState::slave {6, "slave"};
const Enum::YLeaf PtpBagPortState::faulty {7, "faulty"};

const Enum::YLeaf PtpBagClockLeapSeconds::none {0, "none"};
const Enum::YLeaf PtpBagClockLeapSeconds::leap59 {1, "leap59"};
const Enum::YLeaf PtpBagClockLeapSeconds::leap61 {2, "leap61"};

const Enum::YLeaf PtpBagCommunicationModel::unicast {0, "unicast"};
const Enum::YLeaf PtpBagCommunicationModel::mixed_mode {1, "mixed-mode"};
const Enum::YLeaf PtpBagCommunicationModel::multicast {2, "multicast"};


}
}

